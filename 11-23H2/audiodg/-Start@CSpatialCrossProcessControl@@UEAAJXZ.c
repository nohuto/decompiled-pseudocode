/*
 * XREFs of ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14009EF30
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14003BA4E (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x1400963A0 (McTemplateU0pqx_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessControl::Start(CSpatialCrossProcessControl *this)
{
  __int64 v2; // r9
  _BYTE *v3; // rcx
  int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 32LL);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (_BYTE *)*((_QWORD *)this + 1);
  if ( !v3[96] )
  {
    v4 = -2005139437;
LABEL_3:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessControl::Start", 116, (unsigned int)v4, v2);
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 72LL))(v3);
  if ( v4 < 0 )
    goto LABEL_3;
  v2 = 1LL;
  if ( (_InterlockedCompareExchange(
          (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 1296LL) + 64LL),
          0,
          0) & 0xFFFFFF81) != 1 )
  {
    v4 = -2005139387;
    goto LABEL_3;
  }
  if ( CSpatialCrossProcessBaseEndpoint::IsRunning(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
  {
    v4 = -2005139434;
    goto LABEL_3;
  }
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 128LL), v2);
  v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 1296LL);
  _InterlockedOr((volatile signed __int32 *)(v7 + 64), 2u);
  v4 = 0;
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqx_EventWriteTransfer(v7, v6, (__int64)this, 6);
LABEL_4:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}

/*
 * XREFs of ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800DFCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180081642 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     WPP_SF_S @ 0x1800DDE2C (WPP_SF_S.c)
 *     WPP_SF_dd @ 0x1800E3E38 (WPP_SF_dd.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800EB924 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 */

__int64 __fastcall CAudioSession::GetChannelsPeakValues(CAudioStream ***this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  int v6; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  CAudioStream **v9; // r14
  CAudioStream **v10; // r15
  CAudioStream *v11; // rax
  _BYTE *v12; // rbx
  float *v13; // rax
  __int64 v14; // r8
  float v15; // xmm0_4
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF
  void *Block; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0;
  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, 0LL);
  }
  if ( !a3 )
  {
    v6 = -2147467261;
LABEL_7:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetChannelsPeakValues", 1427, v6);
    return (unsigned int)v6;
  }
  if ( (_DWORD)v4 )
    memset_0(a3, 0, 4 * v4);
  v6 = ((__int64 (__fastcall *)(CAudioStream ***, unsigned int *))(*this)[44])(this, &v16);
  if ( v6 < 0 )
    goto LABEL_7;
  if ( (_DWORD)v4 != v16 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids);
    }
    v6 = -2147024809;
    goto LABEL_7;
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)(this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  v9 = this[14];
  v10 = this[15];
  if ( v9 != v10 )
  {
    v6 = 0;
    while ( 1 )
    {
      v11 = *v9;
      Block = 0LL;
      v16 = *((_DWORD *)v11 + 25);
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, v16);
      v12 = Block;
      if ( !Block )
        break;
      if ( CAudioStream::GetChannelPeakValues(*v9, v16, (float *)Block) >= 0 && v16 )
      {
        v13 = a3;
        v14 = v16;
        do
        {
          v15 = *(float *)((char *)v13 + v12 - (_BYTE *)a3);
          if ( v15 > *v13 )
            *v13 = v15;
          ++v13;
          --v14;
        }
        while ( v14 );
      }
      free(v12);
      if ( ++v9 == v10 )
        goto LABEL_28;
    }
    v6 = -2147024882;
    free(0LL);
    if ( v8 )
      LeaveCriticalSection(v8);
    goto LABEL_7;
  }
LABEL_28:
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)v6;
}

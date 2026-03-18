/*
 * XREFs of ?StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C01D437C
 * Callers:
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01D3748 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01D38A0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C01DE36C (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C03D183C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0003734 (_tlgKeywordOn.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C00543C0 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C006D754 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C006DC3C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x1C01DE1A8 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C01DE300 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 */

void __fastcall BLTQUEUE::StartVSync(__int64 a1, int a2, char a3)
{
  int v3; // eax
  struct _KTHREAD **v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  DXGGLOBAL *Global; // rax
  unsigned int v13; // r9d
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v21[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGPUSHLOCK *v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+A0h] [rbp+20h] BYREF
  int v25; // [rsp+B8h] [rbp+38h] BYREF

  v3 = *(_DWORD *)(a1 + 952);
  if ( (v3 & 8) != 0 && (v3 & 2) == 0 )
  {
    v7 = 0LL;
    if ( !a2 )
      v7 = (struct _KTHREAD **)(a1 + 408);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, v7, 0);
    if ( !a2 )
    {
      DXGPUSHLOCK::AcquireExclusive(v22);
      v23 = 2;
    }
    if ( *(_DWORD *)(a1 + 136) == 2
      && *((_BYTE *)DXGGLOBAL::GetGlobal() + 304880)
      && (Global = DXGGLOBAL::GetGlobal(), DXGGLOBAL::IsVmConnectedToHost(Global)) )
    {
      BLTQUEUE::RecreateVsyncSource(a1, 0LL, 13LL);
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
              *(_QWORD *)(a1 + 128),
              *(_QWORD *)(a1 + 368),
              *(unsigned int *)(a1 + 260));
      if ( (unsigned int)dword_1C013F8A8 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C013F8A8, 0x400000080000LL) )
        {
          v24 = *(_DWORD *)(a1 + 136);
          v25 = v10;
          v19 = 33556480LL;
          v20 = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v9,
            byte_1C00AB191,
            v11,
            (__int64)&v20,
            (__int64)&v19,
            (__int64)&v25,
            (__int64)&v24);
          v13 = dword_1C013F8A8;
        }
        if ( v13 > 5 && tlgKeywordOn((__int64)&dword_1C013F8A8, 0x80000LL) )
        {
          v24 = *(_DWORD *)(a1 + 136);
          v25 = v10;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v9,
            byte_1C00AB154,
            v11,
            v14,
            (__int64)&v25,
            (__int64)&v24);
        }
      }
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
              *(_QWORD *)(a1 + 128),
              *(_QWORD *)(a1 + 368),
              *(unsigned int *)(a1 + 260));
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqq_EtwWriteTransfer(v9, &EventBltQueueVsyncStart, v11, *(_DWORD *)(a1 + 136), v10, a3);
    if ( v10 >= 0 )
      goto LABEL_15;
    *(_DWORD *)(a1 + 136) = 2;
    LOBYTE(v8) = 1;
    BLTQUEUE::RecreateVsyncSource(a1, v8, 14LL);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
            *(_QWORD *)(a1 + 128),
            *(_QWORD *)(a1 + 368),
            *(unsigned int *)(a1 + 260));
    v18 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry2(1LL, a1, v15);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"BLTQUEUE 0x%I64x : Failed to start Vsync source after recreate Vsync source, Status = 0x%I64x",
        a1,
        v18,
        0LL,
        0LL,
        0LL);
    }
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v16, &EventBltQueueVsyncStart, v17, *(_DWORD *)(a1 + 136), v18, 14);
    }
    if ( (int)v18 >= 0 )
LABEL_15:
      *(_DWORD *)(a1 + 952) |= 2u;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  }
}

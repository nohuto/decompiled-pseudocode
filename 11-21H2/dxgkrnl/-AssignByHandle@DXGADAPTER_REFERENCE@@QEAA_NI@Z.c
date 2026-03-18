/*
 * XREFs of ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B9AE4
 * Callers:
 *     DxgkGetDeviceObjectFromAdapter @ 0x1C02C4F20 (DxgkGetDeviceObjectFromAdapter.c)
 *     DxgkGetIndirectDisplayRenderAdapterByHandle @ 0x1C02D1350 (DxgkGetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C02D48F4 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1C02EC078 (DxgkIddGetAdapterSessionDiagnostics.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EC214 (DxgkIddHandleSetDisplayConfig.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXGADAPTER_REFERENCE::AssignByHandle(struct DXGADAPTER **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  DXGADAPTER *v6; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  char v19; // di
  DXGADAPTER *v20; // [rsp+50h] [rbp-18h] BYREF

  v5 = (unsigned int)a2;
  v6 = *this;
  if ( v6 )
  {
    DXGADAPTER::ReleaseReference(v6);
    *this = 0LL;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v6, a2, a3, a4);
  if ( Current )
  {
    v19 = 1;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v20, v5, Current, this, 1);
    if ( *this )
    {
      _InterlockedAdd64((volatile signed __int64 *)*this + 3, 1uLL);
      this[1] = (struct DXGADAPTER *)-1LL;
    }
    else
    {
      WdLogSingleEntry1(3LL, v5);
      v19 = 0;
    }
    if ( v20 )
      DXGADAPTER::ReleaseReference(v20);
    return v19;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
    WdLogSingleEntry1(2LL, CurrentProcess);
    v17 = PsGetCurrentProcess(v14, v13, v15, v16);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current process 0x%I64x does not have DXGPROCESS.",
      v17,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
}

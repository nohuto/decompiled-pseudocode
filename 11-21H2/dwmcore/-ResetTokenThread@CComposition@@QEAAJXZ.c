/*
 * XREFs of ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x18003DE1C
 * Callers:
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800219D0 (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x18003D168 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::ResetTokenThread(CComposition *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ecx

  v1 = 0;
  v2 = *((_QWORD *)g_pComposition + 28);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x2D4u, 0LL);
  }
  return v1;
}

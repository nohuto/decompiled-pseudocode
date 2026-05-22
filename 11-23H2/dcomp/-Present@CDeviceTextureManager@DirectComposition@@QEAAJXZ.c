/*
 * XREFs of ?Present@CDeviceTextureManager@DirectComposition@@QEAAJXZ @ 0x180098D6C
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTokenSynchronizationId@CDevice@DirectComposition@@QEAAJPEA_K@Z @ 0x1800F1F24 (-GetTokenSynchronizationId@CDevice@DirectComposition@@QEAAJPEA_K@Z.c)
 */

__int64 __fastcall DirectComposition::CDeviceTextureManager::Present(DirectComposition::CDevice **this)
{
  int TokenSynchronizationId; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  TokenSynchronizationId = DirectComposition::CDevice::GetTokenSynchronizationId(this[2], &v6);
  if ( TokenSynchronizationId < 0 )
  {
    v3 = 156LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\devicetexturemanager.cpp",
      (const char *)(unsigned int)TokenSynchronizationId);
    return (unsigned int)TokenSynchronizationId;
  }
  (*(void (__fastcall **)(DirectComposition::CDevice *, unsigned __int64))(*(_QWORD *)this[4] + 24LL))(this[4], v6);
  TokenSynchronizationId = (*(__int64 (__fastcall **)(DirectComposition::CDevice *))(*(_QWORD *)this[3] + 72LL))(this[3]);
  if ( TokenSynchronizationId < 0 )
  {
    v3 = 160LL;
    goto LABEL_3;
  }
  return 0LL;
}

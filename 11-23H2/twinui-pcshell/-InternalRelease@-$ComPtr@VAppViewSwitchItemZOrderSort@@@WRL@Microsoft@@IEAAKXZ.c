/*
 * XREFs of ?InternalRelease@?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@IEAAKXZ @ 0x18005A008
 * Callers:
 *     ?AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800811D4 (-AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA?AV?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@XZ @ 0x180081294 (--$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA-AV-$ComPtr@VAppViewSwitchI.c)
 *     ??$MakeAndInitialize@VAppViewSwitchItemZOrderSort@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewSwitchItemZOrderSort@@@Z @ 0x1800812D8 (--$MakeAndInitialize@VAppViewSwitchItemZOrderSort@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppVi.c)
 *     ??1?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@QEAA@XZ @ 0x18079041C (--1-$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003F080 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppViewSwitchItemZOrderSort>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}

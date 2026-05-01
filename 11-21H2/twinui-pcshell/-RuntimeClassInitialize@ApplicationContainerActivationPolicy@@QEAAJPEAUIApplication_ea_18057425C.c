/*
 * XREFs of ?RuntimeClassInitialize@ApplicationContainerActivationPolicy@@QEAAJPEAUIApplicationContainerActivationComponent@@_NUtagINITIALWINDOWPLACEMENT@@@Z @ 0x18057425C
 * Callers:
 *     ??$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationContainerActivationPolicy@@$$QEAPEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Z @ 0x18056FC34 (--$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivati.c)
 * Callees:
 *     ??4?$com_ptr_t@UIApplicationContainerActivationComponent@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationContainerActivationComponent@@@Z @ 0x180571718 (--4-$com_ptr_t@UIApplicationContainerActivationComponent@@Uerr_exception_policy@wil@@@wil@@QEAAA.c)
 */

__int64 __fastcall ApplicationContainerActivationPolicy::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4)
{
  wil::com_ptr_t<IApplicationContainerActivationComponent,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 160),
    a2);
  *(_BYTE *)(a1 + 104) = a3;
  *(_OWORD *)(a1 + 108) = *(_OWORD *)a4;
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a4 + 16);
  return 0LL;
}

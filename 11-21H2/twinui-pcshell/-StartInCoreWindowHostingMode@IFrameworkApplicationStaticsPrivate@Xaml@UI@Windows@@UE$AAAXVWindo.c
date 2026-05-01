/*
 * XREFs of ?StartInCoreWindowHostingMode@IFrameworkApplicationStaticsPrivate@Xaml@UI@Windows@@UE$AAAXVWindowCreationParameters@234@PE$AAVApplicationInitializationCallback@234@@Z @ 0x180425740
 * Callers:
 *     _lambda_4e404f76813f09b8a512b4cb4bf79bdd_::operator() @ 0x1804244CC (_lambda_4e404f76813f09b8a512b4cb4bf79bdd_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::IFrameworkApplicationStaticsPrivate::StartInCoreWindowHostingMode(
        __int64 *a1,
        __int128 *a2)
{
  __int128 v2; // xmm0
  int v3; // edx
  __int64 v4; // rax
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  v2 = *a2;
  v3 = *((_DWORD *)a2 + 4);
  v4 = *a1;
  v6 = v2;
  v7 = v3;
  result = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v4 + 48))(a1, &v6);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    __debugbreak();
  }
  return result;
}

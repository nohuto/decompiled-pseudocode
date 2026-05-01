/*
 * XREFs of ?IsActiveSessionCountLimited@@YA_NXZ @ 0x180065D74
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x1800650F8 (--0XamlLauncher@@QEAA@XZ.c)
 *     ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180065890 (-ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     wil::details::functor_wrapper_void__lambda_803cb233ffa986a0ba52d53b803e1194__&_::Run @ 0x180065920 (wil--details--functor_wrapper_void__lambda_803cb233ffa986a0ba52d53b803e1194__-_--Run.c)
 *     wil::details::functor_wrapper_void__lambda_1770922227a1ec117309d54065ad098c__&_::Run @ 0x180065D10 (wil--details--functor_wrapper_void__lambda_1770922227a1ec117309d54065ad098c__-_--Run.c)
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180066360 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     _lambda_e6ba7e900466894b21600c641e756e2e_::operator() @ 0x18017692C (_lambda_e6ba7e900466894b21600c641e756e2e_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

bool IsActiveSessionCountLimited(void)
{
  ULONGLONG v0; // rax
  DWORDLONG v1; // rbx
  bool v2; // di
  _OSVERSIONINFOEXW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  memset_0(&VersionInformation, 0, sizeof(VersionInformation));
  v0 = VerSetConditionMask(0LL, 0x40u, 6u);
  VersionInformation.dwOSVersionInfoSize = 284;
  v1 = v0;
  VersionInformation.wSuiteMask = 16;
  v2 = VerifyVersionInfoW(&VersionInformation, 0x40u, v0);
  VersionInformation.wSuiteMask = 256;
  return !(v2 & !VerifyVersionInfoW(&VersionInformation, 0x40u, v1));
}

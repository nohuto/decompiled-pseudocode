/*
 * XREFs of ?CallFunction@alchemy_client_dwm@@YAJUapi_spec@api_alchemy@@PEAUHWND__@@KPEBXK@Z @ 0x18074BE48
 * Callers:
 *     _lambda_f97821db548955ab18e7e47d757b5d74_::operator() @ 0x180286234 (_lambda_f97821db548955ab18e7e47d757b5d74_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall alchemy_client_dwm::CallFunction(_DWORD *a1, HWND a2, int a3, const void *a4)
{
  HRESULT v4; // eax
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+40h] [rbp+18h] BYREF

  pvAttribute = a3;
  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      v4 = DwmSetWindowAttribute(a2, 0x22u, a4, 4u);
      if ( v4 < 0 )
      {
        v5 = 36LL;
        goto LABEL_7;
      }
    }
  }
  else
  {
    pvAttribute = 4;
    v4 = DwmSetWindowAttribute(a2, 0x21u, &pvAttribute, 4u);
    if ( v4 < 0 )
    {
      v5 = 32LL;
LABEL_7:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v5,
        (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\alchemy_client_dwm.h",
        (const char *)(unsigned int)v4);
    }
  }
  return 2147942487LL;
}

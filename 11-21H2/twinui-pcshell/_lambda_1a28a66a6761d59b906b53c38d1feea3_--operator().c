/*
 * XREFs of _lambda_1a28a66a6761d59b906b53c38d1feea3_::operator() @ 0x1805F5454
 * Callers:
 *     _lambda_1a28a66a6761d59b906b53c38d1feea3_::_lambda_invoker_cdecl_ @ 0x1805F5340 (_lambda_1a28a66a6761d59b906b53c38d1feea3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1801EACD7 (wcscmp_0.c)
 *     ?CallFunction@alchemy_client_dwm@@YAJUapi_spec@api_alchemy@@PEAUHWND__@@KPEBXK@Z @ 0x1805F55F4 (-CallFunction@alchemy_client_dwm@@YAJUapi_spec@api_alchemy@@PEAUHWND__@@KPEBXK@Z.c)
 */

__int64 __fastcall lambda_1a28a66a6761d59b906b53c38d1feea3_::operator()(__int64 a1, HWND a2, __int64 a3)
{
  DWORD WindowThreadProcessId; // esi
  __int64 v6; // r8
  DWORD dwProcessId; // [rsp+30h] [rbp-D0h] BYREF
  COLORREF pColor[3]; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v10; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR ClassName[1024]; // [rsp+50h] [rbp-B0h] BYREF

  dwProcessId = 0;
  WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
  if ( dwProcessId != GetCurrentProcessId() )
    return 1LL;
  if ( WindowThreadProcessId != GetCurrentThreadId() )
    return 1LL;
  GetClassNameW(a2, ClassName, 1024);
  if ( wcscmp_0(ClassName, L"#32768") || *(_QWORD *)a3 != SendMessageW(a2, 0x1E1u, 0LL, 0LL) )
    return 1LL;
  if ( !(unsigned int)GetPropW(a2, L"IsZachMenuDWMAttributeSet") )
  {
    pColor[0] = 0;
    if ( GetThemeColor(*(HTHEME *)(a3 + 8), 10, 0, 3821, pColor) >= 0 )
    {
      v10 = unk_180669960;
      alchemy_client_dwm::CallFunction(&v10, a2, v6, pColor);
    }
    v10 = unk_180669950;
    alchemy_client_dwm::CallFunction(&v10, a2, v6, 0LL);
    SetPropW(a2, L"IsZachMenuDWMAttributeSet", HANDLE_FLAG_INHERIT);
  }
  return 0LL;
}

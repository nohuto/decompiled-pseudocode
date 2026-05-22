/*
 * XREFs of _lambda_5a7476c6fd536a345eaeabfa896e18f7_::operator() @ 0x1801AC624
 * Callers:
 *     _lambda_84e14b76e88ec9f17bb7265a201c38f3_::_lambda_invoker_cdecl_ @ 0x1801AC4A0 (_lambda_84e14b76e88ec9f17bb7265a201c38f3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

float __fastcall lambda_5a7476c6fd536a345eaeabfa896e18f7_::operator()(__int64 a1, const WCHAR *a2, float a3)
{
  DWORD v4; // [rsp+60h] [rbp+8h] BYREF
  int v5; // [rsp+64h] [rbp+Ch]
  int v6; // [rsp+78h] [rbp+20h] BYREF

  v5 = HIDWORD(a1);
  v4 = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\EdgeGestureMetrics",
         a2,
         0x10u,
         0LL,
         &v6,
         &v4) )
  {
    return a3;
  }
  else
  {
    return (float)v6;
  }
}

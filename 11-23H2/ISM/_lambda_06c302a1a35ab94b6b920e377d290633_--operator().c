/*
 * XREFs of _lambda_06c302a1a35ab94b6b920e377d290633_::operator() @ 0x1801CA9A8
 * Callers:
 *     _lambda_84e14b76e88ec9f17bb7265a201c38f3_::_lambda_invoker_cdecl_ @ 0x1801CA890 (_lambda_84e14b76e88ec9f17bb7265a201c38f3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_06c302a1a35ab94b6b920e377d290633_::operator()(
        __int64 a1,
        const WCHAR *a2,
        unsigned __int16 a3)
{
  LSTATUS ValueW; // eax
  unsigned __int16 v5; // cx
  DWORD v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+54h] [rbp+Ch]
  unsigned __int16 v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = HIDWORD(a1);
  v7 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Input\\Settings\\EdgeGestureMetrics",
             a2,
             0x10u,
             0LL,
             &v9,
             &v7);
  v5 = v9;
  if ( ValueW )
    return a3;
  return v5;
}

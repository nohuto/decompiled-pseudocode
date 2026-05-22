/*
 * XREFs of _lambda_c6487e696fe1a4f0096835366e69d3e1_::operator() @ 0x180195084
 * Callers:
 *     ?RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x1801975C8 (-RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall lambda_c6487e696fe1a4f0096835366e69d3e1_::operator()(__int64 a1, const WCHAR *a2, float a3, float a4)
{
  int v5[4]; // [rsp+40h] [rbp-38h] BYREF
  DWORD v6; // [rsp+80h] [rbp+8h] BYREF
  int v7; // [rsp+84h] [rbp+Ch]

  v7 = HIDWORD(a1);
  v6 = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
         a2,
         0x10u,
         0LL,
         v5,
         &v6) )
  {
    return a3;
  }
  else
  {
    return (float)v5[0] * a4;
  }
}

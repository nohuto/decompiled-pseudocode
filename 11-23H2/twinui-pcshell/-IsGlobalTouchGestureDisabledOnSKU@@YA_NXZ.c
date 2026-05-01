/*
 * XREFs of ?IsGlobalTouchGestureDisabledOnSKU@@YA_NXZ @ 0x18014F438
 * Callers:
 *     ?IsTouchGestureComponentEnabled@@YA_NXZ @ 0x18014F3F0 (-IsTouchGestureComponentEnabled@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

bool IsGlobalTouchGestureDisabledOnSKU(void)
{
  char v0; // bl
  DWORD v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+58h] [rbp+10h] BYREF

  v2 = 4;
  v0 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
          L"IsGlobalTouchGestureDisabled",
          0x10u,
          0LL,
          &v3,
          &v2) )
    return v3 == 1;
  return v0;
}

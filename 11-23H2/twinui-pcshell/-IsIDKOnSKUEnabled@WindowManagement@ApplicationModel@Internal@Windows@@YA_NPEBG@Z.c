/*
 * XREFs of ?IsIDKOnSKUEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NPEBG@Z @ 0x1801BB03C
 * Callers:
 *     ?IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1800D2F80 (-IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1803AFD00 (-IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnSKUEnabled(
        LPCWSTR lpValue,
        const unsigned __int16 *a2)
{
  bool result; // al
  int v3; // [rsp+58h] [rbp+10h] BYREF
  DWORD v4; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 4;
  if ( RegGetValueW(HKEY_LOCAL_MACHINE, L"System\\CurrentControlSet\\Services\\CoreUI", lpValue, 0xFFFFu, 0LL, &v3, &v4) )
    return 0;
  result = 1;
  if ( v3 != 1 )
    return 0;
  return result;
}

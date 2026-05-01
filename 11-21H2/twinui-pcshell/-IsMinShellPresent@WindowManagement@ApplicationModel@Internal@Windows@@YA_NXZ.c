/*
 * XREFs of ?IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1803B09B4
 * Callers:
 *     ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180161EEC (-IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::ApplicationModel::WindowManagement::IsMinShellPresent(
        Windows::Internal::ApplicationModel::WindowManagement *this)
{
  bool result; // al
  int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"System\\CurrentControlSet\\Services\\MinShell",
         L"IsPresent",
         0xFFFFu,
         0LL,
         &v2,
         &v3) )
  {
    return 0;
  }
  result = 1;
  if ( v2 != 1 )
    return 0;
  return result;
}

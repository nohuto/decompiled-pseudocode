/*
 * XREFs of ndisIsMacAddressHidden @ 0x1C010D980
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000ABC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000DB10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000FE40 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ndisNsiGetPackageFamilyName @ 0x1C013ED00 (ndisNsiGetPackageFamilyName.c)
 */

char __fastcall ndisIsMacAddressHidden(struct _KPROCESS *a1)
{
  int v1; // ebx
  PACCESS_TOKEN v3; // rsi
  NTSTATUS v4; // edi
  BOOLEAN Packaged[8]; // [rsp+30h] [rbp-1D8h] BYREF
  ULONG_PTR PackageSize; // [rsp+38h] [rbp-1D0h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-1C8h] BYREF
  _DWORD v8[2]; // [rsp+50h] [rbp-1B8h] BYREF
  const wchar_t *v9; // [rsp+58h] [rbp-1B0h]
  char v10; // [rsp+60h] [rbp-1A8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+F0h] [rbp-118h] BYREF

  PackageSize = 256LL;
  String1.Buffer = (wchar_t *)&v10;
  v1 = 0;
  v9 = L"windows.immersivecontrolpanel_cw5n1h2txyewy";
  Packaged[0] = 0;
  *(_QWORD *)&String1.Length = 8519680LL;
  v8[0] = 5767254;
  if ( ndisCtaPolicyEnabled || ndisForceUWPWlanMacAddressBlock )
  {
    v3 = PsReferencePrimaryToken(a1);
    v4 = RtlQueryPackageIdentity(v3, PackageFullName, &PackageSize, 0LL, 0LL, Packaged);
    PsDereferencePrimaryToken(v3);
    if ( v4 >= 0 && Packaged[0] && (int)ndisNsiGetPackageFamilyName(PackageFullName) >= 0 )
    {
      while ( RtlCompareUnicodeString(&String1, (PCUNICODE_STRING)&v8[4 * v1], 1u) )
      {
        if ( ++v1 )
          return 1;
      }
    }
  }
  return 0;
}

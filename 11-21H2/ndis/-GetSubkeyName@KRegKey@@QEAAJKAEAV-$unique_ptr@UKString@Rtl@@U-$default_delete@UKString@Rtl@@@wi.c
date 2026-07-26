/*
 * XREFs of ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0111174
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x1C011103C (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C0120E74 (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x1C012F2E0 (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x1C012F428 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1C012F574 (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x1C012F6BC (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C010B850 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

NTSTATUS __fastcall KRegKey::GetSubkeyName(void **a1, ULONG a2, void **a3)
{
  void *v6; // rcx
  NTSTATUS result; // eax
  struct Rtl::KString *v8; // rax
  void *v9; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v11; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD KeyInformation[136]; // [rsp+50h] [rbp-B0h] BYREF

  memset(KeyInformation, 0, 0x218uLL);
  v6 = *a1;
  ResultLength = 0;
  result = ZwEnumerateKey(v6, a2, KeyBasicInformation, KeyInformation, 0x218u, &ResultLength);
  if ( result >= 0 )
  {
    if ( KeyInformation[3] > 0x200u )
    {
      return -1073741562;
    }
    else
    {
      *(_DWORD *)(&v11.MaximumLength + 1) = 0;
      *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
      v11.Length = KeyInformation[3];
      v11.MaximumLength = LOWORD(KeyInformation[3]) + 2;
      v11.Buffer = (wchar_t *)&KeyInformation[4];
      v8 = Rtl::KString::Initialize(&v11);
      v9 = *a3;
      *a3 = v8;
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0x7274534Bu);
        v8 = (struct Rtl::KString *)*a3;
      }
      return v8 == 0LL ? 0xC000009A : 0;
    }
  }
  return result;
}

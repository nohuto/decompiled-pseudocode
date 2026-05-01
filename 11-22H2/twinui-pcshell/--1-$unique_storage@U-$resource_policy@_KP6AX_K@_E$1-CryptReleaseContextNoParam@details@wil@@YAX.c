/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@_KP6AX_K@_E$1?CryptReleaseContextNoParam@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180621E78
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@_E$1?CryptReleaseContextNoParam@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180621E18 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@_KP6AX_K@_E$1-CryptReleaseContextNoParam@.c)
 *     ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18062202C (-HashAndBase32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall __1__unique_storage_U__resource_policy__KP6AX_K__E_1_CryptReleaseContextNoParam_details_wil__YAX0_ZU__integral_constant__K_0A__wistd___K_K_0A___T_details_wil___details_wil__IEAA_XZ(
        HCRYPTPROV *a1)
{
  HCRYPTPROV v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CryptReleaseContext(v1, 0);
  return result;
}

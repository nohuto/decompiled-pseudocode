/*
 * XREFs of ?CryptReleaseContextNoParam@details@wil@@YAX_K@Z @ 0x18056AFF4
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@_KP6AX_K@_E$1?CryptReleaseContextNoParam@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18056AED8 (--1-$unique_storage@U-$resource_policy@_KP6AX_K@_E$1-CryptReleaseContextNoParam@details@wil@@YAX.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::CryptReleaseContextNoParam(wil::details *this)
{
  CryptReleaseContext((HCRYPTPROV)this, 0);
}

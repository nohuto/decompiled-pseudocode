/*
 * XREFs of ?get_Value@?$ReferenceImpl@M@WRL2@Microsoft@@UEAAJPEAM@Z @ 0x18013D090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::ReferenceImpl<float>::get_Value(__int64 a1, _DWORD *a2)
{
  if ( !a2 )
    return 2147500035LL;
  *a2 = *(_DWORD *)(a1 + 72);
  return 0LL;
}

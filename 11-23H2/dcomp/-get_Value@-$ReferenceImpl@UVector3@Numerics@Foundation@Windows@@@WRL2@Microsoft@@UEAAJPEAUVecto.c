/*
 * XREFs of ?get_Value@?$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x18013D0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector3>::get_Value(
        __int64 a1,
        __int64 a2)
{
  if ( !a2 )
    return 2147500035LL;
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 72);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 80);
  return 0LL;
}

/*
 * XREFs of ?get_Value@?$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z @ 0x180168460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector2>::get_Value(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  if ( !a2 )
    return 2147500035LL;
  result = 0LL;
  *a2 = *(_QWORD *)(a1 + 72);
  return result;
}

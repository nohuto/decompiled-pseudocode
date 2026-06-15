/*
 * XREFs of sub_14001F018 @ 0x14001F018
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14001F018(__int64 a1, __int64 a2)
{
  char v2; // of

  if ( !v2 )
    JUMPOUT(0x14001EFF2LL);
  BYTE1(a2) = 65;
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable>::AddRef(
           a1,
           a2);
}

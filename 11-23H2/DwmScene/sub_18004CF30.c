/*
 * XREFs of sub_18004CF30 @ 0x18004CF30
 * Callers:
 *     sub_18004BA08 @ 0x18004BA08 (sub_18004BA08.c)
 *     sub_18004BB20 @ 0x18004BB20 (sub_18004BB20.c)
 *     sub_18004BBF0 @ 0x18004BBF0 (sub_18004BBF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004CF30(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 3) <= a2 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v2 + 88 * a2;
}

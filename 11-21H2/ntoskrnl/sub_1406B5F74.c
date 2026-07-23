/*
 * XREFs of sub_1406B5F74 @ 0x1406B5F74
 * Callers:
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 * Callees:
 *     GetUILanguageFallbackList @ 0x14023A910 (GetUILanguageFallbackList.c)
 *     sub_14023A9D0 @ 0x14023A9D0 (sub_14023A9D0.c)
 *     sub_1406B5FC4 @ 0x1406B5FC4 (sub_1406B5FC4.c)
 */

__int64 *__fastcall sub_1406B5F74(__int64 a1)
{
  __int64 i; // rcx
  __int64 *result; // rax
  __int64 *v4; // rbx

  for ( i = 0LL; ; i = (__int64)v4 )
  {
    result = GetUILanguageFallbackList(i);
    v4 = result;
    if ( !result )
      break;
    if ( (unsigned int)sub_14023A9D0((__int64)result, *(_RTL_BALANCED_NODE **)(a1 + 16)) )
      sub_1406B5FC4(a1, v4);
  }
  return result;
}

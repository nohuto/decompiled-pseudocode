/*
 * XREFs of KasanUnloadInfoCompare @ 0x140565A50
 * Callers:
 *     KasanDriverUnloadImage @ 0x14020B620 (KasanDriverUnloadImage.c)
 *     KasanDriverLoadImage @ 0x140360250 (KasanDriverLoadImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KasanUnloadInfoCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 >= v2 )
    return a1 != v2;
  else
    return 0xFFFFFFFFLL;
}

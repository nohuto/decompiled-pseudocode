/*
 * XREFs of sub_140761D88 @ 0x140761D88
 * Callers:
 *     sub_140761714 @ 0x140761714 (sub_140761714.c)
 *     sub_14098325C @ 0x14098325C (sub_14098325C.c)
 * Callees:
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1405B2DA0 @ 0x1405B2DA0 (sub_1405B2DA0.c)
 */

__int64 __fastcall sub_140761D88(__int64 a1)
{
  unsigned __int64 v1; // rax
  int v2; // r8d
  __int64 v3; // rdx

  v1 = sub_140287970(a1);
  v3 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  if ( !*(_DWORD *)(*(_QWORD *)v1 + 8LL) )
    return 0LL;
  if ( v2 != 1 )
  {
    sub_1405B2DA0((__int64)&StartContext, v3);
    return 0LL;
  }
  if ( (int)sub_14026A784((__int64)&StartContext, v3, 0LL, 0) >= 0 )
    return 0LL;
  return 3221225626LL;
}

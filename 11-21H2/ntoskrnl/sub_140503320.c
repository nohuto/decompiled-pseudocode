/*
 * XREFs of sub_140503320 @ 0x140503320
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140503320(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( !qword_140C4E390 || *(_DWORD *)(qword_140C4E390 + 228) != 8 || !qword_140C4C5D8 || !qword_140C4C488 )
    return 3221225659LL;
  v3 = sub_14042A5E0(0LL, a2);
  *a1 = sub_14042A5E0(v5, v4) + v3;
  return 0LL;
}

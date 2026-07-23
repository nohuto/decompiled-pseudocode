/*
 * XREFs of sub_14054558C @ 0x14054558C
 * Callers:
 *     sub_140824AA0 @ 0x140824AA0 (sub_140824AA0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14054558C(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v2; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+48h] [rbp+10h]

  v7 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = sub_14042A5E0(a1, 6LL);
  if ( !v2 )
    return 3221225626LL;
  *((_QWORD *)CurrentPrcb + 4320) = v2;
  v4 = (_QWORD *)(v2 + 16);
  v5 = 0LL;
  v6 = 2LL;
  do
  {
    *v4 = v5;
    v4 += 512;
    v5 = v7 + 4096;
    v7 += 4096LL;
    --v6;
  }
  while ( v6 );
  return 0LL;
}

/*
 * XREFs of sub_140523100 @ 0x140523100
 * Callers:
 *     <none>
 * Callees:
 *     sub_140522930 @ 0x140522930 (sub_140522930.c)
 *     sub_14052314C @ 0x14052314C (sub_14052314C.c)
 */

__int64 __fastcall sub_140523100(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v4; // rax

  if ( a3 < 0x80000000 )
  {
    v4 = qword_140C4A1C8;
    *(_DWORD *)(a1 + 16) = a3;
    *(_DWORD *)(a1 + 8) = a2;
    return sub_14052314C(a1, *(unsigned int *)(v4 + 240), 0LL);
  }
  else
  {
    sub_140522930(a1, 4, 0);
    return 3221225485LL;
  }
}

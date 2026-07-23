/*
 * XREFs of sub_140772AF8 @ 0x140772AF8
 * Callers:
 *     sub_140772AA0 @ 0x140772AA0 (sub_140772AA0.c)
 *     sub_1407801B8 @ 0x1407801B8 (sub_1407801B8.c)
 * Callees:
 *     sub_140772B6C @ 0x140772B6C (sub_140772B6C.c)
 */

__int64 __fastcall sub_140772AF8(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  if ( a1 )
    return sub_140772B6C(a2, a6, 0, a8, a9, *(_QWORD *)(a1 + 8));
  else
    return sub_140772B6C(a2, a6, 0, a8, a9, 0LL);
}

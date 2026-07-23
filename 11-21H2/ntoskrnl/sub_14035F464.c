/*
 * XREFs of sub_14035F464 @ 0x14035F464
 * Callers:
 *     sub_14035F5AC @ 0x14035F5AC (sub_14035F5AC.c)
 *     sub_140376B48 @ 0x140376B48 (sub_140376B48.c)
 *     sub_14037D810 @ 0x14037D810 (sub_14037D810.c)
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 *     sub_1405FD08C @ 0x1405FD08C (sub_1405FD08C.c)
 *     sub_1405FD31C @ 0x1405FD31C (sub_1405FD31C.c)
 *     sub_1409D4090 @ 0x1409D4090 (sub_1409D4090.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 */

ULONG_PTR __fastcall sub_14035F464(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF *v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rbx

  v3 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8(a1, a2 & 0x3FF);
  v4 = v3;
  if ( v3 && sub_140347810(v3 + 1) )
  {
    if ( (v4[4].Count & 0x3F) == a2 >> 10 )
      return v4->Count;
    sub_1402AD030(v4 + 1);
  }
  return 0LL;
}

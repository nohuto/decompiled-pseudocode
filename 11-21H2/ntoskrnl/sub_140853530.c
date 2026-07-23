/*
 * XREFs of sub_140853530 @ 0x140853530
 * Callers:
 *     sub_140B24AB0 @ 0x140B24AB0 (sub_140B24AB0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140853530(_QWORD *a1)
{
  _QWORD *v2; // rax

  sub_1402D66A8((ULONG_PTR)&qword_140C1FF60);
  v2 = (_QWORD *)qword_140C1FF88;
  if ( *(__int64 **)qword_140C1FF88 != qword_140C1FF80 )
    __fastfail(3u);
  *a1 = qword_140C1FF80;
  a1[1] = v2;
  *v2 = a1;
  qword_140C1FF88 = (__int64)a1;
  sub_14042A5E0(
    *((unsigned int *)&unk_140C20050 + 26 * (unsigned int)dword_140C20048),
    *((_QWORD *)&unk_140C20050 + 13 * (unsigned int)dword_140C20048 + 1));
  sub_1402935D0((ULONG_PTR)&qword_140C1FF60);
}

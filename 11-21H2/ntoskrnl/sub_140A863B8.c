/*
 * XREFs of sub_140A863B8 @ 0x140A863B8
 * Callers:
 *     sub_140A82480 @ 0x140A82480 (sub_140A82480.c)
 * Callees:
 *     sub_140250C50 @ 0x140250C50 (sub_140250C50.c)
 *     sub_140A887D4 @ 0x140A887D4 (sub_140A887D4.c)
 */

__int64 sub_140A863B8()
{
  qword_140D575A0 = 0LL;
  qword_140D577C0 = 0LL;
  stru_140D57590.Blink = &stru_140D57590;
  stru_140D57590.Flink = &stru_140D57590;
  qword_140D577B8 = (__int64)&qword_140D577B0;
  qword_140D577B0 = (__int64)&qword_140D577B0;
  sub_140250C50(
    (__int64)&unk_140D58A80,
    0LL,
    (void (__stdcall *)(PVOID, ULONG))sub_1402DB870,
    512,
    152,
    1449943368,
    16,
    dword_140C1AD3C);
  return sub_140A887D4();
}

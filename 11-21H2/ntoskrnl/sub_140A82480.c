/*
 * XREFs of sub_140A82480 @ 0x140A82480
 * Callers:
 *     sub_140A82328 @ 0x140A82328 (sub_140A82328.c)
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 * Callees:
 *     sub_1406019A0 @ 0x1406019A0 (sub_1406019A0.c)
 *     sub_14063B338 @ 0x14063B338 (sub_14063B338.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A863B8 @ 0x140A863B8 (sub_140A863B8.c)
 *     sub_140A90E38 @ 0x140A90E38 (sub_140A90E38.c)
 *     sub_140A967D0 @ 0x140A967D0 (sub_140A967D0.c)
 *     sub_140A9697C @ 0x140A9697C (sub_140A9697C.c)
 *     sub_140A98170 @ 0x140A98170 (sub_140A98170.c)
 *     sub_140A9B158 @ 0x140A9B158 (sub_140A9B158.c)
 */

__int64 __fastcall sub_140A82480(unsigned int a1, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *Pool2; // rax
  _QWORD *v9; // rax
  __int64 result; // rax

  if ( (dword_140C29FC0 & 0x20) != 0 && !a4 )
    sub_14063B338(0x10u);
  if ( (dword_140C29FC0 & 0x10) != 0 )
    sub_1406019A0();
  if ( (dword_140C29FC0 & 0x10) != 0 )
  {
    if ( (dword_140C29FC0 & 0x200) != 0 )
      byte_140D01124 = 1;
    if ( (dword_140C29FC0 & 0x400) != 0 )
      goto LABEL_11;
  }
  if ( a4 )
  {
LABEL_11:
    qword_140C1AFB0 = 0LL;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 0x18uLL, 0x64496656u);
    qword_140C1AFB8 = (__int64)Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0;
      v9 = Pool2 + 2;
      v9[1] = v9;
      *v9 = v9;
    }
  }
  if ( (dword_140C29FC0 & 0x80u) != 0 )
    sub_140A863B8();
  dword_140C1ADA8 = 1;
  sub_140A967D0(a1);
  if ( (dword_140C29FC0 & 0x10) != 0 )
    sub_140A9B158(a1);
  if ( (a1 & 8) != 0 )
    dword_140D06994 = 1;
  if ( (dword_140C29FC0 & 0x200) != 0 )
    sub_140A90E38(a1);
  if ( (qword_140D01450 & 4) != 0 )
    sub_140A9697C();
  result = (unsigned int)qword_140D01450;
  if ( (qword_140D01450 & 0x20) != 0 && !a4 )
    result = sub_140A98170(a2, a3);
  dword_140C1B2A0 = 1;
  return result;
}

/*
 * XREFs of sub_140767784 @ 0x140767784
 * Callers:
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140767784(_QWORD *a1)
{
  unsigned int v2; // ebx
  _DWORD *Pool2; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax

  v2 = 0;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 208LL, 1466986064LL);
  *a1 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 1;
    v4 = (_QWORD *)(*a1 + 128LL);
    v4[1] = v4;
    *v4 = v4;
    v5 = (_QWORD *)(*a1 + 184LL);
    v5[1] = v5;
    *v5 = v5;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}

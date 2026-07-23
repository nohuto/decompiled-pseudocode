/*
 * XREFs of sub_1403B2460 @ 0x1403B2460
 * Callers:
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 * Callees:
 *     sub_140398F30 @ 0x140398F30 (sub_140398F30.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall sub_1403B2460(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 Pool2; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx

  v3 = a2 >> 4;
  Pool2 = ExAllocatePool2(64LL, (a2 >> 7) + 48, 1651269960LL);
  v5 = 0LL;
  v6 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 32) = v3;
    *(_QWORD *)(Pool2 + 40) = (Pool2 + 51) & 0xFFFFFFFFFFFFFFFCuLL;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    v7 = ExAllocatePool2(64LL, a2, 1114399048LL);
    v6[2] = v7;
    if ( v7 )
      return v6;
    else
      sub_140398F30(v8, v6);
  }
  return (_QWORD *)v5;
}

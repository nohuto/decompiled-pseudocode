/*
 * XREFs of sub_140643498 @ 0x140643498
 * Callers:
 *     sub_1403DAA2C @ 0x1403DAA2C (sub_1403DAA2C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140646270 @ 0x140646270 (sub_140646270.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_140643498(_DWORD *Src)
{
  __int64 v2; // rsi
  unsigned int v3; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v5; // rbx

  v2 = *(_QWORD *)&KeGetPcr()[92].Unused2;
  if ( !v2 )
    return 0;
  v3 = Src[5] + 40;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v3, 1634035799LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  Pool2[4] = v3;
  Pool2[6] = 2;
  memmove(Pool2 + 10, Src, (unsigned int)Src[5]);
  sub_140646270(*(_QWORD *)(v2 + 16), v5);
  return 1;
}

/*
 * XREFs of sub_1402D83B4 @ 0x1402D83B4
 * Callers:
 *     sub_1402D8104 @ 0x1402D8104 (sub_1402D8104.c)
 *     sub_140A91A50 @ 0x140A91A50 (sub_140A91A50.c)
 *     sub_140A91C30 @ 0x140A91C30 (sub_140A91C30.c)
 *     sub_140A9F0C0 @ 0x140A9F0C0 (sub_140A9F0C0.c)
 *     sub_140AA16A4 @ 0x140AA16A4 (sub_140AA16A4.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_1402D8440 @ 0x1402D8440 (sub_1402D8440.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1402D83B4(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 Pool2; // rax
  __int64 v8; // rbx

  v3 = *((_DWORD *)a1 + 8);
  if ( v3 == 1 )
    Pool2 = (__int64)sub_140202234((__int64)&unk_140CF9340);
  else
    Pool2 = ExAllocatePool2(64LL, v3, 1413572182LL);
  if ( !Pool2 )
    return 0LL;
  v8 = Pool2 + 32;
  *(_QWORD *)(Pool2 + 32) = a2;
  if ( !a3 )
    a3 = *a1;
  *(_QWORD *)(Pool2 + 40) = a3;
  if ( *((_BYTE *)a1 + 28) )
    sub_1402D8440(a1, Pool2 + 32);
  return v8;
}

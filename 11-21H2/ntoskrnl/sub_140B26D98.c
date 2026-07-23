/*
 * XREFs of sub_140B26D98 @ 0x140B26D98
 * Callers:
 *     sub_140A5B510 @ 0x140A5B510 (sub_140A5B510.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B26E5C @ 0x140B26E5C (sub_140B26E5C.c)
 *     sub_140B26F8C @ 0x140B26F8C (sub_140B26F8C.c)
 */

__int64 sub_140B26D98()
{
  unsigned int v0; // ebx
  _DWORD *Pool2; // rax
  void *v2; // rdi
  unsigned int v3; // ecx
  _QWORD *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebx

  sub_140B26F8C();
  v0 = 32 * (dword_140C4A840 - 1) + 72;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v0, 0x506C6148u);
  v2 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v3 = dword_140C4A840;
  *Pool2 = v0;
  Pool2[7] = 1;
  Pool2[9] = v3;
  if ( v3 )
  {
    v4 = Pool2 + 14;
    v5 = qword_140C4A858 + 44;
    v6 = v3;
    do
    {
      *((_BYTE *)v4 - 15) = 3;
      *v4 = *(_QWORD *)v5 + ((unsigned __int64)*(unsigned __int8 *)(v5 + 10) << 20);
      v4 += 4;
      v7 = *(_QWORD *)v5 + ((unsigned __int64)*(unsigned __int8 *)(v5 + 11) << 20) + 0xFFFFF;
      v5 += 16LL;
      *(v4 - 3) = v7;
      --v6;
    }
    while ( v6 );
  }
  v8 = sub_140B26E5C(Pool2);
  ExFreePoolWithTag(v2, 0);
  return v8;
}

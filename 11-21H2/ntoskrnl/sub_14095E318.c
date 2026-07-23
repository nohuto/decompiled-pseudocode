/*
 * XREFs of sub_14095E318 @ 0x14095E318
 * Callers:
 *     sub_14074ED04 @ 0x14074ED04 (sub_14074ED04.c)
 * Callees:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14095E318(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rbp
  __int64 Pool2; // rax
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+48h] [rbp-10h]
  int v9; // [rsp+4Ch] [rbp-Ch]

  v1 = 0LL;
  v2 = 0LL;
  v4 = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    v2 = 64LL;
    Pool2 = ExAllocatePool2(64LL, 64LL, 1265659472LL);
    v1 = (void *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1;
      *(_DWORD *)(Pool2 + 4) = 64;
      *(_BYTE *)(Pool2 + 8) = 0;
      *(_DWORD *)(Pool2 + 12) = (v4 - **(_QWORD **)(a1 + 24)) / 0x2710uLL;
      *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(Pool2 + 16) = *(_QWORD *)a1;
      *(_QWORD *)(Pool2 + 40) = qword_140C4E928;
      *(_QWORD *)(Pool2 + 48) = qword_140CF5F60;
      *(_QWORD *)(Pool2 + 56) = qword_140C467C0;
    }
  }
  v7 = 0LL;
  v9 = 0;
  v8 = 11;
  *(_QWORD *)&v6 = v1;
  *((_QWORD *)&v6 + 1) = v2;
  sub_14074F950(0x5Eu, &v6, 32, 0LL, 0);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x4B706E50u);
}

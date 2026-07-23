/*
 * XREFs of sub_14074F8BC @ 0x14074F8BC
 * Callers:
 *     sub_14074ED04 @ 0x14074ED04 (sub_14074ED04.c)
 * Callees:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14074F8BC(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rbp
  __int64 Pool2; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-10h]
  int v8; // [rsp+4Ch] [rbp-Ch]

  v1 = 0LL;
  v2 = 0LL;
  v4 = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    v2 = 72LL;
    Pool2 = ExAllocatePool2(64LL, 72LL, 1265659472LL);
    v1 = (void *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1;
      *(_DWORD *)(Pool2 + 4) = 72;
      *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(a1 + 16);
      *(_BYTE *)(Pool2 + 8) = 0;
      *(_DWORD *)(Pool2 + 12) = (v4 - **(_QWORD **)(a1 + 104)) / 0x2710uLL;
      *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 152);
      *(_DWORD *)(Pool2 + 32) = *(_DWORD *)(a1 + 128);
      *(_QWORD *)(Pool2 + 48) = qword_140C4E928;
      *(_QWORD *)(Pool2 + 40) = a1;
      *(_QWORD *)(Pool2 + 56) = qword_140CF5F60;
      *(_QWORD *)(Pool2 + 64) = qword_140C467C0;
    }
  }
  v6[2] = 0LL;
  v8 = 0;
  v7 = 9;
  v6[0] = v1;
  v6[1] = v2;
  sub_14074F950(94, (unsigned int)v6, 32, 0, 0);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x4B706E50u);
}

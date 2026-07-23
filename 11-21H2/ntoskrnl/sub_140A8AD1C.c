/*
 * XREFs of sub_140A8AD1C @ 0x140A8AD1C
 * Callers:
 *     sub_140AA0E40 @ 0x140AA0E40 (sub_140AA0E40.c)
 *     sub_140AA0E80 @ 0x140AA0E80 (sub_140AA0E80.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140A8AD1C(__int64 a1, unsigned __int64 a2)
{
  int v4; // edi
  _QWORD *Pool2; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = 0LL;
  if ( !dword_140C1ACBC )
  {
    v4 = 0;
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 0x20uLL, 0x54456656u);
    sub_14045F6C8((__int64)&v10, 0);
    v6 = sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)&v10, a2, 1LL);
    if ( v6 )
    {
      v7 = v6[7];
      if ( v7 )
      {
        if ( Pool2 )
        {
          v8 = v7 + 16;
          Pool2[2] = a1;
          Pool2[3] = a2;
          v9 = *(_QWORD **)(v8 + 8);
          if ( *v9 != v8 )
            __fastfail(3u);
          *Pool2 = v8;
          v4 = 1;
          Pool2[1] = v9;
          *v9 = Pool2;
          *(_QWORD *)(v8 + 8) = Pool2;
        }
        else
        {
          *(_DWORD *)(v7 + 32) |= 1u;
        }
      }
    }
    sub_1402D81DC((__int64)&v10);
    if ( !v4 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x54456656u);
    }
  }
}

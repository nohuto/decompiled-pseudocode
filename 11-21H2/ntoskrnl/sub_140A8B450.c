/*
 * XREFs of sub_140A8B450 @ 0x140A8B450
 * Callers:
 *     sub_140A9F2C0 @ 0x140A9F2C0 (sub_140A9F2C0.c)
 *     sub_140A9F440 @ 0x140A9F440 (sub_140A9F440.c)
 *     sub_140A9F580 @ 0x140A9F580 (sub_140A9F580.c)
 *     sub_140A9F6A0 @ 0x140A9F6A0 (sub_140A9F6A0.c)
 *     sub_140A9F900 @ 0x140A9F900 (sub_140A9F900.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1402DB870 @ 0x1402DB870 (sub_1402DB870.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A8B564 @ 0x140A8B564 (sub_140A8B564.c)
 */

char __fastcall sub_140A8B450(unsigned __int64 a1, _SLIST_ENTRY *a2, __int64 a3)
{
  _SLIST_ENTRY *Pool2; // rax
  _SLIST_ENTRY *v7; // rbx
  int v8; // esi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  _SLIST_ENTRY **v13; // rax
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF

  v15 = 0LL;
  LODWORD(Pool2) = sub_140A8B564(a1, a2, a3);
  if ( (_DWORD)Pool2 )
  {
    Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(64LL, 0x28uLL, 0x61436656u);
    v7 = Pool2;
    if ( Pool2 )
    {
      Pool2[1].Next = a2;
      *((_QWORD *)&Pool2[1].Next + 1) = a3;
      v8 = 0;
      Pool2[2].Next = (_SLIST_ENTRY *)a1;
      sub_14045F6C8((__int64)&v15, 0);
      v9 = sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)&v15, a1, 1LL);
      if ( v9 )
      {
        v10 = v9[7];
        if ( v10 )
        {
          qword_140C1B250 += a3;
          v11 = a3 + *(_QWORD *)(v10 + 248);
          *(_QWORD *)(v10 + 248) = v11;
          if ( *(_QWORD *)(v10 + 256) < v11 )
            *(_QWORD *)(v10 + 256) = v11;
          v12 = v10 + 264;
          v13 = *(_SLIST_ENTRY ***)(v12 + 8);
          if ( *v13 != (_SLIST_ENTRY *)v12 )
            __fastfail(3u);
          v7->Next = (_SLIST_ENTRY *)v12;
          v8 = 1;
          *((_QWORD *)&v7->Next + 1) = v13;
          *v13 = v7;
          *(_QWORD *)(v12 + 8) = v7;
        }
      }
      LOBYTE(Pool2) = sub_1402D81DC((__int64)&v15);
      if ( !v8 )
        LOBYTE(Pool2) = sub_1402DB870(v7);
    }
  }
  return (char)Pool2;
}

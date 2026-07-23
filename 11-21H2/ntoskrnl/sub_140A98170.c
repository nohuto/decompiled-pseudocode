/*
 * XREFs of sub_140A98170 @ 0x140A98170
 * Callers:
 *     sub_140A82480 @ 0x140A82480 (sub_140A82480.c)
 * Callees:
 *     sub_140250C50 @ 0x140250C50 (sub_140250C50.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A99478 @ 0x140A99478 (sub_140A99478.c)
 *     sub_140A999D0 @ 0x140A999D0 (sub_140A999D0.c)
 */

void __fastcall sub_140A98170(int a1, int a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  int v11; // ecx
  _DWORD *v12; // rdx
  int v13; // ecx
  void *v14; // rcx
  void *v15; // rcx

  qword_140D57500 = (PVOID)ExAllocatePool2(64LL, 0x8180uLL, 0x6B636C44u);
  if ( qword_140D57500 )
  {
    Pool2 = ExAllocatePool2(64LL, 0x3FF0uLL, 0x6B636C44u);
    v5 = qword_140D57500;
    *((_QWORD *)qword_140D57500 + 2) = Pool2;
    if ( Pool2
      && (v6 = ExAllocatePool2(64LL, 0x3FF0uLL, 0x6B636C44u),
          v5 = qword_140D57500,
          (*((_QWORD *)qword_140D57500 + 2050) = v6) != 0LL) )
    {
      dword_140C1A938 = 0;
      v7 = 0LL;
      v8 = 1023LL;
      do
      {
        v9 = (_QWORD *)(v7 + v5[2]);
        v9[1] = v9;
        *v9 = v9;
        v10 = (_QWORD *)(v7 + v5[2050]);
        v7 += 16LL;
        v10[1] = v10;
        *v10 = v10;
        --v8;
      }
      while ( v8 );
      v11 = 4;
      v12 = qword_140D57500;
      if ( dword_140D575DC )
        v11 = dword_140D575DC;
      *((_DWORD *)qword_140D57500 + 8202) = v11;
      v13 = 1000;
      if ( dword_140D575D8 )
        v13 = dword_140D575D8;
      v12[8203] = v13;
      sub_140250C50(
        (__int64)&unk_140D58E40,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))((unsigned __int64)sub_140A99810 & -(__int64)(a2 != 0)),
        (void (__stdcall *)(PVOID, ULONG))sub_1402DB870,
        512,
        56,
        1919439958,
        a2 != 0 ? 512 : 32,
        dword_140C1AD3C);
      sub_140250C50(
        (__int64)&unk_140D58F40,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))((unsigned __int64)sub_140A99810 & -(__int64)(a2 != 0)),
        (void (__stdcall *)(PVOID, ULONG))sub_1402DB870,
        512,
        248,
        1936020054,
        a2 != 0 ? 0x2000 : 64,
        dword_140C1AD3C);
      sub_140250C50(
        (__int64)&unk_140D58EC0,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))((unsigned __int64)sub_140A99810 & -(__int64)(a2 != 0)),
        (void (__stdcall *)(PVOID, ULONG))sub_1402DB870,
        512,
        208,
        1685016150,
        a2 != 0 ? 0x4000 : 64,
        dword_140C1AD3C);
      if ( a2 )
      {
        sub_140A999D0(&unk_140D58E40, 512LL);
        sub_140A999D0(&unk_140D58EC0, 0x4000LL);
        sub_140A999D0(&unk_140D58F40, 0x2000LL);
        dword_140D57524 |= 2u;
      }
      if ( a1 )
        dword_140D57524 |= 4u;
      sub_140A99478(((unsigned int)dword_140C29FC0 >> 5) & 1);
    }
    else
    {
      v14 = (void *)v5[2];
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      v15 = (void *)*((_QWORD *)qword_140D57500 + 2050);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      ExFreePoolWithTag(qword_140D57500, 0);
      qword_140D57500 = 0LL;
    }
  }
}

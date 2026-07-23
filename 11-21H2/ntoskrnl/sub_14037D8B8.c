/*
 * XREFs of sub_14037D8B8 @ 0x14037D8B8
 * Callers:
 *     sub_14024FDF0 @ 0x14024FDF0 (sub_14024FDF0.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_140379C88 @ 0x140379C88 (sub_140379C88.c)
 *     sub_14037A5B0 @ 0x14037A5B0 (sub_14037A5B0.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     sub_14037CFB8 @ 0x14037CFB8 (sub_14037CFB8.c)
 *     sub_14037DA00 @ 0x14037DA00 (sub_14037DA00.c)
 *     sub_1405F6DBC @ 0x1405F6DBC (sub_1405F6DBC.c)
 */

__int64 __fastcall sub_14037D8B8(__int64 a1, unsigned int *a2, unsigned int a3, __int64 a4)
{
  _DWORD *v5; // rdi
  int v6; // eax
  int v7; // ebp
  __int64 *v8; // rax
  int v9; // r15d
  __int64 v10; // r14
  struct _MDL *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r12d
  struct _MDL *v14; // rbx
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF *v17; // rax
  unsigned int v18; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+20h] BYREF
  int v20; // [rsp+9Ch] [rbp+24h]

  v20 = HIDWORD(a4);
  v18 = a3;
  v19 = 0;
  v5 = 0LL;
  v6 = sub_140379C88(a1, a2, (int)&v18, (int)&v19);
  v7 = v6;
  if ( v6 != 1024 )
  {
    v8 = (__int64 *)sub_14035F5E8((__int64)&unk_140D31A00, v6 & 0x3FF);
    v9 = dword_140D32130 & 1;
    v10 = *v8;
    v11 = (struct _MDL *)sub_14037DA00(dword_140D31F90, v9);
    v13 = v18;
    v14 = v11;
    if ( !v11 )
      goto LABEL_6;
    *(_QWORD *)&v11->Size = 0LL;
    v11->Next = 0LL;
    v15 = sub_14037DA00(dword_140D31F90, v9);
    v5 = (_DWORD *)v15;
    if ( !v15
      || (*(_DWORD *)(v15 + 4) = 0,
          *(_QWORD *)(v15 + 16) = 0LL,
          *(_QWORD *)(v15 + 24) = 0LL,
          *(_DWORD *)v15 = 1,
          *(_DWORD *)(v15 + 8) = *a2,
          *(_DWORD *)(v15 + 12) = v13,
          *(_QWORD *)(v15 + 32) = v14,
          (int)sub_14037CFB8((__int64 *)v14, (__int64)&unk_140D31A00, v7, (int *)v15) < 0) )
    {
LABEL_6:
      if ( v10 )
      {
        sub_1405F6DBC(v12, a2, v13);
        v17 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8((__int64)&unk_140D31A00, *(_DWORD *)(v10 + 6016) & 0x3FF);
        sub_1402AD030(v17 + 1);
      }
      if ( v5 )
        sub_14037A5B0((__int64)&unk_140D31A00, v5, (__int64)v14);
      if ( v14 )
        sub_14037AE58((__int64)dword_140D31F90, 0, (__int64)v14, v14);
    }
  }
  return v19;
}

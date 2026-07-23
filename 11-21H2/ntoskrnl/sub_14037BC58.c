/*
 * XREFs of sub_14037BC58 @ 0x14037BC58
 * Callers:
 *     sub_14037BB94 @ 0x14037BB94 (sub_14037BB94.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_14037BD80 @ 0x14037BD80 (sub_14037BD80.c)
 *     sub_14037D810 @ 0x14037D810 (sub_14037D810.c)
 */

__int64 __fastcall sub_14037BC58(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v7; // ebx
  int v10; // edi
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  struct _EX_RUNDOWN_REF *v15; // rax
  __int64 v16; // [rsp+68h] [rbp+10h]

  v7 = a3;
  v16 = a3;
  v10 = -1;
  if ( (*(_DWORD *)(a2 + 8) & 3) != 0 || (v11 = sub_14037D810((ULONG_PTR)&qword_140D321C8), v10 = v11, v11 == -1) )
  {
    v12 = v16;
  }
  else
  {
    v12 = v11 & 0x3FF | v7 & 0xFFFFF800;
    LODWORD(v16) = v12;
  }
  if ( (v12 & 0x7FF) != 0x400 )
    goto LABEL_7;
  if ( dword_140D321F0 != -1 )
  {
    LODWORD(v16) = dword_140D321F0 & 0x3FF | v12 & 0xFFFFF800;
LABEL_7:
    v13 = sub_14037BD80(&unk_140D31A00, a1, v16, a4, a5 & 0x7FFFFFFFFFFFFFFFLL, a6, a7);
    goto LABEL_8;
  }
  v13 = -1073741285;
LABEL_8:
  if ( v10 != -1 )
  {
    v15 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8((__int64)&unk_140D31A00, v10 & 0x3FF);
    sub_1402AD030(v15 + 1);
  }
  return v13;
}

/*
 * XREFs of sub_14085C084 @ 0x14085C084
 * Callers:
 *     sub_1407ED53C @ 0x1407ED53C (sub_1407ED53C.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14075C924 @ 0x14075C924 (sub_14075C924.c)
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 */

__int64 __fastcall sub_14085C084(__int64 a1, _WORD *a2, const void *a3, int a4, unsigned int Size)
{
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  PVOID v12; // rax
  _QWORD *v13; // rcx

  v9 = sub_1402D84BC(0x30uLL);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741801;
  v11 = sub_14075C924((__int64)(v9 + 2), a2);
  if ( v11 < 0 )
  {
LABEL_9:
    sub_14075CDC4((__int64)(v10 + 2));
    sub_1402D8494((void *)v10[5]);
    sub_1402D8494(v10);
    return (unsigned int)v11;
  }
  v12 = sub_1402D84BC(Size);
  v10[5] = v12;
  if ( !v12 )
  {
    v11 = -1073741801;
    goto LABEL_9;
  }
  memmove(v12, a3, Size);
  *((_DWORD *)v10 + 9) = a4;
  *((_DWORD *)v10 + 8) = Size;
  v13 = *(_QWORD **)(a1 + 64);
  if ( *v13 != a1 + 56 )
    __fastfail(3u);
  *v10 = a1 + 56;
  v11 = 0;
  v10[1] = v13;
  *v13 = v10;
  *(_QWORD *)(a1 + 64) = v10;
  return (unsigned int)v11;
}

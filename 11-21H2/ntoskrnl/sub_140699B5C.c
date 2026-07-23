/*
 * XREFs of sub_140699B5C @ 0x140699B5C
 * Callers:
 *     sub_1406998CC @ 0x1406998CC (sub_1406998CC.c)
 *     sub_14094A3E4 @ 0x14094A3E4 (sub_14094A3E4.c)
 * Callees:
 *     sub_14076D6D4 @ 0x14076D6D4 (sub_14076D6D4.c)
 *     sub_14077F934 @ 0x14077F934 (sub_14077F934.c)
 *     sub_140781814 @ 0x140781814 (sub_140781814.c)
 *     sub_1407871C4 @ 0x1407871C4 (sub_1407871C4.c)
 *     sub_140A28CA4 @ 0x140A28CA4 (sub_140A28CA4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140699B5C(int a1, int a2, PVOID *a3)
{
  __int64 Pool2; // rax
  int v7; // ecx
  int v8; // r9d
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // r8d

  Pool2 = ExAllocatePool2(256LL, 2048LL, 1483763280LL);
  *a3 = (PVOID)Pool2;
  if ( !Pool2 )
  {
    v11 = -1073741670;
    goto LABEL_12;
  }
  v9 = a2 - 1;
  if ( !v9 )
  {
    v10 = sub_14077F934(qword_140D00AC0, a1, 16, 0, 0, Pool2, 1024, 0LL);
    goto LABEL_4;
  }
  v13 = v9 - 1;
  if ( !v13 )
  {
    v17 = 32;
    goto LABEL_19;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v10 = sub_140781814(v7, a1, 48, 0);
LABEL_4:
    v11 = v10;
    if ( v10 >= 0 )
      return v11;
    goto LABEL_12;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v17 = 64;
LABEL_19:
    v10 = sub_1407871C4(v7, a1, v17, 0);
    goto LABEL_4;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v10 = sub_14076D6D4(v7, a1, 80, v8);
    goto LABEL_4;
  }
  if ( v16 == 1 )
  {
    v10 = sub_140A28CA4(v7, a1, 96, v8);
    goto LABEL_4;
  }
  v11 = -1073741811;
LABEL_12:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x58706E50u);
    *a3 = 0LL;
  }
  return v11;
}

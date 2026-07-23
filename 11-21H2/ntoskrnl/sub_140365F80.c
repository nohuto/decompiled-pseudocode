/*
 * XREFs of sub_140365F80 @ 0x140365F80
 * Callers:
 *     sub_140365EB4 @ 0x140365EB4 (sub_140365EB4.c)
 *     sub_14063BC14 @ 0x14063BC14 (sub_14063BC14.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140365F80(ULONG_PTR BugCheckParameter2, int a2, __int64 *a3, unsigned __int64 *a4, int **a5)
{
  ULONG_PTR v5; // rdi
  __int64 v9; // r11
  int *v10; // rbx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rbp
  int v13; // r8d
  unsigned int v14; // ecx
  _QWORD *v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rax

  v5 = a2;
  if ( (a2 & 0x20) != 0 )
  {
    v17 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
    v9 = *(_QWORD *)(v17 + 824);
    v10 = (int *)(v17 + 792);
    v11 = *(_QWORD *)(v17 + 832);
  }
  else
  {
    v9 = qword_140C157B8;
    v10 = &dword_140D31100;
    v11 = qword_140C157C0;
  }
  v12 = (40543LL * (unsigned int)(BugCheckParameter2 >> 12)) ^ ((40543
                                                               * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32);
LABEL_4:
  v13 = 1;
  v14 = v12 & (v11 - 1);
  while ( 1 )
  {
    v15 = (_QWORD *)(v9 + 32LL * v14);
    if ( *v15 == BugCheckParameter2 )
      break;
    if ( ++v14 >= v11 )
    {
      if ( !v13 )
      {
LABEL_18:
        if ( (v5 & 0x21) != 0
          || v9 != qword_140C157B8
          || (unsigned int)sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23)) == -1
          || (v18 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL),
              v9 = *(_QWORD *)(v18 + 824),
              v10 = (int *)(v18 + 792),
              v11 = *(_QWORD *)(v18 + 832),
              !v9)
          || !v11 )
        {
          KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v5, 0LL);
        }
        goto LABEL_4;
      }
      v14 = 0;
      v13 = 0;
    }
  }
  if ( !v15 )
    goto LABEL_18;
  if ( a3 )
    *a3 = v9;
  if ( a4 )
    *a4 = v11;
  if ( a5 )
    *a5 = v10;
  return v9 + 32LL * v14;
}

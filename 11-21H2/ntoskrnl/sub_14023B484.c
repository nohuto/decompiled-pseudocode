/*
 * XREFs of sub_14023B484 @ 0x14023B484
 * Callers:
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F8EF0 @ 0x1402F8EF0 (sub_1402F8EF0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_14072A6B0 @ 0x14072A6B0 (sub_14072A6B0.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 */

__int64 __fastcall sub_14023B484(__int64 a1, int a2, __int64 *a3, _BYTE *a4, _QWORD *a5)
{
  _QWORD *v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  void *v9; // rax
  __int64 v10; // rbx
  ULONG v12; // edx
  char v13; // [rsp+70h] [rbp+30h] BYREF
  int v14; // [rsp+78h] [rbp+38h] BYREF
  int v15; // [rsp+80h] [rbp+40h] BYREF
  int v16; // [rsp+88h] [rbp+48h] BYREF

  v14 = a2;
  *a3 = 0LL;
  v6 = a5;
  v15 = 0;
  v16 = 0;
  *a4 = 0;
  *v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  LOBYTE(v14) = 0;
  if ( a1 == -4 )
  {
    v10 = sub_140347920(*((_QWORD *)CurrentThread + 23), 1953654867LL);
    goto LABEL_6;
  }
  if ( a1 != -5 )
  {
    v9 = (void *)sub_1407B3B60(CurrentThread, 1953654867LL, &v16, &v13, &v15, &v14);
    v10 = (__int64)v9;
    if ( v15 || v16 != 2 )
      goto LABEL_5;
    v12 = 1953654867;
LABEL_11:
    ObfDereferenceObjectWithTag(v9, v12);
    return 3221225638LL;
  }
  v9 = (void *)sub_14072A6B0(CurrentThread, 0LL, 1953654867LL, &a5, &v13, &v15, &v14);
  v10 = (__int64)v9;
  if ( v9 )
  {
    if ( v15 )
    {
LABEL_5:
      sub_1402F8EF0(*(_QWORD *)(v10 + 1104), &v14, a4, v6);
LABEL_6:
      *a3 = v10;
      return 0LL;
    }
    v12 = 1953261124;
    goto LABEL_11;
  }
  return 3221225596LL;
}

/*
 * XREFs of sub_14036BAB4 @ 0x14036BAB4
 * Callers:
 *     sub_14036B98C @ 0x14036B98C (sub_14036B98C.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall sub_14036BAB4(char a1, void *a2, __int64 a3)
{
  LONG_PTR result; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v5; // rdx
  LONG_PTR v6; // rax
  __int64 v7; // rcx
  __int16 v8; // ax
  bool v9; // zf
  char v10; // al
  LONG_PTR v11; // [rsp+48h] [rbp+20h]

  result = (LONG_PTR)a2;
  if ( a1 )
  {
    v11 = 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)CurrentThread + 29) & 0x400) != 0 || *((_BYTE *)CurrentThread + 586) == 1 )
      v5 = 0LL;
    else
      v5 = *((_QWORD *)CurrentThread + 30);
    if ( v5 )
    {
      if ( !*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1408LL) )
        goto LABEL_7;
      v7 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( !*(_QWORD *)(v7 + 1408) )
        goto LABEL_7;
      v8 = *(_WORD *)(v7 + 2412);
      if ( v8 == 332 || (v9 = v8 == 452, v10 = 0, v9) )
        v10 = 1;
      if ( v10 )
        v6 = *(unsigned int *)(v5 + 12128);
      else
LABEL_7:
        v6 = *(_QWORD *)(v5 + 5920);
      v11 = v6;
    }
    *(_DWORD *)a3 = (v11 != 0) + 1;
    *(_QWORD *)(a3 + 8) = *((_QWORD *)KeGetCurrentThread() + 23);
    result = v11;
    *(_DWORD *)(a3 + 16) = v11;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a2;
    if ( a2 )
      return ObfReferenceObjectWithTag(a2, 0x67446F50u);
  }
  return result;
}

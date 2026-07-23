/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x1409AD320
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3, __int64 a4)
{
  int v5; // edi
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v9; // ebx
  int v10; // edx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  int *v14; // rax
  int v15; // r12d
  _OWORD v17[3]; // [rsp+58h] [rbp-60h] BYREF

  memset(v17, 0, sizeof(v17));
  v5 = 0;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  if ( !*(_QWORD *)(BugCheckParameter1 + 1360) )
    return 3221225711LL;
  v7 = a2 & 1;
  if ( (a2 & 1) != 0 && !*(_QWORD *)(BugCheckParameter1 + 1408) )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  if ( *((_QWORD *)CurrentThread + 23) == BugCheckParameter1 )
  {
    v9 = 0;
    if ( *((_QWORD *)CurrentThread + 68) != BugCheckParameter1 )
      v9 = 2;
    if ( v9 < 2 )
      goto LABEL_13;
  }
  else
  {
    v9 = 3;
  }
  --*((_WORD *)CurrentThread + 242);
  if ( !sub_140347810((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112)) )
  {
    sub_1402F9540((__int64)CurrentThread);
    return 3221225738LL;
  }
LABEL_13:
  v10 = v9 & 1;
  if ( (v9 & 1) != 0 )
  {
    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v17, a4);
    v10 = v9 & 1;
  }
  if ( v7 )
  {
    v11 = *(__int64 **)(BugCheckParameter1 + 1408);
    if ( !v11 || *(_WORD *)(BugCheckParameter1 + 2412) != 0x8664 )
    {
      v13 = 0LL;
      if ( v11 )
        v13 = *v11;
      v14 = (int *)(v13 + 40);
      goto LABEL_24;
    }
    v12 = *v11;
  }
  else
  {
    v12 = *(_QWORD *)(BugCheckParameter1 + 1360);
  }
  v14 = (int *)(v12 + 80);
LABEL_24:
  v15 = *v14;
  if ( v10 )
    sub_1402D0930((__int64)v17, 0LL);
  if ( v9 >= 2 )
  {
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112));
    sub_1402F9540((__int64)CurrentThread);
  }
  *a3 = 0;
  if ( (v15 & 4) != 0 )
  {
    *a3 = 1;
    v5 = 1;
  }
  if ( (v15 & 8) != 0 )
    *a3 = v5 | 2;
  return 0LL;
}

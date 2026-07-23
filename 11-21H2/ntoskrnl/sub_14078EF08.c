/*
 * XREFs of sub_14078EF08 @ 0x14078EF08
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14078F094 @ 0x14078F094 (sub_14078F094.c)
 *     sub_14078F0FC @ 0x14078F0FC (sub_14078F0FC.c)
 */

__int64 __fastcall sub_14078EF08(void *a1, unsigned int a2, char a3, _DWORD *a4)
{
  int v4; // esi
  __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rbx
  _QWORD *v12; // r14
  _QWORD *i; // rdi
  _QWORD *v14; // rax
  void **v15; // rcx
  __int64 v16; // rbp
  _QWORD *v17; // r12
  signed __int32 v18; // ebx
  _QWORD *v20; // rax

  v4 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1424LL);
  if ( !v9 )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v11 = v9 + 16;
  ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
  v12 = (_QWORD *)(v9 + 24);
  for ( i = (_QWORD *)*v12; ; i = (_QWORD *)*i )
  {
    if ( i == v12 )
    {
      ExReleasePushLockEx(v11, 0LL);
      sub_1402F9540((__int64)KeGetCurrentThread());
      return (unsigned int)-2147483622;
    }
    if ( a3 == (*(_BYTE *)(i[3] + 99LL) & 1) )
      break;
  }
  v14 = (_QWORD *)*i;
  if ( *(_QWORD **)(*i + 8LL) != i || (v15 = (void **)i[1], *v15 != i) )
LABEL_18:
    __fastfail(3u);
  *v15 = v14;
  v14[1] = v15;
  v16 = i[2];
  if ( *(_DWORD *)(v16 + 4) > a2 )
  {
    v20 = (_QWORD *)*v12;
    if ( *(_QWORD **)(*v12 + 8LL) == v12 )
    {
      *i = v20;
      v4 = -1073741789;
      i[1] = v12;
      v20[1] = i;
      *v12 = i;
      goto LABEL_8;
    }
    goto LABEL_18;
  }
LABEL_8:
  v17 = (_QWORD *)*v12;
  *a4 = *(_DWORD *)(v16 + 4);
  ExReleasePushLockEx(v11, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v18 = _InterlockedIncrement((volatile signed __int32 *)(v16 + 20));
    memmove(a1, (const void *)v16, *(unsigned int *)(v16 + 4));
    *((_QWORD *)a1 + 3) = 0LL;
    *((_DWORD *)a1 + 5) = v18;
    *((_DWORD *)a1 + 6) = *((unsigned __int16 *)i + 24);
    if ( *(_BYTE *)(v16 + 12) )
      *((_DWORD *)a1 + 4) = *((unsigned __int16 *)i + 25);
    sub_14078F0FC(v16);
    sub_14078F094(i);
    if ( v17 != v12 )
      return 261;
  }
  return (unsigned int)v4;
}

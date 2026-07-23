/*
 * XREFs of sub_140784064 @ 0x140784064
 * Callers:
 *     sub_1406D2BE8 @ 0x1406D2BE8 (sub_1406D2BE8.c)
 *     sub_140783DB8 @ 0x140783DB8 (sub_140783DB8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140784064(const void **a1, _DWORD *a2, unsigned int *a3, void *a4, ULONG_PTR a5)
{
  __int64 v5; // r13
  int v6; // ebx
  __int64 v7; // rbp
  void *v9; // rdi
  ULONG_PTR v10; // rsi
  unsigned int v12; // ebx
  __int64 v13; // r14
  PVOID PoolWithTag; // rax
  PVOID v15; // rsi
  void *v16; // r15
  ULONG_PTR *v17; // rbx
  _DWORD *v19; // [rsp+68h] [rbp+10h]

  v19 = a2;
  v5 = (unsigned int)*a2;
  v6 = 0;
  v7 = *a3;
  v9 = (void *)*a1;
  v10 = a5;
  if ( (_DWORD)v5 != (_DWORD)v7 )
    goto LABEL_2;
  v12 = 2 * v7;
  v13 = *a3;
  if ( (unsigned __int64)(2 * v7) > 0xFFFFFFFF )
  {
    v16 = (void *)*a1;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v12, 0x70696D57u);
    v15 = PoolWithTag;
    v16 = v9;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v9, 8 * v7);
      *a3 = v12;
      v9 = v15;
      v6 = 0;
      goto LABEL_7;
    }
    v10 = a5;
  }
  if ( (_DWORD)v7 )
  {
    v17 = (ULONG_PTR *)v9;
    do
    {
      sub_1407838E0((__int64 *)&off_140C037A0, *v17++);
      --v13;
    }
    while ( v13 );
  }
  sub_1407838E0((__int64 *)&off_140C037A0, v10);
  v15 = 0LL;
  v6 = -1073741670;
LABEL_7:
  *a1 = v15;
  if ( v16 != a4 )
    ExFreePoolWithTag(v16, 0);
  if ( v6 >= 0 )
  {
    v10 = a5;
    a2 = v19;
LABEL_2:
    *((_QWORD *)v9 + v5) = v10;
    *a2 = v5 + 1;
  }
  return (unsigned int)v6;
}

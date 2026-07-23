/*
 * XREFs of sub_14084E03C @ 0x14084E03C
 * Callers:
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 *     sub_140B2305C @ 0x140B2305C (sub_140B2305C.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_14075E074 @ 0x14075E074 (sub_14075E074.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_14084E1F4 @ 0x14084E1F4 (sub_14084E1F4.c)
 *     sub_14084E278 @ 0x14084E278 (sub_14084E278.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14084E03C(__int64 a1, __int64 a2, char a3, __int64 a4, char *a5)
{
  unsigned int v9; // ebx
  _QWORD *p_Next; // rdi
  PSLIST_ENTRY v11; // rax
  char v12; // si
  __int64 v13; // rbp
  __int64 v14; // rax
  SIZE_T v15; // r13
  SIZE_T v16; // rbp
  PVOID PoolWithTag; // rax
  _WORD *v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rcx

  v9 = 0;
  p_Next = (_QWORD *)sub_14084E278(a2, a4);
  if ( p_Next )
  {
    v12 = 0;
  }
  else
  {
    v11 = sub_14075E074((__int64)&off_140C03800);
    p_Next = &v11->Next;
    if ( !v11 )
      return (unsigned int)-1073741670;
    v12 = 1;
    if ( a3 )
      LODWORD(v11[1].Next) |= 1u;
    v13 = -1LL;
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(a2 + 2 * v14) );
    v15 = 2 * v14 + 2;
    p_Next[5] = ExAllocatePoolWithTag(PagedPool, v15, 0x70696D57u);
    do
      ++v13;
    while ( *(_WORD *)(a4 + 2 * v13) );
    v16 = 2 * v13 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x70696D57u);
    v18 = (_WORD *)p_Next[5];
    p_Next[6] = PoolWithTag;
    if ( !v18 || !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_15;
    }
    sub_1402E0978(v18, v15, a2);
    sub_1402E0978((_WORD *)p_Next[6], v16, a4);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v19 = qword_140C16540;
    v20 = *(_QWORD **)(qword_140C16540 + 8);
    if ( *v20 != qword_140C16540 )
      __fastfail(3u);
    p_Next[1] = v20;
    *p_Next = v19;
    *v20 = p_Next;
    *(_QWORD *)(v19 + 8) = p_Next;
    KeReleaseMutex(&Object, 0);
  }
  *a5 = v12;
  if ( a1 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v9 = sub_14084E1F4(a1, p_Next);
    KeReleaseMutex(&Object, 0);
LABEL_15:
    sub_1407838E0((__int64 *)&off_140C03800, (ULONG_PTR)p_Next);
  }
  return v9;
}

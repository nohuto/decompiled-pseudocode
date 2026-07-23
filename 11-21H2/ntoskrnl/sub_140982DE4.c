/*
 * XREFs of sub_140982DE4 @ 0x140982DE4
 * Callers:
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_14030BA20 @ 0x14030BA20 (sub_14030BA20.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030EB30 @ 0x14030EB30 (sub_14030EB30.c)
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 *     sub_14097F200 @ 0x14097F200 (sub_14097F200.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140982DE4(ULONG_PTR a1, __int64 a2, void *a3)
{
  int v3; // r12d
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v9; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int v13; // r9d
  int v14; // ebp

  v3 = 1;
  v4 = 1LL;
  if ( (*(_DWORD *)(a2 + 48) & 0x200000) != 0 )
    v4 = -(__int64)(a3 != 0LL) & 1;
  CurrentThread = KeGetCurrentThread();
  v9 = *((_QWORD *)CurrentThread + 23);
  if ( v4 )
  {
    v4 = (__int64)sub_1402828F0(64, 0x48uLL, 0x624C6D4Du);
    if ( !v4 )
      return 3221225626LL;
  }
  v11 = *(unsigned int *)(a2 + 52);
  LODWORD(v11) = v11 & 0x7FFFFFFF;
  v12 = v11 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
  if ( !v12 )
  {
    if ( !a3 )
      goto LABEL_24;
LABEL_23:
    ObfReferenceObjectWithTag(a3, 0x746C6644u);
    *(_QWORD *)(v4 + 24) = a3;
    goto LABEL_24;
  }
  if ( !(unsigned int)sub_14097F200(a1, v11 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31)) )
  {
    if ( v4 )
      ExFreePoolWithTag((PVOID)v4, 0);
    return 3221225773LL;
  }
  if ( a3 )
    goto LABEL_23;
  if ( v13 || v9 != a1 )
    v3 = 0;
  else
    sub_14030EB30((__int64)CurrentThread, a1);
  v14 = sub_1407BE280(a1, v12);
  if ( v3 )
    sub_14030EA00((__int64)CurrentThread, a1);
  if ( v14 < 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -(__int64)v12);
    if ( v4 )
      ExFreePoolWithTag((PVOID)v4, 0);
    return (unsigned int)v14;
  }
LABEL_24:
  if ( v4 )
  {
    *(_DWORD *)(v4 + 64) = 16;
    sub_14030BA20(a2, (unsigned __int64 *)v4, 0);
  }
  return 0LL;
}

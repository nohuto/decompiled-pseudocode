/*
 * XREFs of sub_140983198 @ 0x140983198
 * Callers:
 *     sub_1407B97B0 @ 0x1407B97B0 (sub_1407B97B0.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_140980B94 @ 0x140980B94 (sub_140980B94.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030EB30 @ 0x14030EB30 (sub_14030EB30.c)
 *     sub_1406FEC50 @ 0x1406FEC50 (sub_1406FEC50.c)
 */

char __fastcall sub_140983198(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // r14
  int v9; // ebp
  void *v10; // rcx

  v4 = *(unsigned int *)(a2 + 52);
  LODWORD(v4) = v4 & 0x7FFFFFFF;
  v6 = v4 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
  if ( !v6 )
    goto LABEL_8;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v4) = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -(__int64)v6);
  if ( !a3 || !*(_QWORD *)(a3 + 24) )
  {
    v9 = a4 & 1;
    if ( (a4 & 1) == 0 )
      sub_14030EB30((__int64)CurrentThread, a1);
    LOBYTE(v4) = sub_1406FEC50(a1, v6);
    if ( !v9 )
      LOBYTE(v4) = sub_14030EA00((__int64)CurrentThread, a1);
LABEL_8:
    if ( !a3 )
      return v4;
  }
  v10 = *(void **)(a3 + 24);
  if ( v10 )
  {
    LOBYTE(v4) = ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    *(_QWORD *)(a3 + 24) = 0LL;
  }
  return v4;
}

/*
 * XREFs of sub_1409ABCF4 @ 0x1409ABCF4
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     sub_14020A400 @ 0x14020A400 (sub_14020A400.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E5090 @ 0x1406E5090 (sub_1406E5090.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     PsGetParentSilo @ 0x1407FC3C0 (PsGetParentSilo.c)
 *     sub_1409ABFB0 @ 0x1409ABFB0 (sub_1409ABFB0.c)
 *     sub_1409AC2BC @ 0x1409AC2BC (sub_1409AC2BC.c)
 *     sub_1409E24C0 @ 0x1409E24C0 (sub_1409E24C0.c)
 *     sub_140A34854 @ 0x140A34854 (sub_140A34854.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409ABCF4(__int64 a1, char a2, ULONG_PTR a3, char a4)
{
  unsigned int v8; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rdi
  int v12; // ebp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx

  v8 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x560uLL, 0x476C6953u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x560uLL);
  v11[326] = 0;
  v11[327] = 259;
  *((_BYTE *)v11 + 1368) = a4;
  if ( a3
    && (v12 = sub_140732D40(a3, 2, (__int64)ExEventObjectType, a2, 0x65446953u, (_QWORD *)v11 + 164, 0LL, 0LL), v12 < 0)
    || (v12 = sub_140A34854(a1, v11 + 320), v12 < 0)
    || ((CurrentThread = KeGetCurrentThread(), sub_1406FFED4(a1, (__int64)CurrentThread), !sub_14020A400(a1))
      ? (!PsGetParentSilo(v14)
       ? (!sub_1406E5090(a1)
        ? ((*(_DWORD *)(a1 + 256) & 0x400000) != 0
         ? (*(_QWORD *)(a1 + 1464) = v11, v12 = 0)
         : (v12 = -1073741811))
        : (v12 = -1073740529))
       : (v12 = -1073741791))
      : (v12 = -1073740536),
        sub_1406FFE90(a1, (__int64)CurrentThread),
        v12 < 0) )
  {
    sub_1409ABFB0(v11);
    return (unsigned int)v12;
  }
  else
  {
    sub_1409E24C0(a1, 0LL);
    if ( (int)sub_1409AC2BC(v15, a1) < 0 )
      return (unsigned int)-1073740955;
    return v8;
  }
}

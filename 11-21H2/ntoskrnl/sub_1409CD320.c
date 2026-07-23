/*
 * XREFs of sub_1409CD320 @ 0x1409CD320
 * Callers:
 *     sub_1402022FC @ 0x1402022FC (sub_1402022FC.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 *     sub_1409C664C @ 0x1409C664C (sub_1409C664C.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409CD320(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edx
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rsi
  __int64 *v6; // rbx
  __int64 *Pool2; // rax
  __int64 *v8; // rbx
  __int64 **v9; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned int)(1529154084 * *(_DWORD *)(a1 + 24)) >> 28;
  --*((_WORD *)CurrentThread + 242);
  v4 = v3;
  v5 = &stru_140CF66C0 + (v3 & 3);
  ExAcquireResourceExclusiveLite(v5, 1u);
  v6 = *(__int64 **)(qword_140D3CA78 + 8 * v4);
  if ( v6 )
  {
    while ( *(_DWORD *)(a1 + 24) != *((_DWORD *)v6 + 2)
         || *(_DWORD *)(a1 + 28) != *((_DWORD *)v6 + 3)
         || *(_QWORD *)(*(_QWORD *)(a1 + 216) + 160LL) != v6[20] )
    {
      v6 = (__int64 *)*v6;
      if ( !v6 )
        goto LABEL_11;
    }
    Pool2 = (__int64 *)ExAllocatePool2(256LL, 24LL, 1934386515LL);
    if ( Pool2 )
    {
      *Pool2 = 0LL;
      v8 = v6 + 22;
      Pool2[1] = 0LL;
      Pool2[2] = a1;
      v9 = (__int64 **)v8[1];
      if ( *v9 != v8 )
        __fastfail(3u);
      *Pool2 = (__int64)v8;
      Pool2[1] = (__int64)v9;
      *v9 = Pool2;
      v8[1] = (__int64)Pool2;
    }
  }
LABEL_11:
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
}

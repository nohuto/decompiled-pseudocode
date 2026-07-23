/*
 * XREFs of sub_1407A5530 @ 0x1407A5530
 * Callers:
 *     sub_14066BC7C @ 0x14066BC7C (sub_14066BC7C.c)
 *     sub_1406CBB84 @ 0x1406CBB84 (sub_1406CBB84.c)
 *     sub_1407A74A4 @ 0x1407A74A4 (sub_1407A74A4.c)
 * Callees:
 *     sub_140203D50 @ 0x140203D50 (sub_140203D50.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140965BB0 @ 0x140965BB0 (sub_140965BB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407A5530(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v2; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  void *Pool2; // rax
  void *v12; // r14
  __int64 v13; // r8
  __int64 v14; // rbx

  v2 = a1 + 8;
  ExAcquirePushLockExclusiveEx(a1 + 8, 0LL);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  if ( v5 )
  {
    v7 = *(_QWORD **)a1;
    while ( *v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_5;
    }
    *v7 = *a2;
    sub_140965BB0(v2);
    return v6 + 16;
  }
  else
  {
LABEL_5:
    v8 = 2 * v5;
    if ( 2 * v5 < 0x1FFFFFFFFFFFFFFFLL )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, 16 * v5, 1632136257LL);
      v9 = -1LL;
      v12 = Pool2;
      if ( Pool2 )
      {
        memset(Pool2, 0, 8 * v8);
        memmove(v12, *(const void **)a1, 8LL * *(_QWORD *)(a1 + 16));
        v14 = *(_QWORD *)(a1 + 16);
        *((_QWORD *)v12 + v14) = *a2;
        if ( *(_QWORD *)(a1 + 16) == 16LL )
          sub_140203D50((__int64)&unk_140CF5B80, *(_SLIST_ENTRY **)a1, v13);
        else
          ExFreePoolWithTag(*(PVOID *)a1, 0x61486C41u);
        *(_QWORD *)a1 = v12;
        v9 = v14 + 16;
        *(_QWORD *)(a1 + 16) = v8;
      }
    }
    else
    {
      v9 = -1LL;
    }
    sub_140965BB0(v2);
    return v9;
  }
}

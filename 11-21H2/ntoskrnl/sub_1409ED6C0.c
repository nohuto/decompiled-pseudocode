/*
 * XREFs of sub_1409ED6C0 @ 0x1409ED6C0
 * Callers:
 *     sub_1409ED690 @ 0x1409ED690 (sub_1409ED690.c)
 * Callees:
 *     sub_1409ED100 @ 0x1409ED100 (sub_1409ED100.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_1409ED6C0()
{
  __int64 Pool2; // rax
  __int64 v1; // rdx
  char *v2; // rbx
  int v3; // esi
  __int64 i; // rdi
  int v5; // eax
  int v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  Pool2 = ExAllocatePool2(256LL, 8LL * *(unsigned int *)(qword_140D05008 + 16) + 4112, 1266119749LL);
  v2 = (char *)Pool2;
  if ( !Pool2 )
    goto LABEL_9;
  *(_DWORD *)Pool2 = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 4112;
  v3 = KsrEnumeratePersistedMemory(qword_140A37D90, sub_1409ECCA0, Pool2);
  if ( v3 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)v2; i = (unsigned int)(i + 1) )
    {
      v5 = KsrQueryMetadata(qword_140A37D90, *(_QWORD *)(*((_QWORD *)v2 + 1) + 8 * i), v2 + 16, 4096LL, &v7);
      if ( v5 >= 0 )
        sub_1409ED100((unsigned int *)v2 + 4, *(_QWORD *)(*((_QWORD *)v2 + 1) + 8 * i));
      else
        v3 = v5;
    }
  }
  ExFreePoolWithTag(v2, 0);
  if ( v3 < 0 )
  {
LABEL_9:
    LOBYTE(v1) = 1;
    KsrFreePersistedMemory(qword_140A37D90, v1);
  }
  return (unsigned int)_InterlockedExchange(&dword_140D3CD40, 2);
}

/*
 * XREFs of sub_140AF8120 @ 0x140AF8120
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140748D08 @ 0x140748D08 (sub_140748D08.c)
 *     sub_140820280 @ 0x140820280 (sub_140820280.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140AF8120(unsigned int a1, __int64 a2, _DWORD *a3)
{
  const void *v4; // rdi
  unsigned int v6; // eax
  __int64 v7; // rbx
  size_t v9; // rbp
  void *v10; // rax
  _QWORD *Pool2; // rax
  void *v12; // rcx

  v4 = a3;
  v6 = sub_140748D08(a3);
  if ( !v6 )
    return 0LL;
  if ( !a2 )
  {
    v7 = 0LL;
LABEL_10:
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x20207050u);
    if ( !Pool2 )
    {
      if ( v7 )
      {
        v12 = *(void **)(v7 + 544);
        if ( v12 )
        {
          ExFreePoolWithTag(v12, 0);
          *(_QWORD *)(v7 + 544) = 0LL;
        }
      }
      return 3221225626LL;
    }
    if ( v7 )
      v4 = *(const void **)(v7 + 544);
    Pool2[2] = v4;
    Pool2[1] = a2;
    *Pool2 = qword_140D68698;
    qword_140D68698 = Pool2;
    return 0LL;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  if ( (*(_DWORD *)(v7 + 396) & 1) == 0 )
    return sub_140820280(a1, a2);
  if ( *(_QWORD *)(v7 + 544) )
    goto LABEL_10;
  v9 = v6;
  v10 = (void *)ExAllocatePool2(256LL, v6, 0x20207050u);
  *(_QWORD *)(v7 + 544) = v10;
  if ( v10 )
  {
    memmove(v10, v4, v9);
    goto LABEL_10;
  }
  return 3221225626LL;
}

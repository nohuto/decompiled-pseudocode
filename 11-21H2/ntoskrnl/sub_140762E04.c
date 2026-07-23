/*
 * XREFs of sub_140762E04 @ 0x140762E04
 * Callers:
 *     sub_140762C04 @ 0x140762C04 (sub_140762C04.c)
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     sub_14084F808 @ 0x14084F808 (sub_14084F808.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140762E04(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ebx
  __int64 v6; // r9
  unsigned int v7; // r8d
  unsigned int v9; // r13d
  unsigned int v10; // eax
  unsigned int *i; // rsi
  unsigned int v12; // ebp
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rcx
  const wchar_t *v17; // rcx
  const wchar_t *v18; // rdx
  unsigned int v19; // ecx
  void *v21; // rbp
  __int64 Pool2; // rax

  v5 = 0;
  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( !a4 )
    return v5;
  v10 = a4;
  for ( i = (unsigned int *)(v6 + 36); ; i += 12 )
  {
    v12 = 0;
    if ( v7 )
      break;
LABEL_18:
    if ( ++v9 >= v10 )
      return v5;
    v6 = a3;
  }
  v13 = a1 + 20;
  while ( 1 )
  {
    if ( *(i - 5) == *(_DWORD *)(v13 - 4) )
    {
      v14 = v12;
      v15 = 48LL * v12;
      v16 = *(_QWORD *)(v6 + 48LL * v9) - *(_QWORD *)(v15 + a1);
      if ( !v16 )
        v16 = *(_QWORD *)(v6 + 48LL * v9 + 8) - *(_QWORD *)(v15 + a1 + 8);
      if ( !v16 && *(i - 4) == *(_DWORD *)v13 )
      {
        v17 = *(const wchar_t **)(i - 3);
        v18 = *(const wchar_t **)(v13 + 4);
        if ( v17 == v18 )
          goto LABEL_13;
        if ( v17 && v18 )
          break;
      }
    }
LABEL_6:
    ++v12;
    v13 += 48LL;
    if ( v12 >= v7 )
      goto LABEL_17;
  }
  if ( wcsicmp(v17, v18) )
  {
    v7 = a2;
    v6 = a3;
    goto LABEL_6;
  }
LABEL_13:
  v19 = *(_DWORD *)(v15 + a1 + 36);
  if ( *i == v19 )
  {
LABEL_14:
    *(_DWORD *)(v15 + a1 + 32) = *(i - 1);
    if ( v19 )
      memmove(*(void **)(v15 + a1 + 40), *(const void **)(i + 1), v19);
    v7 = a2;
LABEL_17:
    v10 = a4;
    goto LABEL_18;
  }
  v21 = *(void **)(v15 + a1 + 40);
  *(_QWORD *)(v15 + a1 + 40) = 0LL;
  if ( !*i || (Pool2 = ExAllocatePool2(256LL, *i, 1466986064LL), (*(_QWORD *)(v15 + a1 + 40) = Pool2) != 0LL) )
  {
    if ( v21 )
      ExFreePoolWithTag(v21, 0x57706E50u);
    v19 = *i;
    *(_DWORD *)(v15 + a1 + 36) = *i;
    goto LABEL_14;
  }
  v5 = -1073741670;
  *(_QWORD *)(a1 + 48 * v14 + 40) = v21;
  return v5;
}

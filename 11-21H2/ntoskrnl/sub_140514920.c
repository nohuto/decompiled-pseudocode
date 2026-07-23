/*
 * XREFs of sub_140514920 @ 0x140514920
 * Callers:
 *     <none>
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051253C @ 0x14051253C (sub_14051253C.c)
 *     sub_140514E28 @ 0x140514E28 (sub_140514E28.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall sub_140514920(__int64 a1, __int64 a2, __int64 a3, _RTL_BALANCED_NODE *a4)
{
  ULONG_PTR v4; // r14
  bool v7; // di
  unsigned __int64 result; // rax
  void *v9; // rbp
  struct _MDL *v10; // rsi
  char v11; // r12

  v4 = *(_QWORD *)(a1 + 504);
  v7 = 0;
  result = sub_14051253C(a4, v4);
  v9 = (void *)result;
  if ( !result )
    return result;
  switch ( *(_DWORD *)(v4 + 48) )
  {
    case 1:
      goto LABEL_5;
    case 2:
      v7 = *(_QWORD *)(result + 32) != 0LL;
      break;
    case 3:
LABEL_5:
      v7 = 1;
      break;
  }
  v10 = *(struct _MDL **)(result + 32);
  v11 = *(_BYTE *)(result + 48);
  if ( v7 )
    sub_14042A5E0(*(_QWORD *)(v4 + 40), a3);
  if ( v11 )
  {
    if ( v10 )
    {
      MmUnmapLockedPages(a4, v10);
      sub_140221A30((ULONG_PTR)v10, 0);
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      MmFreeContiguousMemory(a4);
    }
  }
  ExFreePoolWithTag(v9, 0);
  return sub_140514E28(v4);
}

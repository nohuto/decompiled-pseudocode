/*
 * XREFs of sub_140516290 @ 0x140516290
 * Callers:
 *     <none>
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051253C @ 0x14051253C (sub_14051253C.c)
 *     sub_140514E28 @ 0x140514E28 (sub_140514E28.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall sub_140516290(__int64 a1, __int64 a2, __int64 a3, _RTL_BALANCED_NODE *a4)
{
  __int64 *v4; // r14
  unsigned __int64 result; // rax
  void *v8; // rbp
  struct _MDL *v9; // rsi
  char v10; // di

  v4 = *(__int64 **)(a1 + 504);
  result = sub_14051253C(a4, (__int64)v4);
  v8 = (void *)result;
  if ( result )
  {
    v9 = *(struct _MDL **)(result + 32);
    v10 = *(_BYTE *)(result + 48);
    sub_14042A5E0(v4[5], a3);
    if ( v10 )
    {
      MmUnmapLockedPages(a4, v9);
      sub_140221A30((ULONG_PTR)v9, 0);
      ExFreePoolWithTag(v9, 0);
    }
    ExFreePoolWithTag(v8, 0);
    return sub_140514E28(v4);
  }
  return result;
}

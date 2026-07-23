/*
 * XREFs of sub_1409095FC @ 0x1409095FC
 * Callers:
 *     sub_140505810 @ 0x140505810 (sub_140505810.c)
 *     sub_140908B50 @ 0x140908B50 (sub_140908B50.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_14051314C @ 0x14051314C (sub_14051314C.c)
 *     sub_14090943C @ 0x14090943C (sub_14090943C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409095FC(PHYSICAL_ADDRESS *a1, unsigned int a2)
{
  PMDL v3; // rax
  struct _MDL *v4; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  v3 = sub_14090943C(a1, a2, &BaseAddress);
  v4 = v3;
  if ( v3 )
  {
    if ( !sub_14051314C((__int64)a1, (__int64)BaseAddress, 0LL, 0, v3) )
    {
      if ( BaseAddress )
        MmUnmapLockedPages(BaseAddress, v4);
      MmFreePagesFromMdl(v4);
    }
    ExFreePoolWithTag(v4, 0);
  }
}

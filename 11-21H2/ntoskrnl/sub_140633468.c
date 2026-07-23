/*
 * XREFs of sub_140633468 @ 0x140633468
 * Callers:
 *     sub_14024E01C @ 0x14024E01C (sub_14024E01C.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1406338CC @ 0x1406338CC (sub_1406338CC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140633468(__int64 a1, void *a2)
{
  struct _MDL *v3; // rax
  struct _MDL *v4; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v3 = (struct _MDL *)sub_1406338CC(&v5);
  v4 = v3;
  if ( v3 )
  {
    MmUnmapLockedPages(a2, v3);
    sub_140221A30((ULONG_PTR)v4, 0);
    ExFreePoolWithTag(v4, 0);
  }
}

/*
 * XREFs of sub_140A2089C @ 0x140A2089C
 * Callers:
 *     sub_140A1E354 @ 0x140A1E354 (sub_140A1E354.c)
 *     sub_140A1FB1C @ 0x140A1FB1C (sub_140A1FB1C.c)
 * Callees:
 *     ZwQueryBootOptions @ 0x14041E040 (ZwQueryBootOptions.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813B50 @ 0x140813B50 (sub_140813B50.c)
 *     sub_140813BA8 @ 0x140813BA8 (sub_140813BA8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A2089C(_BOOT_OPTIONS **a1, ULONG *a2)
{
  _BOOT_OPTIONS *v2; // rdi
  int v5; // ebx
  _BOOT_OPTIONS *PoolWithTag; // rax
  ULONG BootOptionsLength; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  *a2 = 0;
  v9 = 0LL;
  BootOptionsLength = 0;
  v5 = sub_140813BA8(0x16u, (__int64)&v9);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryBootOptions(0LL, &BootOptionsLength);
    if ( v5 != -1073741789 )
      goto LABEL_6;
    PoolWithTag = (_BOOT_OPTIONS *)ExAllocatePoolWithTag(PagedPool, BootOptionsLength, 0x4B444342u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = -1073741670;
LABEL_10:
      sub_140813B50((unsigned int *)&v9);
      return (unsigned int)v5;
    }
    v5 = ZwQueryBootOptions(PoolWithTag, &BootOptionsLength);
    if ( v5 < 0 )
    {
LABEL_6:
      sub_1408138F0(4LL, L"Failed to query boot options. Status: %x", (unsigned int)v5);
      if ( v5 < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_10;
      }
    }
    *a2 = BootOptionsLength;
    *a1 = v2;
    goto LABEL_10;
  }
  return (unsigned int)v5;
}

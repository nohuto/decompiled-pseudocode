/*
 * XREFs of sub_14085F65C @ 0x14085F65C
 * Callers:
 *     sub_1406BE9A0 @ 0x1406BE9A0 (sub_1406BE9A0.c)
 *     sub_14085F580 @ 0x14085F580 (sub_14085F580.c)
 *     sub_140A05860 @ 0x140A05860 (sub_140A05860.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14085F65C(volatile signed __int64 *a1)
{
  struct _ERESOURCE *PoolWithTag; // rax
  struct _ERESOURCE *v3; // rbx
  unsigned int v4; // edi

  if ( a1 )
  {
    if ( *a1 )
    {
      return 0;
    }
    else
    {
      PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6D756950u);
      v3 = PoolWithTag;
      if ( PoolWithTag )
      {
        v4 = ExInitializeResourceLite(PoolWithTag);
        if ( (v4 & 0xC0000000) == 0xC0000000 )
          goto LABEL_11;
        if ( _InterlockedCompareExchange64(a1, (signed __int64)v3, 0LL) )
          ExDeleteResourceLite(v3);
        else
          v3 = 0LL;
        v4 = 0;
        if ( v3 )
LABEL_11:
          ExFreePoolWithTag(v3, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}

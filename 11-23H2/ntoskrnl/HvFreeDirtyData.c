/*
 * XREFs of HvFreeDirtyData @ 0x14075116C
 * Callers:
 *     CmpDeleteHive @ 0x14074E8C4 (CmpDeleteHive.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x140A20CB0 (HvFoldBackDirtyData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall HvFreeDirtyData(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx

  v2 = *(void **)(a1 + 1696);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_DWORD *)(a1 + 1688) = 0;
    v3 = 0LL;
    for ( *(_QWORD *)(a1 + 1696) = 0LL; (unsigned int)v3 < *(_DWORD *)(a1 + 1720); v3 = (unsigned int)(v3 + 1) )
    {
      v4 = *(void **)(*(_QWORD *)(a1 + 1712) + 24 * v3 + 8);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 1712) + 24 * v3 + 8) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1712), 0);
    *(_QWORD *)(a1 + 1712) = 0LL;
    *(_DWORD *)(a1 + 1720) = 0;
    *(_DWORD *)(a1 + 1724) = 0;
  }
}

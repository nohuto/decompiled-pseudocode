/*
 * XREFs of DifMmAllocateContiguousMemorySpecifyCacheWrapper @ 0x140616630
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x1403DE8E0 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

PVOID __fastcall DifMmAllocateContiguousMemorySpecifyCacheWrapper(
        SIZE_T NumberOfBytes,
        PHYSICAL_ADDRESS LowestAcceptableAddress,
        PHYSICAL_ADDRESS HighestAcceptableAddress,
        PHYSICAL_ADDRESS BoundaryAddressMultiple,
        MEMORY_CACHING_TYPE CacheType)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *APIThunkContextById; // r15
  int v14; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // r14
  PVOID result; // rax
  __int64 *v18; // rbx
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+50h] [rbp-20h]
  PVOID v22; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+28h]

  v22 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(315);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v10 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v14 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v14 & 0x18) == 0 )
  {
    if ( (v14 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v10, v9, v11, v12);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  *(_QWORD *)&v19 = ReturnAddressForWrappers;
LABEL_13:
  DWORD2(v19) = CacheType;
  *((_QWORD *)&v21 + 1) = NumberOfBytes;
  *(PHYSICAL_ADDRESS *)&v21 = LowestAcceptableAddress;
  *((PHYSICAL_ADDRESS *)&v20 + 1) = HighestAcceptableAddress;
  *(PHYSICAL_ADDRESS *)&v20 = BoundaryAddressMultiple;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v19);
  }
LABEL_18:
  result = MmAllocateContiguousMemorySpecifyCacheNode(
             NumberOfBytes,
             LowestAcceptableAddress,
             HighestAcceptableAddress,
             BoundaryAddressMultiple,
             CacheType,
             0x80000000);
  v22 = result;
  if ( APIThunkContextById )
  {
    v18 = (__int64 *)APIThunkContextById[6];
    if ( v18 != APIThunkContextById + 6 )
    {
      do
      {
        if ( v18 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v18 - 1))(&v19);
        v18 = (__int64 *)*v18;
      }
      while ( v18 != APIThunkContextById + 6 );
      return v22;
    }
  }
  return result;
}

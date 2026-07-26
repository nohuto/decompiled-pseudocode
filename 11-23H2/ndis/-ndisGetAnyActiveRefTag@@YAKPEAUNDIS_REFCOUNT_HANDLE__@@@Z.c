/*
 * XREFs of ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C0015474
 * Callers:
 *     NdisFreeRefCount @ 0x1C0015420 (NdisFreeRefCount.c)
 * Callees:
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C000F8D0 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 */

ULONG __fastcall ndisGetAnyActiveRefTag(struct NDIS_REFCOUNT_HANDLE__ *a1)
{
  struct _NDIS_REFCOUNT_BLOCK *v1; // rax
  int v2; // ebx
  struct _NDIS_REFCOUNT_BLOCK *v3; // rdi
  int Type; // eax
  ULONG result; // eax
  int v6; // eax
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // rdx
  _DWORD *i; // rdx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = ndisRefCountBlockFromRefCountHandle((ULONG_PTR)a1);
  v2 = 0;
  v3 = v1;
  if ( !v1 )
    return -2;
  Type = v1->Type;
  if ( Type )
  {
    if ( Type != 1 || !v3->NumRefTags )
      return (v3->Flags & 2) != 0 ? 255 : -2;
    for ( i = (_DWORD *)v3->RefWithStack + 14; ((*i >> 1) & 0x7FFF) == *i >> 17; i += 16 )
    {
      if ( ++v2 >= (unsigned int)v3->NumRefTags )
        return (v3->Flags & 2) != 0 ? 255 : -2;
    }
    return v2;
  }
  else
  {
    BitMapHeader.SizeOfBitMap = v3->NumRefTags;
    *(&BitMapHeader.SizeOfBitMap + 1) = 0;
    BitMapHeader.Buffer = v3->TaggedRefCounts.RefMask;
    result = RtlFindSetBits(&BitMapHeader, 1u, 0);
    if ( result != -1 )
      return result;
    v6 = 0;
    if ( !v3->NumOverflowTaggedEntries )
      return (v3->Flags & 2) != 0 ? 255 : -2;
    Tags = v3->TaggedRefCounts.Tags;
    while ( !Tags[v6].RefCount )
    {
      if ( ++v6 >= (unsigned int)v3->NumOverflowTaggedEntries )
        return (v3->Flags & 2) != 0 ? 255 : -2;
    }
    return Tags[v6].Tag;
  }
}

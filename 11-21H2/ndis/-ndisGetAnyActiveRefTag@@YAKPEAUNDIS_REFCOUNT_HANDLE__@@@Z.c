/*
 * XREFs of ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C00163B4
 * Callers:
 *     NdisFreeRefCount @ 0x1C0016360 (NdisFreeRefCount.c)
 * Callees:
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C000FFE0 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 */

ULONG __fastcall ndisGetAnyActiveRefTag(struct NDIS_REFCOUNT_HANDLE__ *a1)
{
  struct _NDIS_REFCOUNT_BLOCK *v1; // rax
  unsigned int v2; // ebx
  struct _NDIS_REFCOUNT_BLOCK *v3; // rdi
  int Type; // eax
  ULONG result; // eax
  int v6; // eax
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // rdx
  _DWORD *v8; // rdx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = ndisRefCountBlockFromRefCountHandle((ULONG_PTR)a1);
  v2 = 0;
  v3 = v1;
  if ( !v1 )
    return -2;
  Type = v1->Type;
  if ( !Type )
  {
    BitMapHeader.SizeOfBitMap = v3->NumRefTags;
    *(&BitMapHeader.SizeOfBitMap + 1) = 0;
    BitMapHeader.Buffer = v3->TaggedRefCounts.RefMask;
    result = RtlFindSetBits(&BitMapHeader, 1u, 0);
    if ( result != -1 )
      return result;
    v6 = 0;
    if ( v3->NumOverflowTaggedEntries )
    {
      Tags = v3->TaggedRefCounts.Tags;
      while ( !Tags[v6].RefCount )
      {
        if ( ++v6 >= (unsigned int)v3->NumOverflowTaggedEntries )
          goto LABEL_8;
      }
      return Tags[v6].Tag;
    }
    goto LABEL_8;
  }
  if ( Type != 1 || !v3->NumRefTags )
  {
LABEL_8:
    result = 255;
    if ( (v3->Flags & 2) != 0 )
      return result;
    return -2;
  }
  v8 = (_DWORD *)v3->RefWithStack + 14;
  while ( ((*v8 >> 1) & 0x7FFF) == *v8 >> 17 )
  {
    ++v2;
    v8 += 16;
    if ( v2 >= v3->NumRefTags )
      goto LABEL_8;
  }
  return v2;
}

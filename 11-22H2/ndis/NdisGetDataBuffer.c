/*
 * XREFs of NdisGetDataBuffer @ 0x1C0004270
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0038280 (memmove.c)
 */

PVOID __stdcall NdisGetDataBuffer(
        PNET_BUFFER NetBuffer,
        ULONG BytesNeeded,
        PVOID Storage,
        UINT AlignMultiple,
        UINT AlignOffset)
{
  _MDL *CurrentMdl; // rbx
  unsigned __int64 CurrentMdlOffset; // rsi
  size_t v9; // r14
  char *v10; // rax
  PVOID result; // rax
  char *v12; // r12
  unsigned __int64 ByteCount; // rax
  __int64 v14; // r15
  char *MappedSystemVa; // rax
  size_t v16; // r15
  char *v17; // rdx
  size_t v18; // rdi

  CurrentMdl = NetBuffer->CurrentMdl;
  if ( !BytesNeeded || !CurrentMdl || NetBuffer->DataLength < BytesNeeded )
    return 0LL;
  CurrentMdlOffset = NetBuffer->CurrentMdlOffset;
  v9 = BytesNeeded;
  if ( BytesNeeded + CurrentMdlOffset > CurrentMdl->ByteCount
    || ((CurrentMdl->MdlFlags & 5) == 0
      ? (v10 = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u))
      : (v10 = (char *)CurrentMdl->MappedSystemVa),
        !v10
     || (result = &v10[CurrentMdlOffset], ((unsigned int)result & (AlignMultiple - 1)) != (unsigned __int64)AlignOffset)) )
  {
    if ( Storage )
    {
      v12 = (char *)Storage;
      do
      {
        ByteCount = CurrentMdl->ByteCount;
        if ( CurrentMdlOffset < ByteCount )
          break;
        CurrentMdl = CurrentMdl->Next;
        CurrentMdlOffset -= ByteCount;
      }
      while ( CurrentMdl );
      if ( CurrentMdl )
      {
        while ( v9 )
        {
          v14 = CurrentMdl->ByteCount;
          if ( CurrentMdl->ByteCount )
          {
            if ( (CurrentMdl->MdlFlags & 5) != 0 )
              MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
            else
              MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u);
            if ( !MappedSystemVa )
              return 0LL;
            v16 = v14 - CurrentMdlOffset;
            v17 = &MappedSystemVa[CurrentMdlOffset];
            CurrentMdlOffset = 0LL;
            v18 = v9;
            if ( v9 >= v16 )
              v18 = v16;
            memmove(v12, v17, v18);
            v12 += v18;
            v9 -= v18;
          }
          CurrentMdl = CurrentMdl->Next;
          if ( !CurrentMdl )
            goto LABEL_22;
        }
        return Storage;
      }
LABEL_22:
      if ( !v9 )
        return Storage;
    }
    return 0LL;
  }
  return result;
}

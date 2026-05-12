/*
 * XREFs of memcpy_s @ 0x1C0022C58
 * Callers:
 *     RaBuildDsmRequestForLedState @ 0x1C004CF80 (RaBuildDsmRequestForLedState.c)
 * Callees:
 *     RaidNullReference @ 0x1C0015BF0 (RaidNullReference.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

errno_t __cdecl memcpy_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v8; // ebx

  if ( !MaxCount )
    return 0;
  if ( !a1 )
    goto LABEL_11;
  if ( Src && DstSize >= MaxCount )
  {
    memmove(a1, Src, MaxCount);
    return 0;
  }
  memset(a1, 0, DstSize);
  if ( Src )
  {
    if ( DstSize >= MaxCount )
      return 22;
    v8 = 34;
  }
  else
  {
LABEL_11:
    v8 = 22;
  }
  RaidNullReference();
  return v8;
}

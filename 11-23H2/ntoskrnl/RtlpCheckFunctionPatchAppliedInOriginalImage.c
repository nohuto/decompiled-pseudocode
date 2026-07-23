/*
 * XREFs of RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x14067B45C
 * Callers:
 *     RtlHotPatchSynchronizationRequired @ 0x14067B244 (RtlHotPatchSynchronizationRequired.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x140A764B8 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlApplyHotPatch @ 0x140AAD5E0 (RtlApplyHotPatch.c)
 *     RtlpCheckFunctionPatchApplied @ 0x140AADAD8 (RtlpCheckFunctionPatchApplied.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCheckFunctionPatchAppliedInOriginalImage(
        char *a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  char v5; // r8
  unsigned __int8 v7; // cl
  unsigned __int64 v8; // rcx
  int v10; // eax

  v5 = *a1;
  v7 = a1[1];
  if ( v5 == -21 && v7 >= 0xEEu )
  {
    if ( v7 == 0xF9 && *(a1 - 5) == -23 )
    {
      v8 = (unsigned __int64)&a1[*((int *)a1 - 1)];
      if ( v8 >= (unsigned __int64)a1 && (v8 & 7) == 0 && v8 >= a5 && v8 - a5 <= 0xFFFFFFFF )
        return ((unsigned int)(v8 - a5) >> 13 << 9) + (((unsigned int)(v8 - a5) >> 3) & 0x3FF);
    }
    return 0xFFFFFFFFLL;
  }
  v10 = 0;
  if ( a2 )
  {
    if ( v5 == *a2 )
    {
      LOBYTE(v10) = v7 != a2[1];
      return (unsigned int)(v10 - 2);
    }
    return 0xFFFFFFFFLL;
  }
  return 4294967294LL;
}

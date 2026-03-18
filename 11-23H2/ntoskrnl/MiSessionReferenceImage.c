/*
 * XREFs of MiSessionReferenceImage @ 0x14020A978
 * Callers:
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     MmChangeImageProtection @ 0x140723E40 (MmChangeImageProtection.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14020AB68 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionReferenceImage(__int64 a1)
{
  __int64 result; // rax

  result = MiSessionLookupImage(a1);
  if ( result )
  {
    ++*(_DWORD *)(result + 60);
    return 1LL;
  }
  return result;
}

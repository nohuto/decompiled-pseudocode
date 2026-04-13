/*
 * XREFs of _ValidateImageBase @ 0x180022D80
 * Callers:
 *     _IsNonwritableInCurrentImage @ 0x180022D20 (_IsNonwritableInCurrentImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateImageBase(__int64 a1)
{
  __int64 v1; // rdx

  if ( *(_WORD *)a1 == 23117 && (v1 = a1 + *(int *)(a1 + 60), *(_DWORD *)v1 == 17744) )
    return *(_WORD *)(v1 + 24) == 523;
  else
    return 0LL;
}

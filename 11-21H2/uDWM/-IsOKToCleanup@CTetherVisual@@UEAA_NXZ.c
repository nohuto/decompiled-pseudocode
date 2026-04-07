/*
 * XREFs of ?IsOKToCleanup@CTetherVisual@@UEAA_NXZ @ 0x1800E25F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CTetherVisual::IsOKToCleanup(CTetherVisual *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 50);
  result = 0;
  if ( !v1 || *(_BYTE *)(v1 + 72) )
    return 1;
  return result;
}

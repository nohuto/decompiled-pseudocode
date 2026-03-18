/*
 * XREFs of NVMeSetFeaturesCacheCompletion @ 0x1C0019F40
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeSetFeaturesCacheCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  result = GetSrbExtension(a2);
  if ( *(_BYTE *)(v3 + 3) == 1 && !v4 )
    *(_BYTE *)(v3 + 3) = 4;
  *(_BYTE *)(result + 4253) |= 8u;
  return result;
}

/*
 * XREFs of NtGdiDdDestroyFullscreenSprite @ 0x1C0275930
 * Callers:
 *     <none>
 * Callees:
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026BE20 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiDdDestroyFullscreenSprite(HDC a1, HSPRITE a2)
{
  return SpDdDestroyFullscreenSprite(a1, a2);
}

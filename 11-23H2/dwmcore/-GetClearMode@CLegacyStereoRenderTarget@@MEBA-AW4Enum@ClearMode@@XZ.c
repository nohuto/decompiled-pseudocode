/*
 * XREFs of ?GetClearMode@CLegacyStereoRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x1801C3D30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetClearMode@CLegacyRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x180045060 (-GetClearMode@CLegacyRenderTarget@@MEBA-AW4Enum@ClearMode@@XZ.c)
 */

__int64 __fastcall CLegacyStereoRenderTarget::GetClearMode(__int64 a1)
{
  __int64 result; // rax

  result = CLegacyRenderTarget::GetClearMode(a1);
  if ( (_DWORD)result == 1 )
    return 0LL;
  return result;
}

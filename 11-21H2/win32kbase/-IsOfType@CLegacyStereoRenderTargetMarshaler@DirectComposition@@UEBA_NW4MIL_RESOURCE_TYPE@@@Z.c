/*
 * XREFs of ?IsOfType@CLegacyStereoRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0214B60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CLegacyRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C008B830 (-IsOfType@CLegacyRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall DirectComposition::CLegacyStereoRenderTargetMarshaler::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 95 )
    return 1;
  v2 = DirectComposition::CLegacyRenderTargetMarshaler::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}

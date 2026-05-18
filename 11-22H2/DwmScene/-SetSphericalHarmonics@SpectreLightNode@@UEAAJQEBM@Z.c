/*
 * XREFs of ?SetSphericalHarmonics@SpectreLightNode@@UEAAJQEBM@Z @ 0x180012F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpectreLightNode::SetSphericalHarmonics(SpectreLightNode *this, SpectreLightNode *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  v2 = this - a2;
  v3 = 27LL;
  do
  {
    *(_DWORD *)((char *)a2 + v2 + 72) = *(_DWORD *)a2;
    a2 = (SpectreLightNode *)((char *)a2 + 4);
    --v3;
  }
  while ( v3 );
  return 0LL;
}

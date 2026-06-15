/*
 * XREFs of ?IsEqual@CAudioSessionStore@@UEAA_NPEBG@Z @ 0x180083610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioSessionStore::IsEqual(PCNZWCH *this, const unsigned __int16 *a2)
{
  return CompareStringW(0x7Fu, 1u, a2, -1, this[3], -1) == 2;
}

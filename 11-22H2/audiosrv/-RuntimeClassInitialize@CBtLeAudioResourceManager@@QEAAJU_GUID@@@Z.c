/*
 * XREFs of ?RuntimeClassInitialize@CBtLeAudioResourceManager@@QEAAJU_GUID@@@Z @ 0x1800FD040
 * Callers:
 *     ??$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@@Z @ 0x1800F4A18 (--$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@@Details@W.c)
 * Callees:
 *     memset_0 @ 0x180067A54 (memset_0.c)
 */

__int64 __fastcall CBtLeAudioResourceManager::RuntimeClassInitialize(struct _GUID *this, struct _GUID *a2)
{
  __int64 result; // rax

  memset_0(&this[18], 0, 0x60uLL);
  memset_0(&this[24], 0, 0x60uLL);
  result = 0LL;
  this[2] = *a2;
  return result;
}

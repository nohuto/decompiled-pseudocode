/*
 * XREFs of ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18000A2DC
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18000995C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000A06C (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000A4B0 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180009F8C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 */

bool __fastcall CThumbnailVisual::_IsThumbnailCVIStatic(CThumbnailVisual *this)
{
  __int64 v1; // rax
  char v2; // bl

  v1 = *((_QWORD *)this + 47);
  v2 = 0;
  if ( v1 && (*(_DWORD *)(v1 + 36) & 0x100000) != 0 && *((_BYTE *)this + 482) )
    return CThumbnailVisual::_IsImmersiveIconic(this) == 0;
  return v2;
}

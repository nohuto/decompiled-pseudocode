/*
 * XREFs of ?RebuildInternal@CompositionSpriteShape@Composition@UI@Windows@@UEAAJXZ @ 0x180171440
 * Callers:
 *     <none>
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSpriteShape::RebuildInternal(
        Windows::UI::Composition::CompositionSpriteShape *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 9);
  if ( v1 )
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this - 17) + 456LL),
      *((_DWORD *)this - 8),
      9,
      *(const void **)(v1 + 136),
      (*(_QWORD *)(v1 + 144) - *(_QWORD *)(v1 + 136)) & 0xFFFFFFFFFFFFFFFCuLL);
  *((_BYTE *)this + 16) &= ~1u;
  return 0LL;
}

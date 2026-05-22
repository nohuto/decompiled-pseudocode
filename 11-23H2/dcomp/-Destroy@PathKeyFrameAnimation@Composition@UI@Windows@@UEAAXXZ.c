/*
 * XREFs of ?Destroy@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x180178360
 * Callers:
 *     <none>
 * Callees:
 *     ?DetachConsumer@CompositionPath@Composition@UI@Windows@@QEAAXPEAVCompositor@234@@Z @ 0x180010B88 (-DetachConsumer@CompositionPath@Composition@UI@Windows@@QEAAXPEAVCompositor@234@@Z.c)
 */

void __fastcall Windows::UI::Composition::PathKeyFrameAnimation::Destroy(
        Windows::UI::Composition::PathKeyFrameAnimation *this)
{
  unsigned int v1; // edi
  __int64 v3; // r8
  __int64 v4; // rcx

  v1 = 0;
  *((_QWORD *)this + 68) = *((_QWORD *)this + 67);
  v3 = *((_QWORD *)this + 64);
  if ( (*((_QWORD *)this + 65) - v3) >> 3 )
  {
    v4 = 0LL;
    do
    {
      Windows::UI::Composition::CompositionPath::DetachConsumer(
        *(Windows::UI::Composition::CompositionPath **)(v3 + 8 * v4),
        *((struct Windows::UI::Composition::Compositor **)this + 3));
      v3 = *((_QWORD *)this + 64);
      v4 = ++v1;
    }
    while ( v1 < (unsigned __int64)((*((_QWORD *)this + 65) - v3) >> 3) );
  }
  Windows::UI::Composition::KeyFrameAnimation::Destroy(this);
}

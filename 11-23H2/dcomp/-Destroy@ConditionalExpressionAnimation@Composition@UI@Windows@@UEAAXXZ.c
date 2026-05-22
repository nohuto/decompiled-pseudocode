/*
 * XREFs of ?Destroy@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x180161BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::ConditionalExpressionAnimation::Destroy(
        Windows::UI::Composition::ConditionalExpressionAnimation *this)
{
  void *v2; // rdi

  while ( *((_QWORD *)this + 44) )
  {
    v2 = (void *)*((_QWORD *)this + 44);
    if ( v2 == *((void **)this + 43) )
      *((_QWORD *)this + 43) = 0LL;
    *((_QWORD *)this + 44) = *((_QWORD *)v2 + 1);
    *((_QWORD *)v2 + 1) = 0LL;
    *(_QWORD *)v2 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)v2 + 3);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)v2 + 2);
    operator delete(v2);
  }
  Windows::UI::Composition::CompositionAnimation::Destroy(this);
}

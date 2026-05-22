/*
 * XREFs of ?ReleaseResources@ConditionalExpressionAnimator@Composition@UI@Windows@@AEAAXXZ @ 0x18019AE14
 * Callers:
 *     ?Destroy@ConditionalExpressionAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x18019ADF0 (-Destroy@ConditionalExpressionAnimator@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAVConditionalExpressionAnimation@234@@Z @ 0x18019AEA8 (-RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVComposito.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::ConditionalExpressionAnimator::ReleaseResources(
        Windows::UI::Composition::ConditionalExpressionAnimator *this)
{
  _QWORD *v2; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  while ( *((_QWORD *)this + 37) )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 37);
    if ( v2 == *((_QWORD **)this + 36) )
      *((_QWORD *)this + 36) = 0LL;
    *((_QWORD *)this + 37) = v2[1];
    v2[1] = 0LL;
    *v2 = 0LL;
    v3 = (Microsoft::WRL2::NestableRuntimeClass *)v2[3];
    if ( v3 )
    {
      v2[3] = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
    }
    v4 = (Microsoft::WRL2::NestableRuntimeClass *)v2[2];
    if ( v4 )
    {
      v2[2] = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
    }
    operator delete(v2);
  }
}

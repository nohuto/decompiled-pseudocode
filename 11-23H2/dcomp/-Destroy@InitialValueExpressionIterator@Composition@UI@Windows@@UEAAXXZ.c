/*
 * XREFs of ?Destroy@InitialValueExpressionIterator@Composition@UI@Windows@@UEAAXXZ @ 0x1801A28B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::InitialValueExpressionIterator::Destroy(
        Windows::UI::Composition::InitialValueExpressionIterator *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    *((_QWORD *)this + 7) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  *((_QWORD *)this + 8) = 0LL;
  Microsoft::WRL2::ContextRuntimeClass::Destroy(this);
}

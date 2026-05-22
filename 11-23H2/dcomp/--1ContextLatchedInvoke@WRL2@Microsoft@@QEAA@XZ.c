/*
 * XREFs of ??1ContextLatchedInvoke@WRL2@Microsoft@@QEAA@XZ @ 0x18000F68C
 * Callers:
 *     ??1CompositionAnchor@Composition@UI@Windows@@UEAA@XZ @ 0x18000F604 (--1CompositionAnchor@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Microsoft::WRL2::ContextLatchedInvoke::~ContextLatchedInvoke(
        Microsoft::WRL2::ContextLatchedInvoke *this)
{
  if ( *((_QWORD *)this + 8) || *((_BYTE *)this + 72) )
    Microsoft::WRL2::FailFast::Unexpected("~ContextLatchedInvoke");
  std::_Func_class<void,>::_Tidy();
}

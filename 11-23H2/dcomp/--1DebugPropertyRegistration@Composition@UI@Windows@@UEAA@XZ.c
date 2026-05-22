/*
 * XREFs of ??1DebugPropertyRegistration@Composition@UI@Windows@@UEAA@XZ @ 0x18016AC54
 * Callers:
 *     ??_GDebugPropertyRegistration@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18016B010 (--_GDebugPropertyRegistration@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x180080744 (-_Tidy@-$vector@IV-$allocator@I@std@@@std@@AEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::DebugPropertyRegistration::~DebugPropertyRegistration(
        Windows::UI::Composition::DebugPropertyRegistration *this)
{
  __int64 v2; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx

  std::vector<unsigned int>::_Tidy((__int64)this + 48);
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    *((_QWORD *)this + 5) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v2);
}

/*
 * XREFs of ?RememberRegistrationToken@CompObjectDiagnosticsPrincipal@@QEAAXPEAVDebugPropertyRegistration@Composition@UI@Windows@@@Z @ 0x18019E2C4
 * Callers:
 *     ?DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDebugAnimationCallback@Private@234@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@4@@Z @ 0x18016B67C (-DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDe.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Emplace_reallocate@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18019C258 (--$_Emplace_reallocate@V-$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Micros.c)
 */

void __fastcall CompObjectDiagnosticsPrincipal::RememberRegistrationToken(
        CompObjectDiagnosticsPrincipal *this,
        struct Windows::UI::Composition::DebugPropertyRegistration *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rbx
  Microsoft::WRL2::NestableRuntimeClass **v4; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  v2 = a2;
  if ( a2 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
  v4 = (Microsoft::WRL2::NestableRuntimeClass **)*((_QWORD *)this + 13);
  if ( v4 == *((Microsoft::WRL2::NestableRuntimeClass ***)this + 14) )
  {
    std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::DebugPropertyRegistration>>::_Emplace_reallocate<Microsoft::WRL2::RefPtr<Windows::UI::Composition::DebugPropertyRegistration>>(
      (__int64)this + 96,
      v4,
      &v5);
    v2 = v5;
  }
  else
  {
    *v4 = 0LL;
    if ( v4 != &v5 )
    {
      *v4 = v2;
      v2 = 0LL;
    }
    *((_QWORD *)this + 13) += 8LL;
  }
  if ( v2 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
}

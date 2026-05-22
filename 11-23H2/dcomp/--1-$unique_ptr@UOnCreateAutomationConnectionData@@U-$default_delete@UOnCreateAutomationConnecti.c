/*
 * XREFs of ??1?$unique_ptr@UOnCreateAutomationConnectionData@@U?$default_delete@UOnCreateAutomationConnectionData@@@wistd@@@wistd@@QEAA@XZ @ 0x1801602D4
 * Callers:
 *     ?OnCreateAutomationConnection@UiaEndpointNotifierCallback@Composition@UI@Windows@@UEAAJU_GUID@@PEBG@Z @ 0x180160320 (-OnCreateAutomationConnection@UiaEndpointNotifierCallback@Composition@UI@Windows@@UEAAJU_GUID@@P.c)
 *     ?ReturnAutomationProviderToUIA@UiaEndpointNotifierCallback@Composition@UI@Windows@@CAJPEAX@Z @ 0x180160488 (-ReturnAutomationProviderToUIA@UiaEndpointNotifierCallback@Composition@UI@Windows@@CAJPEAX@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180022CC4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall wistd::unique_ptr<OnCreateAutomationConnectionData,wistd::default_delete<OnCreateAutomationConnectionData>>::~unique_ptr<OnCreateAutomationConnectionData,wistd::default_delete<OnCreateAutomationConnectionData>>(
        Microsoft::WRL2::NestableRuntimeClass ***a1)
{
  Microsoft::WRL2::NestableRuntimeClass **v1; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    std::wstring::_Tidy_deallocate((__int64)(v1 + 3));
    v2 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
    }
    operator delete(v1);
  }
}

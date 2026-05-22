/*
 * XREFs of ?RuntimeClassInitialize@DebugPropertyRegistration@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVDebugReference@Private@234@V?$span@$$CBI$0?0@gsl@@@Z @ 0x18019FBE0
 * Callers:
 *     ??$MakeAndInitialize2@VDebugPropertyRegistration@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVDebugReference@Private@234@V?$span@I$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugPropertyRegistration@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVDebugReference@Private@456@$$QEAV?$span@I$0?0@gsl@@@Z @ 0x1801699E0 (--$MakeAndInitialize2@VDebugPropertyRegistration@Composition@UI@Windows@@V1234@AEAPEAVCompositor.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?reserve@?$vector@IV?$allocator@I@std@@@std@@QEAAX_K@Z @ 0x180033F34 (-reserve@-$vector@IV-$allocator@I@std@@@std@@QEAAX_K@Z.c)
 *     ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z @ 0x180058910 (-RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x180169E1C (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::DebugPropertyRegistration::RuntimeClassInitialize(
        __int64 a1,
        struct Microsoft::WRL2::ContextSession *a2,
        Microsoft::WRL2::NestableRuntimeClass *a3,
        unsigned __int64 *a4)
{
  int v7; // eax
  unsigned int v8; // edi
  Microsoft::WRL2::NestableRuntimeClass *v10; // rcx
  unsigned __int64 v11; // rbx
  _DWORD *v12; // rdi
  _DWORD *v13; // rbx
  _BYTE *v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v7 = Microsoft::WRL2::ContextRuntimeClass::RuntimeClassInitialize((Microsoft::WRL2::ContextRuntimeClass *)a1, a2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( *(Microsoft::WRL2::NestableRuntimeClass **)(a1 + 40) != a3 )
    {
      if ( a3 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a3);
      v10 = *(Microsoft::WRL2::NestableRuntimeClass **)(a1 + 40);
      *(_QWORD *)(a1 + 40) = a3;
      if ( v10 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
    }
    v11 = *a4;
    std::vector<unsigned int>::reserve((char *)(a1 + 48), *a4);
    v12 = (_DWORD *)a4[1];
    v13 = &v12[v11];
    while ( v12 != v13 )
    {
      v14 = *(_BYTE **)(a1 + 56);
      if ( v14 == *(_BYTE **)(a1 + 64) )
      {
        std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>((__int64 *)(a1 + 48), v14, v12);
      }
      else
      {
        *(_DWORD *)v14 = *v12;
        *(_QWORD *)(a1 + 56) += 4LL;
      }
      ++v12;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdebugpropertyregistration.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}

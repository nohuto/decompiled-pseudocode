/*
 * XREFs of ??$construct@UContributor@CompObjectDiagnosticsPrincipal@@AEAPEAV2@AEBIPEAUHSTRING__@@PEAU3@@?$_Default_allocator_traits@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@SAXAEAV?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@1@QEAUContributor@CompObjectDiagnosticsPrincipal@@AEAPEAV4@AEBI$$QEAPEAUHSTRING__@@4@Z @ 0x18019C52C
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCompObjectDiagnosticsPrincipal@@AEBIPEAUHSTRING__@@PEAU2@@?$vector@UContributor@CompObjectDiagnosticsPrincipal@@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@QEAAPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU23@AEAPEAV3@AEBI$$QEAPEAUHSTRING__@@3@Z @ 0x18019C13C (--$_Emplace_reallocate@AEAPEAVCompObjectDiagnosticsPrincipal@@AEBIPEAUHSTRING__@@PEAU2@@-$vector.c)
 *     ?AddContributor@CompObjectDiagnosticsPrincipal@@QEAAXIPEAV1@AEBUObjectPropertyStringTuple@@@Z @ 0x18019CD1C (-AddContributor@CompObjectDiagnosticsPrincipal@@QEAAXIPEAV1@AEBUObjectPropertyStringTuple@@@Z.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCompObjectDiagnosticsPrincipal@@@WRL@Microsoft@@IEBAXXZ @ 0x18016C9B0 (-InternalAddRef@-$ComPtr@VCompObjectDiagnosticsPrincipal@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<CompObjectDiagnosticsPrincipal::Contributor>>::construct<CompObjectDiagnosticsPrincipal::Contributor,CompObjectDiagnosticsPrincipal * &,unsigned int const &,HSTRING__ *,HSTRING__ *>(
        HSTRING a1,
        __int64 a2,
        __int64 *a3,
        int *a4,
        HSTRING *a5,
        HSTRING a6)
{
  int v7; // ebx
  __int64 v8; // rax
  HSTRING v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v7 = *a4;
  a6 = *(HSTRING *)a6;
  v8 = *a3;
  v10 = *a5;
  *(_QWORD *)a2 = v8;
  Microsoft::WRL::ComPtr<CompObjectDiagnosticsPrincipal>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a2);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 8) = v7;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a2 + 16), &v10);
  return Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a2 + 24), &a6);
}

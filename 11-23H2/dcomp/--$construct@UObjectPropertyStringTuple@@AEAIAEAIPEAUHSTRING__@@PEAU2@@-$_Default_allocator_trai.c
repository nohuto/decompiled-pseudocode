/*
 * XREFs of ??$construct@UObjectPropertyStringTuple@@AEAIAEAIPEAUHSTRING__@@PEAU2@@?$_Default_allocator_traits@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@SAXAEAV?$allocator@UObjectPropertyStringTuple@@@1@QEAUObjectPropertyStringTuple@@AEAI2$$QEAPEAUHSTRING__@@3@Z @ 0x180003570
 * Callers:
 *     ?PopulateReferenceListForDebugProperties@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAXAEAV?$vector@UObjectPropertyStringTuple@@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@@Z @ 0x1800468E0 (-PopulateReferenceListForDebugProperties@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<ObjectPropertyStringTuple>>::construct<ObjectPropertyStringTuple,unsigned int &,unsigned int &,HSTRING__ *,HSTRING__ *>(
        HSTRING a1,
        __int64 a2,
        int *a3,
        int *a4,
        HSTRING *a5,
        HSTRING a6)
{
  HSTRING *v6; // rbx
  int v7; // eax
  int v8; // ecx
  HSTRING v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v6 = (HSTRING *)(a2 + 16);
  a6 = *(HSTRING *)a6;
  v7 = *a3;
  v10 = *a5;
  v8 = *a4;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 4) = v8;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)a2 = v7;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a2 + 8), &v10);
  return Microsoft::WRL::Wrappers::HString::Set(v6, &a6);
}

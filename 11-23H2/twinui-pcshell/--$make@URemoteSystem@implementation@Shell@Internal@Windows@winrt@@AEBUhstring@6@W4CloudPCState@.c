/*
 * XREFs of ??$make@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@3456@@winrt@@YA?A_PAEBUhstring@0@$$QEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x18070C2B4
 * Callers:
 *     ?CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@3456@AEBU7RemoteSystemData@@@Z @ 0x18070FE84 (-CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AURe.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBW4CloudPCState@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1807292FC (--0RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBW4CloudPCStat.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystem,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // rbx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+68h] [rbp+20h]

  v8 = (__int64)a1;
  v6 = operator new(0x40uLL);
  v9 = v6;
  v8 = 1200000000LL;
  winrt::Windows::Internal::Shell::implementation::RemoteSystem::RemoteSystem(v6, a2, a3, &v8);
  *v6 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystem>::`vftable';
  *a1 = v6 + 2;
  return a1;
}

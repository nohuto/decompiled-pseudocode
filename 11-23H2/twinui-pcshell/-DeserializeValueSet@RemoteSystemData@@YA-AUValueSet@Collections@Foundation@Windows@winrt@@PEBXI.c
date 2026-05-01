/*
 * XREFs of ?DeserializeValueSet@RemoteSystemData@@YA?AUValueSet@Collections@Foundation@Windows@winrt@@PEBXI@Z @ 0x180710E60
 * Callers:
 *     ?CreateFromBytes@RemoteSystem@RemoteSystemData@@SA?AU12@PEBXI@Z @ 0x18071014C (-CreateFromBytes@RemoteSystem@RemoteSystemData@@SA-AU12@PEBXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$ActivateInstance@UValueSet@Collections@Foundation@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUValueSet@Collections@123@XZ @ 0x180680908 (--$ActivateInstance@UValueSet@Collections@Foundation@Windows@winrt@@@IActivationFactory@Foundati.c)
 *     ??$call@P6A?AUValueSet@Collections@Foundation@Windows@winrt@@AEBUIActivationFactory@345@@Z@?$factory_cache_entry@UValueSet@Collections@Foundation@Windows@winrt@@UIActivationFactory@345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUValueSet@Collections@Foundation@Windows@2@AEBUIActivationFactory@562@@Z@Z @ 0x180680A30 (--$call@P6A-AUValueSet@Collections@Foundation@Windows@winrt@@AEBUIActivationFactory@345@@Z@-$fac.c)
 *     ??$ActivateInstance@UDataWriter@Streams@Storage@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDataWriter@Streams@Storage@23@XZ @ 0x180709738 (--$ActivateInstance@UDataWriter@Streams@Storage@Windows@winrt@@@IActivationFactory@Foundation@Wi.c)
 *     ??$call@P6A?AUDataWriter@Streams@Storage@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UDataWriter@Streams@Storage@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDataWriter@Streams@Storage@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x18070B5A0 (--$call@P6A-AUDataWriter@Streams@Storage@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@.c)
 *     ?DetachBuffer@?$consume_Windows_Storage_Streams_IDataWriter@UIDataWriter@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180711090 (-DetachBuffer@-$consume_Windows_Storage_Streams_IDataWriter@UIDataWriter@Streams@Storage@Windows.c)
 */

// Hidden C++ exception states: #wind=6
void (__fastcall ***__fastcall RemoteSystemData::DeserializeValueSet(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        unsigned int a3))(_QWORD, __int64 *, __int64 *)
{
  signed int v6; // eax
  signed int v7; // eax
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v9; // rbx
  signed int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-28h] BYREF
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v13)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall *v14[3])(__int64, __int64 *); // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF

  v14[1] = (void (__fastcall *)(__int64, __int64 *))&qword_180990B58;
  _InterlockedAdd64(&qword_180990B58, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::DataWriter,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Storage::Streams::DataWriter>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::DataWriter,winrt::Windows::Foundation::IActivationFactory>,
      &v15);
    _InterlockedDecrement64(&qword_180990B58);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990B58);
    v13 = _lambda_8441d61fff3622fd578730ad9b988339_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Storage::Streams::DataWriter,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Storage::Streams::DataWriter (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      a1,
      (__int64)&v15,
      (void (__fastcall **)(__int64, __int64 *))&v13);
  }
  if ( !a3 )
    a2 = 1LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v15 + 96LL))(v15, a3, a2);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  winrt::impl::consume_Windows_Storage_Streams_IDataWriter<winrt::Windows::Storage::Streams::IDataWriter>::DetachBuffer(
    &v15,
    &v12);
  v16 = 0LL;
  v7 = RoCreatePropertySetSerializer(&v16);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  v14[2] = (void (__fastcall *)(__int64, __int64 *))&qword_180990B98;
  _InterlockedAdd64(&qword_180990B98, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Collections::ValueSet,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Foundation::Collections::ValueSet>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Collections::ValueSet,winrt::Windows::Foundation::IActivationFactory>,
      a1);
    _InterlockedDecrement64(&qword_180990B98);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990B98);
    v14[0] = (void (__fastcall *)(__int64, __int64 *))_lambda_f635e0c3324166f0c8ad227de6175e83_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Collections::ValueSet,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Foundation::Collections::ValueSet (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      v8,
      (__int64)a1,
      v14);
  }
  v9 = v12;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v16 + 56LL))(v16, *a1, v12);
  if ( v10 < 0 )
    winrt::throw_hresult(v10);
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  return a1;
}

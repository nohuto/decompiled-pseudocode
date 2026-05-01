/*
 * XREFs of ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x180716AB0
 * Callers:
 *     ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x180711B68 (-GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$as@UIBufferByteAccess@Streams@Storage@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIBufferByteAccess@Streams@Storage@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18070B37C (--$as@UIBufferByteAccess@Streams@Storage@Windows@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt.c)
 *     ??$call@AEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@?$factory_cache_entry@UBuffer@Streams@Storage@Windows@winrt@@UIBufferFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@Z @ 0x18070B460 (--$call@AEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@-$factory_cache_entry@UBuffer@Streams@St.c)
 *     ??$make_shared@UInProcPropertyStore@Util@@$$V@std@@YA?AV?$shared_ptr@UInProcPropertyStore@Util@@@0@XZ @ 0x18070CC4C (--$make_shared@UInProcPropertyStore@Util@@$$V@std@@YA-AV-$shared_ptr@UInProcPropertyStore@Util@@.c)
 *     ??$wait_get@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@@Z @ 0x18070E0F8 (--$wait_get@U-$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@W.c)
 *     ??$wait_get@U?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@1@@Z @ 0x18070E160 (--$wait_get@U-$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@.c)
 *     ??1?$unique_ptr@XP6AHPEBX@Z@std@@QEAA@XZ @ 0x18070E9F8 (--1-$unique_ptr@XP6AHPEBX@Z@std@@QEAA@XZ.c)
 *     ?Create@?$consume_Windows_Storage_Streams_IBufferFactory@UIBufferFactory@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x18070FB8C (-Create@-$consume_Windows_Storage_Streams_IBufferFactory@UIBufferFactory@Streams@Storage@Windows.c)
 *     ?CreateFileMappingName@FileMappingHelpers@Util@@QEAA?AUhstring@winrt@@QEAUHWND__@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBU34@@Z @ 0x18070FF08 (-CreateFileMappingName@FileMappingHelpers@Util@@QEAA-AUhstring@winrt@@QEAUHWND__@@AEBV-$basic_st.c)
 *     ?ReadAsync@?$consume_Windows_Storage_Streams_IInputStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIBuffer@Streams@Storage@Windows@3@IAEBW4InputStreamOptions@5673@@Z @ 0x1807169D8 (-ReadAsync@-$consume_Windows_Storage_Streams_IInputStream@UIRandomAccessStream@Streams@Storage@W.c)
 *     ?ReadContentsFromFile@Util@@YA?AUIBuffer@Streams@Storage@Windows@winrt@@PEAE@Z @ 0x180717068 (-ReadContentsFromFile@Util@@YA-AUIBuffer@Streams@Storage@Windows@winrt@@PEAE@Z.c)
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180718CC8 (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?TryOpenFileMappingHandleForWindow@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@_JAEBUhstring@winrt@@@Z @ 0x1807197A0 (-TryOpenFileMappingHandleForWindow@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_re.c)
 */

// Hidden C++ exception states: #wind=15 #try_helpers=1
_QWORD *__fastcall Util::FileMappingHelpers::ReadBufferFromSharedMemory(
        _BYTE *a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 *a4)
{
  std::_Ref_count_base *v7; // r14
  __int64 v8; // r12
  __int64 *v9; // rax
  volatile signed __int32 **v10; // rax
  volatile signed __int32 *v11; // rbx
  char *v12; // rbx
  __int64 *v13; // rdx
  void (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // rcx
  unsigned int v15; // eax
  __int64 *v16; // rax
  signed int v17; // eax
  std::_Ref_count_base *v18; // rcx
  void (__fastcall ***v20)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp-E8h] BYREF
  volatile signed __int32 *v21; // [rsp+38h] [rbp-E0h] BYREF
  volatile signed __int32 *v22; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-D0h] BYREF
  BOOL (__stdcall *v24)(LPCVOID); // [rsp+50h] [rbp-C8h] BYREF
  volatile signed __int32 *v25; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, void *, __int64 *); // [rsp+70h] [rbp-A8h] BYREF
  HANDLE hFileMappingObject; // [rsp+78h] [rbp-A0h] BYREF
  BOOL (__stdcall *v30)(LPCVOID); // [rsp+80h] [rbp-98h] BYREF
  std::_Ref_count_base *v31; // [rsp+88h] [rbp-90h]
  __int128 v32; // [rsp+90h] [rbp-88h]
  unsigned int *v33; // [rsp+A8h] [rbp-70h] BYREF
  _QWORD v34[3]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v35[10]; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v36; // [rsp+120h] [rbp+8h] BYREF
  _QWORD *v37; // [rsp+128h] [rbp+10h]
  __int64 *v38; // [rsp+138h] [rbp+20h]

  v38 = a4;
  v37 = a2;
  v21 = 0LL;
  if ( *a1 )
  {
    v9 = std::make_shared<Util::InProcPropertyStore,>(&v30);
    v8 = *v9;
    *(_QWORD *)&v32 = *v9;
    v7 = (std::_Ref_count_base *)v9[1];
    *((_QWORD *)&v32 + 1) = v7;
    *v9 = 0LL;
    v9[1] = 0LL;
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
  }
  else
  {
    v32 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
  }
  if ( *a1 )
  {
    v10 = (volatile signed __int32 **)(*(__int64 (__fastcall **)(__int64, volatile signed __int32 **, _QWORD))(*(_QWORD *)v8 + 8LL))(
                                        v8,
                                        &v25,
                                        a3);
    v11 = 0LL;
    if ( &v21 != v10 )
    {
      v11 = *v10;
      *v10 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
      v21 = v11;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v25);
    if ( !v11 )
    {
      *a2 = 0LL;
      goto LABEL_43;
    }
  }
  v36 = a3;
  winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)&v21, v35);
  Util::FileMappingHelpers::CreateFileMappingName(a1, (struct winrt::impl::shared_hstring_header *)&v22, a3, v35, v38);
  Util::TryOpenFileMappingHandleForWindow(&hFileMappingObject, a3, &v22);
  v12 = (char *)hFileMappingObject;
  if ( (char *)hFileMappingObject - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    if ( *a1 )
    {
      v24 = 0LL;
      v13 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64, volatile signed __int32 **))(*(_QWORD *)v8 + 16LL))(
                         v8,
                         &v27,
                         v36,
                         &v22);
      winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>>(
        &v20,
        v13);
      if ( v27 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
      v26 = 0LL;
      if ( winrt::Windows::Foundation::operator==(&v20, &v26) )
      {
        *a2 = 0LL;
        if ( v20 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
        if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v12);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
        if ( v7 )
          std::_Ref_count_base::_Decref(v7);
      }
      else
      {
        LODWORD(v36) = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size(&v20);
        v33 = (unsigned int *)&v36;
        v34[1] = &qword_180990B78;
        _InterlockedIncrement64(&qword_180990B78);
        if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory> )
        {
          winrt::impl::consume_Windows_Storage_Streams_IBufferFactory<winrt::Windows::Storage::Streams::IBufferFactory>::Create(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory>,
            &v23,
            v36);
          _InterlockedDecrement64(&qword_180990B78);
        }
        else
        {
          _InterlockedDecrement64(&qword_180990B78);
          winrt::impl::factory_cache_entry<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory>::call<_lambda_e7631c1690498db2dc470481c9b63fc5_ &>(
            v14,
            (__int64)&v23,
            &v33);
        }
        LODWORD(v26) = 0;
        v15 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size(&v20);
        v16 = winrt::impl::consume_Windows_Storage_Streams_IInputStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::ReadAsync(
                (__int64 *)&v20,
                &v25,
                &v23,
                v15,
                (unsigned int *)&v26);
        winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Storage::Streams::IBuffer,unsigned int>>(
          (__int64)&v28,
          v16);
        if ( v25 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
        winrt::impl::as<Windows::Storage::Streams::IBufferByteAccess,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
          &v30,
          v28);
        v24 = v30;
        v17 = (*(__int64 (__fastcall **)(BOOL (__stdcall *)(LPCVOID), _QWORD *))(*(_QWORD *)v30 + 24LL))(v30, v34);
        if ( v17 < 0 )
          winrt::throw_hresult(v17);
        if ( v28 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v28);
        if ( v23 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
        if ( v20 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
        Util::ReadContentsFromFile(a2, v34[0]);
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v24);
        if ( (char *)hFileMappingObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hFileMappingObject);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
        v18 = (std::_Ref_count_base *)*((_QWORD *)&v32 + 1);
        if ( *((_QWORD *)&v32 + 1) )
          goto LABEL_45;
      }
      goto LABEL_46;
    }
    *a2 = 0LL;
    if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_42;
  }
  else
  {
    v30 = UnmapViewOfFile;
    v31 = (std::_Ref_count_base *)MapViewOfFile(hFileMappingObject, 4u, 0, 0, 0LL);
    Util::ReadContentsFromFile(a2, v31);
    std::unique_ptr<void,int (*)(void const *)>::~unique_ptr<void,int (*)(void const *)>((__int64)&v30);
  }
  CloseHandle(v12);
LABEL_42:
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
LABEL_43:
  if ( v7 )
  {
    v18 = v7;
LABEL_45:
    std::_Ref_count_base::_Decref(v18);
  }
LABEL_46:
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
  return a2;
}

/*
 * XREFs of ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18002933C
 * Callers:
 *     ?EnableContextualSuggestions@ContentManagement@@YAJE@Z @ 0x1800313DC (-EnableContextualSuggestions@ContentManagement@@YAJE@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VFTMEventDelegate@?1???$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@V1?1???$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJ012@Z@$$V@Details@WRL@Microsoft@@YAJPEAPEAVFTMEventDelegate@?1???$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@@Z @ 0x180027060 (--$MakeAndInitialize@VFTMEventDelegate@-1---$WaitForCompletion@UIAsyncActionCompletedHandler@Fou.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18003F7E0 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
        int (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        int a2,
        __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // r9d
  unsigned int v6; // eax
  int v7; // ecx
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int v10; // [rsp+20h] [rbp-20h]
  unsigned int v11; // [rsp+28h] [rbp-18h]
  void *v12[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  int v14; // [rsp+68h] [rbp+28h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  int (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp+38h] BYREF

  v15 = a3;
  v14 = a2;
  v16 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a1;
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[1])(a1);
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  v4 = ___MakeAndInitialize_VFTMEventDelegate__1____WaitForCompletion_UIAsyncActionCompletedHandler_Foundation_Windows__UIAsyncAction_23___YAJPEAUIAsyncAction_Foundation_Windows__W4tagCOWAIT_FLAGS__PEAX_Z_V1_1____WaitForCompletion_UIAsyncActionCompletedHandler_Foundation_Windows__UIAsyncAction_23___YAJ012_Z___V_Details_WRL_Microsoft__YAJPEAPEAVFTMEventDelegate__1____WaitForCompletion_UIAsyncActionCompletedHandler_Foundation_Windows__UIAsyncAction_23___YAJPEAUIAsyncAction_Foundation_Windows__W4tagCOWAIT_FLAGS__PEAX_Z__Z(&v15);
  v14 = v4;
  if ( v4 >= 0 )
  {
    v4 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a1)[6])(a1, v15);
    v14 = v4;
    if ( v4 >= 0 )
    {
      v12[0] = *(void **)(v15 + 56);
      v12[1] = 0LL;
      v6 = SHProcessMessagesUntilEventsEx((HWND)v12[0], v12, 1u, v5, v10, v11);
      v7 = v14;
      if ( v6 == -1 )
        v7 = -2147467259;
      v14 = v7;
      v13 = 0LL;
      if ( v7 >= 0 && *(_DWORD *)(v15 + 48) != 1 )
      {
        v8 = **a1;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
        if ( v8(a1, &GUID_00000036_0000_0000_c000_000000000046, &v13) >= 0 )
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 64LL))(v13, &v14);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
      v4 = v14;
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  return (unsigned int)v4;
}

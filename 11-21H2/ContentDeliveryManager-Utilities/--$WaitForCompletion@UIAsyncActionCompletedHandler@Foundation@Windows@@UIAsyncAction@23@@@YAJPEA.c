/*
 * XREFs of ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180026F4C
 * Callers:
 *     ?EnableContextualSuggestions@ContentManagement@@YAJE@Z @ 0x180031ECC (-EnableContextualSuggestions@ContentManagement@@YAJE@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800243F4 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180027EB0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x180044BB0 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
        int (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        signed int a2,
        char *a3)
{
  char *v4; // rax
  char *v5; // rdi
  signed int v6; // ebx
  _QWORD *v7; // rbx
  HANDLE Event; // rax
  signed int LastError; // eax
  __int64 v10; // rax
  unsigned int v11; // r9d
  unsigned int v12; // eax
  int (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v14; // rax
  __int64 v15; // rcx
  char *v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-28h]
  unsigned int v19; // [rsp+28h] [rbp-20h]
  void *v20[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v21; // [rsp+70h] [rbp+28h] BYREF
  signed int v22; // [rsp+78h] [rbp+30h] BYREF
  char *v23; // [rsp+80h] [rbp+38h]
  int (__fastcall ***v24)(_QWORD, _QWORD, _QWORD); // [rsp+88h] [rbp+40h]

  v23 = a3;
  v22 = a2;
  v24 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a1;
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[1])(a1);
  v23 = 0LL;
  v4 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_5:
    v22 = v6;
    goto LABEL_24;
  }
  v7 = v4 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 8));
  *((_DWORD *)v5 + 11) = 1;
  *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncActionCompletedHandler'};
  *v7 = `wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>'::`2'::CompletionDelegate::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v5 = `WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>'::`2'::FTMEventDelegate::`vftable';
  *v7 = `wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>'::`2'::CompletionDelegate::`vftable';
  *((_DWORD *)v5 + 12) = 0;
  *((_QWORD *)v5 + 7) = 0LL;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  *((_QWORD *)v5 + 7) = Event;
  if ( Event )
  {
    v10 = *(_QWORD *)v5;
  }
  else
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    v10 = *(_QWORD *)v5;
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(char *))(v10 + 16))(v5);
      goto LABEL_5;
    }
  }
  (*(void (__fastcall **)(char *))(v10 + 8))(v5);
  v23 = v5;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), char *))(*a1)[6])(a1, v23);
  v22 = v6;
  if ( v6 >= 0 )
  {
    v20[0] = *((void **)v23 + 7);
    v20[1] = 0LL;
    v12 = SHProcessMessagesUntilEventsEx((HWND)v20[0], v20, 1u, v11, v18, v19);
    v6 = v22;
    if ( v12 == -1 )
      v6 = -2147467259;
    v22 = v6;
    v21 = 0LL;
    if ( v6 >= 0 && *((_DWORD *)v23 + 12) != 1 )
    {
      v13 = **a1;
      v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v21);
      if ( v13(a1, &GUID_00000036_0000_0000_c000_000000000046, v14) >= 0 )
        (*(void (__fastcall **)(__int64, signed int *))(*(_QWORD *)v21 + 64LL))(v21, &v22);
      v6 = v22;
    }
    v15 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v6 = v22;
    }
  }
LABEL_24:
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[2])(a1);
  return (unsigned int)v6;
}

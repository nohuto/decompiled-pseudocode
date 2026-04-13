/*
 * XREFs of ??_GCompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAPEAXI@Z @ 0x18002F4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180030AC0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall `wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider *> *>'::`2'::CompletionDelegate::`scalar deleting destructor'(
        __int64 a1,
        void *a2)
{
  char v2; // di
  wil::details *v4; // rcx
  __int64 v5; // rcx

  v2 = (char)a2;
  v4 = *(wil::details **)(a1 + 56);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  *(_DWORD *)(a1 + 44) = -1073741823;
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (v2 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}

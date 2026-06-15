/*
 * XREFs of ??$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationManager@@@Z @ 0x180007BFC
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000CDB0 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006834 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationManager,CApplicationManager,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  void *v5; // rbp
  DWORD LastError; // ebx
  const char *v7; // r9
  int v8; // ebx
  signed __int32 v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v2 = operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
    return 2147942414LL;
  v2[3] = 1;
  *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v3 = &CApplicationManager::`vftable';
  *((_QWORD *)v3 + 2) = 0LL;
  *((_WORD *)v3 + 12) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v3 + 8), 0, 0);
  *((_QWORD *)v3 + 9) = 0LL;
  *((_QWORD *)v3 + 10) = 0LL;
  *((_QWORD *)v3 + 11) = 0LL;
  *((_QWORD *)v3 + 12) = 0LL;
  *((_QWORD *)v3 + 13) = 0LL;
  v3[28] = 10;
  InitializeSRWLock((PSRWLOCK)v3 + 15);
  *((_QWORD *)v3 + 16) = 0LL;
  *((_QWORD *)v3 + 17) = 0LL;
  *((_QWORD *)v3 + 18) = 0LL;
  *((_QWORD *)v3 + 19) = 0LL;
  *((_QWORD *)v3 + 20) = 0LL;
  v3[42] = 10;
  v5 = (void *)*((_QWORD *)v3 + 2);
  if ( v5 )
  {
    LastError = GetLastError();
    LocalFree(v5);
    SetLastError(LastError);
  }
  *((_QWORD *)v3 + 2) = 0LL;
  if ( ConvertStringSidToSidW(
         L"S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-1159816984-2199008581-497492991",
         (PSID *)v3 + 2)
    || (v8 = wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x18C,
               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
               v7),
        v8 >= 0) )
  {
    do
      v9 = v3[3];
    while ( v9 != 0x7FFFFFFF && v9 != _InterlockedCompareExchange(v3 + 3, v9 + 1, v9) );
    *a1 = v3;
    v8 = 0;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v3);
  return (unsigned int)v8;
}

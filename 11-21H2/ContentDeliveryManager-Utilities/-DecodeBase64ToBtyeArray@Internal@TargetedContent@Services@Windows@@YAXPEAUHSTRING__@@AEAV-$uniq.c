/*
 * XREFs of ?DecodeBase64ToBtyeArray@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x1800A4B1C
 * Callers:
 *     ?Base64BiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x1800A46F0 (-Base64BiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$uni.c)
 *     ?DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z @ 0x1800A4A60 (-DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microso.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UICryptographicBufferStatics@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800A4528 (--$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA-AV-.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A72F0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Windows::Services::TargetedContent::Internal::DecodeBase64ToBtyeArray(
        __int64 a1,
        void **a2,
        _DWORD *a3)
{
  int v6; // eax
  int v7; // eax
  unsigned int v8; // r8d
  const char *v9; // r9
  void *v10; // r14
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, SIZE_T *, LPVOID *); // rsi
  DWORD LastError; // edi
  int v14; // eax
  LPVOID v15; // rsi
  void *v16; // rcx
  void *v17; // rdi
  DWORD v18; // ebx
  __int64 v19; // rcx
  int v20; // [rsp+20h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  __int64 v22; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  SIZE_T cb; // [rsp+80h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0;
  wil::GetActivationFactory<Windows::Security::Cryptography::ICryptographicBufferStatics>(
    (const WCHAR *)&v22,
    (__int64)a2,
    (unsigned int)a3);
  v21 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v22 + 104LL))(v22, a1, &v21);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      287LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6,
      v20);
  v7 = (*(__int64 (__fastcall **)(__int64, SIZE_T *))(*(_QWORD *)v21 + 56LL))(v21, &cb);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      289LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v7,
      v20);
  v10 = CoTaskMemAlloc((unsigned int)cb);
  pv = v10;
  if ( !v10 )
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x123, v8, v9);
  v11 = v22;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, SIZE_T *, LPVOID *))(*(_QWORD *)v22 + 80LL);
  LastError = GetLastError();
  CoTaskMemFree(v10);
  SetLastError(LastError);
  pv = 0LL;
  v14 = v12(v11, v21, &cb, &pv);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      292LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v14,
      v20);
  *a3 = cb;
  v15 = pv;
  v16 = 0LL;
  pv = 0LL;
  v17 = *a2;
  if ( *a2 )
  {
    v18 = GetLastError();
    CoTaskMemFree(v17);
    SetLastError(v18);
    v16 = pv;
  }
  *a2 = v15;
  if ( v16 )
    CoTaskMemFree(v16);
  v19 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
}

/*
 * XREFs of ?GuidBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x1800A5A90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A72F0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Services::TargetedContent::Internal::GuidBiPredicateCreator(HSTRING a1, void **a2, _DWORD *a3)
{
  const OLECHAR *StringRawBuffer; // rax
  HRESULT v6; // eax
  GUID *v7; // rax
  unsigned int v8; // r8d
  const char *v9; // r9
  GUID *v10; // rdi
  void *v11; // rsi
  DWORD LastError; // ebx
  int v13; // [rsp+20h] [rbp-38h]
  GUID pclsid; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a3 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  v6 = CLSIDFromString(StringRawBuffer, &pclsid);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      271LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6,
      v13);
  v7 = (GUID *)CoTaskMemAlloc(0x10uLL);
  v10 = v7;
  if ( !v7 )
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x111, v8, v9);
  *v7 = pclsid;
  *a3 = 16;
  v11 = *a2;
  if ( *a2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v11);
    SetLastError(LastError);
  }
  *a2 = v10;
}

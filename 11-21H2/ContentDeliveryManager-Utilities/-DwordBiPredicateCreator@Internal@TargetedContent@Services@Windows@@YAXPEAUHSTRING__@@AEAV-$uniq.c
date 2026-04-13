/*
 * XREFs of ?DwordBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x1800A4D60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A72F0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@PEA_KH@Z @ 0x1800A731C (-stoi@std@@YAHAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@1@PEA_KH@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Windows::Services::TargetedContent::Internal::DwordBiPredicateCreator(
        HSTRING a1,
        void **a2,
        _DWORD *a3)
{
  char *StringRawBuffer; // rax
  unsigned __int64 v6; // r8
  int v7; // ebx
  _DWORD *v8; // rax
  unsigned int v9; // r8d
  const char *v10; // r9
  _DWORD *v11; // rdi
  void *v12; // rsi
  DWORD LastError; // ebx
  wchar_t String[4]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  unsigned __int64 v16; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a3 = 0;
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(a1, 0LL);
  v16 = 7LL;
  v15 = 0LL;
  String[0] = 0;
  if ( *(_WORD *)StringRawBuffer )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)&StringRawBuffer[2 * v6] );
  }
  else
  {
    v6 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)String, StringRawBuffer, v6);
  v7 = std::stoi(String);
  if ( v16 >= 8 )
    operator delete(*(void **)String);
  v8 = CoTaskMemAlloc(4uLL);
  v11 = v8;
  if ( !v8 )
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x102, v9, v10);
  *v8 = v7;
  *a3 = 4;
  v12 = *a2;
  if ( *a2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v12);
    SetLastError(LastError);
  }
  *a2 = v11;
}

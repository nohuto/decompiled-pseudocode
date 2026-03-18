/*
 * XREFs of ?InitializeServer@CMessageConversationHost@@AEAAJPEAI@Z @ 0x18002F4E4
 * Callers:
 *     ?Initialize@CMessageConversationHost@@AEAAJXZ @ 0x18002F454 (-Initialize@CMessageConversationHost@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002F62C (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMessageConversationHost::InitializeServer(CMessageConversationHost *this, unsigned int *a2)
{
  PSECURITY_DESCRIPTOR v4; // rdi
  int v5; // eax
  unsigned int v6; // ecx
  signed int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  DWORD LastError; // ebx
  signed int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // [rsp+20h] [rbp-50h]
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  int v16; // [rsp+68h] [rbp-8h]
  __int64 v17; // [rsp+A0h] [rbp+30h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+A8h] [rbp+38h] BYREF

  SecurityDescriptor = 0LL;
  v17 = 0LL;
  SetLastError(0);
  v4 = SecurityDescriptor;
  if ( SecurityDescriptor )
  {
    LastError = GetLastError();
    LocalFree(v4);
    SetLastError(LastError);
  }
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3"
          "968301570-1997628692-1435953622)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, PSECURITY_DESCRIPTOR, __int64 *))(**((_QWORD **)this + 2) + 64LL))(
           *((_QWORD *)this + 2),
           SecurityDescriptor,
           &v17);
    v7 = v5;
    if ( v5 < 0 )
    {
      v14 = 38;
    }
    else
    {
      v15 = 0LL;
      v8 = *((_QWORD *)this + 2);
      v16 = 1;
      v5 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, __int64, __int64 *, int, int, int, CMessageConversationHost *, unsigned int *, char *))(*(_QWORD *)v8 + 304LL))(
             v8,
             L"System\\CompositionEngine",
             v17,
             &v15,
             1,
             1,
             1,
             this,
             a2,
             (char *)this + 24);
      v7 = v5;
      if ( v5 >= 0 )
        goto LABEL_6;
      v14 = 49;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v14, 0LL);
  }
  else
  {
    v12 = GetLastError();
    v7 = v12;
    if ( v12 > 0 )
      v7 = (unsigned __int16)v12 | 0x80070000;
    if ( v7 >= 0 )
      v7 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v7, 0x22u, 0LL);
  }
LABEL_6:
  v9 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&SecurityDescriptor);
  return (unsigned int)v7;
}

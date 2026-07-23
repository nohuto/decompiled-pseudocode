/*
 * XREFs of LdrpGetParentLangId @ 0x18008C720
 * Callers:
 *     LdrResFallbackLangList @ 0x180007264 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F3F8 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlGetParentLocaleName @ 0x180013E30 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180015780 (RtlLocaleNameToLcid.c)
 *     RtlLcidToLocaleName @ 0x180015FA0 (RtlLcidToLocaleName.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetParentLangId(unsigned __int16 a1, _WORD *a2)
{
  LCID v3; // ebx
  NTSTATUS v4; // eax
  wchar_t *Buffer; // rdi
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  DWORD lcid; // [rsp+20h] [rbp-39h] BYREF
  _UNICODE_STRING ParentLocaleName; // [rsp+28h] [rbp-31h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v12[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v13[32]; // [rsp+68h] [rbp+Fh] BYREF

  ParentLocaleName = 0LL;
  LocaleName = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v3 = a1;
  *a2 = 0;
  LocaleName.Buffer = (wchar_t *)v13;
  LocaleName.MaximumLength = 30;
  v4 = RtlLcidToLocaleName(a1, &LocaleName, 2u, 0);
  if ( v4 >= 0
    || v4 == -1073741789
    && (LocaleName.Buffer = 0LL, LocaleName.MaximumLength = 0, RtlLcidToLocaleName(v3, &LocaleName, 2u, 1u) >= 0) )
  {
    Buffer = LocaleName.Buffer;
    ParentLocaleName.MaximumLength = 30;
    ParentLocaleName.Buffer = (wchar_t *)v12;
    v6 = RtlGetParentLocaleName(LocaleName.Buffer, &ParentLocaleName, 6u, 0);
    v7 = v6;
    if ( v6 >= 0
      || v6 == -1073741789
      && (ParentLocaleName.Buffer = 0LL,
          ParentLocaleName.MaximumLength = 0,
          v7 = RtlGetParentLocaleName(Buffer, &ParentLocaleName, 6u, 1u),
          v7 >= 0) )
    {
      if ( ParentLocaleName.Length )
      {
        v7 = RtlLocaleNameToLcid(ParentLocaleName.Buffer, &lcid, 3u);
        if ( v7 >= 0 )
          *a2 = lcid;
      }
    }
  }
  else
  {
    Buffer = LocaleName.Buffer;
    v7 = -1073741811;
  }
  if ( (_BYTE *)ParentLocaleName.Buffer != v12 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ParentLocaleName.Buffer);
    Buffer = LocaleName.Buffer;
  }
  if ( Buffer != (wchar_t *)v13 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, LocaleName.Buffer);
  return (unsigned int)v7;
}

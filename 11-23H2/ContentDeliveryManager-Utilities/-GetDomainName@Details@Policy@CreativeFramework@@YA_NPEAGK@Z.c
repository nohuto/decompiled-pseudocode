/*
 * XREFs of ?GetDomainName@Details@Policy@CreativeFramework@@YA_NPEAGK@Z @ 0x180058280
 * Callers:
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x180059DE4 (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180022C6D (memset_0.c)
 */

char __fastcall CreativeFramework::Policy::Details::GetDomainName(wchar_t *Destination, unsigned __int16 *a2)
{
  size_t v3; // rax
  ULONG nSize[4]; // [rsp+20h] [rbp-F8h] BYREF
  WCHAR NameBuffer[104]; // [rsp+30h] [rbp-E8h] BYREF

  memset_0(NameBuffer, 0, 0xC8uLL);
  nSize[0] = 100;
  if ( !GetUserNameExW(NameDnsDomain, NameBuffer, nSize) )
    return 0;
  v3 = wcscspn(NameBuffer, L"\\");
  wcsncpy_s(Destination, 0x64uLL, NameBuffer, v3);
  return 1;
}

/*
 * XREFs of sub_140A295FC @ 0x140A295FC
 * Callers:
 *     sub_140771524 @ 0x140771524 (sub_140771524.c)
 *     sub_140A28A64 @ 0x140A28A64 (sub_140A28A64.c)
 *     sub_140A29BBC @ 0x140A29BBC (sub_140A29BBC.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402DFEFC @ 0x1402DFEFC (sub_1402DFEFC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     wcstoul @ 0x1403E3880 (wcstoul.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 */

__int64 __fastcall sub_140A295FC(PCWSTR SourceString, GUID *Guid, unsigned int *a3, unsigned int *a4)
{
  int inited; // ebx
  wchar_t *v9; // rax
  wchar_t *v10; // rdi
  unsigned int v11; // eax
  unsigned int v12; // eax
  wchar_t *EndPtr; // [rsp+40h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  wchar_t Str[12]; // [rsp+58h] [rbp-61h] BYREF
  WCHAR SourceStringa[40]; // [rsp+70h] [rbp-49h] BYREF

  EndPtr = 0LL;
  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( inited < 0 || (DestinationString.MaximumLength & 0xFFFEu) < 0x52 || SourceString[38] != 92 )
    return (unsigned int)-1073741773;
  if ( Guid )
  {
    inited = sub_1402DFEFC(SourceStringa, 0x27uLL, SourceString, 0x26uLL, 0LL, 0LL, 2048);
    if ( inited < 0 )
      return (unsigned int)inited;
    RtlInitUnicodeString(&DestinationString, SourceStringa);
    inited = RtlGUIDFromString(&DestinationString, Guid);
    if ( inited < 0 )
      return (unsigned int)-1073741773;
  }
  v9 = wcschr(SourceString + 39, 0x5Cu);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741773;
  if ( a3 )
  {
    inited = sub_1402DFEFC(
               Str,
               9uLL,
               SourceString + 39,
               ((char *)(v9 + 1) - (char *)SourceString - 80) >> 1,
               0LL,
               0LL,
               2048);
    if ( inited < 0 )
      return (unsigned int)inited;
    v11 = wcstoul(Str, &EndPtr, 16);
    *a3 = v11;
    if ( v11 > 0xFFFF || !EndPtr || *EndPtr )
      return (unsigned int)-1073741773;
  }
  if ( a4 )
  {
    v12 = wcstoul(v10 + 1, &EndPtr, 16);
    *a4 = v12;
    if ( v12 > 7 || !EndPtr || *EndPtr )
      return (unsigned int)-1073741773;
  }
  return (unsigned int)inited;
}

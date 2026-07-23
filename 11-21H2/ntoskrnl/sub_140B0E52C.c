/*
 * XREFs of sub_140B0E52C @ 0x140B0E52C
 * Callers:
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     sub_1403C5514 @ 0x1403C5514 (sub_1403C5514.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B0E1A8 @ 0x140B0E1A8 (sub_140B0E1A8.c)
 *     sub_140B0E310 @ 0x140B0E310 (sub_140B0E310.c)
 */

__int64 __fastcall sub_140B0E52C(__int64 a1)
{
  const char *v1; // r9
  __int64 v3; // rbx
  void *Pool2; // rax
  __int64 result; // rax
  _STRING DestinationString; // [rsp+20h] [rbp-B8h] BYREF
  _STRING v7; // [rsp+30h] [rbp-A8h] BYREF
  CHAR SourceString[128]; // [rsp+40h] [rbp-98h] BYREF

  v1 = *(const char **)(a1 + 192);
  DestinationString = 0LL;
  v7 = 0LL;
  sub_1403C5514(SourceString, 128LL, "\\ArcName\\%s", v1);
  RtlInitAnsiString(&DestinationString, SourceString);
  RtlAnsiStringToUnicodeString(&stru_140D3D208, &DestinationString, 1u);
  sub_1403C5514(SourceString, 128LL, "\\ArcName\\%s", *(const char **)(a1 + 184));
  RtlInitAnsiString(&DestinationString, SourceString);
  RtlAnsiStringToUnicodeString(&stru_140D3CF58, &DestinationString, 1u);
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(*(_QWORD *)(a1 + 184) + v3) );
  Pool2 = (void *)ExAllocatePool2(256LL, v3 + 1, 0x20206F49u);
  qword_140D3CE80 = (__int64)Pool2;
  if ( Pool2 )
    memmove(Pool2, *(const void **)(a1 + 184), v3 + 1);
  RtlInitAnsiString(&v7, *(PCSZ *)(a1 + 192));
  result = sub_140B0E1A8();
  if ( (int)result >= 0 )
    return sub_140B0E310(a1);
  return result;
}

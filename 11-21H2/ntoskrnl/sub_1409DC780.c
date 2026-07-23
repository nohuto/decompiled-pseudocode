/*
 * XREFs of sub_1409DC780 @ 0x1409DC780
 * Callers:
 *     sub_14062C800 @ 0x14062C800 (sub_14062C800.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall sub_1409DC780(__int64 a1, unsigned int a2, const CHAR *a3, UNICODE_STRING *a4)
{
  const CHAR *v5; // r10
  int v6; // ecx
  CHAR v7; // al
  const CHAR *v8; // rdx
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v5 = (const CHAR *)(a1 + *(unsigned __int8 *)(a1 + 1));
  v6 = 1;
  DestinationString = 0LL;
  if ( a2 <= 1 )
  {
LABEL_8:
    v8 = v5;
    while ( *v5 )
    {
      if ( ++v5 == a3 )
        return -1073741275;
    }
    RtlInitAnsiString(&DestinationString, v8);
    return RtlAnsiStringToUnicodeString(a4, &DestinationString, 1u);
  }
  else
  {
    v7 = *v5;
    while ( !v7 )
    {
LABEL_6:
      v7 = *++v5;
      if ( !*v5 )
        return -1073741275;
      if ( ++v6 >= a2 )
        goto LABEL_8;
    }
    while ( ++v5 != a3 )
    {
      if ( !*v5 )
        goto LABEL_6;
    }
    return -1073741275;
  }
}

/*
 * XREFs of AslpFileGetClrVersionAttribute @ 0x140A58408
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x140758FD8 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1407590E0 (AslFileMappingEnsure.c)
 *     AslStringXmlSanitize @ 0x140759770 (AslStringXmlSanitize.c)
 *     AslStringAnsiToUnicode @ 0x140A54054 (AslStringAnsiToUnicode.c)
 *     AslpFileGetClrVersion @ 0x140A58230 (AslpFileGetClrVersion.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x140A588A0 (AslpFileGetFileKindDetailAttribute.c)
 */

__int64 __fastcall AslpFileGetClrVersionAttribute(__int64 a1, __int64 a2)
{
  int ClrVersion; // ebx
  wchar_t *v5; // rbp
  __int64 v6; // rax
  wchar_t *v8; // [rsp+30h] [rbp-138h] BYREF
  CHAR v9[256]; // [rsp+40h] [rbp-128h] BYREF

  memset(v9, 0, sizeof(v9));
  v8 = 0LL;
  ClrVersion = AslFileMappingEnsure(a2);
  if ( ClrVersion < 0 )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 64) != 6 )
    goto LABEL_4;
  if ( (*(_DWORD *)(a1 + 920) & 1) != 0 || (ClrVersion = AslpFileGetFileKindDetailAttribute(a1, a2), ClrVersion >= 0) )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 912) - 12) > 3 )
    {
LABEL_4:
      *(_DWORD *)(a1 + 888) |= 2u;
      return 0;
    }
    ClrVersion = AslpFileGetClrVersion(v9, a2);
    if ( ClrVersion >= 0 )
    {
      ClrVersion = AslStringAnsiToUnicode(&v8, v9);
      if ( ClrVersion >= 0 )
      {
        v5 = v8;
        ClrVersion = AslStringXmlSanitize(v8);
        if ( ClrVersion >= 0 )
        {
          *(_DWORD *)(a1 + 864) = 4;
          v6 = -1LL;
          do
            ++v6;
          while ( v5[v6] );
          *(_DWORD *)(a1 + 888) |= 5u;
          *(_QWORD *)(a1 + 872) = v6;
          *(_QWORD *)(a1 + 880) = v5;
          return 0;
        }
      }
    }
  }
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ClrVersion;
}

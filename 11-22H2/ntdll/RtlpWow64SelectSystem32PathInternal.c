/*
 * XREFs of RtlpWow64SelectSystem32PathInternal @ 0x180085FEC
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180085F40 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpWow64SelectSystem32PathInternal(unsigned __int16 a1, char a2, _UNICODE_STRING *a3)
{
  const WCHAR *v4; // rdx
  const wchar_t *v5; // rax

  if ( a1 != 1 )
  {
    switch ( a1 )
    {
      case 0x14Cu:
        v5 = L"SysWOW64";
        v4 = L"\\SysWOW64\\";
        goto LABEL_7;
      case 0x1C4u:
        v5 = L"SysARM32";
        v4 = L"\\SysARM32\\";
        goto LABEL_7;
      case 0x3A64u:
        v5 = L"SyCHPE32";
        v4 = L"\\SyCHPE32\\";
        goto LABEL_7;
    }
    if ( a1 != 34404 && a1 != 43620 )
      return 3221225485LL;
  }
  v4 = L"\\System32\\";
  v5 = L"System32";
LABEL_7:
  if ( !a2 )
    v4 = v5;
  RtlInitUnicodeString(a3, v4);
  return 0LL;
}

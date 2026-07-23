/*
 * XREFs of RtlpWow64SelectSystem32PathInternal @ 0x1800F642C
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x1800F5FE0 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpWow64SelectSystem32PathInternal(unsigned __int16 a1, char a2, _UNICODE_STRING *a3)
{
  const wchar_t *v5; // rax
  const WCHAR *v6; // rdx

  switch ( a1 )
  {
    case 1u:
LABEL_11:
      v6 = L"\\System32\\";
      v5 = L"System32";
      break;
    case 0x14Cu:
      v5 = L"SysWOW64";
      v6 = L"\\SysWOW64\\";
      break;
    case 0x1C4u:
      v5 = L"SysARM32";
      v6 = L"\\SysARM32\\";
      break;
    case 0x3A64u:
      v5 = L"SyCHPE32";
      v6 = L"\\SyCHPE32\\";
      break;
    case 0x8664u:
    case 0xAA64u:
      goto LABEL_11;
    default:
      return 3221225485LL;
  }
  if ( !a2 )
    v6 = v5;
  RtlInitUnicodeString(a3, v6);
  return 0LL;
}

/*
 * XREFs of FsRtlDoesNameContainWildCards @ 0x14021A350
 * Callers:
 *     sub_140219EC0 @ 0x140219EC0 (sub_140219EC0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlDoesNameContainWildCards(PUNICODE_STRING Name)
{
  unsigned __int64 Length; // rax
  wchar_t *Buffer; // r8
  wchar_t *i; // rax
  __int64 v4; // rcx

  Length = Name->Length;
  if ( (_WORD)Length )
  {
    Buffer = Name->Buffer;
    for ( i = &Buffer[(Length >> 1) - 1]; i >= Buffer; --i )
    {
      v4 = *i;
      if ( (_DWORD)v4 == 92 )
        break;
      if ( (unsigned int)v4 < 0x40 && (*((_BYTE *)qword_140015C50 + v4) & 8) != 0 )
        return 1;
    }
  }
  return 0;
}

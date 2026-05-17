/*
 * XREFs of RtlReplaceSystemDirectoryInPath @ 0x180086740
 * Callers:
 *     LdrpGetModuleName @ 0x180001008 (LdrpGetModuleName.c)
 * Callees:
 *     RtlpWow64SelectSystem32PathInternal @ 0x1800867EC (RtlpWow64SelectSystem32PathInternal.c)
 *     RtlFindUnicodeSubstring @ 0x180086860 (RtlFindUnicodeSubstring.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlReplaceSystemDirectoryInPath(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // di
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // edi
  void *UnicodeSubstring; // rax
  _WORD v13[8]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int16 v14; // [rsp+30h] [rbp-18h] BYREF
  void *Src; // [rsp+38h] [rbp-10h]

  v5 = a2;
  if ( (_WORD)a2 == a3 )
    return 0LL;
  LOBYTE(a2) = a4;
  result = RtlpWow64SelectSystem32PathInternal(a3, a2, &v14);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    LOBYTE(v8) = a4;
    result = RtlpWow64SelectSystem32PathInternal(v5, v8, v13);
    if ( (int)result >= 0 )
    {
      v11 = v14;
      if ( v13[0] == v14 )
      {
        LOBYTE(v10) = 1;
        UnicodeSubstring = (void *)RtlFindUnicodeSubstring(a1, v13, v10);
        if ( UnicodeSubstring )
          memmove(UnicodeSubstring, Src, v11);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
      return v9;
    }
  }
  return result;
}

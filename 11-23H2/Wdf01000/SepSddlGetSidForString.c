/*
 * XREFs of SepSddlGetSidForString @ 0x1C00B0E60
 * Callers:
 *     SepSddlGetAclForString @ 0x1C00B0AE0 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlGetSidForString(wchar_t *String, void **SID, wchar_t **End)
{
  void *v3; // rbx
  unsigned int *p_KeyLen; // rbp
  unsigned int v5; // edi
  __int64 result; // rax
  bool v10; // zf

  v3 = 0LL;
  p_KeyLen = &SidLookup[0].KeyLen;
  v5 = 0;
  while ( _wcsnicmp(String, SidLookup[v5].Key, *p_KeyLen) )
  {
    ++v5;
    p_KeyLen += 6;
    if ( v5 >= 0xE )
    {
      result = 3221225587LL;
      goto LABEL_9;
    }
  }
  v10 = SidLookup[v5].OsVer == WINXP_OR_LATER;
  *End = &String[SidLookup[v5].KeyLen];
  if ( !v10 || IoIsWdmVersionAvailable(1u, 0x20u) )
    v3 = *(void **)((char *)&SeExports->SeCreateTokenPrivilege + SidLookup[v5].ExportSidFieldOffset);
  result = 0LL;
LABEL_9:
  *SID = v3;
  return result;
}

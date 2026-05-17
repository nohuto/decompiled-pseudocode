/*
 * XREFs of RtlpSetupEnvironmentHashTable @ 0x18005886C
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18005876C (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlpAllocateEnvironmentHashTable @ 0x180058BC0 (RtlpAllocateEnvironmentHashTable.c)
 */

char *RtlpSetupEnvironmentHashTable()
{
  char *result; // rax
  char *v1; // rdi

  result = (char *)RtlpAllocateEnvironmentHashTable(256LL, 0LL);
  v1 = result;
  if ( result )
  {
    RtlpEnvironmentHashTable = 0;
    qword_180184AA8 = (__int64)result;
    result = (char *)&RtlpEnvironmentHashTable + 1;
    dword_180184AA4 = 1024;
    if ( (v1 + 256 >= v1 ? 0x20 : 0) != 0 )
      memset64(v1, (unsigned __int64)result, v1 + 256 >= v1 ? 0x20 : 0);
  }
  return result;
}

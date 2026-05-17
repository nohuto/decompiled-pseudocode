/*
 * XREFs of RtlpSetupEnvironmentHashTable @ 0x18000DA78
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18000CCDC (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlpAllocateEnvironmentHashTable @ 0x18000DADC (RtlpAllocateEnvironmentHashTable.c)
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
    qword_18017A868 = (__int64)result;
    result = (char *)&RtlpEnvironmentHashTable + 1;
    dword_18017A864 = 1024;
    if ( (v1 + 256 >= v1 ? 0x20 : 0) != 0 )
      memset64(v1, (unsigned __int64)result, v1 + 256 >= v1 ? 0x20 : 0);
  }
  return result;
}

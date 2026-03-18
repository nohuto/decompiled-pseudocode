/*
 * XREFs of IOP_INT_TO_EXT_PRIORITY @ 0x140417C50
 * Callers:
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IOP_INT_TO_EXT_PRIORITY(int a1)
{
  __int64 result; // rax

  result = 2LL;
  if ( a1 )
    return (unsigned int)(a1 - 1);
  return result;
}

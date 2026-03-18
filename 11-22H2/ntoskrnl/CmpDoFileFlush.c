/*
 * XREFs of CmpDoFileFlush @ 0x1402F641C
 * Callers:
 *     CmpFileFlush @ 0x14075127C (CmpFileFlush.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x14041B000 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall CmpDoFileFlush(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  if ( BYTE1(NlsMbOemCodePageTag) )
    return 0;
  result = ZwFlushBuffersFile(a1, &IoStatusBlock);
  if ( result < 0 )
  {
    CmRegistryIODebug = 4;
    qword_140D54E10 = (__int64)a1;
    dword_140D54E18 = result;
  }
  return result;
}

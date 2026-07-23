/*
 * XREFs of CmpDoFileFlush @ 0x1402F66AC
 * Callers:
 *     CmpFileFlush @ 0x140750F5C (CmpFileFlush.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x14041BA50 (ZwFlushBuffersFile.c)
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
    qword_140D54DE0 = (__int64)a1;
    dword_140D54DE8 = result;
  }
  return result;
}

/*
 * XREFs of sub_140644BE4 @ 0x140644BE4
 * Callers:
 *     ?Process@CPullPin@@AEAAXXZ @ 0x14057C3C0 (-Process@CPullPin@@AEAAXXZ.c)
 *     sub_140A08E84 @ 0x140A08E84 (sub_140A08E84.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140644BE4(void **a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  char *Buffer; // rdx
  __int64 result; // rax
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, (PCSZ)(*((_QWORD *)KeGetCurrentThread() + 23) + 1448LL));
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
  {
    result = DestinationString.Length;
  }
  else
  {
    Buffer = "(Unknown)";
    result = 10LL;
  }
  *a2 = result;
  if ( v2 )
  {
    if ( (unsigned int)result > v2 )
    {
      *a2 = v2;
      LODWORD(result) = v2;
    }
    return (__int64)memmove(*a1, Buffer, (unsigned int)result);
  }
  else
  {
    *a1 = Buffer;
  }
  return result;
}

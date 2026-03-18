/*
 * XREFs of DbgkpDereferenceErrorPort @ 0x14053BC38
 * Callers:
 *     DbgkFlushErrorPort @ 0x1407518F4 (DbgkFlushErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x14093A020 (DbgkpRemoveErrorPort.c)
 * Callees:
 *     DbgkpDeleteErrorPort @ 0x140939FF4 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkpDereferenceErrorPort(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return DbgkpDeleteErrorPort((PVOID)a1);
  return result;
}

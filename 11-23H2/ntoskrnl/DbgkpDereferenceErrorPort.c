/*
 * XREFs of DbgkpDereferenceErrorPort @ 0x14053C0D8
 * Callers:
 *     DbgkFlushErrorPort @ 0x1407515D4 (DbgkFlushErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x14093A170 (DbgkpRemoveErrorPort.c)
 * Callees:
 *     DbgkpDeleteErrorPort @ 0x14093A144 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkpDereferenceErrorPort(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return DbgkpDeleteErrorPort((PVOID)a1);
  return result;
}

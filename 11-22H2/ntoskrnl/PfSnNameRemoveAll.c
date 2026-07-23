/*
 * XREFs of PfSnNameRemoveAll @ 0x1407C37C4
 * Callers:
 *     PfFileInfoNotify @ 0x1402DF520 (PfFileInfoNotify.c)
 * Callees:
 *     PfSnActiveTraceGetNext @ 0x140353A0C (PfSnActiveTraceGetNext.c)
 *     PfSnNameRemove @ 0x140353ACC (PfSnNameRemove.c)
 *     PfSnLogStreamDelete @ 0x1407C3814 (PfSnLogStreamDelete.c)
 */

__int64 *__fastcall PfSnNameRemoveAll(__int64 a1)
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *result; // rax
  struct _EX_RUNDOWN_REF *v4; // rbx

  for ( i = 0LL; ; i = v4 )
  {
    result = PfSnActiveTraceGetNext(i);
    v4 = (struct _EX_RUNDOWN_REF *)result;
    if ( !result )
      break;
    if ( (unsigned int)PfSnNameRemove((__int64)result, *(_RTL_BALANCED_NODE **)(a1 + 16)) )
      PfSnLogStreamDelete(a1, v4);
  }
  return result;
}

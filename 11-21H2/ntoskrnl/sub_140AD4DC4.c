/*
 * XREFs of sub_140AD4DC4 @ 0x140AD4DC4
 * Callers:
 *     sub_140AD5190 @ 0x140AD5190 (sub_140AD5190.c)
 * Callees:
 *     sub_140AD4E50 @ 0x140AD4E50 (sub_140AD4E50.c)
 *     sub_140AD4EE0 @ 0x140AD4EE0 (sub_140AD4EE0.c)
 */

char sub_140AD4DC4()
{
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // rdi
  int Handler; // eax
  char result; // al

  ExceptionList = KeGetPcr()->NtTib.ExceptionList;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&ExceptionList[139], 2, 1) != 1 )
    return 0;
  if ( HIDWORD(ExceptionList[139].Next) == 3 )
  {
    KeGetPcr()->NtTib.ExceptionList[141].Next = ExceptionList[140].Next;
  }
  else
  {
    Handler = (int)ExceptionList[139].Handler;
    if ( Handler == 1 )
    {
      sub_140AD4EE0(&ExceptionList[138].Handler);
    }
    else if ( Handler == 2 )
    {
      sub_140AD4E50(&ExceptionList[138].Handler);
    }
    else
    {
      __debugbreak();
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)&ExceptionList[8]);
  result = 1;
  _InterlockedExchange((volatile __int32 *)&ExceptionList[139], 0);
  return result;
}

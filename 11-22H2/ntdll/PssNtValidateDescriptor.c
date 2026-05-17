/*
 * XREFs of PssNtValidateDescriptor @ 0x180127F50
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180127840 (PssNtDuplicateSnapshot.c)
 *     PssNtFreeSnapshot @ 0x180127AD0 (PssNtFreeSnapshot.c)
 *     PssNtQuerySnapshot @ 0x180127CA0 (PssNtQuerySnapshot.c)
 *     PssNtWalkSnapshot @ 0x1801280E0 (PssNtWalkSnapshot.c)
 * Callees:
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PssNtValidateDescriptor(unsigned int *a1, void *a2)
{
  unsigned int v4; // ebx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-C8h] BYREF

  if ( a1 )
  {
    v4 = *a1;
    if ( v4 == 1146311504 )
      return 0LL;
    memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
    ExceptionRecord.ExceptionCode = -1073741816;
    ExceptionRecord.ExceptionFlags = 0;
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionAddress = a2;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)a1;
    ExceptionRecord.ExceptionInformation[1] = 0LL;
    ExceptionRecord.ExceptionInformation[2] = v4;
    ExceptionRecord.ExceptionInformation[3] = 1146311504LL;
    RtlRaiseException(&ExceptionRecord);
  }
  return 3221225480LL;
}

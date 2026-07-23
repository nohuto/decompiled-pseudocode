/*
 * XREFs of sub_140AD5148 @ 0x140AD5148
 * Callers:
 *     sub_140AD4F90 @ 0x140AD4F90 (sub_140AD4F90.c)
 *     sub_140AD4FB0 @ 0x140AD4FB0 (sub_140AD4FB0.c)
 * Callees:
 *     <none>
 */

_EXCEPTION_REGISTRATION_RECORD *__fastcall sub_140AD5148(int a1, unsigned int a2)
{
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // rax
  _EXCEPTION_REGISTRATION_RECORD *result; // rax

  ExceptionList = KeGetPcr()->NtTib.ExceptionList;
  if ( BYTE1(ExceptionList[2].Handler) || LOBYTE(ExceptionList[2].Handler) )
  {
    result = (_EXCEPTION_REGISTRATION_RECORD *)a2;
    __writemsr((a1 >> 4) + 2048, a2);
  }
  else
  {
    result = KeGetPcr()->NtTib.ExceptionList[2].Next;
    *(_DWORD *)((char *)&result->Next + a1) = a2;
  }
  return result;
}

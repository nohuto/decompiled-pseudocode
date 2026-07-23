/*
 * XREFs of sub_140AD5104 @ 0x140AD5104
 * Callers:
 *     sub_140AD4FB0 @ 0x140AD4FB0 (sub_140AD4FB0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140AD5104(int a1)
{
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // rax

  ExceptionList = KeGetPcr()->NtTib.ExceptionList;
  if ( BYTE1(ExceptionList[2].Handler) || LOBYTE(ExceptionList[2].Handler) )
    return __readmsr((a1 >> 4) + 2048);
  else
    return *(unsigned int *)((char *)&KeGetPcr()->NtTib.ExceptionList[2].Next->Next + a1);
}

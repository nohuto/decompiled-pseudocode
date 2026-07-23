/*
 * XREFs of sub_140AD5530 @ 0x140AD5530
 * Callers:
 *     sub_140AD3010 @ 0x140AD3010 (sub_140AD3010.c)
 * Callees:
 *     sub_140AD3060 @ 0x140AD3060 (sub_140AD3060.c)
 *     sub_140AD3070 @ 0x140AD3070 (sub_140AD3070.c)
 *     sub_140AD3080 @ 0x140AD3080 (sub_140AD3080.c)
 *     sub_140AD3090 @ 0x140AD3090 (sub_140AD3090.c)
 */

void __noreturn sub_140AD5530()
{
  _EXCEPTION_REGISTRATION_RECORD *i; // rbx
  __int64 v1; // rdi

  for ( i = KeGetPcr()->NtTib.ExceptionList; ; _InterlockedIncrement64((volatile signed __int64 *)&i[8].Handler + v1) )
  {
    v1 = ((unsigned __int64)i[141].Next >> 52) & 0xF & -(__int64)((((unsigned __int64)i[141].Next >> 52) & 0xF) < 4);
    if ( !(_DWORD)v1 )
      break;
    if ( (_DWORD)v1 == 1 )
      sub_140AD3070((unsigned __int16)i[141].Next);
    if ( (_DWORD)v1 == 2 )
      sub_140AD3080((unsigned __int16)i[141].Next);
    else
      sub_140AD3090(&i[160], 0, (unsigned int)i[141].Next);
  }
  sub_140AD3060();
}

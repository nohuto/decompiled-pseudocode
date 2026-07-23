/*
 * XREFs of PcwRegister @ 0x1408114C0
 * Callers:
 *     sub_14085BA10 @ 0x14085BA10 (sub_14085BA10.c)
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A029F8 @ 0x140A029F8 (sub_140A029F8.c)
 */

NTSTATUS __stdcall PcwRegister(PPCW_REGISTRATION *Registration, PPCW_REGISTRATION_INFORMATION Info)
{
  NTSTATUS v4; // ebx

  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140D3B080) )
  {
    v4 = sub_14042A5E0(Registration, Info);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140D3B080);
  }
  else
  {
    *Registration = 0LL;
    return sub_140A029F8();
  }
  return v4;
}

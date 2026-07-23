/*
 * XREFs of PcwUnregister @ 0x140A02AC0
 * Callers:
 *     sub_14085B800 @ 0x14085B800 (sub_14085B800.c)
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __stdcall PcwUnregister(PPCW_REGISTRATION Registration)
{
  __int64 v2; // rdx

  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140D3B080) )
  {
    sub_14042A5E0(Registration, v2);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140D3B080);
  }
}

/*
 * XREFs of PcwCreateInstance @ 0x1406DBC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A029F8 @ 0x140A029F8 (sub_140A029F8.c)
 */

NTSTATUS __stdcall PcwCreateInstance(
        PPCW_INSTANCE *Instance,
        PPCW_REGISTRATION Registration,
        PCUNICODE_STRING Name,
        ULONG Count,
        PPCW_DATA Data)
{
  NTSTATUS v7; // ebx

  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140D3B080) )
  {
    v7 = sub_14042A5E0(Instance, Registration);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140D3B080);
  }
  else
  {
    *Instance = 0LL;
    return sub_140A029F8();
  }
  return v7;
}

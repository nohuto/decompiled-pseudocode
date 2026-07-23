/*
 * XREFs of sub_140A800C4 @ 0x140A800C4
 * Callers:
 *     sub_14024FC04 @ 0x14024FC04 (sub_14024FC04.c)
 * Callees:
 *     sub_1402D8764 @ 0x1402D8764 (sub_1402D8764.c)
 *     sub_1405FE9C4 @ 0x1405FE9C4 (sub_1405FE9C4.c)
 *     sub_1405FEC4C @ 0x1405FEC4C (sub_1405FEC4C.c)
 *     sub_1405FECBC @ 0x1405FECBC (sub_1405FECBC.c)
 *     sub_140A91FDC @ 0x140A91FDC (sub_140A91FDC.c)
 */

__int64 __fastcall sub_140A800C4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _DRIVER_OBJECT *v4; // rbx
  PDRIVER_EXTENSION DriverExtension; // rdi
  __int64 v6; // rax

  result = (unsigned int)dword_140D4E000;
  if ( !dword_140D4E000 )
  {
    v4 = *(struct _DRIVER_OBJECT **)(a1 + 8);
    DriverExtension = v4->DriverExtension;
    if ( sub_1402D8764(v4) && !*(_QWORD *)&DriverExtension[1].ServiceKeyName.Length )
    {
      v6 = sub_1405FE9C4();
      if ( v6 )
      {
        *(_QWORD *)&DriverExtension[1].ServiceKeyName.Length = v6;
        if ( sub_1405FEC4C((__int64)v4) )
          sub_1405FECBC(v4);
      }
    }
    return sub_140A91FDC(a2);
  }
  return result;
}

/*
 * XREFs of sub_14059A1A0 @ 0x14059A1A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14096E4D8 @ 0x14096E4D8 (sub_14096E4D8.c)
 */

void __fastcall sub_14059A1A0(_DWORD *Parameter)
{
  Parameter[4] = sub_14096E4D8(*(_QWORD *)Parameter, *((_QWORD *)Parameter + 1));
}

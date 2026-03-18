/*
 * XREFs of sub_140B34090 @ 0x140B34090
 * Callers:
 *     <none>
 * Callees:
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 */

void __fastcall sub_140B34090(_BYTE *Parameter)
{
  Parameter[28] = sub_140B19730(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}

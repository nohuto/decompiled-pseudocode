/*
 * XREFs of Callout @ 0x1407CF650
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406EF5A0 @ 0x1406EF5A0 (sub_1406EF5A0.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_1406EF5A0(
                   *(unsigned int **)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (_QWORD *)Parameter + 2,
                   Parameter + 6);
}

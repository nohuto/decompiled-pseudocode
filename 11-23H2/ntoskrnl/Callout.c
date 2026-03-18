/*
 * XREFs of Callout @ 0x1407CF380
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406EF570 @ 0x1406EF570 (sub_1406EF570.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_1406EF570(
                   *(unsigned int **)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (_QWORD *)Parameter + 2,
                   Parameter + 6);
}

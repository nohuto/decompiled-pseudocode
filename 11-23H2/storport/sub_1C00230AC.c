/*
 * XREFs of sub_1C00230AC @ 0x1C00230AC
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 *     sub_1C0009BC0 @ 0x1C0009BC0 (sub_1C0009BC0.c)
 *     sub_1C00176A0 @ 0x1C00176A0 (sub_1C00176A0.c)
 *     sub_1C00196D4 @ 0x1C00196D4 (sub_1C00196D4.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     sub_1C001FA9C @ 0x1C001FA9C (sub_1C001FA9C.c)
 *     sub_1C0038AB8 @ 0x1C0038AB8 (sub_1C0038AB8.c)
 *     sub_1C0038FB0 @ 0x1C0038FB0 (sub_1C0038FB0.c)
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 *     sub_1C003B11C @ 0x1C003B11C (sub_1C003B11C.c)
 *     sub_1C00551E0 @ 0x1C00551E0 (sub_1C00551E0.c)
 *     sub_1C00554A8 @ 0x1C00554A8 (sub_1C00554A8.c)
 *     sub_1C0061378 @ 0x1C0061378 (sub_1C0061378.c)
 *     sub_1C0061F7C @ 0x1C0061F7C (sub_1C0061F7C.c)
 *     sub_1C0062A44 @ 0x1C0062A44 (sub_1C0062A44.c)
 *     DoScreenSave_0 @ 0x1C0062D50 (DoScreenSave_0.c)
 *     sub_1C00630BC @ 0x1C00630BC (sub_1C00630BC.c)
 *     DllInitialize @ 0x1C0064410 (DllInitialize.c)
 *     sub_1C00ACAB4 @ 0x1C00ACAB4 (sub_1C00ACAB4.c)
 * Callees:
 *     sub_1C00230E4 @ 0x1C00230E4 (sub_1C00230E4.c)
 */

__int64 sub_1C00230AC()
{
  if ( (dword_1C0093B40 & 0x10) != 0 )
    return dword_1C0093B40 & 1;
  else
    return sub_1C00230E4((unsigned int)dword_1C0093B40, 3LL);
}

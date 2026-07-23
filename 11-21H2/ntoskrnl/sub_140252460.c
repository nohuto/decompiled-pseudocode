/*
 * XREFs of sub_140252460 @ 0x140252460
 * Callers:
 *     sub_140822DF0 @ 0x140822DF0 (sub_140822DF0.c)
 *     sub_140908918 @ 0x140908918 (sub_140908918.c)
 *     sub_140A543D8 @ 0x140A543D8 (sub_140A543D8.c)
 *     sub_140A55270 @ 0x140A55270 (sub_140A55270.c)
 *     sub_140A62BC0 @ 0x140A62BC0 (sub_140A62BC0.c)
 * Callees:
 *     <none>
 */

char sub_140252460()
{
  return BYTE1(*(_DWORD *)(qword_140C54A88 + 228)) & 1;
}

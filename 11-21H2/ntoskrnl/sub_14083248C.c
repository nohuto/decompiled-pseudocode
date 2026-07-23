/*
 * XREFs of sub_14083248C @ 0x14083248C
 * Callers:
 *     sub_1405CFB5C @ 0x1405CFB5C (sub_1405CFB5C.c)
 *     sub_14085FC80 @ 0x14085FC80 (sub_14085FC80.c)
 *     sub_1408638B0 @ 0x1408638B0 (sub_1408638B0.c)
 *     sub_140B15390 @ 0x140B15390 (sub_140B15390.c)
 * Callees:
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 */

__int64 sub_14083248C()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = dword_140C0C7FC;
  if ( (byte_140C23908 & 1) != 0 )
    v0 = dword_140C0C7F4;
  if ( v0 != dword_140C0C7F8 )
  {
    dword_140C0C7F8 = v0;
    return sub_1407525EC(&stru_14003A660, 4u, &dword_140C0C7F8);
  }
  return result;
}

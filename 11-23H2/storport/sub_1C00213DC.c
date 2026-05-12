/*
 * XREFs of sub_1C00213DC @ 0x1C00213DC
 * Callers:
 *     sub_1C00212CC @ 0x1C00212CC (sub_1C00212CC.c)
 * Callees:
 *     sub_1C001E408 @ 0x1C001E408 (sub_1C001E408.c)
 *     sub_1C00214E8 @ 0x1C00214E8 (sub_1C00214E8.c)
 */

__int64 __fastcall sub_1C00213DC(
        void *a1,
        int a2,
        __int64 a3,
        _WORD *a4,
        __int64 a5,
        ULONG a6,
        __int64 a7,
        int a8,
        HANDLE Handle)
{
  __int64 result; // rax

  Handle = 0LL;
  result = sub_1C001E408(a1, 1u, &Handle, L"Logical Unit Id %d", a2);
  if ( (int)result >= 0 )
  {
    if ( a3 )
      sub_1C00214E8(Handle, 0x24u);
    if ( a4 && *a4 )
      sub_1C00214E8(Handle, (unsigned __int16)*a4);
    if ( a3 )
      sub_1C00214E8(Handle, 0x1Cu);
    if ( a7 )
      sub_1C00214E8(Handle, 2 * a8 + 2);
    if ( a5 )
      sub_1C00214E8(Handle, a6);
    ZwClose(Handle);
    return 0LL;
  }
  return result;
}

/*
 * XREFs of sub_1C0040CEC @ 0x1C0040CEC
 * Callers:
 *     sub_1C0040D18 @ 0x1C0040D18 (sub_1C0040D18.c)
 *     sub_1C0045080 @ 0x1C0045080 (sub_1C0045080.c)
 * Callees:
 *     sub_1C001A2F4 @ 0x1C001A2F4 (sub_1C001A2F4.c)
 */

_BOOL8 __fastcall sub_1C0040CEC(__int64 a1)
{
  signed __int32 v1; // ebx

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
  sub_1C001A2F4((struct _EX_RUNDOWN_REF *)a1);
  return v1 == -1;
}

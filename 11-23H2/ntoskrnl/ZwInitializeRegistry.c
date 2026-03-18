/*
 * XREFs of ZwInitializeRegistry @ 0x14041CE40
 * Callers:
 *     NtInitializeRegistry @ 0x1407E8C30 (NtInitializeRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwInitializeRegistry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

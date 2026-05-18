/*
 * XREFs of sub_180021610 @ 0x180021610
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D444 @ 0x18001D444 (sub_18001D444.c)
 */

ULONG sub_180021610()
{
  ULONG result; // eax
  REGHANDLE v1; // rcx

  result = sub_18001D444((__int64)&unk_1801D33BC);
  if ( !result )
  {
    v1 = RegHandle;
    RegHandle = 0LL;
    dword_1801C8188 = 0;
    return EventUnregister(v1);
  }
  return result;
}

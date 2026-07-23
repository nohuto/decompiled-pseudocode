/*
 * XREFs of CcGetDirtyPages @ 0x14024AC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140363C8C @ 0x140363C8C (sub_140363C8C.c)
 */

LARGE_INTEGER __stdcall CcGetDirtyPages(
        PVOID LogHandle,
        PDIRTY_PAGE_ROUTINE DirtyPageRoutine,
        PVOID Context1,
        PVOID Context2)
{
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  LARGE_INTEGER v6; // [rsp+40h] [rbp-18h]

  v6.QuadPart = 0LL;
  v5[3] = Context2;
  v5[2] = Context1;
  LOBYTE(Context1) = 1;
  v5[0] = LogHandle;
  v5[1] = DirtyPageRoutine;
  sub_140363C8C(sub_140289D20, v5, Context1);
  return v6;
}

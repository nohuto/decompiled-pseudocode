/*
 * XREFs of sub_1C00152B0 @ 0x1C00152B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0016900 @ 0x1C0016900 (sub_1C0016900.c)
 */

void __fastcall sub_1C00152B0(PVOID IoObject, _DWORD *Context, PIO_WORKITEM IoWorkItem)
{
  sub_1C0016900(Context);
  Context[114] &= ~2u;
  sub_1C000729C((__int64)Context);
  IoFreeWorkItem(IoWorkItem);
}

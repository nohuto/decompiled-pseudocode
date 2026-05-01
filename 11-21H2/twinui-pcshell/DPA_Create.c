/*
 * XREFs of DPA_Create @ 0x18061BCF0
 * Callers:
 *     ??0BUCKET@@QEAA@XZ @ 0x18061B360 (--0BUCKET@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

HDPA __stdcall DPA_Create(int cItemGrow)
{
  return DPA_CreateEx(cItemGrow, 0LL);
}

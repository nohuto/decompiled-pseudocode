/*
 * XREFs of MiUnmapPatchTable @ 0x140A3C460
 * Callers:
 *     MiMapSystemImage @ 0x140695E88 (MiMapSystemImage.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 */

__int64 MiUnmapPatchTable()
{
  unsigned __int64 SessionVm; // rax
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  _OWORD v4[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+60h] [rbp-18h]

  v5 = 0LL;
  memset(v4, 0, sizeof(v4));
  SessionVm = MiGetSessionVm();
  return MiDeleteSystemPagableVm(SessionVm, 0LL, v1, v2, 33, (struct _KTHREAD *)v4);
}

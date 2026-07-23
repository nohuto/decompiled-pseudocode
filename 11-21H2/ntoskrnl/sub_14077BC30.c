/*
 * XREFs of sub_14077BC30 @ 0x14077BC30
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x1402DF4A0 (IoIs32bitProcess.c)
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 */

char __fastcall sub_14077BC30(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, int a7, _DWORD *a8)
{
  BOOLEAN v9; // al

  v9 = IoIs32bitProcess(0LL);
  *a8 = sub_14077BCA0(a3, a8 + 2, a7, v9);
  return 1;
}

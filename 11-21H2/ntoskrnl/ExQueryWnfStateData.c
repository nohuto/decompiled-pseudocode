/*
 * XREFs of ExQueryWnfStateData @ 0x1407EEE10
 * Callers:
 *     sub_1403DE440 @ 0x1403DE440 (sub_1403DE440.c)
 *     sub_1405CA0A0 @ 0x1405CA0A0 (sub_1405CA0A0.c)
 *     sub_1405CA1A0 @ 0x1405CA1A0 (sub_1405CA1A0.c)
 *     sub_1405CFD70 @ 0x1405CFD70 (sub_1405CFD70.c)
 *     sub_1406EB9B0 @ 0x1406EB9B0 (sub_1406EB9B0.c)
 *     sub_1407EE7A0 @ 0x1407EE7A0 (sub_1407EE7A0.c)
 *     sub_1408097A0 @ 0x1408097A0 (sub_1408097A0.c)
 *     sub_14081CD10 @ 0x14081CD10 (sub_14081CD10.c)
 *     sub_140933280 @ 0x140933280 (sub_140933280.c)
 *     sub_1409404B0 @ 0x1409404B0 (sub_1409404B0.c)
 *     sub_14098CB20 @ 0x14098CB20 (sub_14098CB20.c)
 *     sub_14098CBC0 @ 0x14098CBC0 (sub_14098CBC0.c)
 *     sub_140995780 @ 0x140995780 (sub_140995780.c)
 *     sub_140998940 @ 0x140998940 (sub_140998940.c)
 *     sub_14099A030 @ 0x14099A030 (sub_14099A030.c)
 *     sub_14099A120 @ 0x14099A120 (sub_14099A120.c)
 *     sub_14099CB50 @ 0x14099CB50 (sub_14099CB50.c)
 *     sub_1409A4000 @ 0x1409A4000 (sub_1409A4000.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1407944BC @ 0x1407944BC (sub_1407944BC.c)
 *     sub_1407EEEB8 @ 0x1407EEEB8 (sub_1407EEEB8.c)
 */

__int64 __fastcall ExQueryWnfStateData(__int64 a1, _DWORD *a2, void *a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  int v10; // ebx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v8 = sub_1407EEEB8(a1, a1);
  v9 = (struct _EX_RUNDOWN_REF *)v8;
  if ( v8 )
  {
    v10 = sub_1407944BC(v8, a2, a3, *a4, a4);
    if ( v10 >= 0 )
      v10 = 0;
    sub_1402AD030(v9 + 1);
  }
  else
  {
    v10 = -1073741772;
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v10;
}

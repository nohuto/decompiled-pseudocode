/*
 * XREFs of sub_1409A4AE0 @ 0x1409A4AE0
 * Callers:
 *     sub_140996EE0 @ 0x140996EE0 (sub_140996EE0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A371C @ 0x1409A371C (sub_1409A371C.c)
 *     sub_1409A5200 @ 0x1409A5200 (sub_1409A5200.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409A996C @ 0x1409A996C (sub_1409A996C.c)
 */

__int64 __fastcall sub_1409A4AE0(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v6 = sub_1409A5200(&v11, a1);
  v7 = v11;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v6 = sub_1409A371C(v11, *(unsigned int **)(v11 + 32), a2, a3);
    v8 = v6;
    if ( v6 >= 0 )
      goto LABEL_6;
    v9 = 4075LL;
  }
  else
  {
    v9 = 4063LL;
  }
  sub_1409A8628("TtmSessionMonitorControl", v9, (unsigned int)v6, (unsigned int)v6);
LABEL_6:
  if ( v7 )
  {
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  sub_1409A996C(a1, a2, a3, v8);
  return v8;
}

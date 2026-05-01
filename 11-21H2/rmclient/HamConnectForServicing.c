/*
 * XREFs of HamConnectForServicing @ 0x18000A390
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionCreate @ 0x180004700 (HampConnectionCreate.c)
 *     HampConnectionDestroy @ 0x180006630 (HampConnectionDestroy.c)
 */

__int64 __fastcall HamConnectForServicing(__int64 *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = HampConnectionCreate(0LL, (__int64)&unk_180021C00, 0, 0LL, &v5);
  if ( v2 < 0 )
  {
    v3 = v5;
  }
  else
  {
    v3 = 0LL;
    *a1 = v5;
    v2 = 0;
  }
  if ( v3 )
    HampConnectionDestroy(v3);
  return (unsigned int)v2;
}

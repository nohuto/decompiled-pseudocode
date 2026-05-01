/*
 * XREFs of HamConnectForServicing @ 0x18000A4A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180005824 @ 0x180005824 (sub_180005824.c)
 *     sub_180008C00 @ 0x180008C00 (sub_180008C00.c)
 */

__int64 __fastcall HamConnectForServicing(__int64 *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = sub_180005824(0LL, (__int64)&unk_180020C80, 0, 0LL, &v5);
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
    sub_180008C00(v3);
  return (unsigned int)v2;
}

/*
 * XREFs of sub_1406EB324 @ 0x1406EB324
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_14025E078 @ 0x14025E078 (sub_14025E078.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1406EB324(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _QWORD v5[43]; // [rsp+20h] [rbp-158h] BYREF

  memset(v5, 0, 0x150uLL);
  v5[3] = a2;
  v3 = sub_14042A5E0(v5, 0LL);
  if ( v3 >= 0 )
    sub_14025E078((__int64)v5);
  return (unsigned int)v3;
}

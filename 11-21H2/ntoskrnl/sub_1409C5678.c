/*
 * XREFs of sub_1409C5678 @ 0x1409C5678
 * Callers:
 *     sub_14085F954 @ 0x14085F954 (sub_14085F954.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409C5678(_QWORD *P)
{
  __int64 v2; // rcx
  _DWORD v3[202]; // [rsp+20h] [rbp-328h] BYREF

  memset(v3, 0, 0x320uLL);
  v2 = P[3];
  *(_DWORD *)P = 0;
  if ( v2 )
  {
    v3[14] = *((_DWORD *)P + 4);
    v3[15] = *((_DWORD *)P + 5);
    v3[10] = 1;
    v3[11] = 5;
    sub_14042A5E0(v2, v3);
  }
  ExFreePoolWithTag(P, 0);
}

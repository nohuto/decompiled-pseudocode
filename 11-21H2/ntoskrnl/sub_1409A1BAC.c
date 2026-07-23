/*
 * XREFs of sub_1409A1BAC @ 0x1409A1BAC
 * Callers:
 *     sub_1409A666C @ 0x1409A666C (sub_1409A666C.c)
 * Callees:
 *     sub_1409A2774 @ 0x1409A2774 (sub_1409A2774.c)
 *     sub_1409A29D4 @ 0x1409A29D4 (sub_1409A29D4.c)
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 *     sub_1409A8178 @ 0x1409A8178 (sub_1409A8178.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

__int64 __fastcall sub_1409A1BAC(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  v10 = 0LL;
  if ( (unsigned __int8)sub_1409A2774(a1, a3, &v10) )
  {
    v7 = v10;
    v8 = v10;
    *(_DWORD *)(v10 + 596) = *(_DWORD *)(v6 + 28);
    sub_1409A29D4(a1, 0LL, v8, 4LL);
    sub_1409A8178(*(unsigned int *)(v7 + 596), a3);
    *(_DWORD *)(v7 + 600) |= 0x60u;
    sub_1409A4D70(a1, 1LL);
  }
  else
  {
    v4 = -1073741275;
    sub_1409A8628("TtmiAssignDevice", 1125LL, 0xFFFFFFFFLL, 3221226021LL);
  }
  return v4;
}

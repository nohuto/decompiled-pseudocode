/*
 * XREFs of sub_1409A200C @ 0x1409A200C
 * Callers:
 *     sub_1409A6E24 @ 0x1409A6E24 (sub_1409A6E24.c)
 * Callees:
 *     sub_1409A2774 @ 0x1409A2774 (sub_1409A2774.c)
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 *     sub_1409A8068 @ 0x1409A8068 (sub_1409A8068.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

__int64 __fastcall sub_1409A200C(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v13[0] = 0LL;
  if ( (unsigned __int8)sub_1409A2774(a1, a3, v13) )
  {
    v10 = v13[0];
    v11 = *(unsigned int *)(v8 + 28);
    if ( (_DWORD)v11 == *(_DWORD *)(v13[0] + 596LL) )
    {
      sub_1409A8068(v11, v7, a4);
      *(_DWORD *)(v10 + 600) = *(_DWORD *)(v10 + 600) ^ (*(_DWORD *)(v10 + 600) ^ (a4 << 7)) & 0x80 | 0x40;
      sub_1409A4D70(a1, 1LL);
      return v4;
    }
    v4 = -1073741811;
    v9 = 1339LL;
  }
  else
  {
    v4 = -1073741275;
    v9 = 1330LL;
  }
  sub_1409A8628("TtmiSetInputWakeCapability", v9, 0xFFFFFFFFLL, v4);
  return v4;
}

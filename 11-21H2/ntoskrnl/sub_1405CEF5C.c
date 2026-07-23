/*
 * XREFs of sub_1405CEF5C @ 0x1405CEF5C
 * Callers:
 *     PoFxPowerControl @ 0x1403980F0 (PoFxPowerControl.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405CEF5C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  _QWORD v10[6]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]
  __int64 v12; // [rsp+58h] [rbp-10h]

  v7 = *(_QWORD *)(a1 + 72);
  v8 = -1073741822;
  v12 = 0LL;
  v11 = 0LL;
  v10[0] = v7;
  v10[4] = a5;
  v10[1] = a2;
  v10[5] = a6;
  v10[2] = a3;
  v10[3] = a4;
  if ( (unsigned __int8)sub_14042A5E0(14LL, v10) == 1 )
  {
    if ( a7 )
      *a7 = v11;
    return (unsigned int)v12;
  }
  return v8;
}

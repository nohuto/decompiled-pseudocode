/*
 * XREFs of sub_1405CECB0 @ 0x1405CECB0
 * Callers:
 *     PoFxRegisterCrashdumpDevice @ 0x14081D0C0 (PoFxRegisterCrashdumpDevice.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405CECB0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v6[1] = a2;
  v6[0] = 0LL;
  if ( (unsigned __int8)sub_14042A5E0(25LL, v6) && v6[0] )
    *(_QWORD *)(a3 + 592) = v6[0];
  else
    return (unsigned int)-1073741637;
  return v3;
}

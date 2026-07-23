/*
 * XREFs of sub_1405C6C1C @ 0x1405C6C1C
 * Callers:
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 * Callees:
 *     HalRequestIpi @ 0x14023DD20 (HalRequestIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_14039D6B0 @ 0x14039D6B0 (sub_14039D6B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405D9F60 @ 0x1405D9F60 (sub_1405D9F60.c)
 */

__int64 __fastcall sub_1405C6C1C(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v5[2]; // [rsp+30h] [rbp-D8h] BYREF
  _WORD v6[4]; // [rsp+40h] [rbp-C8h]
  _DWORD v7[68]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v8[34]; // [rsp+158h] [rbp+50h] BYREF

  *(_DWORD *)&v6[1] = 0;
  v6[3] = 0;
  LODWORD(v4) = 0;
  memset(&v7[2], 0, 0x100uLL);
  LODWORD(v8[0]) = 2097153;
  result = (__int64)memset((char *)v8 + 4, 0, 0x104uLL);
  if ( qword_140D06CB0 )
  {
    if ( qword_140D06FE0 + qword_140D06CB0 < a1 )
    {
      result = sub_14039D6B0((unsigned __int16 *)v8);
      if ( (_BYTE)result )
      {
        qword_140D06FE0 = a1;
        v7[0] = 2097153;
        memset(&v7[1], 0, 0x104uLL);
        v5[1] = (unsigned __int16 *)v8[1];
        v5[0] = (unsigned __int16 *)v8;
        v6[0] = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v4, v5) )
        {
          v3 = sub_140348800(v4);
          if ( (struct _KPRCB *)v3 != KeGetCurrentPrcb() && *(_QWORD *)(v3 + 33648) <= a1 )
            KeAddProcessorAffinityEx((unsigned __int16 *)v7, v4);
        }
        result = KeIsEmptyAffinityEx(v7);
        if ( !(_DWORD)result )
        {
          sub_1405D9F60(v7);
          return HalRequestIpi(0, (__int64)v7);
        }
      }
    }
  }
  return result;
}

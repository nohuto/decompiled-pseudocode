/*
 * XREFs of sub_14050EB80 @ 0x14050EB80
 * Callers:
 *     sub_140303240 @ 0x140303240 (sub_140303240.c)
 *     sub_140305670 @ 0x140305670 (sub_140305670.c)
 *     sub_140521AC0 @ 0x140521AC0 (sub_140521AC0.c)
 * Callees:
 *     HalRequestClockInterrupt @ 0x14022F2D0 (HalRequestClockInterrupt.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_140354420 @ 0x140354420 (sub_140354420.c)
 *     sub_1403DD4C8 @ 0x1403DD4C8 (sub_1403DD4C8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14050EB80(char a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  signed __int32 v5[8]; // [rsp+0h] [rbp-178h] BYREF
  unsigned int v6; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-140h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp-138h] BYREF
  _DWORD v9[68]; // [rsp+50h] [rbp-128h] BYREF

  memset(&v9[2], 0, 0x100uLL);
  v2 = qword_140C4E3E8;
  v3 = 0;
  v6 = 0;
  if ( !qword_140C4E3E8 )
    return 3221225473LL;
  if ( a1 )
  {
    qword_140C4C6A0 = -1LL;
    _InterlockedOr(v5, 0);
    v9[0] = 2097153;
    memset(&v9[1], 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v9, dword_140C2B1C0);
    HalRequestClockInterrupt(0, (__int64)v9);
  }
  else
  {
    qword_140C4C6A0 = -2LL;
    _InterlockedOr(v5, 0);
    sub_1403DD4C8(v2, &v7, &v6);
    return (unsigned int)sub_140354420(v2, 3u, v6, 1, &v8);
  }
  return v3;
}

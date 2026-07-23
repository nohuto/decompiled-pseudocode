/*
 * XREFs of sub_140578BB4 @ 0x140578BB4
 * Callers:
 *     sub_140578EF0 @ 0x140578EF0 (sub_140578EF0.c)
 *     sub_140579B48 @ 0x140579B48 (sub_140579B48.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_1402DA760 @ 0x1402DA760 (sub_1402DA760.c)
 *     sub_1402DA81C @ 0x1402DA81C (sub_1402DA81C.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405735F0 @ 0x1405735F0 (sub_1405735F0.c)
 */

__int64 __fastcall sub_140578BB4(unsigned int a1)
{
  unsigned int v2; // edx
  struct _KPRCB *CurrentPrcb; // rbx
  signed int v4; // edi
  unsigned int i; // ebx
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v9; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C0h]
  __int16 v11; // [rsp+48h] [rbp-B8h]
  int v12; // [rsp+4Ah] [rbp-B6h]
  __int16 v13; // [rsp+4Eh] [rbp-B2h]
  _QWORD v14[34]; // [rsp+50h] [rbp-B0h] BYREF

  v12 = 0;
  v13 = 0;
  memset(&v14[1], 0, 0x100uLL);
  v2 = dword_140D06884;
  v8 = 0;
  if ( (_DWORD)dword_140D06884 != 1 && !byte_140D0194C )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    sub_1402DA760((__int64)CurrentPrcb);
    LODWORD(v14[0]) = 2097153;
    memset((char *)v14 + 4, 0, 0x104uLL);
    sub_140300030((__int64)v14, 0x20u, (unsigned __int16 *)dword_140D06E40);
    KeRemoveProcessorAffinityEx((unsigned __int16 *)v14, *((_DWORD *)CurrentPrcb + 9));
    dword_140C2AAA0 = 1;
    dword_140C2AAA4 = 0;
    v4 = 0;
    v10 = v14[1];
    v9 = (unsigned __int16 *)v14;
    v11 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v8, &v9) )
    {
      sub_140345190(qword_140D088C0[v8] + 38992, 0LL, 0LL, 0LL, 0);
      ++v4;
    }
    for ( i = 0; i < 0xF4240; i += 50 )
    {
      if ( dword_140C2AAA4 >= v4 )
        break;
      KeStallExecutionProcessor(0x32u);
    }
    if ( dword_140C2AAA4 < v4 )
    {
      v10 = v14[1];
      v9 = (unsigned __int16 *)v14;
      v11 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v8, &v9) )
        KeRemoveQueueDpcEx(qword_140D088C0[v8] + 38992, 0);
    }
    sub_1402DA81C((__int64)v14, a1 == 0);
    if ( a1 )
    {
      v6 = 0;
      do
      {
        if ( (unsigned int)sub_1405735F0() >= v4 )
          break;
        KeStallExecutionProcessor(0x32u);
        v6 += 50;
      }
      while ( v6 < a1 );
    }
    dword_140C2AAA0 = 0;
    return (unsigned int)dword_140D06884 - (unsigned int)sub_1405735F0();
  }
  return v2;
}

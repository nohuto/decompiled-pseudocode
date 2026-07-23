/*
 * XREFs of sub_1402DA5B0 @ 0x1402DA5B0
 * Callers:
 *     sub_1402DA4C0 @ 0x1402DA4C0 (sub_1402DA4C0.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140578830 @ 0x140578830 (sub_140578830.c)
 *     sub_140578AD8 @ 0x140578AD8 (sub_140578AD8.c)
 *     sub_140579B48 @ 0x140579B48 (sub_140579B48.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1402DA760 @ 0x1402DA760 (sub_1402DA760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402DA5B0(char a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  signed __int32 v4; // eax
  bool v5; // cc
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v9[2]; // [rsp+30h] [rbp-D8h] BYREF
  _WORD v10[4]; // [rsp+40h] [rbp-C8h]
  _QWORD v11[34]; // [rsp+48h] [rbp-C0h] BYREF

  *(_DWORD *)&v10[1] = 0;
  v10[3] = 0;
  memset(&v11[1], 0, 0x100uLL);
  *((_DWORD *)KeGetCurrentPrcb() + 2914) = 0;
  result = sub_1402DA760(0LL);
  if ( ((unsigned int)dword_140D06884 > 1 || *(_DWORD *)(v3 + 36)) && !byte_140C22260 )
  {
    if ( byte_140D01160
      || (v4 = _InterlockedExchangeAdd(&dword_140C2AD78, 0xFFFFFFFF), v5 = v4 <= 1, result = (unsigned int)(v4 - 1), v5)
      && ((dword_140C31E20 & 3) == 0
       || (result = (__int64)KeGetCurrentPrcb(), (unsigned int)dword_140C31E20 >> 4 != *(_DWORD *)(result + 36))
       || !byte_140C31E24) )
    {
      LODWORD(v11[0]) = 2097153;
      memset((char *)v11 + 4, 0, 0x104uLL);
      LODWORD(v8) = 0;
      if ( (_DWORD)dword_140D06884 )
      {
        v6 = v8;
        do
        {
          v7 = qword_140D088C0[v6];
          if ( (struct _KPRCB *)v7 != KeGetCurrentPrcb() )
          {
            if ( (*(_DWORD *)(v7 + 11656) & 0xF) == 2 )
            {
              *(_DWORD *)(v7 + 11656) = 3;
              if ( a1 )
                KeAddProcessorAffinityEx((unsigned __int16 *)v11, v8);
            }
            else
            {
              *(_DWORD *)(v7 + 11656) = 0;
            }
          }
          LODWORD(v8) = v8 + 1;
          v6 = v8;
        }
        while ( (unsigned int)v8 < (unsigned int)dword_140D06884 );
      }
      v9[1] = (unsigned __int16 *)v11[1];
      v9[0] = (unsigned __int16 *)v11;
      v10[0] = 0;
      while ( 1 )
      {
        result = KeEnumerateNextProcessor(&v8, v9);
        if ( (_DWORD)result )
          break;
        while ( *(_DWORD *)(qword_140D088C0[(unsigned int)v8] + 11656) == 3 )
          _mm_pause();
      }
    }
  }
  return result;
}

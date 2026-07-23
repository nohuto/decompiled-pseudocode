/*
 * XREFs of sub_140930EC4 @ 0x140930EC4
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14054B568 @ 0x14054B568 (sub_14054B568.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 */

__int64 __fastcall sub_140930EC4(void *a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v7; // ebx
  char v9; // al
  _DWORD Src[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int *v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF

  v5 = a2;
  v11 = a3;
  v12 = 0LL;
  v7 = 0;
  if ( (unsigned int)a2 >= 3 )
  {
    if ( (unsigned int)a2 >= 4 )
      v5 = 4;
    Src[1] = v5;
    Src[0] = 0;
    if ( !byte_140D0688B )
      goto LABEL_15;
    if ( (dword_140D0688C & 2) == 0 )
    {
      if ( (dword_140D0688C & 0x40) != 0 || sub_14054B568() )
        LOBYTE(Src[0]) = 1;
      BYTE1(Src[0]) = (dword_140D0688C & 0x40) != 0;
      goto LABEL_17;
    }
    if ( byte_140D0688B && (dword_140D0688C & 2) != 0 )
    {
      HviGetHardwareFeatures((__int64)&v12, a2, (__int64)a3, a4);
      v9 = (unsigned __int8)v12 >> 7;
      BYTE1(Src[0]) = (unsigned __int8)v12 >> 7;
    }
    else
    {
LABEL_15:
      v9 = sub_14054B568();
      BYTE1(Src[0]) = 0;
    }
    LOBYTE(Src[0]) = v9;
LABEL_17:
    BYTE2(Src[0]) = (dword_140D0688C & 0x20000) != 0;
    HIBYTE(Src[0]) = HIBYTE(dword_140D0688C) & 1;
    memmove(a1, Src, v5);
    *a3 = v5;
    return v7;
  }
  v7 = -1073741584;
  *a3 = 0;
  return v7;
}

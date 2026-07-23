/*
 * XREFs of sub_140548D80 @ 0x140548D80
 * Callers:
 *     sub_14054B43C @ 0x14054B43C (sub_14054B43C.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054BF60 @ 0x14054BF60 (sub_14054BF60.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 *     sub_140647B74 @ 0x140647B74 (sub_140647B74.c)
 */

char __fastcall sub_140548D80(__int64 a1)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ecx
  int v7; // eax
  _QWORD *v8; // rbx
  _DWORD *v9; // rsi
  __m256i v10; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+60h] [rbp-A8h]
  __int128 v13; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+78h] [rbp-90h] BYREF
  __int128 v15; // [rsp+88h] [rbp-80h] BYREF
  __int128 v16; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v17[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v18[2064]; // [rsp+B8h] [rbp-50h] BYREF

  v11[3] = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v12 = 0;
  LODWORD(v11[0]) = 0;
  result = dword_140D068B8;
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  *(_OWORD *)&v11[1] = 0LL;
  memset(&v10.m256i_u64[1], 0, 24);
  v13 = 0LL;
  if ( (dword_140D068B8 & 1) != 0 )
  {
    result = dword_140D0689C;
    if ( (dword_140D0689C & 0x80u) != 0 )
    {
      result = HviGetHypervisorFeatures(&v14);
      if ( (HIDWORD(v14) & 0x10000) != 0 )
      {
        result = sub_140647B74(&v15, v3, v4, v5);
        if ( (unsigned int)v15 >= 0x40000008 )
        {
          result = sub_14054BF60(517LL, &v13);
          v6 = v13;
          if ( (v13 & 1) != 0 )
          {
            v7 = DWORD1(v13);
            *(_DWORD *)a1 |= 1u;
            *(_DWORD *)(a1 + 4) = v7;
            *(_DWORD *)(a1 + 12) = DWORD2(v13);
            *(_DWORD *)(a1 + 8) = v6 >> 11;
            result = dword_140D0688C;
            if ( (dword_140D0688C & 2) != 0 )
            {
              HviGetHardwareFeatures(&v16);
              if ( (v16 & 0x80u) == 0LL )
                *(_DWORD *)a1 |= 2u;
              v8 = sub_14039DF90((PHYSICAL_ADDRESS *)&v11[1], 1, (__int64)v17, 8LL);
              v9 = sub_14039DF90((PHYSICAL_ADDRESS *)&v10.m256i_i64[1], 2, (__int64)v18, 1032LL);
              *v8 = 0LL;
              *(_DWORD *)v8 = 11;
              if ( !(unsigned __int16)HvlInvokeHypercall(123) )
              {
                *(_DWORD *)(a1 + 16) = *v9;
                *(_DWORD *)(a1 + 20) = v9[1];
              }
              sub_14039D8F0((__int64)&v10.m256i_i64[1]);
              return sub_14039D8F0((__int64)&v11[1]);
            }
          }
        }
      }
    }
  }
  return result;
}

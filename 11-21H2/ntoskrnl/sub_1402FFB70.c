/*
 * XREFs of sub_1402FFB70 @ 0x1402FFB70
 * Callers:
 *     sub_1402F38C4 @ 0x1402F38C4 (sub_1402F38C4.c)
 *     sub_1402F3C40 @ 0x1402F3C40 (sub_1402F3C40.c)
 *     sub_1402F42D4 @ 0x1402F42D4 (sub_1402F42D4.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     HalRequestIpi @ 0x14023DD20 (HalRequestIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_1402FEDA0 @ 0x1402FEDA0 (sub_1402FEDA0.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_1403000B0 @ 0x1403000B0 (sub_1403000B0.c)
 *     HalRequestIpiSpecifyVector @ 0x140300100 (HalRequestIpiSpecifyVector.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140630220 @ 0x140630220 (sub_140630220.c)
 */

__int64 __fastcall sub_1402FFB70(__int64 a1, unsigned int a2, __int64 a3, _OWORD *a4, __int64 a5)
{
  _WORD *v9; // rbx
  _WORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r12
  int v14; // r8d
  int v15; // edx
  int v16; // r11d
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rdx
  _QWORD *v25; // r13
  int v26; // r10d
  unsigned __int64 v27; // r8
  __int64 v28; // r11
  signed __int64 *v29; // r8
  signed __int64 v30; // rax
  signed __int64 v31; // rdx
  unsigned int v32; // r9d
  __int64 v33; // rdx
  _WORD *v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rax
  char v37; // [rsp+30h] [rbp-81h]
  int v38; // [rsp+34h] [rbp-7Dh]
  int v39; // [rsp+38h] [rbp-79h]
  int v40; // [rsp+3Ch] [rbp-75h]
  unsigned int v41; // [rsp+40h] [rbp-71h]
  __int64 v42; // [rsp+50h] [rbp-61h]
  unsigned __int16 v43; // [rsp+58h] [rbp-59h]
  signed __int64 v44; // [rsp+68h] [rbp-49h]
  __int64 v46; // [rsp+78h] [rbp-39h]
  unsigned __int64 v47; // [rsp+80h] [rbp-31h]
  _OWORD v48[3]; // [rsp+90h] [rbp-21h] BYREF

  LODWORD(v44) = 0;
  memset(v48, 0, 32);
  if ( (DWORD2(xmmword_140D06900) & 0x400000) != 0 )
  {
    v37 = 1;
    sub_140223A20((unsigned __int64)v48, 0x40400000uLL);
  }
  else
  {
    v37 = 0;
  }
  v9 = (_WORD *)(a1 + 12232);
  *(_QWORD *)(a1 + 12232) = 2097153LL;
  v10 = (_WORD *)(a1 + 12496);
  memset((void *)(a1 + 12240), 0, 0x100uLL);
  *(_QWORD *)(a1 + 12496) = 2097153LL;
  memset((void *)(a1 + 12504), 0, 0x100uLL);
  v11 = *(unsigned __int16 *)(a1 + 12234);
  v12 = a1 + 12232;
  if ( a2 )
  {
    sub_140300030(v12, v11, &dword_140D06E40);
    if ( a2 == 1 )
      KeRemoveProcessorAffinityEx((unsigned __int16 *)(a1 + 12232), *(_DWORD *)(a1 + 36));
    v13 = a5;
    if ( (a5 & 0x80000000) != 0 )
    {
      LODWORD(v13) = a5 & 0x7FFFFFFF;
      if ( !(unsigned int)KeIsEmptyAffinityEx(byte_140C2AF60) )
      {
        a2 = 0;
        sub_1402FEDA0((_WORD *)(a1 + 12232), byte_140C2AF60, (_BYTE *)(a1 + 12232), *(_WORD *)(a1 + 12234));
      }
    }
  }
  else
  {
    sub_140300030(v12, v11, a3);
    v13 = a5;
  }
  *(_DWORD *)(a1 + 11648) = 1;
  v14 = 0;
  v15 = 0;
  v40 = 0;
  v16 = 0;
  v39 = 0;
  v38 = 0;
  v17 = 0LL;
  v18 = v13 & 0xF | ((_QWORD)a4 << 7);
  v41 = *(_DWORD *)(a1 + 36);
  result = (unsigned __int16)word_140C2B0F0;
  *(_DWORD *)(a1 + 11652) = (unsigned __int16)word_140C2B0F0;
  if ( !(_DWORD)result )
    goto LABEL_28;
  do
  {
    v20 = *(_QWORD *)(qword_140C2B0E8 + 8 * v17);
    if ( !v20 )
    {
      v38 = ++v16;
      goto LABEL_25;
    }
    v21 = *(_QWORD *)(v20 + 128);
    v22 = *(unsigned __int16 *)(v20 + 136);
    v48[2] = 0LL;
    if ( *v9 <= (unsigned __int16)v22 || (v23 = *(_QWORD *)&v9[4 * v22 + 4] & v21, (v47 = v23) == 0) )
    {
      v38 = ++v16;
      goto LABEL_25;
    }
    v24 = v23;
    v43 = v22;
    v25 = 0LL;
    v26 = v22;
    while ( v24 )
    {
LABEL_11:
      v26 = v43;
      _BitScanForward64(&v27, v24);
      v42 = v24 & ~(1LL << v27);
      v46 = (unsigned int)dword_140D105E0[64 * v43 + (unsigned __int8)v27];
      v28 = qword_140D088C0[v46];
      _m_prefetchw((const void *)(v28 + 38336));
      v29 = (signed __int64 *)(v28 + ((v41 + 763LL) << 6));
      _m_prefetchw(v29);
      if ( !v25 )
      {
        v25 = v29 + 7;
        *((_DWORD *)v29 + 14) = (unsigned int)((0x101010101010101LL
                                              * ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                + ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                  + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      }
      v29[6] = (signed __int64)v25;
      if ( v13 == 5 )
      {
        *((_OWORD *)v29 + 1) = *a4;
        *((_OWORD *)v29 + 2) = a4[1];
        v44 = v29[5];
      }
      v29[1] = v18;
      v30 = *(_QWORD *)(v28 + 38336);
      do
      {
        v31 = v30;
        *v29 = v30;
        v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 38336), (signed __int64)v29, v30);
      }
      while ( v30 != v31 );
      if ( v30 )
      {
        v39 = 1;
      }
      else
      {
        v40 = 1;
        v32 = dword_140D0E5E0[v46] & 0x3F;
        v33 = dword_140D0E5E0[v46] >> 6;
        if ( (unsigned __int16)*v10 > (unsigned int)v33 )
          goto LABEL_19;
        if ( *(unsigned __int16 *)(a1 + 12498) > (unsigned int)v33 )
        {
          *v10 = v33 + 1;
LABEL_19:
          v34 = &v10[4 * v33];
          v35 = *((_QWORD *)v34 + 1);
          _bittestandset64(&v35, v32);
          *((_QWORD *)v34 + 1) = v35;
        }
      }
      v36 = *(_QWORD *)(v28 + 35000);
      if ( v36 )
        _InterlockedIncrement((volatile signed __int32 *)(v36 + 32));
      v24 = v42;
      v23 = v47;
    }
    while ( ++v43 < (unsigned int)(v26 + 1) )
    {
      v24 = *(_QWORD *)(8LL * v43 + 8);
      if ( v24 )
      {
        v23 = v47;
        goto LABEL_11;
      }
    }
    v16 = v38;
LABEL_25:
    result = (unsigned __int16)word_140C2B0F0;
    v17 = (unsigned int)(v17 + 1);
  }
  while ( (unsigned int)v17 < (unsigned __int16)word_140C2B0F0 );
  if ( v16 )
  {
    result = (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 11652), -v16) - v16);
    if ( !(_DWORD)result )
    {
      *(_DWORD *)(a1 + 11648) = 0;
      return result;
    }
  }
  v14 = v40;
  v15 = v39;
LABEL_28:
  if ( v13 != 5 && v15 )
  {
    if ( v14 )
    {
      ++*(_DWORD *)(a1 + 35024);
      sub_1403000B0(a1 + 12496);
      result = HalRequestIpi(0, a1 + 12496);
    }
  }
  else
  {
    if ( a2 - 1 <= 1 )
      ++*(_DWORD *)(a1 + 35020);
    else
      ++*(_DWORD *)(a1 + 35024);
    sub_1403000B0(a1 + 12232);
    result = HalRequestIpiSpecifyVector(a2, a1 + 12232, 225LL);
    if ( (int)result < 0 )
      KeBugCheckEx(0x5Cu, 0x201uLL, qword_140C54A88, (int)result, (int)a2);
  }
  if ( v37 )
    return sub_140630220((unsigned int)v48, v13, v44, a2, a1 + 12232);
  return result;
}

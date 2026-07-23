/*
 * XREFs of HalSendNMI @ 0x1402DA8E0
 * Callers:
 *     sub_1402DA81C @ 0x1402DA81C (sub_1402DA81C.c)
 *     sub_14051FA44 @ 0x14051FA44 (sub_14051FA44.c)
 * Callees:
 *     KeAndGroupAffinityEx @ 0x140263350 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall HalSendNMI(unsigned __int16 *a1)
{
  __int16 v2; // r13
  int v3; // r12d
  __int64 result; // rax
  unsigned __int16 v5; // cx
  BYTE v6; // bp
  unsigned __int16 v7; // dx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // r9
  unsigned __int16 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned int *v15; // rdi
  unsigned __int64 v16; // rsi
  int v17; // r15d
  bool v18; // zf
  unsigned __int64 v19; // rdx
  _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+30h] [rbp-1B8h] BYREF
  __int128 v21; // [rsp+38h] [rbp-1B0h]
  int v22; // [rsp+48h] [rbp-1A0h]
  _DWORD v23[2]; // [rsp+50h] [rbp-198h] BYREF
  _DWORD v24[2]; // [rsp+58h] [rbp-190h] BYREF
  _DWORD v25[2]; // [rsp+60h] [rbp-188h] BYREF
  __int64 v26; // [rsp+68h] [rbp-180h]
  __int64 v27; // [rsp+70h] [rbp-178h]
  _OWORD v28[18]; // [rsp+78h] [rbp-170h] BYREF
  int v29; // [rsp+1E0h] [rbp-8h]

  ProcNumber[0] = (_PROCESSOR_NUMBER)-1;
  ProcNumber[1] = (_PROCESSOR_NUMBER)2;
  _disable();
  v2 = v29;
  v3 = v29 & 0x200;
  v28[0] = 0LL;
  memset((char *)&v28[1] + 8, 0, 0x108uLL);
  v22 = 0;
  WORD5(v28[1]) = 32;
  v21 = 0LL;
  memset(&v28[2], 0, 0x100uLL);
  result = *a1;
  if ( (unsigned __int16)dword_140C4DD60 < (unsigned __int16)result )
    result = (unsigned __int16)dword_140C4DD60;
  v5 = WORD5(v28[1]);
  WORD4(v28[1]) = result;
  if ( (unsigned __int16)result > WORD5(v28[1]) )
  {
    WORD4(v28[1]) = WORD5(v28[1]);
    result = WORD5(v28[1]);
  }
  v6 = 0;
  v7 = 0;
  if ( (_WORD)result )
  {
    do
    {
      v8 = v7++;
      result = qword_140C4DD68[v8] & *(_QWORD *)&a1[4 * v8 + 4];
      *((_QWORD *)&v28[2] + v8) = result;
    }
    while ( v7 < WORD4(v28[1]) );
    v5 = WORD5(v28[1]);
  }
  HIDWORD(v28[1]) = 0;
  if ( v7 < v5 )
  {
    do
    {
      result = v7++;
      *((_QWORD *)&v28[2] + result) = 0LL;
    }
    while ( v7 < WORD5(v28[1]) );
  }
  v9 = *(_QWORD *)&ProcNumber[0].Group;
  if ( !byte_140C4ADB4 )
  {
    if ( !byte_140D011A0 )
    {
      v10 = *((_QWORD *)a1 + 1);
      v11 = 0;
      LODWORD(v21) = 5;
      DWORD2(v21) = 0;
      while ( 1 )
      {
        while ( v10 )
        {
          _BitScanForward64((unsigned __int64 *)&v12, v10);
          v10 &= ~(1LL << v12);
          result = 3LL * (unsigned int)dword_140D105E0[64 * v11 + (unsigned __int8)v12];
          if ( *(_DWORD *)(qword_140C54A80 + 24LL * (unsigned int)dword_140D105E0[64 * v11 + (unsigned __int8)v12]) == 5 )
          {
            result = *(unsigned int *)(qword_140C54A80
                                     + 24LL * (unsigned int)dword_140D105E0[64 * v11 + (unsigned __int8)v12]
                                     + 8);
            DWORD2(v21) |= result;
          }
        }
        if ( ++v11 >= *a1 )
          break;
        result = v11;
        v10 = *(_QWORD *)&a1[4 * v11 + 4];
      }
      if ( DWORD2(v21) )
      {
        v27 = *(_QWORD *)&ProcNumber[0].Group;
        v24[1] = *(_DWORD *)(qword_140C54B50 + 20);
        v24[0] = *(_DWORD *)(qword_140C54B50 + 16);
        _disable();
        result = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v24);
        if ( (v2 & 0x200) != 0 )
          _enable();
        if ( (int)result < 0 )
          goto LABEL_25;
      }
    }
    goto LABEL_22;
  }
  v15 = (unsigned int *)qword_140D016F0;
  ProcNumber[0] = 0;
  if ( qword_140D016F0 >= (unsigned __int64)qword_140D016F8 )
  {
LABEL_22:
    v13 = *(_QWORD *)&v28[2];
    LOWORD(v14) = 0;
    do
    {
      while ( !v13 )
      {
        v14 = (unsigned __int16)(v14 + 1);
        if ( (unsigned int)v14 >= WORD4(v28[1]) )
          goto LABEL_25;
        v13 = *((_QWORD *)&v28[2] + v14);
      }
      _BitScanForward64(&v19, v13);
      LODWORD(v21) = 4;
      v13 &= ~(1LL << v19);
      DWORD2(v21) = *(_DWORD *)(qword_140C54A80
                              + 24LL * (unsigned int)dword_140D105E0[64 * (unsigned __int16)v14 + (unsigned __int8)v19]
                              + 8);
      v25[1] = *(_DWORD *)(qword_140C54B50 + 20);
      v25[0] = *(_DWORD *)(qword_140C54B50 + 16);
      *(_QWORD *)&v28[0] = v9;
      _disable();
      result = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v25);
      if ( (v2 & 0x200) != 0 )
        _enable();
    }
    while ( (int)result >= 0 );
    goto LABEL_25;
  }
  while ( 1 )
  {
    result = KeAndGroupAffinityEx(a1, (__int64)(v15 + 2), (char *)v28);
    if ( (_DWORD)result )
    {
      v16 = *(_QWORD *)&v28[0];
      v17 = 0;
      LODWORD(v21) = 6;
      v18 = *(_QWORD *)&v28[0] == 0LL;
      *((_QWORD *)&v21 + 1) = *v15;
      ProcNumber[0].Group = WORD4(v28[0]);
      while ( 1 )
      {
        ProcNumber[0].Number = v6;
        if ( v18 )
          break;
        if ( (v16 & 1) != 0 )
        {
          v17 |= *(_DWORD *)(qword_140C54A80 + 24LL * KeGetProcessorIndexFromNumber(ProcNumber) + 12);
          HIDWORD(v21) = v17;
        }
        ++v6;
        v16 >>= 1;
        v18 = v16 == 0;
      }
      v26 = v9;
      v23[1] = *(_DWORD *)(qword_140C54B50 + 20);
      v23[0] = *(_DWORD *)(qword_140C54B50 + 16);
      _disable();
      result = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v23);
      if ( (v2 & 0x200) != 0 )
        _enable();
      v6 = 0;
      if ( (int)result < 0 )
        break;
    }
    v15 += 6;
    if ( (unsigned __int64)v15 >= qword_140D016F8 )
      goto LABEL_22;
  }
LABEL_25:
  if ( v3 )
    _enable();
  return result;
}

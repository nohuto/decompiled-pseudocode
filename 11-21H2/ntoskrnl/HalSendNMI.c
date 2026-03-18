/*
 * XREFs of HalSendNMI @ 0x1402DA8E0
 * Callers:
 *     KiSendFreeze @ 0x1402DA81C (KiSendFreeze.c)
 *     HalpNmiReboot @ 0x14051FA44 (HalpNmiReboot.c)
 * Callees:
 *     KeAndGroupAffinityEx @ 0x140263350 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall HalSendNMI(unsigned __int16 *a1)
{
  __int16 v2; // r13
  int v3; // r12d
  __int64 result; // rax
  unsigned __int16 v5; // cx
  unsigned __int8 v6; // bp
  unsigned __int16 v7; // dx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // r9
  unsigned __int16 v11; // r8
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(_QWORD, _DWORD *, __int128 *, _QWORD, __int64 *); // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned int *v16; // rdi
  unsigned __int64 v17; // rsi
  int v18; // r15d
  bool v19; // zf
  __int64 (__fastcall *v20)(_QWORD, _DWORD *, __int128 *, _QWORD, __int64 *); // rax
  unsigned __int64 v21; // rdx
  __int64 (__fastcall *v22)(_QWORD, _DWORD *, __int128 *, _QWORD, _OWORD *); // rax
  struct _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+30h] [rbp-1B8h] BYREF
  __int128 v24; // [rsp+38h] [rbp-1B0h] BYREF
  int v25; // [rsp+48h] [rbp-1A0h]
  _DWORD v26[2]; // [rsp+50h] [rbp-198h] BYREF
  _DWORD v27[2]; // [rsp+58h] [rbp-190h] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-188h] BYREF
  __int64 v29; // [rsp+68h] [rbp-180h] BYREF
  __int64 v30; // [rsp+70h] [rbp-178h] BYREF
  _OWORD v31[18]; // [rsp+78h] [rbp-170h] BYREF
  int v32; // [rsp+1E0h] [rbp-8h]

  ProcNumber[0] = (struct _PROCESSOR_NUMBER)-1;
  ProcNumber[1] = (struct _PROCESSOR_NUMBER)2;
  _disable();
  v2 = v32;
  v3 = v32 & 0x200;
  v31[0] = 0LL;
  memset((char *)&v31[1] + 8, 0, 0x108uLL);
  v25 = 0;
  WORD5(v31[1]) = 32;
  v24 = 0LL;
  memset(&v31[2], 0, 0x100uLL);
  result = *a1;
  if ( (unsigned __int16)HalpInterruptPhysicalTargets < (unsigned __int16)result )
    result = (unsigned __int16)HalpInterruptPhysicalTargets;
  v5 = WORD5(v31[1]);
  WORD4(v31[1]) = result;
  if ( (unsigned __int16)result > WORD5(v31[1]) )
  {
    WORD4(v31[1]) = WORD5(v31[1]);
    result = WORD5(v31[1]);
  }
  v6 = 0;
  v7 = 0;
  if ( (_WORD)result )
  {
    do
    {
      v8 = v7++;
      result = qword_140C4DD68[v8] & *(_QWORD *)&a1[4 * v8 + 4];
      *((_QWORD *)&v31[2] + v8) = result;
    }
    while ( v7 < WORD4(v31[1]) );
    v5 = WORD5(v31[1]);
  }
  HIDWORD(v31[1]) = 0;
  if ( v7 < v5 )
  {
    do
    {
      result = v7++;
      *((_QWORD *)&v31[2] + result) = 0LL;
    }
    while ( v7 < WORD5(v31[1]) );
  }
  v9 = *(_QWORD *)&ProcNumber[0].Group;
  if ( !HalpInterruptClusterModeEnabled )
  {
    if ( !HalpInterruptPhysicalModeOnly )
    {
      v10 = *((_QWORD *)a1 + 1);
      v11 = 0;
      LODWORD(v24) = 5;
      DWORD2(v24) = 0;
      while ( 1 )
      {
        while ( v10 )
        {
          _BitScanForward64((unsigned __int64 *)&v12, v10);
          v10 &= ~(1LL << v12);
          result = 3LL * (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v11 + (unsigned __int8)v12];
          if ( *(_DWORD *)(HalpInterruptTargets
                         + 24LL * (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v11 + (unsigned __int8)v12]) == 5 )
          {
            result = *(unsigned int *)(HalpInterruptTargets
                                     + 24LL
                                     * (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v11
                                                                                        + (unsigned __int8)v12]
                                     + 8);
            DWORD2(v24) |= result;
          }
        }
        if ( ++v11 >= *a1 )
          break;
        result = v11;
        v10 = *(_QWORD *)&a1[4 * v11 + 4];
      }
      if ( DWORD2(v24) )
      {
        v30 = *(_QWORD *)&ProcNumber[0].Group;
        v27[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v27[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v13 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, __int64 *))(HalpInterruptController + 120);
        _disable();
        result = v13(*(_QWORD *)(HalpInterruptController + 16), v27, &v24, 0LL, &v30);
        if ( (v2 & 0x200) != 0 )
          _enable();
        if ( (int)result < 0 )
          goto LABEL_25;
      }
    }
    goto LABEL_22;
  }
  v16 = (unsigned int *)HalpInterruptClusterData;
  ProcNumber[0] = 0;
  if ( HalpInterruptClusterData >= (unsigned __int64)HalpInterruptClusterDataEnd )
  {
LABEL_22:
    v14 = *(_QWORD *)&v31[2];
    LOWORD(v15) = 0;
    do
    {
      while ( !v14 )
      {
        v15 = (unsigned __int16)(v15 + 1);
        if ( (unsigned int)v15 >= WORD4(v31[1]) )
          goto LABEL_25;
        v14 = *((_QWORD *)&v31[2] + v15);
      }
      _BitScanForward64(&v21, v14);
      LODWORD(v24) = 4;
      v14 &= ~(1LL << v21);
      DWORD2(v24) = *(_DWORD *)(HalpInterruptTargets
                              + 24LL
                              * (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v15
                                                                                 + (unsigned __int8)v21]
                              + 8);
      v28[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v28[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v22 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _OWORD *))(HalpInterruptController + 120);
      *(_QWORD *)&v31[0] = v9;
      _disable();
      result = v22(*(_QWORD *)(HalpInterruptController + 16), v28, &v24, 0LL, v31);
      if ( (v2 & 0x200) != 0 )
        _enable();
    }
    while ( (int)result >= 0 );
    goto LABEL_25;
  }
  while ( 1 )
  {
    result = KeAndGroupAffinityEx(a1, (__int64)(v16 + 2), (char *)v31);
    if ( (_DWORD)result )
    {
      v17 = *(_QWORD *)&v31[0];
      v18 = 0;
      LODWORD(v24) = 6;
      v19 = *(_QWORD *)&v31[0] == 0LL;
      *((_QWORD *)&v24 + 1) = *v16;
      ProcNumber[0].Group = WORD4(v31[0]);
      while ( 1 )
      {
        ProcNumber[0].Number = v6;
        if ( v19 )
          break;
        if ( (v17 & 1) != 0 )
        {
          v18 |= *(_DWORD *)(HalpInterruptTargets + 24LL * KeGetProcessorIndexFromNumber(ProcNumber) + 12);
          HIDWORD(v24) = v18;
        }
        ++v6;
        v17 >>= 1;
        v19 = v17 == 0;
      }
      v29 = v9;
      v26[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v26[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v20 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, __int64 *))(HalpInterruptController + 120);
      _disable();
      result = v20(*(_QWORD *)(HalpInterruptController + 16), v26, &v24, 0LL, &v29);
      if ( (v2 & 0x200) != 0 )
        _enable();
      v6 = 0;
      if ( (int)result < 0 )
        break;
    }
    v16 += 6;
    if ( (unsigned __int64)v16 >= HalpInterruptClusterDataEnd )
      goto LABEL_22;
  }
LABEL_25:
  if ( v3 )
    _enable();
  return result;
}

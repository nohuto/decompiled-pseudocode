/*
 * XREFs of sub_1402ADD00 @ 0x1402ADD00
 * Callers:
 *     sub_140207F60 @ 0x140207F60 (sub_140207F60.c)
 *     sub_14020E1DC @ 0x14020E1DC (sub_14020E1DC.c)
 *     sub_14020E6EC @ 0x14020E6EC (sub_14020E6EC.c)
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     sub_1402112F8 @ 0x1402112F8 (sub_1402112F8.c)
 *     sub_14022B5D8 @ 0x14022B5D8 (sub_14022B5D8.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_140255110 @ 0x140255110 (sub_140255110.c)
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     HalRequestIpiSpecifyVector @ 0x140300100 (HalRequestIpiSpecifyVector.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     HalSendSoftwareInterrupt @ 0x140342650 (HalSendSoftwareInterrupt.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_14039C4BC @ 0x14039C4BC (sub_14039C4BC.c)
 *     sub_1403D2D98 @ 0x1403D2D98 (sub_1403D2D98.c)
 *     sub_1403D2F9C @ 0x1403D2F9C (sub_1403D2F9C.c)
 *     HalRequestDeferredRecoveryServiceInterrupt @ 0x14050A7A0 (HalRequestDeferredRecoveryServiceInterrupt.c)
 *     sub_14056B410 @ 0x14056B410 (sub_14056B410.c)
 *     sub_14056B9FC @ 0x14056B9FC (sub_14056B9FC.c)
 *     sub_140572774 @ 0x140572774 (sub_140572774.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 *     sub_1405777C0 @ 0x1405777C0 (sub_1405777C0.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 * Callees:
 *     KeAndGroupAffinityEx @ 0x140263350 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402ADD00(int *a1, unsigned int a2)
{
  int v4; // eax
  _WORD *v5; // r14
  __int64 v6; // rcx
  __int64 result; // rax
  int v8; // r13d
  unsigned int v9; // r12d
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // ax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  unsigned __int16 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int16 v20; // r15
  unsigned __int64 v21; // r14
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int *v26; // r15
  unsigned __int64 v27; // rbp
  BYTE v28; // r12
  int v29; // eax
  unsigned __int64 v30; // rdx
  int v31; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-2E8h] BYREF
  int v33; // [rsp+38h] [rbp-2E0h] BYREF
  int v34; // [rsp+3Ch] [rbp-2DCh]
  int v35; // [rsp+40h] [rbp-2D8h] BYREF
  int v36; // [rsp+44h] [rbp-2D4h]
  __int128 v37; // [rsp+48h] [rbp-2D0h]
  int v38; // [rsp+58h] [rbp-2C0h]
  int v39; // [rsp+60h] [rbp-2B8h]
  int v40; // [rsp+64h] [rbp-2B4h]
  _DWORD v41[4]; // [rsp+68h] [rbp-2B0h] BYREF
  _DWORD v42[2]; // [rsp+78h] [rbp-2A0h] BYREF
  _BYTE v43[24]; // [rsp+80h] [rbp-298h]
  __int128 v44; // [rsp+98h] [rbp-280h] BYREF
  _QWORD v45[34]; // [rsp+B0h] [rbp-268h] BYREF
  unsigned __int16 v46; // [rsp+1C0h] [rbp-158h]
  unsigned __int16 v47; // [rsp+1C2h] [rbp-156h]
  _DWORD v48[67]; // [rsp+1C4h] [rbp-154h] BYREF
  int v49; // [rsp+310h] [rbp-8h]

  memset(v45, 0, 0x108uLL);
  v4 = *a1;
  v5 = v45;
  *(_OWORD *)&v43[4] = 0LL;
  if ( v4 == 6 )
  {
    v6 = 3LL * (unsigned int)a1[2];
    *(_OWORD *)v43 = *(_OWORD *)(qword_140C54A80 + 24LL * (unsigned int)a1[2]);
    *(_QWORD *)&v43[16] = *(_QWORD *)(qword_140C54A80 + 8 * v6 + 16);
    goto LABEL_3;
  }
  if ( v4 <= 0 )
    return 3221225485LL;
  if ( v4 <= 2 )
  {
    v5 = (_WORD *)*((_QWORD *)a1 + 1);
    if ( v4 != 1 )
      goto LABEL_15;
    LODWORD(v45[0]) = 2097153;
    memset((char *)v45 + 4, 0, 0x104uLL);
    v24 = (unsigned __int16)v5[4];
    v25 = *(_QWORD *)v5;
    if ( (_WORD)v24 )
    {
      if ( WORD1(v45[0]) <= (unsigned __int16)v24 )
      {
LABEL_56:
        v5 = v45;
        goto LABEL_15;
      }
      LOWORD(v45[0]) = v24 + 1;
    }
    v45[v24 + 1] |= v25;
    goto LABEL_56;
  }
  switch ( v4 )
  {
    case 4:
      if ( (*(_DWORD *)(qword_140C54A88 + 228) & 0x20) == 0 || byte_140D016DE )
      {
        LODWORD(v45[0]) = 2097153;
        memset((char *)v45 + 4, 0, 0x104uLL);
        sub_140300030(v45, 32LL, &dword_140D06E40);
        LODWORD(v23) = HIDWORD(KeGetPcr()[1].LockArray);
        KeRemoveProcessorAffinityEx(v45, v23);
        goto LABEL_15;
      }
      *(_DWORD *)v43 = 2;
      break;
    case 3:
      if ( (*(_DWORD *)(qword_140C54A88 + 228) & 0x10) == 0 || byte_140D016DE )
      {
        LODWORD(v45[0]) = 2097153;
        memset((char *)v45 + 4, 0, 0x104uLL);
        sub_140300030(v45, 32LL, &dword_140D06E40);
        goto LABEL_15;
      }
      *(_DWORD *)v43 = 1;
      break;
    case 5:
      if ( (*(_DWORD *)(qword_140C54A88 + 228) & 0x40) != 0 && !byte_140D016DE )
      {
        *(_DWORD *)v43 = 3;
        break;
      }
      LODWORD(v45[0]) = 2097153;
      memset((char *)v45 + 4, 0, 0x104uLL);
      KeAddProcessorAffinityEx((unsigned __int16 *)v45, HIDWORD(KeGetPcr()[1].LockArray));
LABEL_15:
      v44 = 0LL;
      memset(v48, 0, 0x104uLL);
      v8 = 0;
      v38 = 0;
      v9 = 0;
      v37 = 0LL;
      if ( !qword_140C4C528 )
      {
        v47 = 32;
        memset(&v48[1], 0, 0x100uLL);
        v10 = dword_140C4DD60;
        if ( (unsigned __int16)dword_140C4DD60 >= *v5 )
          v10 = *v5;
        v11 = v47;
        v46 = v10;
        if ( v10 > v47 )
        {
          v46 = v47;
          v10 = v47;
        }
        v12 = 0;
        if ( v10 )
        {
          do
          {
            v13 = v12++;
            *(_QWORD *)&v48[2 * v13 + 1] = qword_140C4DD68[v13] & *(_QWORD *)&v5[4 * v13 + 4];
          }
          while ( v12 < v46 );
          v11 = v47;
        }
        v48[0] = 0;
        if ( v12 < v11 )
        {
          do
          {
            v14 = v12++;
            *(_QWORD *)&v48[2 * v14 + 1] = 0LL;
          }
          while ( v12 < v47 );
        }
        if ( byte_140C4ADB4 )
        {
          v26 = (unsigned int *)qword_140D016F0;
          ProcNumber = 0;
          if ( qword_140D016F0 < (unsigned __int64)qword_140D016F8 )
          {
            do
            {
              if ( (unsigned int)KeAndGroupAffinityEx(v5, (__int64)(v26 + 2), (char *)&v44) )
              {
                v27 = v44;
                v28 = 0;
                LODWORD(v37) = 6;
                *((_QWORD *)&v37 + 1) = *v26;
                ProcNumber.Group = WORD4(v44);
                for ( ProcNumber.Number = 0; v27; ProcNumber.Number = v28 )
                {
                  if ( (v27 & 1) != 0 )
                  {
                    v8 |= *(_DWORD *)(qword_140C54A80 + 24LL * KeGetProcessorIndexFromNumber(&ProcNumber) + 12);
                    HIDWORD(v37) = v8;
                  }
                  ++v28;
                  v27 >>= 1;
                }
                v39 = -1;
                v40 = 1;
                v41[1] = *(_DWORD *)(qword_140C54B50 + 20);
                v41[0] = *(_DWORD *)(qword_140C54B50 + 16);
                _disable();
                v29 = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v41);
                v9 = v29;
                if ( (v49 & 0x200) != 0 )
                  _enable();
                if ( v29 < 0 )
                  return v9;
                v8 = 0;
              }
              v26 += 6;
            }
            while ( (unsigned __int64)v26 < qword_140D016F8 );
            v20 = v49;
            goto LABEL_38;
          }
        }
        else if ( !byte_140D011A0 )
        {
          v15 = *((_QWORD *)v5 + 1);
          v16 = 0;
          LODWORD(v37) = 5;
          DWORD2(v37) = 0;
          while ( v15 )
          {
LABEL_29:
            _BitScanForward64(&v17, v15);
            v15 &= ~(1LL << v17);
            v18 = (unsigned __int8)v17 + (v16 << 6);
            if ( *(_DWORD *)(qword_140C54A80 + 24LL * (unsigned int)dword_140D105E0[v18]) == 5 )
              DWORD2(v37) |= *(_DWORD *)(qword_140C54A80 + 24LL * (unsigned int)dword_140D105E0[v18] + 8);
          }
          while ( ++v16 < *v5 )
          {
            v15 = *(_QWORD *)&v5[4 * v16 + 4];
            if ( v15 )
              goto LABEL_29;
          }
          if ( DWORD2(v37) )
          {
            v41[2] = -1;
            v41[3] = 1;
            v42[1] = *(_DWORD *)(qword_140C54B50 + 20);
            v42[0] = *(_DWORD *)(qword_140C54B50 + 16);
            _disable();
            v19 = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v42);
            v20 = v49;
            v9 = v19;
            if ( (v49 & 0x200) != 0 )
              _enable();
            if ( v19 >= 0 )
            {
LABEL_38:
              v21 = *(_QWORD *)&v48[1];
              LOWORD(v22) = 0;
              while ( v21 )
              {
LABEL_71:
                _BitScanForward64(&v30, v21);
                LODWORD(v37) = 4;
                v21 &= ~(1LL << v30);
                DWORD2(v37) = *(_DWORD *)(qword_140C54A80
                                        + 24LL
                                        * (unsigned int)dword_140D105E0[64 * (unsigned __int16)v22
                                                                      + (unsigned __int8)v30]
                                        + 8);
                v36 = *(_DWORD *)(qword_140C54B50 + 20);
                v35 = *(_DWORD *)(qword_140C54B50 + 16);
                v33 = -1;
                v34 = 1;
                _disable();
                v31 = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), &v35);
                v9 = v31;
                if ( (v20 & 0x200) != 0 )
                  _enable();
                if ( v31 < 0 )
                  return v9;
              }
              while ( 1 )
              {
                v22 = (unsigned __int16)(v22 + 1);
                if ( (unsigned int)v22 >= v46 )
                  break;
                v21 = *(_QWORD *)&v48[2 * v22 + 1];
                if ( v21 )
                  goto LABEL_71;
              }
            }
            return v9;
          }
        }
        v20 = v49;
        goto LABEL_38;
      }
      return (unsigned int)sub_14042A5E0(v5, a2);
    default:
      return 3221225485LL;
  }
LABEL_3:
  v35 = -1;
  v36 = 1;
  v34 = *(_DWORD *)(qword_140C54B50 + 20);
  v33 = *(_DWORD *)(qword_140C54B50 + 16);
  _disable();
  result = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), &v33);
  if ( (v49 & 0x200) != 0 )
    _enable();
  return result;
}

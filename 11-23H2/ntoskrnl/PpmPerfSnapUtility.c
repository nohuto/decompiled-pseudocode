/*
 * XREFs of PpmPerfSnapUtility @ 0x140255BD0
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x1402568E0 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     Feature_MultiCoreClasses__private_IsEnabledPreCheck @ 0x140256020 (Feature_MultiCoreClasses__private_IsEnabledPreCheck.c)
 *     Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x1404103BC (Feature_MultiCoreClasses__private_ReportDeviceUsage.c)
 *     memmove @ 0x140435B00 (memmove.c)
 */

void __fastcall PpmPerfSnapUtility(__int64 a1)
{
  __int64 v1; // rdi
  _DWORD *v3; // rbx
  __int64 v4; // rbp
  _QWORD *v5; // rsi
  unsigned __int64 v6; // r10
  __int64 v7; // r9
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  int v13; // r8d
  unsigned int v14; // eax
  unsigned __int64 v15; // rcx
  char v16; // cl
  unsigned __int64 v17; // rcx
  char v18; // cl
  unsigned __int64 v19; // rcx
  char v20; // cl
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // rdi
  unsigned int i; // r15d
  signed int v29; // r14d
  __int64 v30; // r12
  unsigned __int8 v31; // al
  unsigned int v32; // r9d
  unsigned int k; // r8d
  __int64 v34; // rax
  unsigned int v35; // r9d
  unsigned int j; // r8d
  __int64 v37; // rax
  unsigned int v38; // r9d
  unsigned int m; // eax
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  char v43; // cl
  unsigned __int64 v44; // rax
  char v45; // cl
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // [rsp+20h] [rbp-68h]
  unsigned __int64 v49; // [rsp+28h] [rbp-60h]
  __int64 v50; // [rsp+30h] [rbp-58h]
  __int16 v51; // [rsp+90h] [rbp+8h]
  int v52; // [rsp+98h] [rbp+10h]
  unsigned __int64 v53; // [rsp+A0h] [rbp+18h]
  __int64 v54; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  v54 = v1;
  if ( v1 )
  {
    v3 = *(_DWORD **)(v1 + 152);
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_QWORD **)(v1 + 88);
    v6 = *(_QWORD *)v3 - *v5;
    v7 = *((_QWORD *)v3 + 1) - v5[1];
    v8 = *(_QWORD *)(v1 + 104) - *(_QWORD *)(v1 + 40);
    v9 = v8;
    v10 = *(_QWORD *)(v1 + 96) - *(_QWORD *)(v1 + 32);
    v50 = v10;
    v49 = v8;
    if ( !v8 )
      v9 = 1LL;
    v53 = *(_QWORD *)v3 - *v5;
    v48 = v4;
    v11 = (*(_QWORD *)(v1 + 128) - *(_QWORD *)(v1 + 64)) / v9;
    v12 = v53;
    v13 = v11;
    v52 = v11;
    if ( !v6 )
      v12 = 1LL;
    v14 = (unsigned __int8)(100 * v7 / v12);
    if ( v14 > 0x64 )
      LOWORD(v14) = 100;
    v51 = v14;
    if ( !v13 )
    {
      if ( v4 )
        v52 = *(_DWORD *)(v4 + 120);
      else
        v52 = 100;
    }
    if ( *(_BYTE *)(a1 + 68) )
    {
      v15 = *(_QWORD *)v3 - *v5;
      if ( !v6 )
        v15 = 1LL;
      v16 = 100LL * (*((_QWORD *)v3 + 2) - v5[2]) / v15;
      if ( (unsigned __int8)v16 > 0x64u )
        v16 = 100;
      *(_BYTE *)(v1 + 232) = v16;
      v17 = v6;
      if ( !v6 )
        v17 = 1LL;
      v18 = 100LL * (*((_QWORD *)v3 + 3) - v5[3]) / v17;
      if ( (unsigned __int8)v18 > 0x64u )
        v18 = 100;
      *(_BYTE *)(v1 + 233) = v18;
      v19 = v6;
      if ( !v6 )
        v19 = 1LL;
      v20 = 100LL * (*((_QWORD *)v3 + 4) - v5[4]) / v19;
      if ( (unsigned __int8)v20 > 0x64u )
        v20 = 100;
      *(_BYTE *)(v1 + 234) = v20;
      v21 = v6;
      v22 = *((_QWORD *)v3 + 5) - v5[5];
      if ( !v6 )
        v21 = 1LL;
      v23 = 100 * v22 / v21;
      v24 = 100 * v22 % v21;
      v25 = (unsigned __int8)v23;
      if ( (unsigned __int8)v23 > 0x64u )
        v25 = 100LL;
      v26 = 0LL;
      *(_BYTE *)(v1 + 235) = v25;
      v27 = 0LL;
      for ( i = 0; i < 7; ++i )
      {
        v29 = 0;
        v30 = 2LL * (int)i;
        do
        {
          Feature_MultiCoreClasses__private_IsEnabledPreCheck(v25, v24);
          if ( PpmHeteroMultiClassParkingEnabled )
          {
            v24 = v29 + v30;
            v25 = (unsigned int)(KiDynamicHeteroCpuPolicy[v24] - 1);
            if ( KiDynamicHeteroCpuPolicy[v24] == 1
              || (v25 = (unsigned int)(KiDynamicHeteroCpuPolicy[v24] - 2), KiDynamicHeteroCpuPolicy[v24] == 2) )
            {
              v31 = KiMultiCoreHeteroUpperArchThreshold[v24];
            }
            else
            {
              v25 = (unsigned int)(KiDynamicHeteroCpuPolicy[v24] - 3);
              if ( (unsigned int)v25 < 2 )
                v31 = KiMultiCoreHeteroLowerArchThreshold[v24];
              else
                v31 = -1;
            }
            if ( v31 <= *(_BYTE *)(a1 + 88) )
            {
              if ( v31 == *(_BYTE *)(a1 + 88) )
              {
                v35 = v3[12];
                for ( j = 0; j < v35; v26 += v24 )
                {
                  v37 = v35 * (v29 + 2 * i) + j++;
                  v24 = *(_QWORD *)&v3[2 * v37 + 14] - v5[v37 + 7];
                }
              }
            }
            else
            {
              v32 = v3[12];
              for ( k = 0; k < v32; v27 += v24 )
              {
                v34 = v32 * (v29 + 2 * i) + k++;
                v24 = *(_QWORD *)&v3[2 * v34 + 14] - v5[v34 + 7];
              }
            }
          }
          else
          {
            v25 = 0x140000000uLL;
            if ( KiDynamicHeteroCpuPolicy[v30 + v29] != 3 )
            {
              v38 = v3[12];
              for ( m = 0; m < v38; v27 += *(_QWORD *)&v3[2 * v25 + 14] - v5[v25 + 7] )
                v25 = v38 * (v29 + 2 * i) + m++;
            }
          }
          ++v29;
        }
        while ( (unsigned int)v29 < 2 );
      }
      v40 = v53;
      v8 = v49;
      v10 = v50;
      v41 = v53;
      if ( !v53 )
        v41 = 1LL;
      v42 = 100 * v27;
      v1 = v54;
      v43 = v42 / v41;
      if ( (unsigned __int8)v43 > 0x64u )
        v43 = 100;
      *(_BYTE *)(v54 + 236) = v43;
      if ( !v53 )
        v40 = 1LL;
      v44 = 100 * v26;
      v4 = v48;
      v45 = v44 / v40;
      if ( (unsigned __int8)v45 > 0x64u )
        v45 = 100;
      *(_BYTE *)(v54 + 237) = v45;
    }
    else
    {
      Feature_MultiCoreClasses__private_ReportDeviceUsage(v12, 100 * v7 % v12);
      if ( PpmHeteroMultiClassParkingEnabled )
        *(_BYTE *)(v1 + 237) = 100;
    }
    *(_WORD *)(a1 + 60) = v51;
    if ( v4 )
    {
      v46 = v8;
      if ( !v8 )
        v46 = 1LL;
      v47 = (*(_QWORD *)(v1 + 120) - *(_QWORD *)(v1 + 56)) / v46;
      if ( !(_DWORD)v47 )
        LODWORD(v47) = *(_DWORD *)(v4 + 116);
      *(_DWORD *)(v4 + 116) = v47;
      *(_DWORD *)(v4 + 120) = v52;
    }
    *(_OWORD *)(v1 + 32) = *(_OWORD *)(v1 + 96);
    *(_OWORD *)(v1 + 48) = *(_OWORD *)(v1 + 112);
    *(_OWORD *)(v1 + 64) = *(_OWORD *)(v1 + 128);
    *(_QWORD *)(v1 + 80) = *(_QWORD *)(v1 + 144);
    memmove(v5, v3, 112 * v3[12] + 56);
    if ( *(_BYTE *)(a1 + 68) )
    {
      *(_QWORD *)(a1 + 104) += v8;
      *(_QWORD *)(a1 + 112) += v10;
    }
  }
}

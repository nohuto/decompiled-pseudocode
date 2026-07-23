/*
 * XREFs of sub_1403DEDD0 @ 0x1403DEDD0
 * Callers:
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054445C @ 0x14054445C (sub_14054445C.c)
 *     sub_140544640 @ 0x140544640 (sub_140544640.c)
 *     sub_1405449CC @ 0x1405449CC (sub_1405449CC.c)
 *     sub_140544A9C @ 0x140544A9C (sub_140544A9C.c)
 *     sub_140544EF0 @ 0x140544EF0 (sub_140544EF0.c)
 *     sub_1405454FC @ 0x1405454FC (sub_1405454FC.c)
 *     sub_140547850 @ 0x140547850 (sub_140547850.c)
 *     sub_140829AB0 @ 0x140829AB0 (sub_140829AB0.c)
 *     sub_140931294 @ 0x140931294 (sub_140931294.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 */

__int64 sub_1403DEDD0()
{
  unsigned int v0; // r12d
  unsigned int MaximumProcessorCount; // eax
  __int64 v3; // rbx
  size_t v4; // r15
  char *v5; // rax
  char *v6; // rsi
  signed int v7; // edi
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v9; // r14d
  unsigned __int16 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char *v14; // r9
  __int64 v15; // r11
  __int64 v16; // rax
  char v17; // r10
  unsigned int i; // ebx
  __int64 v19; // rdx
  int *v20; // r14
  __int64 v21; // rcx
  _DWORD *v22; // rax
  unsigned __int16 v23; // bx
  __m256i v24; // [rsp+30h] [rbp-D8h] BYREF
  int v25; // [rsp+50h] [rbp-B8h]
  __int128 v26; // [rsp+58h] [rbp-B0h]
  __int128 v27; // [rsp+68h] [rbp-A0h]
  __int128 v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  _DWORD v31[816]; // [rsp+98h] [rbp-70h] BYREF

  v0 = dword_140D0503C;
  v29 = 0LL;
  LOWORD(v30) = 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( (dword_140D0688C & 2) == 0 )
    return 0LL;
  sub_14042A5E0(11LL, 64LL);
  qword_140D06C68 = 0LL;
  qword_140D06DE0 = 0LL;
  qword_140D06DD0 = 0LL;
  qword_140D06DD8 = 0LL;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  v3 = MaximumProcessorCount;
  v4 = 40 * MaximumProcessorCount;
  v5 = (char *)sub_140829AB0(v4, 0xFFFFFFFFLL);
  v6 = v5;
  if ( v5 )
  {
    memset(v5, 0, v4);
    CurrentPrcb = KeGetCurrentPrcb();
    dword_140D125E4[0] = 0;
    v7 = sub_1405449CC(0LL, &dword_140D125E8, &word_140D125EC);
    if ( v7 >= 0 )
    {
      word_140D125EE = *(_WORD *)(qword_140D31700[(unsigned __int16)word_140D125EC] + 2);
      qword_140D12600 = *((_QWORD *)CurrentPrcb + 4314);
      dword_140D125F8 = *((_DWORD *)CurrentPrcb + 9);
      byte_140D069E5 = *((_BYTE *)CurrentPrcb + 141);
      sub_140931294((unsigned __int16)word_140D125EE, (unsigned int)dword_140D125E8, &unk_140D125F0, &unk_140D125F4);
      LODWORD(NumOfElements) = 1;
      dword_140D125E0[0] = 1;
      v7 = sub_140544A9C((unsigned int)v3, v6);
      if ( v7 >= 0 )
      {
        v9 = 1;
        if ( (unsigned int)v3 > 1 )
        {
          v10 = (unsigned __int16 *)(v6 + 48);
          do
          {
            if ( *((_BYTE *)v10 - 7) )
            {
              if ( (int)sub_14054445C(*((unsigned int *)v10 - 1), *v10) < 0 )
                break;
              LODWORD(NumOfElements) = NumOfElements + 1;
              *((_BYTE *)v10 - 6) = 1;
            }
            ++v9;
            v10 += 20;
          }
          while ( v9 < (unsigned int)v3 );
        }
        v7 = sub_140544EF0((unsigned int)v3, v6, v0);
        if ( v7 >= 0 )
        {
          if ( (_DWORD)v3 )
          {
            v14 = v6 + 1;
            v15 = v3;
            do
            {
              if ( *v14 || v14[2] )
              {
                v16 = sub_140544640(*(unsigned int *)(v14 + 3));
                if ( v17 )
                  *(_DWORD *)(v16 + 48) = 1;
                if ( v14[2] )
                {
                  ++dword_140D06A3C;
                  *(_BYTE *)(v16 + 112) = 1;
                }
              }
              v14 += 40;
              --v15;
            }
            while ( v15 );
          }
          if ( (dword_140D068B8 & 0x800) == 0 )
            goto LABEL_32;
          if ( dword_140D06A3C != (_DWORD)NumOfElements )
          {
            qsort(dword_140D125E0, (unsigned int)NumOfElements, 0x78uLL, sub_140544090);
            for ( i = 0; i < (unsigned int)NumOfElements; ++i )
            {
              memset(v31, 0, 0xCB4uLL);
              v7 = 0;
              v20 = &dword_140D125E4[30 * i];
              v21 = (unsigned int)*v20;
              if ( (_DWORD)v21 == i || (v31[0] = i, v7 = sub_1405454FC(v21, v19, v31), v7 < 0) )
              {
                if ( v7 < 0 )
                  goto LABEL_34;
              }
              else
              {
                *v20 = i;
              }
            }
          }
          v25 = 0;
          memset(&v24.m256i_u64[1], 0, 24);
          v22 = sub_14039DF90((PHYSICAL_ADDRESS *)&v24.m256i_i64[1], 1, 0LL, 8LL);
          v22[1] = dword_140D06A3C;
          *v22 = 5;
          v23 = HvlInvokeHypercall(135);
          sub_14039D8F0((__int64)&v24.m256i_i64[1]);
          v12 = v23;
          LOWORD(v12) = -v23;
          v7 = v23 != 0 ? 0xC0000001 : 0;
          if ( !v23 )
          {
LABEL_32:
            v7 = 0;
            if ( !KeDynamicPartitioningSupported )
              sub_140547850(v12, v11, v13, v14);
          }
        }
      }
    }
LABEL_34:
    sub_14096ED20(v6, v4);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}

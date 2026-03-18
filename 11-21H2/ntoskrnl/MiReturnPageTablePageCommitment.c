/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x1407B92D0
 * Callers:
 *     MiDeleteEmptyPageTableCommit @ 0x140233E34 (MiDeleteEmptyPageTableCommit.c)
 *     MiRemoveVad @ 0x14030DA80 (MiRemoveVad.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     RtlAreBitsClearEx @ 0x14022C900 (RtlAreBitsClearEx.c)
 *     MiBitmapRangeZeroEx @ 0x1402354A4 (MiBitmapRangeZeroEx.c)
 *     MiGetPreviousVad @ 0x140244718 (MiGetPreviousVad.c)
 *     MmGetMinWsPagePriority @ 0x14024DA70 (MmGetMinWsPagePriority.c)
 *     MiGetNextVad @ 0x140281C00 (MiGetNextVad.c)
 *     MiVadPageTableChargeLevel @ 0x14030DA10 (MiVadPageTableChargeLevel.c)
 *     MiVadDeleted @ 0x14030EB80 (MiVadDeleted.c)
 *     MiVadPureReserve @ 0x140319990 (MiVadPureReserve.c)
 *     MiUpdateChargedWsles @ 0x1405B85A8 (MiUpdateChargedWsles.c)
 *     MiReturnFullProcessCommitment @ 0x1406FEC50 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiReturnPageTablePageCommitment(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  __int64 v7; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // r10
  __int64 result; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  _BYTE *v17; // r12
  int v18; // ebp
  __int64 v19; // r10
  __int64 v20; // r8
  unsigned __int64 v21; // r11
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rsi
  char v26; // cl
  int v27; // r15d
  __int64 v28; // r10
  __int64 v29; // r11
  char v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned __int64 v34; // r11
  char v35; // r8
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r12
  signed __int64 v40; // rbx
  __int64 v41; // r13
  __int64 v42; // r14
  __int64 v43; // r13
  __int64 v44; // r10
  __int64 v45; // rsi
  int v46; // eax
  unsigned __int8 v47; // cl
  __int64 v48; // rdx
  unsigned __int64 v49; // r15
  __int64 v50; // [rsp+20h] [rbp-A8h]
  __int64 v51; // [rsp+28h] [rbp-A0h]
  int v52; // [rsp+30h] [rbp-98h]
  unsigned __int64 v53; // [rsp+38h] [rbp-90h]
  __int64 v54; // [rsp+40h] [rbp-88h]
  __int64 v55; // [rsp+48h] [rbp-80h]
  unsigned __int64 PreviousVad; // [rsp+50h] [rbp-78h]
  unsigned __int64 NextVad; // [rsp+58h] [rbp-70h]
  __int64 v58; // [rsp+60h] [rbp-68h] BYREF
  __int64 v59; // [rsp+68h] [rbp-60h]
  __int64 v60; // [rsp+70h] [rbp-58h]
  unsigned __int64 v61; // [rsp+78h] [rbp-50h]
  unsigned __int64 v62; // [rsp+80h] [rbp-48h]
  __int64 v63; // [rsp+88h] [rbp-40h]
  __int64 v64; // [rsp+90h] [rbp-38h]

  v7 = a6;
  v9 = a3;
  v10 = *(unsigned int *)(a6 + 52);
  LODWORD(v10) = v10 & 0x7FFFFFFF;
  v11 = v10 | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 31);
  result = 0x7FFFFFFFDLL;
  if ( v11 >= 0x7FFFFFFFDLL && v11 != 0x7FFFFFFFELL )
    return result;
  v13 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
  v14 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a4 & 1) == 0 )
  {
    v13 = a4;
    v14 = 0LL;
  }
  v61 = v14;
  PreviousVad = v13;
  v15 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  v16 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a5 & 1) == 0 )
  {
    v15 = a5;
    v16 = 0LL;
  }
  v62 = v16;
  NextVad = v15;
  MiVadPageTableChargeLevel(a6);
  v17 = a7;
  v18 = MiVadPureReserve(a6);
  v20 = 1023LL;
  v22 = 0LL;
  v60 = *(_QWORD *)(v9 + 1680) + 48LL;
  v23 = 0;
  v55 = 0LL;
  v50 = 0LL;
  v24 = (unsigned int)(a1 >> 21);
  v25 = (unsigned int)(v21 >> 21);
  v54 = 1023LL;
  if ( (int)v19 > 0 )
  {
    v47 = a7[1];
    v23 = v19;
    v48 = v19;
    do
    {
      *a7 >>= 1;
      v24 >>= 9;
      v25 >>= 9;
      v47 >>= 1;
      v20 >>= 9;
      --v48;
    }
    while ( v48 );
    a7[1] = v47;
    v54 = v20;
    if ( (int)v19 >= 3 )
    {
      result = 0LL;
      goto LABEL_17;
    }
  }
  v26 = *a7;
  LOBYTE(v27) = 9 * v23;
  v28 = v23;
  v59 = v23;
  v52 = 9 * v23;
  v53 = -1LL;
  v51 = 0LL;
  do
  {
    v63 = v24;
    v64 = v25;
    if ( v26 )
    {
      v29 = PreviousVad;
      if ( PreviousVad )
      {
        v30 = v27;
        while ( (__int64)(((unsigned __int64)*(unsigned int *)(v29 + 28) >> 9) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 33) << 23)) >> v30 == v24 )
        {
          v31 = *(unsigned int *)(v29 + 52);
          LODWORD(v31) = v31 & 0x7FFFFFFF;
          v32 = v31 | ((unsigned __int64)*(unsigned __int8 *)(v29 + 34) << 31);
          if ( (v32 < 0x7FFFFFFFDLL || v32 == 0x7FFFFFFFELL)
            && ((unsigned int)MiVadDeleted(v29) || !(unsigned int)MiVadPureReserve(v33)) )
          {
            *v17 = 0;
            goto LABEL_9;
          }
          if ( v29 == v61 )
            v29 = v7;
          PreviousVad = MiGetPreviousVad((unsigned __int64 *)v29);
          v29 = PreviousVad;
          if ( !PreviousVad )
          {
            PreviousVad = 0LL;
            break;
          }
        }
      }
    }
    else
    {
LABEL_9:
      ++v24;
    }
    if ( v17[1] )
    {
      v34 = NextVad;
      if ( NextVad )
      {
        v35 = v27;
        while ( (__int64)(((unsigned __int64)*(unsigned int *)(v34 + 24) >> 9) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 32) << 23)) >> v35 == v25 )
        {
          v36 = *(unsigned int *)(v34 + 52);
          LODWORD(v36) = v36 & 0x7FFFFFFF;
          v37 = v36 | ((unsigned __int64)*(unsigned __int8 *)(v34 + 34) << 31);
          if ( (v37 < 0x7FFFFFFFDLL || v37 == 0x7FFFFFFFELL)
            && ((unsigned int)MiVadDeleted(v34) || !(unsigned int)MiVadPureReserve(v38)) )
          {
            v17[1] = 0;
            goto LABEL_11;
          }
          if ( v34 == v62 )
            v34 = v7;
          NextVad = MiGetNextVad(v34);
          v34 = NextVad;
          if ( !NextVad )
          {
            NextVad = 0LL;
            break;
          }
        }
      }
    }
    else
    {
LABEL_11:
      --v25;
    }
    if ( v24 > v25 )
      break;
    if ( !v18 )
      v55 = v25 - v24 + v22 + 1;
    v39 = v55;
    v40 = v24;
    v41 = v59;
    v42 = v60 - 16 * v28;
    v58 = v24;
    do
    {
      if ( v18 )
      {
        if ( v40 == v24 )
        {
          v46 = MiBitmapRangeZeroEx(v42 + 504, v40, &v58);
          v24 = v58;
          if ( v46 )
          {
            v40 = v58 - 1;
            goto LABEL_42;
          }
        }
        if ( !_bittest64(*(const signed __int64 **)(v42 + 512), v40) )
          goto LABEL_42;
        ++v39;
      }
      _bittestandreset64(*(signed __int64 **)(v42 + 512), v40);
      if ( !(unsigned int)MmGetMinWsPagePriority() && (v40 == v25 || (v40 & 7) == 7 || v18) )
      {
        v49 = v40 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( RtlAreBitsClearEx(v42 + 504, v40 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL)
          && ((*(_DWORD *)(a3 + 2172) & 1) != 0 || v49 != (v54 & 0xFFFFFFFFFFFFFFF8uLL)) )
        {
          if ( v41 )
          {
            ++v50;
            goto LABEL_42;
          }
          if ( v53 != -1LL )
          {
            if ( v53 + 8 * v51 == v49 )
            {
              ++v51;
              goto LABEL_42;
            }
            HalSystemVectorDispatchEntry();
            v50 += v51;
          }
          v51 = 1LL;
          v53 = v40 & 0xFFFFFFFFFFFFFFF8uLL;
        }
      }
LABEL_42:
      ++v40;
    }
    while ( v40 <= v25 );
    v43 = v63;
    v55 = v39;
    v17 = a7;
    if ( v51 )
    {
      HalSystemVectorDispatchEntry();
      v50 += v51;
      v53 = -1LL;
      v51 = 0LL;
    }
    v44 = v59;
    v27 = v52 + 9;
    *a7 >>= 1;
    v28 = v44 + 1;
    v45 = v64;
    a7[1] >>= 1;
    v54 >>= 9;
    v26 = *a7;
    v22 = v55;
    v7 = a6;
    v24 = v43 >> 9;
    v25 = v45 >> 9;
    v52 = v27;
    v59 = v28;
  }
  while ( v27 < 27 );
  result = v50;
  v9 = a3;
  if ( v50 )
  {
    MiUpdateChargedWsles(a3 + 1664);
    result = v50;
  }
  if ( v22 )
    *(_QWORD *)(v60 + 240) -= v22;
LABEL_17:
  if ( result + v22 )
    return MiReturnFullProcessCommitment(v9, result + v22);
  return result;
}

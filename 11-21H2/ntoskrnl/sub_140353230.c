/*
 * XREFs of sub_140353230 @ 0x140353230
 * Callers:
 *     sub_14031D740 @ 0x14031D740 (sub_14031D740.c)
 * Callees:
 *     sub_140232E08 @ 0x140232E08 (sub_140232E08.c)
 *     sub_14023659C @ 0x14023659C (sub_14023659C.c)
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_14027DA5C @ 0x14027DA5C (sub_14027DA5C.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_14028FB74 @ 0x14028FB74 (sub_14028FB74.c)
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402D03D0 @ 0x1402D03D0 (sub_1402D03D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14031077C @ 0x14031077C (sub_14031077C.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140319990 @ 0x140319990 (sub_140319990.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14031E200 @ 0x14031E200 (sub_14031E200.c)
 *     sub_140352E50 @ 0x140352E50 (sub_140352E50.c)
 *     sub_1403536F0 @ 0x1403536F0 (sub_1403536F0.c)
 *     sub_1403539BC @ 0x1403539BC (sub_1403539BC.c)
 *     sub_1403539D0 @ 0x1403539D0 (sub_1403539D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405943E4 @ 0x1405943E4 (sub_1405943E4.c)
 *     sub_1405A73A0 @ 0x1405A73A0 (sub_1405A73A0.c)
 *     sub_1405A7464 @ 0x1405A7464 (sub_1405A7464.c)
 *     sub_1405A7708 @ 0x1405A7708 (sub_1405A7708.c)
 */

__int64 __fastcall sub_140353230(unsigned __int64 *a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r9
  ULONG_PTR v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r14
  struct _KTHREAD *v13; // rcx
  int v14; // esi
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  unsigned int v27; // eax
  int v28; // eax
  __int64 result; // rax
  __int64 v30; // rbx
  char v31; // cl
  unsigned __int64 v32; // rax
  _BYTE *v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  ULONG_PTR v38; // rbx
  _QWORD *v39; // r14
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // xmm1_8
  int v44; // ecx
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v47; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v48; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v49; // [rsp+48h] [rbp-B8h]
  int v50; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-A8h]
  __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-98h]
  _QWORD *v54; // [rsp+70h] [rbp-90h]
  _QWORD v55[15]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v56; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v57[2]; // [rsp+100h] [rbp+0h] BYREF
  __m256i v58; // [rsp+120h] [rbp+20h]
  __int128 v59; // [rsp+140h] [rbp+40h]
  __int128 v60; // [rsp+150h] [rbp+50h]
  __int128 v61; // [rsp+160h] [rbp+60h]
  unsigned __int64 v62; // [rsp+170h] [rbp+70h]

  v2 = a2;
  v47 = 0LL;
  v48 = 0;
  v52 = 0LL;
  memset(&v55[3], 0, 0x60uLL);
  *(_OWORD *)v55 = 0LL;
  v4 = a1[2];
  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( (v4 & 1) == 0 || (v6 = v4 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)v6 != 1) )
    v6 = 0LL;
  v7 = a1[v2 + 3];
  v54 = a1 + 7;
  v8 = sub_140317A10(v7);
  v51 = sub_1402CFEB0(*a1);
  BugCheckParameter1 = sub_1403536F0(v9, &v48, &v47);
  if ( v8 )
  {
    v12 = v47;
    if ( v47 )
      sub_1402806E0(1, 0x11u);
    v14 = a2;
LABEL_19:
    v20 = *((_OWORD *)a1 + 1);
    v56 = *(_OWORD *)a1;
    v21 = *((_OWORD *)a1 + 2);
    v57[0] = v20;
    v22 = *((_OWORD *)a1 + 3);
    v57[1] = v21;
    v23 = *((_OWORD *)a1 + 4);
    *(_OWORD *)v58.m256i_i8 = v22;
    v24 = *((_OWORD *)a1 + 5);
    *(_OWORD *)&v58.m256i_u64[2] = v23;
    v25 = *((_OWORD *)a1 + 6);
    v59 = v24;
    v26 = *((_OWORD *)a1 + 7);
    LODWORD(v59) = 0;
    v60 = v25;
    v62 = a1[16];
    v61 = v26;
    v27 = sub_1403539D0(a1);
    v28 = sub_1403539BC(v27);
    if ( (a1[2] & 1) == 0 )
      goto LABEL_20;
    v31 = *(_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
    switch ( v31 )
    {
      case 1:
        goto LABEL_40;
      case 2:
        LODWORD(v55[8]) = v28;
        v55[0] = (__int64)(v7 << 25) >> 16;
        v55[1] = 4096LL;
        *(_QWORD *)&v57[0] = (char *)&v55[3] + 1;
        LOBYTE(v55[3]) = 2;
        v55[4] = v55;
        v55[5] = 1LL;
        break;
      case 3:
      case 5:
LABEL_40:
        *(_QWORD *)&v57[0] = 0LL;
        break;
    }
LABEL_20:
    *((_QWORD *)&v56 + 1) = 2LL;
    *(_QWORD *)&v56 = (__int64)(v7 << 25) >> 16;
    *((_QWORD *)&v59 + 1) = v12;
    sub_140352E50(v56, (unsigned __int64 *)v57 + 1);
    result = sub_14031E200((__int64)&v56, &v52);
    if ( (_DWORD)result == -1073532109 )
    {
      v42 = v52;
      if ( (v59 & 0x40) != 0 )
        *(_DWORD *)(v52 + 192) |= 0x40000u;
      result = sub_14027A1F0((__int64)&v56, v42);
    }
    if ( (v58.m256i_i8[21] & 1) != 0 )
    {
      v43 = v58.m256i_i64[3];
      *(_OWORD *)(a1 + 7) = *(_OWORD *)&v58.m256i_u64[1];
      a1[9] = v43;
    }
    if ( (int)result >= 0 )
    {
      if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
      {
        v44 = 3;
        while ( (*(_QWORD *)a1[v14 + 3] & 1LL) != 0 )
        {
          if ( v44 != v14 )
          {
            if ( --v44 )
              continue;
          }
          return 0LL;
        }
        return 3221226548LL;
      }
      return 0LL;
    }
    return result;
  }
  v10 = *a1;
  if ( *a1 >= 0xFFFF800000000000uLL )
  {
    if ( v6 )
      return 3221226548LL;
    if ( v10 >= 0xFFFFF68000000000uLL && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v32 = a1[2];
      if ( v32 )
      {
        v33 = (_BYTE *)(v32 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v32 & 1) == 0 || *v33 != 7 && *v33 != 8 )
          KeBugCheckEx(0x50u, *a1, a1[1], v7, 6uLL);
      }
    }
  }
  v11 = v48;
  if ( v48 == 24 )
  {
    v30 = v47;
    sub_14023659C(v10, v47, a1[1], v5);
    if ( v30 )
      sub_1402806E0(1, 0x11u);
    if ( *a1 <= 0x7FFFFFFEFFFFLL && v30 && v6 )
    {
      v34 = sub_1402CFEB0(v7 + 8);
      if ( v34 >= v35 )
      {
        sub_1405943E4(v6, v34);
      }
      else
      {
        ++*(_QWORD *)(v6 + 24);
        *(_QWORD *)(v6 + 32) = 0LL;
      }
      *(_BYTE *)(v6 + 1) = 1;
    }
    return 3221225477LL;
  }
  v12 = v47;
  if ( v47 && (*(_DWORD *)(v47 + 48) & 0x200000) != 0 && v6 )
  {
    if ( ((v36 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL, v49 = (_QWORD *)v36, v48 >> 3 != 3) || (v48 & 7) == 0) && v48 >> 3 != 1
      || (*(_DWORD *)(v36 + 80) & 0x4000) == 0 )
    {
      sub_1402806E0(1, 0x11u);
      sub_140232E08(v49);
      return 3221226548LL;
    }
  }
  v13 = *(struct _KTHREAD **)(v5 + 1248);
  if ( v13 )
  {
    if ( v6 && *(_QWORD *)(v6 + 56) != v6 + 56 )
    {
      if ( v47 )
        sub_1402806E0(1, 0x11u);
      return 3221226548LL;
    }
    if ( v13 != KeGetCurrentThread() )
    {
      if ( v47 )
        sub_1402806E0(1, 0x11u);
      *((_DWORD *)a1 + 20) |= 4u;
      return 3221226548LL;
    }
    v12 = v47;
    v11 = v48;
  }
  if ( !v12 )
    goto LABEL_12;
  if ( v6 && (unsigned int)sub_14031077C(v12) )
  {
    v37 = ((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF;
    sub_1402806E0(1, 0x11u);
    sub_1405943E4(v6, v37 + 4096);
    result = 3221226548LL;
    *(_BYTE *)(v6 + 1) = 1;
    return result;
  }
  if ( (*(_BYTE *)(v12 + 48) & 0x70) != 0x50 || (unsigned int)sub_140319990(v12) )
  {
LABEL_12:
    v14 = a2;
LABEL_13:
    *(_QWORD *)v7 = sub_1402CCC50(128LL);
    if ( v12 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL)
                                                        + 284LL));
      v12 = v47;
    }
    if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && v51 <= 0x7FFFFFFEFFFFLL )
    {
      v15 = sub_1402D03D0((__int64)(v7 << 25) >> 16);
      v50 = 0;
      v19 = v15;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v50, v16, v17, v18);
        while ( *(__int64 *)(v19 + 24) < 0 );
      }
      *(_QWORD *)(v19 + 16) ^= ((unsigned int)*(_QWORD *)(v19 + 16) ^ ((unsigned int)*(_QWORD *)(v19 + 16) + 0x10000)) & 0x3FF0000;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      sub_14028FBF0(*(_QWORD *)(v19 + 8) | 0x8000000000000000uLL);
      v12 = v47;
    }
    goto LABEL_19;
  }
  v14 = a2;
  LODWORD(v49) = sub_1405A73A0(v12, *a1);
  if ( a2 != (_DWORD)v49 )
    goto LABEL_13;
  *(_QWORD *)v7 = sub_1402CCC50(128LL);
  sub_1402806E0(1, 0x11u);
  BugCheckParameter4 = v11;
  v38 = BugCheckParameter1;
  if ( (unsigned int)sub_1405A7464(*a1, BugCheckParameter1, (_DWORD)v49, v7, BugCheckParameter4) )
  {
    if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && v51 <= 0x7FFFFFFEFFFFLL )
    {
      v41 = sub_1402D03D0((__int64)(v7 << 25) >> 16);
      sub_14028FB74(v41, 1u);
    }
    result = sub_1405A7708(a1, v7);
    if ( (int)result >= 0 )
      return 3221226548LL;
  }
  else
  {
    v39 = v54;
    v40 = (__int64)v54;
    *(_QWORD *)v7 = 0LL;
    sub_14027DA5C(v40, 17, 0LL);
    sub_14031C860(0LL, v38, 0, 0LL);
    *((_BYTE *)v39 + 13) &= ~1u;
    *((_BYTE *)v39 + 12) = sub_1402CF4F0(v5 + 1664);
    return 3221226548LL;
  }
  return result;
}

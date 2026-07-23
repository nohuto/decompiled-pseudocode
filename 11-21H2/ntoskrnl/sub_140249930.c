/*
 * XREFs of sub_140249930 @ 0x140249930
 * Callers:
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 * Callees:
 *     sub_140201DF4 @ 0x140201DF4 (sub_140201DF4.c)
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14024A0FC @ 0x14024A0FC (sub_14024A0FC.c)
 *     sub_14024A2B8 @ 0x14024A2B8 (sub_14024A2B8.c)
 *     sub_14024A35C @ 0x14024A35C (sub_14024A35C.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ntoskrnl_7 @ 0x1402AA8D0 (ntoskrnl_7.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CBF80 @ 0x1402CBF80 (sub_1402CBF80.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140590A18 @ 0x140590A18 (sub_140590A18.c)
 *     sub_140591040 @ 0x140591040 (sub_140591040.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140249930(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 *a6, _DWORD *a7)
{
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rsi
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int64 v20; // rbp
  __int64 v21; // r8
  unsigned int v22; // ebx
  int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // r12
  int v30; // eax
  unsigned __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // r15
  __int64 v34; // rbp
  _QWORD *v35; // r12
  char v36; // al
  __int64 v37; // rcx
  BOOL v38; // ebp
  __int64 v39; // rdx
  __int64 v40; // rdx
  BOOL v41; // edi
  __int64 v42; // rdx
  struct _KTHREAD *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  BOOL v46; // edi
  __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  __int64 v51; // r8
  int v52; // eax
  bool v53; // zf
  unsigned __int64 v54; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v57; // eax
  __int64 v58; // r8
  char v60; // [rsp+30h] [rbp-68h]
  int v61; // [rsp+34h] [rbp-64h] BYREF
  __int64 v62; // [rsp+38h] [rbp-60h]
  __int64 v63; // [rsp+40h] [rbp-58h]
  __int64 v64; // [rsp+48h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  unsigned __int64 v66; // [rsp+58h] [rbp-40h]

  v64 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = sub_1402828F0(64LL, 80LL, 1934321997LL);
  v13 = (_QWORD *)v10;
  if ( !v10 )
    return 0LL;
  *(_QWORD *)(v10 + 32) = a1;
  v14 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v15 = (__int64)(v14 << 25) >> 16;
  *(_QWORD *)(v10 + 48) = v15;
  v16 = sub_14027B080(v15, 0LL, v11, v12);
  LODWORD(v62) = v16;
  if ( v16 == 14 )
  {
    v17 = 4LL;
  }
  else
  {
    if ( v16 != 12 )
    {
LABEL_72:
      ExFreePoolWithTag(v13, 0);
      return 0LL;
    }
    v17 = 1LL;
  }
  v18 = sub_14026DFC0(v17);
  v13[8] = v18;
  v19 = v18;
  if ( !byte_140C53444 )
    goto LABEL_72;
  v20 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v66 = v20;
  if ( a4 == -1 )
  {
    v23 = *(_DWORD *)(sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) + 8);
    v22 = ((unsigned int)sub_1402E8990(a2) << byte_140C506CD) | dword_140C50738 & v20 | (v23 << byte_140C506CC);
    v21 = (a5 & 0x1000000 | 0x20000u) >> 8;
    if ( (a5 & 0x2000000) != 0 )
      v21 = (unsigned int)v21 | 0x20000;
  }
  else
  {
    v21 = 560LL;
    v22 = dword_140C50738 & v20 | a4 & ~dword_140C50738;
  }
  v24 = sub_1403250B0(a1, v22, v21);
  v63 = v24;
  if ( v24 == -1 )
    goto LABEL_72;
  v25 = 48 * v24 - 0x220000000000LL;
  sub_14033C33C(v25, 0LL, 0LL);
  v13[7] = 0LL;
  v29 = sub_1402CF4F0(v19);
  v60 = v29;
  v61 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v61);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) != a1
    || v14 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || (v30 = sub_14027B080(v13[6], v26, v27, v28), (_DWORD)v62 != v30)
    || !(unsigned int)sub_14024A2B8(a2, 1LL)
    || (v31 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, !(unsigned int)sub_14031DE00(v19, v31, (unsigned int)v26)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_70;
  }
  if ( (byte_140C506CE & 1) == 0 || !(unsigned int)sub_14024A0FC(a3, a2, v25) )
  {
    v34 = sub_14024A35C(a2, v26);
    v62 = v34;
    if ( ((v34 + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      v35 = (_QWORD *)sub_1402CBF80(a3, v63, -1LL);
      if ( v34 != -16 && (struct _KTHREAD *)v34 != CurrentThread )
      {
        if ( sub_140201DF4(v34, &v64) )
        {
          sub_140590A18(v25, a2, v35);
          sub_140239060(v25);
          sub_140591040(v25, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v36 = *(_BYTE *)(a2 + 34);
          *(_QWORD *)(a2 + 40) &= ~0x8000000000000000uLL;
          *(_BYTE *)(a2 + 34) = v36 & 0xC7;
          *(_BYTE *)(a2 + 35) &= ~0x20u;
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v13[6], 0LL, 2LL);
          sub_14035D0F8(v37, v64, 0LL);
          sub_140224100(v62);
          v38 = 0;
          if ( (unsigned int)sub_140317A80(v35) )
            v38 = sub_140229550() != 0;
          *v35 = 0LL;
          if ( v38 )
            sub_1402294F0((__int64)v35, 0LL);
          sub_14020D8D0(v19, v31);
          LOBYTE(v39) = v60;
          sub_1402B0CE0(v19, v39);
          v33 = v63;
          *a7 = 1;
          goto LABEL_65;
        }
        goto LABEL_38;
      }
      if ( (unsigned int)sub_140274508(a2, 0LL) )
      {
        v13[7] = a2;
LABEL_38:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        sub_14020D8D0(v19, v31);
        LOBYTE(v42) = v60;
        sub_1402B0CE0(v19, v42);
        v43 = CurrentThread;
        v33 = v63;
        *v13 = v66;
        v44 = v62;
        v13[3] = v43;
        v13[1] = v33;
        v13[2] = v35;
        *((_DWORD *)v13 + 10) = 0;
        if ( v44 == -16 || (struct _KTHREAD *)v44 == v43 )
        {
          v45 = ntoskrnl_7((ULONG_PTR)sub_140590CD0, (ULONG_PTR)v13, 0LL);
          if ( v45 < 0 )
            *((_DWORD *)v13 + 10) = v45;
        }
        else
        {
          KeGenericCallDpc((__int64)sub_140200230, (__int64)v13);
        }
        if ( *((int *)v13 + 10) >= 0 )
        {
          *a7 = 0;
          v54 = (unsigned __int8)sub_1402F2700(a2);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v54 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
                v58 = *((_QWORD *)CurrentPrcb + 4375);
                v53 = (v57 & *(_DWORD *)(v58 + 20)) == 0;
                *(_DWORD *)(v58 + 20) &= v57;
                if ( v53 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v54);
          goto LABEL_65;
        }
        v46 = 0;
        if ( (unsigned int)sub_140317A80(v35) )
          v46 = sub_140229550() != 0;
        *v35 = 0LL;
        if ( v46 )
          sub_1402294F0((__int64)v35, 0LL);
        sub_140268408(v25);
        v47 = v13[7];
        if ( v47 )
        {
          v48 = (unsigned __int8)sub_1402F2700(v47);
          sub_140336AD8(v13[7]);
          _InterlockedAnd64((volatile signed __int64 *)(v13[7] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v49 = KeGetCurrentIrql();
              if ( v49 <= 0xFu && (unsigned __int8)v48 <= 0xFu && v49 >= 2u )
              {
                v50 = KeGetCurrentPrcb();
                v51 = *((_QWORD *)v50 + 4375);
                v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v48 + 1));
                v53 = (v52 & *(_DWORD *)(v51 + 20)) == 0;
                *(_DWORD *)(v51 + 20) &= v52;
                if ( v53 )
                  sub_140418E4C(v50);
              }
            }
          }
          __writecr8(v48);
        }
        goto LABEL_72;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      sub_14020D8D0(v19, v31);
      LOBYTE(v40) = v60;
      sub_1402B0CE0(v19, v40);
      v41 = 0;
      if ( (unsigned int)sub_140317A80(v35) )
        v41 = sub_140229550() != 0;
      *v35 = 0LL;
      if ( v41 )
        sub_1402294F0((__int64)v35, 0LL);
      goto LABEL_71;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    sub_14020D8D0(v19, v31);
LABEL_70:
    LOBYTE(v26) = v29;
    sub_1402B0CE0(v19, v26);
LABEL_71:
    sub_140268408(v25);
    goto LABEL_72;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  sub_14020D8D0(v19, v31);
  LOBYTE(v32) = v29;
  sub_1402B0CE0(v19, v32);
  v33 = v63;
  *a7 = 1;
LABEL_65:
  *(_WORD *)(a2 + 32) = 0;
  if ( a6 )
    *a6 = v33;
  ExFreePoolWithTag(v13, 0);
  return 1LL;
}

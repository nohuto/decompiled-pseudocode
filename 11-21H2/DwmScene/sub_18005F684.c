/*
 * XREFs of sub_18005F684 @ 0x18005F684
 * Callers:
 *     sub_18005F5D4 @ 0x18005F5D4 (sub_18005F5D4.c)
 *     sub_18005FE50 @ 0x18005FE50 (sub_18005FE50.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001DE64 @ 0x18001DE64 (sub_18001DE64.c)
 *     sub_18002C3FC @ 0x18002C3FC (sub_18002C3FC.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     sub_18002C5D4 @ 0x18002C5D4 (sub_18002C5D4.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18003684C @ 0x18003684C (sub_18003684C.c)
 *     sub_180037268 @ 0x180037268 (sub_180037268.c)
 *     sub_18003888C @ 0x18003888C (sub_18003888C.c)
 *     sub_1800394BC @ 0x1800394BC (sub_1800394BC.c)
 *     sub_18003AFE8 @ 0x18003AFE8 (sub_18003AFE8.c)
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 *     sub_18005F408 @ 0x18005F408 (sub_18005F408.c)
 *     sub_180060090 @ 0x180060090 (sub_180060090.c)
 *     sub_180063DF0 @ 0x180063DF0 (sub_180063DF0.c)
 *     sub_180063E08 @ 0x180063E08 (sub_180063E08.c)
 *     sub_180063E20 @ 0x180063E20 (sub_180063E20.c)
 *     sub_180065994 @ 0x180065994 (sub_180065994.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_18005F684(__int64 a1)
{
  _BYTE *v2; // r12
  int v3; // ecx
  int v4; // eax
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v7; // rax
  int v8; // r13d
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // r15d
  __int64 v13; // rbx
  __int64 *v14; // rsi
  __int64 *v15; // r14
  __int64 v16; // rdx
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int64 v19; // rcx
  __int64 *v20; // r8
  __int64 v21; // rdx
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // eax
  _QWORD *v28; // rax
  void (__fastcall *v29)(__int64, _QWORD *); // r9
  __int64 v30; // r11
  _QWORD *v31; // r10
  _QWORD *i; // r14
  volatile signed __int32 *v33; // rcx
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdx
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  volatile signed __int32 *v44; // rbx
  __int64 v45; // rbx
  __int64 v46; // rax
  __int128 v48; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+48h] [rbp-C0h] BYREF
  char v50; // [rsp+50h] [rbp-B8h]
  __int128 v51; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v53; // [rsp+78h] [rbp-90h] BYREF
  __int64 v54; // [rsp+88h] [rbp-80h] BYREF
  char v55; // [rsp+90h] [rbp-78h]
  __int64 v56; // [rsp+98h] [rbp-70h] BYREF
  char v57; // [rsp+A0h] [rbp-68h]
  __int64 v58; // [rsp+A8h] [rbp-60h] BYREF
  char v59; // [rsp+B0h] [rbp-58h]
  __int64 v60; // [rsp+B8h] [rbp-50h] BYREF
  char v61; // [rsp+C0h] [rbp-48h]
  char v62[8]; // [rsp+C8h] [rbp-40h] BYREF
  char v63[8]; // [rsp+D0h] [rbp-38h] BYREF
  char v64[8]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v65; // [rsp+E0h] [rbp-28h]
  _QWORD v66[7]; // [rsp+E8h] [rbp-20h] BYREF
  char v67; // [rsp+168h] [rbp+60h] BYREF
  char v68; // [rsp+170h] [rbp+68h] BYREF
  _QWORD *v69; // [rsp+178h] [rbp+70h]
  __int64 *v70; // [rsp+180h] [rbp+78h]

  v67 = 1;
  v2 = (_BYTE *)sub_1800441CC(a1 + 424);
  *v2 = sub_1800441E4((__int64)&v67);
  sub_18005F408(a1, &v52);
  if ( v52 )
    v3 = *(_DWORD *)sub_18001DE64(v52 + 192);
  else
    v3 = 0;
  if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(a1 + 72) )
    goto LABEL_84;
  if ( *(_BYTE *)(a1 + 432) )
  {
    v4 = *(_DWORD *)(a1 + 428);
    *(_DWORD *)(a1 + 428) = v3;
    if ( v3 <= v4 )
      goto LABEL_84;
  }
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  *(_QWORD *)(a1 + 440) = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                        + 1000000000 * (perf_counter / perf_frequency);
  v7 = sub_180037268(*(_QWORD *)(a1 + 24));
  sub_18002C5D4(v7, (__int64)&v60);
  v8 = 0;
  v49 = 0LL;
  v50 = 0;
  if ( !v52 )
  {
    v12 = *(_DWORD *)(a1 + 16);
    if ( v12 )
    {
      v11 = *(_DWORD *)(a1 + 16);
      goto LABEL_20;
    }
    v12 = 1;
    goto LABEL_19;
  }
  v9 = sub_18002C460(v52 + 16, (__int64)&v58);
  if ( &v49 != (__int64 *)v9 )
  {
    v49 = *(_QWORD *)v9;
    v50 = *(_BYTE *)(v9 + 8);
    *(_QWORD *)v9 = 0LL;
    *(_BYTE *)(v9 + 8) = 0;
  }
  if ( v59 )
    j_LanguageEnumProc(v58);
  v10 = v52;
  v8 = *(_DWORD *)(v52 + 112);
  v11 = *(_DWORD *)(a1 + 16);
  if ( v11 )
  {
    *(_DWORD *)(v52 + 112) = v11;
    v11 = *(_DWORD *)(a1 + 16);
    v10 = v52;
  }
  v12 = *(_DWORD *)(v10 + 112);
  if ( !v11 )
LABEL_19:
    v11 = 1;
LABEL_20:
  v13 = sub_180036808(*(_QWORD *)(a1 + 24), v11);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F8818);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F8838);
  v14 = *(__int64 **)(a1 + 64);
  v15 = *(__int64 **)(a1 + 72);
  v70 = v15;
  while ( v14 != v15 )
  {
    v48 = 0LL;
    v16 = v14[1];
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 8);
      while ( v17 )
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17);
        if ( v18 == v17 )
        {
          v19 = *v14;
          v48 = *(_OWORD *)v14;
          goto LABEL_26;
        }
      }
    }
    v19 = v48;
LABEL_26:
    if ( v19 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v19 + 352LL))(v19) )
    {
      v20 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v48 + 376LL))(v48, v64);
      v51 = 0LL;
      v21 = v20[1];
      if ( v21 )
      {
        v22 = *(_DWORD *)(v21 + 8);
        while ( v22 )
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 8), v22 + 1, v22);
          if ( v23 == v22 )
          {
            v24 = *v20;
            v51 = *(_OWORD *)v20;
            goto LABEL_34;
          }
        }
      }
      v24 = v51;
LABEL_34:
      v25 = v65;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v65 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v25 + 8LL))(v25, v21, v20);
        v24 = v51;
      }
      if ( v24
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v24 + 16LL))(v24, v21, v20) )
      {
        sub_18002C3FC(v24 + 24, (__int64)&v56);
        sub_18002C3FC(v48 + 8, (__int64)&v54);
        v26 = sub_180036808(*(_QWORD *)(a1 + 24), v12);
        v27 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v26 + 72LL))(
                v26,
                &qword_1801F85F8,
                0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v48 + 304LL))(v48, v27);
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v48 + 72LL))(v48);
        v28 = sub_18003684C(*(_QWORD *)(a1 + 24), v66);
        v29(v30, v28);
        sub_180010910((__int64)v66);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v48 + 232LL))(v48, v12);
        v31 = *(_QWORD **)(a1 + 48);
        v69 = v31;
        for ( i = *(_QWORD **)(a1 + 40); i != v31; i += 2 )
        {
          v33 = 0LL;
          v34 = i[1];
          if ( v34 )
          {
            v33 = (volatile signed __int32 *)i[1];
            _InterlockedIncrement((volatile signed __int32 *)(v34 + 12));
          }
          v35 = *(__int64 **)(*(_QWORD *)(a1 + 88) + 8LL);
          v36 = *(__int64 **)(a1 + 88);
          while ( !*((_BYTE *)v35 + 25) )
          {
            if ( v35[5] >= (unsigned __int64)v33 )
            {
              v36 = v35;
              v35 = (__int64 *)*v35;
            }
            else
            {
              v35 = (__int64 *)v35[2];
            }
          }
          if ( *((_BYTE *)v36 + 25) || (unsigned __int64)v33 < v36[5] )
            v36 = *(__int64 **)(a1 + 88);
          if ( v33 && _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
            v31 = v69;
          }
          if ( v36 != *(__int64 **)(a1 + 88)
            && ((_mm_movemask_ps(_mm_cmpeq_ps((__m128)(unsigned __int64)v36[6], (__m128)*(unsigned __int64 *)sub_180063E08(*i, v62))) & 3) != 3
             || (_mm_movemask_ps(
                   _mm_cmpeq_ps(
                     (__m128)(unsigned __int64)v36[7],
                     (__m128)*(unsigned __int64 *)sub_180063DF0(v37, v63, v38))) & 3) != 3
             || (unsigned int)sub_180063E20(v37) != *((_DWORD *)v36 + 16)) )
          {
            sub_180065994(
              v37,
              _mm_unpacklo_ps((__m128)*((unsigned int *)v36 + 12), (__m128)*((unsigned int *)v36 + 13)).m128_u64[0],
              _mm_unpacklo_ps((__m128)*((unsigned int *)v36 + 14), (__m128)*((unsigned int *)v36 + 15)).m128_u64[0],
              *((unsigned int *)v36 + 16));
          }
        }
        (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 24) + 48LL))(*(_QWORD *)(a1 + 24), &v48);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v48 + 240LL))(v48, v12);
        sub_1800394BC(*(_QWORD **)(a1 + 24), (__int64)&v52, a1 + 40, &v48);
        sub_18003888C(*(_QWORD **)(a1 + 24), &v51, &v48, (__int64)&v54, (__int64)&v56, (__int64)&v49);
        (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 24) + 56LL))(*(_QWORD *)(a1 + 24), &v48);
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v48 + 248LL))(v48);
        v39 = *(_QWORD *)(a1 + 24);
        v53 = 0LL;
        v40 = v14[1];
        if ( v40 )
        {
          *((_QWORD *)&v53 + 1) = v14[1];
          _InterlockedIncrement((volatile signed __int32 *)(v40 + 12));
          v41 = *((_QWORD *)&v53 + 1);
          v42 = *(_DWORD *)(*((_QWORD *)&v53 + 1) + 8LL);
          while ( v42 )
          {
            v43 = v42;
            v42 = _InterlockedCompareExchange((volatile signed __int32 *)(v41 + 8), v42 + 1, v42);
            if ( v43 == v42 )
            {
              *(_QWORD *)&v53 = *v14;
              v44 = (volatile signed __int32 *)*((_QWORD *)&v53 + 1);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v44)(v44);
                if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
              }
              break;
            }
          }
        }
        sub_18003AFE8(v39, (unsigned __int64 *)&v53);
        if ( v55 )
          j_LanguageEnumProc(v54);
        if ( v57 )
          j_LanguageEnumProc(v56);
        v15 = v70;
      }
      sub_180010910((__int64)&v51);
    }
    sub_180010910((__int64)&v48);
    v14 += 2;
  }
  if ( v52 )
    *(_DWORD *)(v52 + 112) = v8;
  v45 = Query_perf_frequency();
  v46 = Query_perf_counter();
  sub_180060090(a1, 1000000000 * (v46 % v45) / v45 + 1000000000 * (v46 / v45) - *(_QWORD *)(a1 + 440));
  if ( v50 )
    j_LanguageEnumProc(v49);
  if ( v61 )
    sub_18002C8E4(v60);
LABEL_84:
  v68 = 0;
  *v2 = sub_1800441E4((__int64)&v68);
  Cnd_broadcast((_Cnd_t)(a1 + 280));
  return sub_180010910((__int64)&v52);
}

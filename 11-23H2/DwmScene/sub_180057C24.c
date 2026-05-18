/*
 * XREFs of sub_180057C24 @ 0x180057C24
 * Callers:
 *     sub_180057BA8 @ 0x180057BA8 (sub_180057BA8.c)
 *     sub_180058240 @ 0x180058240 (sub_180058240.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180017C50 @ 0x180017C50 (sub_180017C50.c)
 *     sub_180029FA0 @ 0x180029FA0 (sub_180029FA0.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18002A21C @ 0x18002A21C (sub_18002A21C.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_1800340DC @ 0x1800340DC (sub_1800340DC.c)
 *     sub_18003475C @ 0x18003475C (sub_18003475C.c)
 *     sub_1800356DC @ 0x1800356DC (sub_1800356DC.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     sub_1800372DC @ 0x1800372DC (sub_1800372DC.c)
 *     sub_18003890C @ 0x18003890C (sub_18003890C.c)
 *     sub_1800401E8 @ 0x1800401E8 (sub_1800401E8.c)
 *     sub_180056C80 @ 0x180056C80 (sub_180056C80.c)
 *     sub_180057A80 @ 0x180057A80 (sub_180057A80.c)
 *     sub_180057ADC @ 0x180057ADC (sub_180057ADC.c)
 *     sub_1800583E0 @ 0x1800583E0 (sub_1800583E0.c)
 *     sub_180058640 @ 0x180058640 (sub_180058640.c)
 *     sub_18005BC90 @ 0x18005BC90 (sub_18005BC90.c)
 *     sub_18005BCA8 @ 0x18005BCA8 (sub_18005BCA8.c)
 *     sub_18005BCC0 @ 0x18005BCC0 (sub_18005BCC0.c)
 *     sub_18005D564 @ 0x18005D564 (sub_18005D564.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
int __fastcall sub_180057C24(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edx
  int v9; // eax
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // edx
  unsigned int v15; // esi
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // eax
  _QWORD *v23; // rax
  void (__fastcall *v24)(__int64, _QWORD *); // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  _QWORD *v27; // rbx
  _QWORD *v28; // r15
  unsigned __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r10
  unsigned int *v33; // rdx
  unsigned __int64 *v34; // rax
  int v35; // eax
  __int64 v36; // rbx
  unsigned __int64 *v37; // rax
  _QWORD *v38; // rax
  int result; // eax
  __int64 v40; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C8h]
  __int64 v42; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B8h]
  __int64 v44; // [rsp+58h] [rbp-B0h] BYREF
  char v45; // [rsp+60h] [rbp-A8h]
  _BYTE v46[16]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v47; // [rsp+78h] [rbp-90h]
  __int64 v48; // [rsp+80h] [rbp-88h] BYREF
  __int64 v49; // [rsp+88h] [rbp-80h] BYREF
  __int64 v50; // [rsp+90h] [rbp-78h]
  __int64 v51; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v52; // [rsp+A0h] [rbp-68h]
  _BYTE v53[16]; // [rsp+A8h] [rbp-60h] BYREF
  char v54[8]; // [rsp+B8h] [rbp-50h] BYREF
  char v55[8]; // [rsp+C0h] [rbp-48h] BYREF
  char v56[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v57; // [rsp+D0h] [rbp-38h]
  __int64 v58; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-28h]
  __int64 v60; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v61[56]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v62; // [rsp+178h] [rbp+70h] BYREF
  __int64 v63; // [rsp+180h] [rbp+78h] BYREF
  __int64 v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]

  v62 = a1;
  v4 = a1;
  v5 = a1 + 424;
  LOBYTE(a2) = 1;
  sub_1800401E8(a1 + 424, a2, a3, a4);
  sub_180057A80(v4, &v42);
  if ( v42 )
    v8 = sub_180057ADC();
  else
    v8 = 0;
  if ( *(_QWORD *)(v4 + 64) == *(_QWORD *)(v4 + 72) )
    goto LABEL_48;
  if ( *(_BYTE *)(v4 + 432) )
  {
    v9 = *(_DWORD *)(v4 + 428);
    *(_DWORD *)(v4 + 428) = v8;
    if ( v8 <= v9 )
      goto LABEL_48;
  }
  *(_QWORD *)(v4 + 440) = *sub_180011CA0(&v63);
  v10 = sub_18003475C(*(_QWORD *)(v4 + 24));
  sub_18002A21C(v10, (__int64)v61);
  v11 = 0;
  v44 = 0LL;
  v45 = 0;
  if ( v42 )
  {
    v12 = sub_18002A0C4(v42 + 16, (__int64)v46);
    sub_180017C50((__int64)&v44, v12);
    sub_180010F54((__int64)v46);
    v13 = v42;
    v11 = *(_DWORD *)(v42 + 112);
    v14 = *(_DWORD *)(v4 + 16);
    if ( v14 )
    {
      *(_DWORD *)(v42 + 112) = v14;
      v14 = *(_DWORD *)(v4 + 16);
      v13 = v42;
    }
    v15 = *(_DWORD *)(v13 + 112);
    if ( v14 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v15 = *(_DWORD *)(v4 + 16);
  if ( !v15 )
  {
    v15 = 1;
LABEL_15:
    v14 = 1;
    goto LABEL_16;
  }
  v14 = *(_DWORD *)(v4 + 16);
LABEL_16:
  v16 = sub_180034094(*(_QWORD *)(v4 + 24), v14);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v16 + 88LL))(v16, &unk_1801D47A8);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v16 + 88LL))(v16, &unk_1801D47C8);
  v17 = *(_QWORD *)(v4 + 64);
  v65 = v17;
  v18 = *(_QWORD *)(v4 + 72);
  v64 = v18;
  if ( v17 != v18 )
  {
    do
    {
      sub_18003890C(v17, &v40);
      if ( v40 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v40 + 352LL))(v40) )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v40 + 376LL))(v40, v56);
        sub_180011C50(v19, &v49);
        if ( v57 )
          sub_180010574(v57);
        v20 = v49;
        if ( v49 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49) )
        {
          sub_18002A070(v20 + 24, (__int64)v46);
          sub_18002A070(v40 + 8, (__int64)v53);
          v21 = sub_180034094(*(_QWORD *)(v4 + 24), v15);
          v22 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v21 + 72LL))(v21, &unk_1801D4588, 0LL);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 304LL))(v40, v22);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 72LL))(v40);
          v23 = sub_1800340DC(*(_QWORD *)(v4 + 24), &v58);
          v24(v25, v23);
          if ( v59 )
            sub_180010530(v59);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 232LL))(v40, v15);
          v26 = *(_QWORD **)(v4 + 48);
          v47 = v26;
          v27 = *(_QWORD **)(v4 + 40);
          if ( v27 != v26 )
          {
            v28 = v26;
            while ( 1 )
            {
              sub_180015604(&v51, v27);
              sub_180058640(v4 + 88, &v48, &v51);
              if ( v52 )
                sub_180010574(v52);
              if ( v48 == *(_QWORD *)(v4 + 88) )
                goto LABEL_35;
              v29 = (unsigned __int64 *)sub_18005BCA8(*v27, v54);
              if ( (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*v29, (__m128)*(unsigned __int64 *)(v32 + 48))) & 3) == 3 )
              {
                v34 = (unsigned __int64 *)sub_18005BC90(v30, v55, v31);
                v33 = (unsigned int *)(v32 + 56);
                if ( (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(v32 + 56), (__m128)*v34)) & 3) == 3 )
                {
                  v35 = sub_18005BCC0(v30);
                  if ( v35 == *(_DWORD *)(v32 + 64) )
                    goto LABEL_35;
                }
              }
              else
              {
                v33 = (unsigned int *)(v32 + 56);
              }
              sub_18005D564(
                v30,
                _mm_unpacklo_ps((__m128)*(unsigned int *)(v32 + 48), (__m128)*(unsigned int *)(v32 + 52)).m128_u64[0],
                _mm_unpacklo_ps((__m128)*v33, (__m128)v33[1]).m128_u64[0],
                *(unsigned int *)(v32 + 64));
LABEL_35:
              v27 += 2;
              if ( v27 == v28 )
              {
                v4 = v62;
                v17 = v65;
                break;
              }
            }
          }
          (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v4 + 24) + 48LL))(*(_QWORD *)(v4 + 24), &v40);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 240LL))(v40, v15);
          sub_180035F18(*(_QWORD **)(v4 + 24), (__int64)&v42, v4 + 40, &v40);
          sub_1800356DC(*(_QWORD *)(v4 + 24), &v49, &v40, (__int64)v53, (__int64)v46, (__int64)&v44);
          (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v4 + 24) + 56LL))(*(_QWORD *)(v4 + 24), &v40);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 248LL))(v40);
          v36 = *(_QWORD *)(v4 + 24);
          v37 = sub_180056C80(&v60, v17);
          sub_1800372DC(v36, v37);
          sub_180010F54((__int64)v53);
          sub_180010F54((__int64)v46);
        }
        if ( v50 )
          sub_180010530(v50);
        v18 = v64;
      }
      if ( v41 )
        sub_180010530(v41);
      v17 += 16LL;
      v65 = v17;
    }
    while ( v17 != v18 );
    v5 = v4 + 424;
  }
  if ( v42 )
    *(_DWORD *)(v42 + 112) = v11;
  v38 = sub_180011CA0(&v62);
  sub_1800583E0(v4, *v38 - *(_QWORD *)(v4 + 440));
  sub_180010F54((__int64)&v44);
  sub_180029FA0((__int64)v61);
LABEL_48:
  sub_1800401E8(v5, 0LL, v6, v7);
  result = Cnd_broadcast((_Cnd_t)(v4 + 280));
  if ( v43 )
    return sub_180010530(v43);
  return result;
}

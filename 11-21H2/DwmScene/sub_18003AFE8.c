/*
 * XREFs of sub_18003AFE8 @ 0x18003AFE8
 * Callers:
 *     sub_18005F684 @ 0x18005F684 (sub_18005F684.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_1800284BC @ 0x1800284BC (sub_1800284BC.c)
 *     sub_1800284E4 @ 0x1800284E4 (sub_1800284E4.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18002FE8C @ 0x18002FE8C (sub_18002FE8C.c)
 *     sub_180030074 @ 0x180030074 (sub_180030074.c)
 *     sub_18003372C @ 0x18003372C (sub_18003372C.c)
 *     sub_180033D98 @ 0x180033D98 (sub_180033D98.c)
 *     sub_180033EF0 @ 0x180033EF0 (sub_180033EF0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18003AFE8(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  bool v10; // bl
  __int64 *v11; // r8
  __int64 v12; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 *v17; // rdi
  __int64 *v18; // rbx
  __int64 *v19; // rax
  _QWORD *v20; // rax
  const void **v21; // rax
  _QWORD *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // r8
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  __int64 result; // rax
  volatile signed __int32 *v29; // rcx
  __int128 v30; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  double v32; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v35[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h]
  char *v37[3]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v38; // [rsp+98h] [rbp-68h]
  char *v39[3]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v40; // [rsp+B8h] [rbp-48h]
  char *v41[3]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v42; // [rsp+D8h] [rbp-28h]
  char *v43[3]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v44; // [rsp+F8h] [rbp-8h]
  char *v45[3]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v46; // [rsp+118h] [rbp+18h]
  char *v47[3]; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v48; // [rsp+138h] [rbp+38h]
  char *v49[3]; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v50; // [rsp+158h] [rbp+58h]
  char *v51; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v52; // [rsp+178h] [rbp+78h]

  v34[1] = a2;
  v33 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
      if ( v6 == v5 )
      {
        v7 = *a2;
        v33 = *(_OWORD *)a2;
        goto LABEL_6;
      }
    }
  }
  v7 = v33;
LABEL_6:
  if ( v7 )
  {
    v31 = v7;
    v32 = 0.0;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, double *))(*(_QWORD *)v7 + 224LL))(v7, 0LL, v34, &v32);
    v8 = v34[0];
    *(_QWORD *)sub_180033EF0((__int64 *)(a1 + 1440), &v31) = v8;
    v9 = sub_180033D98((__int64 *)(a1 + 1424), &v31);
    sub_1800129F4((__int64 *)v49, v9 + 24);
    v10 = v49[2] == 0LL;
    if ( v50 >= 8 )
      sub_180010884(v49[0], 2 * v50 + 2);
    if ( v10 )
    {
      v11 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64, _BYTE *))(*(_QWORD *)v7 + 376LL))(v7, v35);
      v30 = 0LL;
      v12 = v11[1];
      if ( v12 )
      {
        v13 = *(_DWORD *)(v12 + 8);
        while ( v13 )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13);
          if ( v14 == v13 )
          {
            v15 = *v11;
            v30 = *(_OWORD *)v11;
            goto LABEL_16;
          }
        }
      }
      v15 = v30;
LABEL_16:
      v16 = v36;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v16 + 8LL))(v16, v12, v11);
        v15 = v30;
      }
      if ( v15 )
      {
        v17 = sub_18002851C(v15, (__int64 *)&v51);
        v18 = sub_1800284E4(v15, (__int64 *)v47);
        v19 = sub_1800284BC(v15, (__int64 *)v45);
        v20 = (_QWORD *)sub_180030074((__int64)v43, (const void **)v19, L" ");
        v21 = (const void **)sub_18002FE8C((__int64)v41, v20, v18);
        v22 = (_QWORD *)sub_180030074((__int64)v39, v21, L" ");
        v23 = (__int64 *)sub_18002FE8C((__int64)v37, v22, v17);
        sub_18003372C((__int64 *)(v9 + 24), v23, v24);
        if ( v38 >= 8 )
          sub_180010884(v37[0], 2 * v38 + 2);
        v37[2] = 0LL;
        v38 = 7LL;
        LOWORD(v37[0]) = 0;
        if ( v40 >= 8 )
          sub_180010884(v39[0], 2 * v40 + 2);
        v39[2] = 0LL;
        v40 = 7LL;
        LOWORD(v39[0]) = 0;
        if ( v42 >= 8 )
          sub_180010884(v41[0], 2 * v42 + 2);
        v41[2] = 0LL;
        v42 = 7LL;
        LOWORD(v41[0]) = 0;
        if ( v44 >= 8 )
          sub_180010884(v43[0], 2 * v44 + 2);
        v43[2] = 0LL;
        v44 = 7LL;
        LOWORD(v43[0]) = 0;
        if ( v46 >= 8 )
          sub_180010884(v45[0], 2 * v46 + 2);
        v45[2] = 0LL;
        v46 = 7LL;
        LOWORD(v45[0]) = 0;
        if ( v48 >= 8 )
          sub_180010884(v47[0], 2 * v48 + 2);
        v47[2] = 0LL;
        v48 = 7LL;
        LOWORD(v47[0]) = 0;
        if ( v52 >= 8 )
          sub_180010884(v51, 2 * v52 + 2);
      }
      sub_180010910((__int64)&v30);
    }
    v25 = v32;
    if ( v25 > 0.0 )
    {
      v26 = *(float *)v9;
      if ( v25 > *(float *)v9 )
        v26 = v32;
      *(float *)v9 = v26;
      v27 = *(float *)(v9 + 4);
      if ( v27 > v25 )
        v27 = v25;
      *(float *)(v9 + 4) = v27;
      *(float *)(v9 + 8) = v25 + *(float *)(v9 + 8);
      ++*(_QWORD *)(v9 + 16);
    }
  }
  result = sub_180010910((__int64)&v33);
  v29 = (volatile signed __int32 *)a2[1];
  if ( v29 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
  }
  return result;
}

/*
 * XREFs of sub_180097128 @ 0x180097128
 * Callers:
 *     sub_180096C7C @ 0x180096C7C (sub_180096C7C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180022F90 @ 0x180022F90 (sub_180022F90.c)
 *     sub_180029948 @ 0x180029948 (sub_180029948.c)
 *     sub_18002BBC0 @ 0x18002BBC0 (sub_18002BBC0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180097128(_QWORD *a1, const void *a2, int a3, unsigned int a4, int a5, int a6)
{
  void (__fastcall ****v8)(_QWORD, __int64); // r12
  __int64 v9; // rax
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  void *v12; // rcx
  _QWORD *v13; // rdi
  char *v14; // r14
  char *v15; // rbx
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  const void *v19; // r8
  __int64 v20; // r14
  _QWORD *v21; // rax
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  void (__fastcall ***v23)(_QWORD, __int64); // r8
  void (__fastcall ***v26)(_QWORD, __int64); // [rsp+50h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v29[15]; // [rsp+80h] [rbp-80h]
  __m128i si128; // [rsp+BCh] [rbp-44h]
  int v31; // [rsp+CCh] [rbp-34h]
  int v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D4h] [rbp-2Ch]
  int v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+DCh] [rbp-24h]
  int v36; // [rsp+E0h] [rbp-20h]

  LODWORD(v26) = a3;
  v8 = (void (__fastcall ****)(_QWORD, __int64))(a1 + 14);
  v9 = a1[14];
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 16);
  else
    v10 = 0;
  v29[0] = 0;
  v29[13] = 1;
  v35 = 1;
  v29[4] = 8;
  v29[9] = 8;
  v33 = 8;
  v29[5] = 12;
  v29[10] = 12;
  v29[6] = 16;
  v29[11] = 16;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7F0);
  v29[12] = 2;
  v29[14] = 2;
  v31 = 2;
  v36 = 2;
  v29[1] = 4;
  v29[2] = 4;
  v29[3] = 4;
  v29[7] = 4;
  v29[8] = 4;
  v32 = 4;
  v34 = 4;
  if ( (unsigned int)(a6 - 23) > 1 )
    v11 = v29[a6] * a3;
  else
    v11 = v29[a6] * ((a3 + 1) & 0xFFFFFFFE);
  v12 = (void *)a1[17];
  if ( !v12 )
    goto LABEL_14;
  if ( v12 == a2 )
    goto LABEL_22;
  if ( a4 <= v10 )
  {
    sub_18001060C(v12, v10, a2, v11);
    v13 = (_QWORD *)a1[15];
    v14 = (char *)v13[1];
    while ( !v14[25] )
    {
      sub_180029948((__int64)(a1 + 15), (__int64)(a1 + 15), *((char **)v14 + 2));
      v15 = v14;
      v14 = *(char **)v14;
      sub_180010910((__int64)(v15 + 40));
      sub_180010884(v15, 0x38uLL);
    }
    v13[1] = v13;
    *v13 = v13;
    v13[2] = v13;
    a1[16] = 0LL;
    v8 = (void (__fastcall ****)(_QWORD, __int64))(a1 + 14);
  }
  else
  {
LABEL_14:
    v10 = a4;
    v16 = (void *)o__aligned_malloc(a4, 16LL);
    v17 = sub_18001D684();
    v18 = v17;
    if ( v17 )
    {
      *(_DWORD *)(v17 + 8) = 1;
      *(_DWORD *)(v17 + 12) = 1;
      *(_QWORD *)v17 = &std::_Ref_count_resource<void *,_lambda_2bb65f39da56ce77b91824536c9c4563_>::`vftable';
      *(_QWORD *)(v17 + 16) = v16;
    }
    else
    {
      v18 = 0LL;
    }
    *(_QWORD *)&v28 = v16;
    *((_QWORD *)&v28 + 1) = v18;
    if ( !v16 )
    {
      sub_180022F90(pExceptionObject);
      throw (stdext::bad_alloc *)pExceptionObject;
    }
    if ( a2 )
    {
      v19 = a2;
      v20 = a4;
      sub_18001060C(v16, a4, v19, v11);
    }
    else
    {
      v20 = a4;
      memset(v16, 0, a4);
    }
    v28 = 0LL;
    pExceptionObject[0] = a1[17];
    a1[17] = v16;
    pExceptionObject[1] = a1[18];
    a1[18] = v18;
    sub_180010910((__int64)pExceptionObject);
    sub_180010910((__int64)&v28);
    sub_18002BBC0((__int64)a1, v20);
  }
LABEL_22:
  v21 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, void (__fastcall ****)(_QWORD, __int64), _QWORD, _QWORD, unsigned int, int, int))(*a1 + 48LL))(
                    a1,
                    &v26,
                    (unsigned int)v26,
                    v11,
                    v10,
                    a5,
                    a6);
  if ( v8 != v21 )
  {
    v22 = (void (__fastcall ***)(_QWORD, __int64))*v21;
    *v21 = 0LL;
    v23 = *v8;
    *v8 = v22;
    if ( v23 )
      (**v23)(v23, 1LL);
  }
  if ( v26 )
    (**v26)(v26, 1LL);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
}

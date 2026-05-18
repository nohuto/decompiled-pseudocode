/*
 * XREFs of sub_180024B70 @ 0x180024B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800017FC @ 0x1800017FC (sub_1800017FC.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800230EC @ 0x1800230EC (sub_1800230EC.c)
 *     sub_1800230F8 @ 0x1800230F8 (sub_1800230F8.c)
 *     sub_1800241C4 @ 0x1800241C4 (sub_1800241C4.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_18002596C @ 0x18002596C (sub_18002596C.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180024B70(__int64 a1, __int64 a2, char a3, void *a4, __int64 a5, int *a6, int *a7)
{
  __int64 v11; // r8
  __int64 v12; // r9
  volatile signed __int64 *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  int v16; // [rsp+D0h] [rbp-80h] BYREF
  int v17; // [rsp+D4h] [rbp-7Ch] BYREF
  int v18; // [rsp+D8h] [rbp-78h] BYREF
  int v19; // [rsp+DCh] [rbp-74h] BYREF
  int v20; // [rsp+E0h] [rbp-70h] BYREF
  int v21; // [rsp+E4h] [rbp-6Ch] BYREF
  int v22; // [rsp+E8h] [rbp-68h] BYREF
  int v23; // [rsp+ECh] [rbp-64h] BYREF
  int v24; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+100h] [rbp-50h] BYREF
  __int64 v27; // [rsp+108h] [rbp-48h] BYREF
  __int64 v28; // [rsp+110h] [rbp-40h] BYREF
  __int64 v29; // [rsp+118h] [rbp-38h] BYREF
  __int64 v30; // [rsp+120h] [rbp-30h] BYREF
  __int64 v31; // [rsp+128h] [rbp-28h] BYREF
  void *v32; // [rsp+130h] [rbp-20h] BYREF
  const char *v33; // [rsp+138h] [rbp-18h] BYREF
  __int64 v34; // [rsp+140h] [rbp-10h] BYREF
  __int64 v35; // [rsp+148h] [rbp-8h] BYREF
  char *v36; // [rsp+150h] [rbp+0h] BYREF
  char v37; // [rsp+160h] [rbp+10h] BYREF

  sub_180024958(*(volatile signed __int64 **)(a1 + 112));
  if ( (unsigned int)dword_1801EA1C0 > 5
    && (qword_1801EA1D0 & 0x400000000000LL) != 0
    && (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
  {
    v16 = a7[7];
    v17 = a7[6];
    v18 = a7[4];
    v19 = *a7;
    v25 = *((_QWORD *)a6 + 7);
    v26 = *((_QWORD *)a6 + 6);
    v27 = *((_QWORD *)a6 + 5);
    v28 = *((_QWORD *)a6 + 4);
    v29 = *((_QWORD *)a6 + 3);
    v30 = *((_QWORD *)a6 + 2);
    v20 = a6[3];
    v21 = a6[2];
    v22 = a6[1];
    v23 = *a6;
    v31 = a5;
    v32 = a4;
    v33 = sub_1800241C4(a3);
    v34 = sub_1800230F8(a2);
    v35 = sub_1800230EC(a1 + 8);
    v24 = 1;
    v13 = *(volatile signed __int64 **)(a1 + 112);
    if ( v13 )
    {
      _InterlockedExchangeAdd64(v13 + 18, 0LL);
      sub_180025C4C((void *)v13);
    }
    else
    {
      v37 = 0;
    }
    v36 = &v37;
    sub_1800017FC(
      (__int64)v13,
      byte_1801CD0F1,
      v11,
      v12,
      (void **)&v36,
      (__int64)&v24,
      &v35,
      &v34,
      (void **)&v33,
      &v32,
      (__int64)&v31,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
  result = sub_18002596C((char *)(a1 + 120));
  v15 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v15 )
    return o__aligned_free();
  return result;
}

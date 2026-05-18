/*
 * XREFs of sub_180024400 @ 0x180024400
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001510 @ 0x180001510 (sub_180001510.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800230EC @ 0x1800230EC (sub_1800230EC.c)
 *     sub_1800230F8 @ 0x1800230F8 (sub_1800230F8.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_18002596C @ 0x18002596C (sub_18002596C.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180024400(
        __int64 a1,
        __int64 a2,
        char a3,
        void *a4,
        int a5,
        void *a6,
        void *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        void *a19)
{
  const char *v23; // r8
  __int64 v24; // r8
  __int64 v25; // r9
  volatile signed __int64 *v26; // rcx
  __int64 result; // rax
  __int64 v28; // rcx
  int v29; // [rsp+D0h] [rbp-80h] BYREF
  int v30; // [rsp+D4h] [rbp-7Ch] BYREF
  int v31; // [rsp+D8h] [rbp-78h] BYREF
  int v32; // [rsp+DCh] [rbp-74h] BYREF
  int v33; // [rsp+E0h] [rbp-70h] BYREF
  int v34; // [rsp+E4h] [rbp-6Ch] BYREF
  int v35; // [rsp+E8h] [rbp-68h] BYREF
  void *v36; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v38; // [rsp+100h] [rbp-50h] BYREF
  __int64 v39; // [rsp+108h] [rbp-48h] BYREF
  __int64 v40; // [rsp+110h] [rbp-40h] BYREF
  __int64 v41; // [rsp+118h] [rbp-38h] BYREF
  __int64 v42; // [rsp+120h] [rbp-30h] BYREF
  void *v43; // [rsp+128h] [rbp-28h] BYREF
  void *v44; // [rsp+130h] [rbp-20h] BYREF
  void *v45; // [rsp+138h] [rbp-18h] BYREF
  const char *v46; // [rsp+140h] [rbp-10h] BYREF
  __int64 v47; // [rsp+148h] [rbp-8h] BYREF
  __int64 v48; // [rsp+150h] [rbp+0h] BYREF
  char *v49; // [rsp+158h] [rbp+8h] BYREF
  char v50; // [rsp+160h] [rbp+10h] BYREF

  sub_180024958(*(void **)(a1 + 112));
  v23 = "fail";
  if ( a3 )
    v23 = "success";
  if ( (unsigned int)dword_1801EA1C0 > 5
    && (qword_1801EA1D0 & 0x400000000000LL) != 0
    && (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
  {
    v36 = a19;
    v29 = a18;
    v30 = a17;
    v31 = a16;
    v32 = a15;
    v33 = a14;
    v37 = a13;
    v38 = a12;
    v39 = a11;
    v40 = a10;
    v41 = a9;
    v42 = a8;
    v43 = a7;
    v44 = a6;
    v34 = a5;
    v45 = a4;
    v46 = v23;
    v47 = sub_1800230F8(a2);
    v48 = sub_1800230EC(a1 + 16);
    v35 = 1;
    v26 = *(volatile signed __int64 **)(a1 + 112);
    if ( v26 )
    {
      _InterlockedExchangeAdd64(v26 + 18, 0LL);
      sub_180025C4C((void *)v26);
    }
    else
    {
      v50 = 0;
    }
    v49 = &v50;
    sub_180001510(
      (__int64)v26,
      byte_1801CCB11,
      v24,
      v25,
      (void **)&v49,
      (__int64)&v35,
      &v48,
      &v47,
      (void **)&v46,
      &v45,
      (__int64)&v34,
      &v44,
      &v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      &v36);
  }
  result = sub_18002596C((char *)(a1 + 120));
  v28 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v28 )
    return o__aligned_free();
  return result;
}

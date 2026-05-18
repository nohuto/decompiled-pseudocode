/*
 * XREFs of sub_180024FB0 @ 0x180024FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001A94 @ 0x180001A94 (sub_180001A94.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800230EC @ 0x1800230EC (sub_1800230EC.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_18002596C @ 0x18002596C (sub_18002596C.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

// Hidden C++ exception states: #wind=1
ULONG __fastcall sub_180024FB0(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        void *a15,
        __int64 a16,
        int a17,
        int a18,
        __int64 a19,
        int *a20,
        __int64 **a21)
{
  __int64 v22; // rax
  __int64 v23; // rdx
  float v24; // xmm1_4
  __int64 v25; // rcx
  volatile signed __int64 *v26; // rax
  __int64 v27; // rcx
  ULONG result; // eax
  __int64 v29; // rcx
  float v30; // xmm1_4
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  volatile signed __int64 *v35; // rcx
  float v36; // [rsp+118h] [rbp-80h] BYREF
  int v37; // [rsp+11Ch] [rbp-7Ch] BYREF
  int v38; // [rsp+120h] [rbp-78h] BYREF
  int v39; // [rsp+124h] [rbp-74h] BYREF
  float v40; // [rsp+128h] [rbp-70h] BYREF
  int v41; // [rsp+12Ch] [rbp-6Ch] BYREF
  int v42; // [rsp+130h] [rbp-68h] BYREF
  int v43; // [rsp+134h] [rbp-64h] BYREF
  int v44; // [rsp+138h] [rbp-60h] BYREF
  int v45; // [rsp+13Ch] [rbp-5Ch] BYREF
  int v46; // [rsp+140h] [rbp-58h] BYREF
  int v47; // [rsp+144h] [rbp-54h] BYREF
  int v48; // [rsp+148h] [rbp-50h] BYREF
  float v49; // [rsp+14Ch] [rbp-4Ch] BYREF
  float v50; // [rsp+150h] [rbp-48h] BYREF
  float v51; // [rsp+154h] [rbp-44h] BYREF
  int v52; // [rsp+158h] [rbp-40h] BYREF
  void *v53; // [rsp+160h] [rbp-38h] BYREF
  __int64 v54; // [rsp+168h] [rbp-30h] BYREF
  __int64 v55; // [rsp+170h] [rbp-28h] BYREF
  void *v56; // [rsp+178h] [rbp-20h] BYREF
  __int64 v57; // [rsp+180h] [rbp-18h] BYREF
  __int64 v58; // [rsp+188h] [rbp-10h] BYREF
  __int64 v59; // [rsp+190h] [rbp-8h] BYREF
  __int64 v60; // [rsp+198h] [rbp+0h] BYREF
  __int64 v61; // [rsp+1A0h] [rbp+8h] BYREF
  __int64 v62; // [rsp+1A8h] [rbp+10h] BYREF
  __int64 v63; // [rsp+1B0h] [rbp+18h] BYREF
  __int64 v64; // [rsp+1B8h] [rbp+20h] BYREF
  char *v65; // [rsp+1C0h] [rbp+28h] BYREF
  char v66; // [rsp+1C8h] [rbp+30h] BYREF

  v36 = 0.0;
  v37 = 0;
  v38 = 0;
  if ( a21[1] )
  {
    v22 = **a21;
    v23 = *(_QWORD *)(v22 + 56);
    if ( v23 )
    {
      if ( v23 < 0 )
      {
        v25 = *(_QWORD *)(v22 + 56) & 1LL | ((unsigned __int64)v23 >> 1);
        v24 = (float)(int)v25 + (float)(int)v25;
      }
      else
      {
        v24 = (float)(int)v23;
      }
      v36 = *(float *)(v22 + 48) / v24;
    }
    v37 = *(_DWORD *)(v22 + 44);
    v38 = *(_DWORD *)(v22 + 40);
  }
  v26 = (volatile signed __int64 *)sub_18002596C((char *)(a1 + 120));
  v27 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v26;
  if ( v27 )
  {
    o__aligned_free();
    v26 = *(volatile signed __int64 **)(a1 + 112);
  }
  result = sub_180024958(v26);
  if ( (unsigned int)dword_1801EA1C0 > 5 && (qword_1801EA1D0 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
    {
      v39 = *((_DWORD *)a21 + 2);
      v40 = v36;
      v41 = a20[1];
      v42 = *a20;
      v29 = *((_QWORD *)a20 + 2);
      if ( v29 )
      {
        if ( v29 < 0 )
        {
          v31 = *((_QWORD *)a20 + 2) & 1LL | ((unsigned __int64)v29 >> 1);
          v30 = (float)(int)v31 + (float)(int)v31;
        }
        else
        {
          v30 = (float)(int)v29;
        }
        v36 = *((float *)a20 + 2) / v30;
      }
      else
      {
        v36 = 0.0;
      }
      v32 = (_QWORD *)(a1 + 80);
      if ( *(_QWORD *)(a1 + 104) >= 0x10uLL )
        v32 = (_QWORD *)*v32;
      v53 = v32;
      v54 = a19;
      v43 = a18;
      v44 = a17;
      v55 = a16;
      v56 = a15;
      v57 = a14;
      v58 = a13;
      v59 = a12;
      v60 = a11;
      v61 = a10;
      v62 = a9;
      v45 = a8;
      v46 = a7;
      v47 = a6;
      v48 = a5;
      v49 = a4;
      v50 = a3;
      v51 = a2;
      v63 = sub_1800230EC(a1 + 24);
      v64 = sub_1800230EC(a1 + 8);
      v52 = 1;
      v35 = *(volatile signed __int64 **)(a1 + 112);
      if ( v35 )
      {
        _InterlockedExchangeAdd64(v35 + 18, 0LL);
        sub_180025C4C((void *)v35);
      }
      else
      {
        v66 = 0;
      }
      v65 = &v66;
      return sub_180001A94(
               (__int64)v35,
               byte_1801CCD35,
               v33,
               v34,
               (void **)&v65,
               (__int64)&v52,
               &v64,
               &v63,
               (__int64)&v51,
               (__int64)&v50,
               (__int64)&v49,
               (__int64)&v48,
               (__int64)&v47,
               (__int64)&v46,
               (__int64)&v45,
               (__int64)&v62,
               (__int64)&v61,
               (__int64)&v60,
               (__int64)&v59,
               (__int64)&v58,
               (__int64)&v57,
               &v56,
               (__int64)&v55,
               (__int64)&v44,
               (__int64)&v43,
               (__int64)&v54,
               &v53,
               (__int64)&v36,
               (__int64)&v42,
               (__int64)&v41,
               (__int64)&v40,
               (__int64)&v38,
               (__int64)&v37,
               (__int64)&v39);
    }
  }
  return result;
}

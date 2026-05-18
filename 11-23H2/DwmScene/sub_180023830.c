/*
 * XREFs of sub_180023830 @ 0x180023830
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001528 @ 0x180001528 (sub_180001528.c)
 *     sub_18000265C @ 0x18000265C (sub_18000265C.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180021D04 @ 0x180021D04 (sub_180021D04.c)
 *     sub_180021EB4 @ 0x180021EB4 (sub_180021EB4.c)
 *     sub_180022C80 @ 0x180022C80 (sub_180022C80.c)
 *     sub_180023260 @ 0x180023260 (sub_180023260.c)
 *     sub_180023FC4 @ 0x180023FC4 (sub_180023FC4.c)
 *     sub_1800246F8 @ 0x1800246F8 (sub_1800246F8.c)
 */

char __fastcall sub_180023830(
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
        __int64 a21)
{
  double v22; // xmm0_8
  __int64 v23; // r8
  int v24; // xmm2_4
  int *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  char result; // al
  double v29; // xmm0_8
  _QWORD *v30; // rax
  __int64 v31; // rax
  volatile signed __int64 *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // [rsp+118h] [rbp-80h] BYREF
  int v37; // [rsp+11Ch] [rbp-7Ch] BYREF
  int v38; // [rsp+120h] [rbp-78h] BYREF
  int v39; // [rsp+124h] [rbp-74h] BYREF
  int v40; // [rsp+128h] [rbp-70h] BYREF
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
  _BYTE *v65; // [rsp+1C0h] [rbp+28h] BYREF
  _BYTE v66[144]; // [rsp+1C8h] [rbp+30h] BYREF

  v38 = 0;
  v36 = 0;
  v37 = 0;
  if ( *(_QWORD *)(a21 + 8) )
  {
    v22 = sub_180022C80(**(_QWORD **)a21 + 40LL);
    v24 = *(_DWORD *)(v23 + 44);
    v38 = LODWORD(v22);
    v37 = *v25;
    v36 = v24;
  }
  v26 = sub_180023FC4((char *)(a1 + 120));
  sub_1800246F8(a1 + 112, v26);
  result = sub_180023260(*(_QWORD *)(a1 + 112), a1 + 120, v27);
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    result = sub_180001528((__int64)&dword_1801C81C0, 0x400000000000LL);
    if ( result )
    {
      v39 = *(_DWORD *)(a21 + 8);
      v40 = a20[1];
      v41 = *a20;
      v29 = sub_180022C80((__int64)a20);
      v30 = (_QWORD *)(a1 + 80);
      v42 = LODWORD(v29);
      if ( *(_QWORD *)(a1 + 104) >= 0x10uLL )
        v30 = (_QWORD *)*v30;
      v53 = v30;
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
      v63 = sub_180021EB4(a1 + 24);
      v31 = sub_180021EB4(a1 + 8);
      v32 = *(volatile signed __int64 **)(a1 + 112);
      v64 = v31;
      v52 = 1;
      v65 = sub_180021D04(v66, v32);
      return sub_18000265C(
               v33,
               byte_1801AB756,
               v34,
               v35,
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
               (__int64)&v42,
               (__int64)&v41,
               (__int64)&v40,
               (__int64)&v38,
               (__int64)&v37,
               (__int64)&v36,
               (__int64)&v39);
    }
  }
  return result;
}

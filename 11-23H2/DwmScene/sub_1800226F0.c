/*
 * XREFs of sub_1800226F0 @ 0x1800226F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001528 @ 0x180001528 (sub_180001528.c)
 *     sub_180002CAC @ 0x180002CAC (sub_180002CAC.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180021D04 @ 0x180021D04 (sub_180021D04.c)
 *     sub_180021EB4 @ 0x180021EB4 (sub_180021EB4.c)
 *     sub_180021EC0 @ 0x180021EC0 (sub_180021EC0.c)
 *     sub_180023260 @ 0x180023260 (sub_180023260.c)
 *     sub_180023FC4 @ 0x180023FC4 (sub_180023FC4.c)
 *     sub_1800246F8 @ 0x1800246F8 (sub_1800246F8.c)
 */

__int64 __fastcall sub_1800226F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        void *a5,
        int a6,
        void *a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        int a16,
        int a17,
        int a18,
        void *a19)
{
  volatile signed __int64 **v20; // rdi
  const char *v24; // rax
  __int64 v25; // rax
  volatile signed __int64 *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  int v32; // [rsp+D8h] [rbp-80h] BYREF
  int v33; // [rsp+DCh] [rbp-7Ch] BYREF
  int v34; // [rsp+E0h] [rbp-78h] BYREF
  int v35; // [rsp+E4h] [rbp-74h] BYREF
  int v36; // [rsp+E8h] [rbp-70h] BYREF
  int v37; // [rsp+ECh] [rbp-6Ch] BYREF
  void *v38; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v40; // [rsp+100h] [rbp-58h] BYREF
  __int64 v41; // [rsp+108h] [rbp-50h] BYREF
  __int64 v42; // [rsp+110h] [rbp-48h] BYREF
  __int64 v43; // [rsp+118h] [rbp-40h] BYREF
  __int64 v44; // [rsp+120h] [rbp-38h] BYREF
  void *v45; // [rsp+128h] [rbp-30h] BYREF
  void *v46; // [rsp+130h] [rbp-28h] BYREF
  void *v47; // [rsp+138h] [rbp-20h] BYREF
  const char *v48; // [rsp+140h] [rbp-18h] BYREF
  __int64 v49; // [rsp+148h] [rbp-10h] BYREF
  __int64 v50; // [rsp+150h] [rbp-8h] BYREF
  __int64 v51; // [rsp+158h] [rbp+0h] BYREF
  _BYTE *v52; // [rsp+160h] [rbp+8h] BYREF
  _BYTE v53[144]; // [rsp+168h] [rbp+10h] BYREF

  v20 = (volatile signed __int64 **)(a1 + 112);
  sub_180023260(*(_QWORD *)(a1 + 112), a1 + 249);
  if ( (unsigned int)dword_1801C81C0 > 5 && sub_180001528((__int64)&dword_1801C81C0, 0x400000000000LL) )
  {
    v38 = a19;
    v32 = a18;
    v33 = a17;
    v34 = a16;
    v35 = a15;
    v39 = a14;
    v40 = a13;
    v41 = a12;
    v42 = a11;
    v43 = a10;
    v44 = a9;
    v45 = a8;
    v46 = a7;
    v36 = a6;
    v47 = a5;
    v24 = "fail";
    if ( a4 )
      v24 = "success";
    v48 = v24;
    v49 = sub_180021EC0(a3);
    v50 = sub_180021EC0(a2);
    v25 = sub_180021EB4(a1 + 16);
    v26 = *v20;
    v51 = v25;
    v37 = 1;
    v52 = sub_180021D04(v53, v26);
    sub_180002CAC(
      v27,
      byte_1801AAE50,
      v28,
      v29,
      (void **)&v52,
      (__int64)&v37,
      &v51,
      &v50,
      &v49,
      (void **)&v48,
      &v47,
      (__int64)&v36,
      &v46,
      &v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      &v38);
  }
  v30 = sub_180023FC4((char *)(a1 + 120));
  return sub_1800246F8(v20, v30);
}

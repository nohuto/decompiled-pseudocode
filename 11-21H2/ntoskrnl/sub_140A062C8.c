/*
 * XREFs of sub_140A062C8 @ 0x140A062C8
 * Callers:
 *     sub_140A069C0 @ 0x140A069C0 (sub_140A069C0.c)
 *     sub_140A06AA0 @ 0x140A06AA0 (sub_140A06AA0.c)
 * Callees:
 *     sub_1402585E8 @ 0x1402585E8 (sub_1402585E8.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406C5900 @ 0x1406C5900 (sub_1406C5900.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140A062C8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        unsigned int Length,
        int a8)
{
  unsigned __int64 v11; // rcx
  PVOID Object; // [rsp+58h] [rbp-1D0h]
  volatile void *Address; // [rsp+60h] [rbp-1C8h]
  PVOID v14; // [rsp+68h] [rbp-1C0h]
  __int64 v15; // [rsp+70h] [rbp-1B8h]
  __int64 v16; // [rsp+78h] [rbp-1B0h]
  __int128 v17; // [rsp+80h] [rbp-1A8h]
  __int128 v18; // [rsp+98h] [rbp-190h]
  __int64 v19; // [rsp+A8h] [rbp-180h]
  __int128 v20; // [rsp+B0h] [rbp-178h]
  __int128 v21; // [rsp+C0h] [rbp-168h]
  __int64 v22; // [rsp+D0h] [rbp-158h]
  int v23; // [rsp+D8h] [rbp-150h]
  _QWORD v24[32]; // [rsp+E8h] [rbp-140h] BYREF

  v16 = a1;
  Address = a6;
  memset(v24, 0, sizeof(v24));
  v17 = 0LL;
  v15 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  Object = 0LL;
  v14 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( !Length )
    return 3221225717LL;
  if ( (unsigned int)(a5 - 2) > 0x1D )
    return 3221225485LL;
  v11 = (a4 >> a5) + 1;
  if ( !(a4 % (1LL << a5)) )
    v11 = a4 >> a5;
  if ( v11 > (unsigned __int64)Length >> 2 )
    return 3221225507LL;
  if ( a3 + a4 < a4 )
    return 2147483653LL;
  LODWORD(v18) = a8;
  sub_14042A5E0(1LL, 24LL);
  return 3221225659LL;
}

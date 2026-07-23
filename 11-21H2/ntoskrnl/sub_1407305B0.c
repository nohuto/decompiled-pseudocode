/*
 * XREFs of sub_1407305B0 @ 0x1407305B0
 * Callers:
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402AC180 @ 0x1402AC180 (sub_1402AC180.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406CB09C @ 0x1406CB09C (sub_1406CB09C.c)
 */

char __fastcall sub_1407305B0(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned int v6; // r9d
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r12
  unsigned int v14; // r13d
  unsigned int v15; // r14d
  unsigned int v16; // edi
  unsigned int v17; // esi
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // edi
  unsigned int v22; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+50h] [rbp-A8h] BYREF
  __int64 *v26; // [rsp+70h] [rbp-88h]
  __int64 v27; // [rsp+78h] [rbp-80h]
  __int64 *v28; // [rsp+80h] [rbp-78h]
  __int64 v29; // [rsp+88h] [rbp-70h]
  unsigned int *v30; // [rsp+90h] [rbp-68h]
  __int64 v31; // [rsp+98h] [rbp-60h]
  unsigned __int64 v32; // [rsp+A0h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+A8h] [rbp-50h]

  v4 = HIBYTE(a1);
  v22 = HIWORD(a2);
  v5 = HIWORD(a1);
  v6 = a2 >> 8;
  v8 = a1 >> 40;
  v10 = HIDWORD(a1);
  v11 = a1 >> 24;
  v12 = a1 >> 16;
  v13 = a1 >> 8;
  v14 = HIBYTE(a2);
  LODWORD(v23) = v6;
  if ( dword_140C03958 )
  {
    v24 = (unsigned int)dword_140C46C30;
    v15 = dword_140C46C20;
    v32 = a1;
    v33 = a2;
    v16 = v14
        + 37
        * ((unsigned __int8)v22
         + 37
         * ((unsigned __int8)v23
          + 37
          * ((unsigned __int8)a2
           + 37
           * (v4
            + 37
            * ((unsigned __int8)v5
             + 37
             * ((unsigned __int8)v8
              + 37
              * ((unsigned __int8)v10
               + 37
               * ((unsigned __int8)v11
                + 37
                * ((unsigned __int8)v12 + 37
                                        * ((unsigned __int8)v13 + 37 * ((unsigned __int8)a1 + 37 * dword_140C46C30)))))))))));
    v17 = dword_140C46C20 == 0x8000 ? HIWORD(v16) & 0x7FFF : HIWORD(v16) % (unsigned int)dword_140C46C20;
    v18 = sub_1402AC180(&v32, 0xCuLL, (unsigned int)dword_140C46C30);
    v19 = v15 == 0x8000 ? v18 & 0x7FFF : v18 % v15;
    v20 = v15 == 0x8000 ? v16 & 0x7FFF : v16 % v15;
    if ( !_bittest((const signed __int32 *)qword_140C46C28, v20)
      || !_bittest((const signed __int32 *)qword_140C46C28, v17)
      || (LOBYTE(v5) = _bittest((const signed __int32 *)qword_140C46C28, v19), !(_BYTE)v5) )
    {
      LOBYTE(v5) = sub_1406CB09C(v19, (__int64)&v32);
      if ( (unsigned int)dword_140C03958 > 5 )
      {
        LOBYTE(v5) = sub_1402A2000((__int64)&dword_140C03958, 0x200000000000LL);
        if ( (_BYTE)v5 )
        {
          v27 = 8LL;
          v24 = 0x80000000LL;
          v23 = a1;
          v26 = &v24;
          v29 = 8LL;
          v28 = (__int64 *)&v23;
          v22 = a2;
          v30 = &v22;
          v31 = 4LL;
          LOBYTE(v5) = sub_14020A9C4((__int64)&dword_140C03958, (unsigned __int8 *)&word_14002BA3E, 0LL, 0LL, 5u, &v25);
        }
      }
    }
  }
  return v5;
}

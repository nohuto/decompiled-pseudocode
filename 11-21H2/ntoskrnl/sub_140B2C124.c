/*
 * XREFs of sub_140B2C124 @ 0x140B2C124
 * Callers:
 *     sub_140B2C0C0 @ 0x140B2C0C0 (sub_140B2C0C0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406DCAC0 (ExGetFirmwareEnvironmentVariable.c)
 *     sub_1407FFF0C @ 0x1407FFF0C (sub_1407FFF0C.c)
 *     sub_1408002B4 @ 0x1408002B4 (sub_1408002B4.c)
 *     RtlGetSystemBootStatusEx @ 0x14085F040 (RtlGetSystemBootStatusEx.c)
 *     sub_140989C20 @ 0x140989C20 (sub_140989C20.c)
 *     sub_140B52D94 @ 0x140B52D94 (sub_140B52D94.c)
 */

char __fastcall sub_140B2C124(__int64 a1)
{
  char v2; // cl
  char v3; // cl
  char result; // al
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r9
  char v7; // bl
  int v8; // r9d
  LOGICAL CheckStamp; // [rsp+30h] [rbp-D0h]
  char v10; // [rsp+50h] [rbp-B0h] BYREF
  char v11; // [rsp+51h] [rbp-AFh] BYREF
  bool v12; // [rsp+52h] [rbp-AEh] BYREF
  int v13; // [rsp+54h] [rbp-ACh] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+5Ch] [rbp-A4h] BYREF
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  int v17; // [rsp+64h] [rbp-9Ch] BYREF
  int v18; // [rsp+68h] [rbp-98h] BYREF
  int Buffer; // [rsp+6Ch] [rbp-94h] BYREF
  int v20; // [rsp+70h] [rbp-90h] BYREF
  WNF_STATE_NAME StateName; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  int *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  __int128 *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  char *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  bool *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  int v43; // [rsp+140h] [rbp+40h] BYREF
  __int128 *v44; // [rsp+148h] [rbp+48h]
  int v45; // [rsp+150h] [rbp+50h]
  int v46; // [rsp+158h] [rbp+58h]
  __int128 *v47; // [rsp+160h] [rbp+60h]
  int v48; // [rsp+168h] [rbp+68h]
  int v49; // [rsp+170h] [rbp+70h]
  __int128 *v50; // [rsp+178h] [rbp+78h]
  int v51; // [rsp+180h] [rbp+80h]

  v43 = 14;
  v44 = &xmmword_140C5ACC0;
  v10 = 0;
  v47 = &xmmword_140C54798;
  v45 = 64;
  v50 = &xmmword_140C548E0;
  v46 = 7;
  v48 = 32;
  v49 = 16;
  v51 = 32;
  RtlGetSystemBootStatusEx((__int64)&v43, 3u, 0LL);
  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 240) + 132LL) & 1;
  xmmword_140C5AC80 = xmmword_140C5ACC0;
  xmmword_140C5AC90 = xmmword_140C5ACD0;
  byte_140C5AD30 = v2;
  xmmword_140C5ACA0 = xmmword_140C5ACE0;
  xmmword_140C5ACB0 = xmmword_140C5ACF0;
  if ( _mm_srli_si128((__m128i)xmmword_140C5ACC0, 8).m128i_u32[0]
    && (unsigned int)dword_140C03A00 > 5
    && sub_1402A2000((__int64)&dword_140C03A00, 0x200000000000LL) )
  {
    v14 = v5;
    v23 = &xmmword_140C5AC80;
    v16 = v5;
    v13 = WORD2(v5);
    v25 = &v13;
    v27 = &v14;
    v29 = &xmmword_140C5ACA0;
    v15 = WORD6(xmmword_140C5ACA0);
    v31 = &v15;
    v33 = &v16;
    v17 = HIWORD(xmmword_140C5ACA0);
    v35 = &v17;
    v18 = BYTE6(v5);
    v37 = &v18;
    v6 = HIBYTE(v5);
    v24 = 8LL;
    v11 = v6 & 1;
    v12 = (v6 & 2) != 0;
    v39 = &v11;
    v26 = 4LL;
    v41 = &v12;
    v28 = 4LL;
    v30 = 8LL;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 1LL;
    v42 = 1LL;
    sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&word_14002E19E, 0LL, 0LL, 0xCu, &v22);
  }
  xmmword_140C5AC40 = xmmword_140C548E0;
  xmmword_140C5AC50 = unk_140C548F0;
  xmmword_140C5AC60 = xmmword_140C54798;
  xmmword_140C5AC70 = xmmword_140C547A8;
  if ( (qword_140C15C78 & 4) != 0 )
    BYTE8(xmmword_140C5AC60) &= ~1u;
  if ( (dword_140C22278 & 0x200) != 0 )
    BYTE8(xmmword_140C5AC60) |= 1u;
  v3 = BYTE14(xmmword_140C5AC60) & 0xDF;
  BYTE14(xmmword_140C5AC60) &= ~0x20u;
  if ( DWORD2(xmmword_140C5AC80) && (HIBYTE(xmmword_140C5AC80) & 4) != 0 )
  {
    BYTE14(xmmword_140C5AC60) = v3 | 0x20;
    *(_QWORD *)&xmmword_140C5AC60 = xmmword_140C5AC80;
  }
  byte_140C5AD31 = (BYTE14(xmmword_140C54798) & 0x10) != 0;
  StateName = (WNF_STATE_NAME)0x41C6013DA3BCB075LL;
  Buffer = BYTE8(xmmword_140C5AC60) & 1;
  result = ZwUpdateWnfStateData(&StateName, &Buffer, 4u, 0LL, 0LL, 0, 0);
  if ( (dword_140C22278 & 0x400) != 0 )
  {
    WORD6(xmmword_140C5AC60) = 1;
    result = BYTE8(xmmword_140C5AC60) & 0xF | 0x50;
    BYTE8(xmmword_140C5AC60) = result;
  }
  if ( (dword_140C22278 & 0x20000000) != 0 )
  {
    BYTE8(xmmword_140C5AC60) |= 2u;
    *((_QWORD *)&xmmword_140C5AC50 + 1) = 1LL;
  }
  if ( (BYTE8(xmmword_140C5AC60) & 1) != 0 )
  {
    v20 = 1;
    if ( (int)ExGetFirmwareEnvironmentVariable((__int64)L"*,", (int)qword_14003AB00, (int)&v10, (int)&v20, 0LL) < 0 )
    {
      v7 = BYTE2(xmmword_140C5AC40);
      BYTE1(xmmword_140C5AC40) = BYTE1(xmmword_140C5AC40) & 0xF3 | 8;
      sub_140989C20(2);
    }
    else
    {
      v7 = v10;
      BYTE2(xmmword_140C5AC40) = v10;
      BYTE1(xmmword_140C5AC40) = BYTE1(xmmword_140C5AC40) & 0xF3 | 4;
      sub_1407FFF0C(v10);
      sub_140989C20(1);
      sub_1408002B4(1);
    }
    LOBYTE(v8) = (BYTE8(xmmword_140C5AC60) & 2) != 0;
    return sub_140B52D94(
             a1,
             BYTE8(xmmword_140C5AC60) >> 4,
             WORD6(xmmword_140C5AC60),
             v8,
             qword_140C548F8,
             xmmword_140C5AC60,
             CheckStamp,
             v7,
             BYTE14(xmmword_140C5AC60) & 0xF,
             (BYTE14(xmmword_140C5AC60) & 0x20) != 0);
  }
  return result;
}

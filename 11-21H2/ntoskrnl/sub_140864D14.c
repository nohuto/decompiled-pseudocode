/*
 * XREFs of sub_140864D14 @ 0x140864D14
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F1774 @ 0x1406F1774 (sub_1406F1774.c)
 *     sub_140835D14 @ 0x140835D14 (sub_140835D14.c)
 *     sub_1408365B8 @ 0x1408365B8 (sub_1408365B8.c)
 */

__int64 __fastcall sub_140864D14(PLARGE_INTEGER a1)
{
  int v2; // ebx
  __int64 result; // rax
  _DWORD *v4; // r15
  int v5; // r14d
  int v6; // edi
  LARGE_INTEGER v7; // r8
  LARGE_INTEGER v8; // rcx
  LARGE_INTEGER v9; // r10
  LARGE_INTEGER v10; // r9
  int v11; // edx
  int v12; // eax
  int v13; // edx
  bool v14; // sf
  bool v15; // of
  bool v16; // cc
  LONGLONG QuadPart; // rcx
  LARGE_INTEGER v18; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER Time; // [rsp+30h] [rbp-D8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h]
  _QWORD TimeFields[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v22[54]; // [rsp+68h] [rbp-A0h] BYREF

  v2 = 0;
  v18.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  memset(v22, 0, sizeof(v22));
  *(_OWORD *)&TimeFields[1] = 0LL;
  if ( !dword_140D01460 )
    return 3221225659LL;
  v4 = (_DWORD *)*((_QWORD *)sub_140347DB0() + 157);
  result = sub_1406F1774((char *)v22, 0x1B0uLL);
  if ( (int)result >= 0 )
  {
    v5 = LODWORD(v22[0]) + LODWORD(v22[21]);
    v6 = LODWORD(v22[0]) + HIDWORD(v22[10]);
    RtlTimeToTimeFields(a1, (PTIME_FIELDS)&TimeFields[1]);
    if ( HIWORD(v22[8])
      && WORD1(v22[19])
      && sub_140835D14((PTIME_FIELDS)((char *)&v22[8] + 4), &Time, a1)
      && sub_140835D14((PTIME_FIELDS)&v22[19], &v18, a1) )
    {
      v7.QuadPart = v18.QuadPart + 600000000LL * v6;
      v18 = v7;
      v8.QuadPart = Time.QuadPart + 600000000LL * v5;
      Time = v8;
      if ( v7.QuadPart >= v8.QuadPart )
      {
        v20 = 1;
        v9 = v8;
        HIDWORD(TimeFields[0]) = 2;
        v10 = v7;
      }
      else
      {
        v20 = 2;
        v9 = v7;
        HIDWORD(TimeFields[0]) = 1;
        v10 = v8;
      }
      v11 = 0;
      v12 = v5;
      if ( v7.QuadPart >= v8.QuadPart )
        v12 = v6;
      LOBYTE(v11) = v7.QuadPart < v8.QuadPart;
      v13 = v11 + 1;
      v15 = __OFSUB__(v7.QuadPart, v8.QuadPart);
      v14 = v7.QuadPart - v8.QuadPart < 0;
      v16 = v7.QuadPart < v8.QuadPart;
      QuadPart = a1->QuadPart;
      if ( !v16 )
        v6 = v5;
      if ( QuadPart < v9.QuadPart || QuadPart >= v10.QuadPart )
      {
        v12 = v6;
        LOBYTE(v2) = v14 == v15;
        v13 = v2 + 1;
      }
      else
      {
        v6 = v12;
      }
      v4[108] = v13;
      v4[109] = v6;
      *((_QWORD *)v4 + 55) = 600000000LL * v12;
      MEMORY[0xFFFFF7800000025C] = 0;
      sub_1408365B8(v4 + 110);
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}

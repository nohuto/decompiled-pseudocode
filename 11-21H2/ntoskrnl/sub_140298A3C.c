/*
 * XREFs of sub_140298A3C @ 0x140298A3C
 * Callers:
 *     sub_140299150 @ 0x140299150 (sub_140299150.c)
 *     sub_140299F34 @ 0x140299F34 (sub_140299F34.c)
 *     sub_1405403CC @ 0x1405403CC (sub_1405403CC.c)
 *     PsDereferenceKernelStack @ 0x1406EA260 (PsDereferenceKernelStack.c)
 *     sub_1407A41E0 @ 0x1407A41E0 (sub_1407A41E0.c)
 * Callees:
 *     sub_140298AF8 @ 0x140298AF8 (sub_140298AF8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140298A3C(__int64 a1)
{
  __int64 v2; // r8
  char v3; // bl
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // r9
  _OWORD v7[4]; // [rsp+20h] [rbp-59h] BYREF
  _OWORD v8[4]; // [rsp+60h] [rbp-19h] BYREF

  memset(v7, 0, sizeof(v7));
  LOBYTE(v2) = 1;
  sub_140298AF8(a1, v7, v2);
  do
  {
    v8[0] = v7[0];
    v8[1] = v7[1];
    v8[2] = v7[2];
    v8[3] = v7[3];
    v3 = sub_140298AF8(a1, v7, 0LL);
    result = sub_14042A5E0(v4, v8);
  }
  while ( v3 );
  if ( (*(_DWORD *)(a1 + 116) & 0x800000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 96);
    memset(&v7[2], 0, 32);
    *(_QWORD *)&v7[0] = v6 + (unsigned int)dword_140D06A0C;
    *((_QWORD *)&v7[0] + 1) = *(_QWORD *)&v7[0] - 12288LL;
    *((_QWORD *)&v7[1] + 1) = *(_QWORD *)&v7[0];
    *(_QWORD *)&v7[1] = v6;
    return sub_14042A5E0(a1, v7);
  }
  return result;
}

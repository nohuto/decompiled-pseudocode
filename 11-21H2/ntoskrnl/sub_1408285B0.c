/*
 * XREFs of sub_1408285B0 @ 0x1408285B0
 * Callers:
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     ExIsSoftBoot @ 0x1403B72A0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlLockBootStatusData @ 0x1406D6540 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x1406D6AD0 (RtlUnlockBootStatusData.c)
 *     sub_1407EDB2C @ 0x1407EDB2C (sub_1407EDB2C.c)
 *     sub_14082876C @ 0x14082876C (sub_14082876C.c)
 *     sub_140828810 @ 0x140828810 (sub_140828810.c)
 */

__int64 sub_1408285B0()
{
  unsigned int v0; // ebx
  char v1; // di
  ULONG32 v2; // eax
  __int64 v3; // rdx
  __int64 result; // rax
  char v5; // [rsp+40h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+48h] [rbp-11h] BYREF
  int v7; // [rsp+50h] [rbp-9h] BYREF
  __int128 *v8; // [rsp+58h] [rbp-1h]
  int v9; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+68h] [rbp+Fh]
  __int128 *v11; // [rsp+70h] [rbp+17h]
  int v12; // [rsp+78h] [rbp+1Fh]
  int v13; // [rsp+80h] [rbp+27h]
  char *v14; // [rsp+88h] [rbp+2Fh]
  int v15; // [rsp+90h] [rbp+37h]

  FileHandle = 0LL;
  v5 = 0;
  if ( RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    sub_140828810(FileHandle);
    RtlUnlockBootStatusData(FileHandle);
  }
  v7 = 7;
  v8 = &xmmword_140C54798;
  v0 = 2;
  v9 = 32;
  v11 = &xmmword_140C548E0;
  v1 = 1;
  v10 = 16;
  v12 = 32;
  if ( ExIsSoftBoot() )
  {
    v13 = 5;
    v14 = &v5;
    v1 = 0;
    v0 = 3;
    v15 = 1;
  }
  sub_1402D66A8((ULONG_PTR)&qword_140C24600);
  xmmword_140C54798 = 0LL;
  BYTE8(xmmword_140C54798) = 1;
  xmmword_140C547A8 = 0LL;
  xmmword_140C548E0 = 0LL;
  unk_140C548F0 = 0LL;
  HIDWORD(xmmword_140C547A8) = MEMORY[0xFFFFF780000002C4];
  BYTE1(xmmword_140C548E0) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 1)) & 0xF3;
  BYTE11(xmmword_140C54798) = -64;
  dword_140C1F7EC = 3;
  *(_QWORD *)&xmmword_140C547A8 = MEMORY[0xFFFFF78000000014];
  v2 = RtlComputeCrc32(0, &xmmword_140C547A8, 8u);
  BYTE14(xmmword_140C54798) &= ~0x10u;
  DWORD2(xmmword_140C547A8) = v2;
  sub_1407EDB2C(32, (__int64)&v7, v0, 0LL);
  sub_1402935D0((ULONG_PTR)&qword_140C24600);
  LOBYTE(v3) = v1;
  sub_14082876C(0LL, v3);
  result = sub_1402D6B0C((__int64)&unk_140D00B68, 0xF68A0Du, 0, 0, (__int64)&qword_14000FFC8, 0);
  dword_140C1F820 = 0;
  return result;
}

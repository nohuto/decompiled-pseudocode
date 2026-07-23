/*
 * XREFs of sub_140A81E94 @ 0x140A81E94
 * Callers:
 *     sub_140A9391C @ 0x140A9391C (sub_140A9391C.c)
 *     sub_140A93A60 @ 0x140A93A60 (sub_140A93A60.c)
 *     sub_140A9A8F8 @ 0x140A9A8F8 (sub_140A9A8F8.c)
 *     sub_140A9ACE0 @ 0x140A9ACE0 (sub_140A9ACE0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     RtlUpcaseUnicodeChar @ 0x1407CD620 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall sub_140A81E94(unsigned __int16 *a1, char a2)
{
  unsigned int v2; // edi
  unsigned int v4; // r14d
  __int64 v5; // r13
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  unsigned int v8; // r8d
  int v9; // r10d
  _BYTE *v10; // r11
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  __int64 result; // rax
  const char *v18; // rcx
  const char *v19; // rcx
  __int64 *v20; // rbx
  __int128 v22; // [rsp+40h] [rbp-51h] BYREF
  _DWORD v23[6]; // [rsp+50h] [rbp-41h] BYREF
  _WORD v24[40]; // [rsp+68h] [rbp-29h] BYREF

  v2 = 0;
  v23[0] = 0;
  v23[1] = dword_140C29FC0;
  v4 = 0;
  v5 = *((_QWORD *)a1 + 1);
  v6 = *a1 >> 1;
  v7 = v6;
  v23[0] = NtBuildNumber;
  v22 = 0LL;
  v23[2] = 0;
  v23[3] = 123456789 * NtBuildNumber * (dword_140C29FC0 + 1);
  if ( v6 < 0x10 )
    v7 = 16;
  do
  {
    *((_BYTE *)v23 + (v4 & 0xF)) ^= RtlUpcaseUnicodeChar(*(_WORD *)(v5 + 2LL * (v4 % v6)));
    ++v4;
  }
  while ( v4 < v7 );
  v8 = 0;
  while ( 1 )
  {
    v9 = 1;
    v10 = v23;
    LODWORD(v11) = 0;
    v12 = 16LL;
    do
    {
      v13 = (unsigned __int8)*v10 + ((_DWORD)v11 << 8);
      v14 = v13 / 0x3E;
      *v10 = v13 / 0x3E;
      v11 = v13 % 0x3E;
      v15 = 0;
      if ( !(_BYTE)v14 )
        v15 = v9;
      ++v10;
      v9 = v15;
      --v12;
    }
    while ( v12 );
    v16 = v8;
    result = aAbcdefghijklmn[v11];
    ++v8;
    v24[v16] = result;
    if ( v8 >= 0x21 )
      break;
    if ( v9 )
    {
      if ( 2 * (unsigned __int64)v8 >= 0x42 )
        sub_140502A3C();
      v24[v8] = 0;
      *((_QWORD *)&v22 + 1) = v24;
      WORD1(v22) = 2 * v8;
      LOWORD(v22) = 2 * v8;
      if ( (qword_140D01450 & 0x100000) != 0 )
      {
        v19 = "Driver Verifier: Applied for %wZ";
        if ( a2 )
          v19 = "Driver Verifier: Removed for %wZ";
        sub_1405FDF9C(v19, a1);
        v20 = &qword_140D01450;
        do
        {
          sub_1405FDF9C(", %d:0x%x", v2++, *(_DWORD *)v20);
          v20 = (__int64 *)((char *)v20 + 4);
        }
        while ( v2 < 2 );
        return sub_1405FDF9C(", build %ld, key %wZ\n", NtBuildNumber & 0xFFFFFFF, &v22);
      }
      else
      {
        v18 = "Driver Verifier: Applied for %wZ, flags 0x%x, build %ld, key %wZ\n";
        if ( a2 )
          v18 = "Driver Verifier: Removed for %wZ, flags 0x%x, build %ld, key %wZ\n";
        return sub_1405FDF9C(v18, a1, (unsigned int)dword_140C29FC0, NtBuildNumber & 0xFFFFFFF, &v22);
      }
    }
  }
  return result;
}

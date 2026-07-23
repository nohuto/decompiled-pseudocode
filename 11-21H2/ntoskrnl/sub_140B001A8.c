/*
 * XREFs of sub_140B001A8 @ 0x140B001A8
 * Callers:
 *     sub_140B01388 @ 0x140B01388 (sub_140B01388.c)
 * Callees:
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcstoul @ 0x1403E3880 (wcstoul.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     sub_14075CB14 @ 0x14075CB14 (sub_14075CB14.c)
 *     sub_140826B04 @ 0x140826B04 (sub_140826B04.c)
 *     sub_140826BE0 @ 0x140826BE0 (sub_140826BE0.c)
 *     sub_140826C10 @ 0x140826C10 (sub_140826C10.c)
 */

__int64 sub_140B001A8()
{
  int v0; // edi
  int v1; // eax
  HANDLE v2; // rbx
  int v3; // r14d
  __int64 v4; // rax
  _WORD *v5; // rcx
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  wchar_t v13[3]; // [rsp+40h] [rbp-20h] BYREF
  wchar_t v14[3]; // [rsp+46h] [rbp-1Ah] BYREF
  wchar_t Str[6]; // [rsp+4Ch] [rbp-14h] BYREF

  v12 = 0LL;
  KeyHandle = 0LL;
  xmmword_140C5AB70 = 0LL;
  qword_140C5ABA0 = 0LL;
  v0 = -1;
  xmmword_140C5AB80 = 0LL;
  xmmword_140C5AB90 = 0LL;
  v1 = sub_14075CB14(L"\\Registry\\Machine\\Hardware\\Description\\System", 0LL, &KeyHandle);
  v2 = KeyHandle;
  v3 = v1;
  if ( v1 >= 0 )
  {
    v3 = sub_140826C10(KeyHandle, L"SystemBiosDate", 1, v13, 0x16uLL, &v12);
    if ( v3 >= 0 )
    {
      Str[4] = 0;
      qword_140C2A440[((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F] = 655816LL;
      if ( (dword_140D04880 & 1) != 0 )
        sub_14057D738(0LL, "KSE: BiosDate name [%ws] .\n", v13);
      sub_1403C09C8(0);
      v3 = sub_140826BE0(KeyHandle, L"SystemBiosVersion", (__int64)&unk_140C5A930, 520LL, (__int64)&v12);
      word_140C5AB36 = 0;
      v4 = 0LL;
      v5 = &unk_140C5A930;
      while ( *v5 != 32 )
      {
        v4 = (unsigned int)(v4 + 1);
        ++v5;
        if ( (unsigned int)v4 >= 0x104 )
          goto LABEL_11;
      }
      v6 = 2 * v4;
      if ( v6 >= 0x208 )
        sub_140502A3C();
      *(_WORD *)((char *)&unk_140C5A930 + v6) = 0;
LABEL_11:
      qword_140C2A440[((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F] = 655840LL;
      if ( (dword_140D04880 & 1) != 0 )
        sub_14057D738(0LL, "KSE: BiosVendor name [%ws] .\n", &unk_140C5A930);
      sub_1403C09C8(0);
      v13[2] = 0;
      v14[2] = 0;
      v7 = wcstoul(Str, 0LL, 16);
      v8 = wcstoul(v13, 0LL, 16) << 8;
      v9 = v8 + wcstoul(v14, 0LL, 16);
      v2 = KeyHandle;
      v0 = v9 + ((v7 + (v7 < 0x80 ? 0x2000 : 6400)) << 16);
    }
  }
  if ( v2 )
    sub_140826B04(v2);
  if ( v3 < 0 )
  {
    DWORD2(xmmword_140C5AB90) = -1;
    *(_QWORD *)&xmmword_140C5AB70 = 0LL;
  }
  else
  {
    *(_QWORD *)&xmmword_140C5AB70 = &unk_140C5A930;
    DWORD2(xmmword_140C5AB90) = v0;
  }
  return (unsigned int)v3;
}

/*
 * XREFs of sub_140B55C50 @ 0x140B55C50
 * Callers:
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_1403CABF8 @ 0x1403CABF8 (sub_1403CABF8.c)
 *     sub_1403CAE54 @ 0x1403CAE54 (sub_1403CAE54.c)
 *     sub_140AAE79C @ 0x140AAE79C (sub_140AAE79C.c)
 *     unknown_libname_5 @ 0x140AAE9C8 (unknown_libname_5.c)
 *     sub_140B55FC4 @ 0x140B55FC4 (sub_140B55FC4.c)
 *     sub_140B56094 @ 0x140B56094 (sub_140B56094.c)
 */

__int64 __fastcall sub_140B55C50(__int64 a1, int a2)
{
  int v3; // eax
  PCWSTR v4; // rbx
  const WCHAR *v5; // rax
  const WCHAR *v6; // rax
  const WCHAR *v7; // rax
  const WCHAR *v8; // rax
  const WCHAR *v9; // rax
  const WCHAR *v10; // rax
  const WCHAR *v11; // rax
  const WCHAR *v12; // rax
  const WCHAR *v13; // rax
  const WCHAR *v14; // rax
  const WCHAR *v15; // rax
  const WCHAR *v16; // rax
  const WCHAR *v17; // rax
  const WCHAR *v18; // rax
  int v19; // eax
  int v20; // edx
  int v21; // r8d
  _DWORD *v22; // rdi
  __int64 v23; // r14
  _DWORD *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v28; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-38h] BYREF
  int v30; // [rsp+50h] [rbp-30h]
  __int128 v31; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v32[2]; // [rsp+68h] [rbp-18h] BYREF
  __int128 v33; // [rsp+70h] [rbp-10h] BYREF
  PCWSTR v34; // [rsp+B0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+C0h] [rbp+40h] BYREF
  PCWSTR v36; // [rsp+C8h] [rbp+48h] BYREF

  v28 = 0LL;
  v34 = 0LL;
  v29 = 0LL;
  v30 = 0;
  v3 = *(_DWORD *)(a1 + 120);
  v31 = 0LL;
  v33 = 0LL;
  if ( (v3 & 0x400000) != 0 )
  {
    dword_140C0DF90 |= 0x400000u;
  }
  else
  {
    if ( (v3 & 0x2000000) != 0 )
      byte_140D04CB8 = 1;
    v4 = 0LL;
    SourceString = 0LL;
    v36 = 0LL;
    if ( a2 != -1 )
    {
      v5 = (const WCHAR *)sub_140B56094(3238035457LL);
      RtlInitUnicodeString(&stru_140C5A710, v5);
      v6 = (const WCHAR *)sub_140B56094(3238035464LL);
      RtlInitUnicodeString(&stru_140C5A730, v6);
      v7 = (const WCHAR *)sub_140B56094(1090551817LL);
      RtlInitUnicodeString(&stru_140C5A740, v7);
      v8 = (const WCHAR *)sub_140B56094(1090551824LL);
      RtlInitUnicodeString(&stru_140C5A750, v8);
      v9 = (const WCHAR *)sub_140B56094(1090551825LL);
      RtlInitUnicodeString(&stru_140C5A760, v9);
      v10 = (const WCHAR *)sub_140B56094(3238035459LL);
      RtlInitUnicodeString(&stru_140C5A720, v10);
      v11 = (const WCHAR *)sub_140B56094(1090551828LL);
      RtlInitUnicodeString(&stru_140C5A7B0, v11);
      v12 = (const WCHAR *)sub_140B56094(1090551829LL);
      RtlInitUnicodeString(&stru_140C5A7C0, v12);
      v13 = (const WCHAR *)sub_140B56094(1090551830LL);
      RtlInitUnicodeString(&stru_140C5A7D0, v13);
      v14 = (const WCHAR *)sub_140B56094(1090551832LL);
      RtlInitUnicodeString(&stru_140C5A7E0, v14);
      v15 = (const WCHAR *)sub_140B56094(1090551831LL);
      RtlInitUnicodeString(&stru_140C5A7F0, v15);
      v16 = (const WCHAR *)sub_140B56094(1090551833LL);
      RtlInitUnicodeString(&stru_140C5A800, v16);
      v17 = (const WCHAR *)sub_140B56094(1090551840LL);
      RtlInitUnicodeString(&stru_140C5A810, v17);
      v18 = (const WCHAR *)sub_140B56094(1090551841LL);
      RtlInitUnicodeString(&stru_140C5A820, v18);
      if ( (int)sub_1403CABF8(3238035474LL, &SourceString, &v34) >= 0 )
      {
        RtlInitUnicodeString(&stru_140C5A770, SourceString);
        RtlInitUnicodeString(&stru_140C5A780, v34);
        v19 = sub_1403CABF8(3238035475LL, &v36, &v34);
        v4 = v36;
        if ( v19 >= 0 )
        {
          RtlInitUnicodeString(&stru_140C5A790, v36);
          RtlInitUnicodeString(&stru_140C5A7A0, v34);
          if ( *(_WORD *)sub_140B56094(1090551814LL) == 48 )
            dword_140C0DF90 |= 0x20000u;
          if ( (*(_DWORD *)(a1 + 120) & 0x10000000) != 0 )
          {
            v32[0] = -14389468;
          }
          else
          {
            sub_1402D6B0C((__int64)&unk_140D010B0, 0x1EAADCBu, 0, 0, (__int64)&qword_14000EFB0, 1);
            v32[0] = -16761454;
          }
          v32[1] = -1;
          v22 = dword_140C0B2E0;
LABEL_12:
          v23 = 0LL;
          v24 = v22;
          while ( (int)sub_140B55FC4(*v24, v20, v21, (unsigned int)&v28, (__int64)&v33 + 8, (__int64)&v33) >= 0 )
          {
            ++v23;
            *v24++ = DWORD2(v33);
            if ( v23 >= 4 )
            {
              v22 += 18;
              if ( (__int64)v22 < (__int64)&qword_140C0B448 )
                goto LABEL_12;
              HIDWORD(v33) = 0;
              if ( (int)sub_1403CAE54((__int64)v32, &v31) >= 0 )
              {
                v25 = v31;
                v26 = sub_1403AA2B8(v31);
                if ( v26 )
                {
                  qword_140C0DED0 = 0LL;
                  qword_140C0DEC0 = v26;
                  v29 = __PAIR64__(HIDWORD(v28), DWORD2(v31));
                  qword_140C0DEC8 = v25;
                  qword_140C5A830 = sub_140AAE79C((__int64)v32, (int *)&v29, 3);
                  if ( qword_140C5A830 )
                  {
                    dword_140C0DF90 |= 0x10u;
                    return 0LL;
                  }
                }
              }
              break;
            }
          }
        }
      }
      if ( SourceString )
        sub_1403A8CB4((__int64)SourceString);
      if ( v4 )
        sub_1403A8CB4((__int64)v4);
      if ( qword_140C5A830 )
        unknown_libname_5(qword_140C5A830);
    }
  }
  return 0LL;
}

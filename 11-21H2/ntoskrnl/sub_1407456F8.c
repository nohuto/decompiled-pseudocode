/*
 * XREFs of sub_1407456F8 @ 0x1407456F8
 * Callers:
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 * Callees:
 *     sub_1402D0E78 @ 0x1402D0E78 (sub_1402D0E78.c)
 *     sub_1402D0E98 @ 0x1402D0E98 (sub_1402D0E98.c)
 *     sub_1402DEAB0 @ 0x1402DEAB0 (sub_1402DEAB0.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 */

void __fastcall sub_1407456F8(__int64 a1)
{
  __int64 v2; // rdx
  wchar_t *Buffer; // rdx
  char v4; // r11
  wchar_t *v5; // rdx
  int v6; // edx
  int *v7; // rax
  const wchar_t *v8; // rdx
  const wchar_t *v9; // r8
  const wchar_t *v10; // r9
  char v11; // r10
  unsigned __int16 Length; // cx
  unsigned int v13; // r9d
  __int64 v14; // r8
  unsigned __int16 v15; // cx
  unsigned int v16; // r9d
  __int64 v17; // r8
  int *v18; // rax
  const wchar_t *v19; // rdx
  __int64 v20; // rcx
  const wchar_t *v21; // r8
  const wchar_t *v22; // r9
  char v23; // r10
  int *v24; // rax
  const wchar_t *v25; // rdx
  const wchar_t *v26; // r8
  const wchar_t *v27; // r9
  char v28; // r10
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v30; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v32; // [rsp+90h] [rbp-70h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v34[26]; // [rsp+B0h] [rbp-50h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v32.Length = 0LL;
  v32.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v30.Length = 0LL;
  v30.Buffer = 0LL;
  v33 = 0LL;
  if ( (byte_140C0DD4A & 0x18) == 0x18 )
  {
    memset(v34, 0, 0xC8uLL);
    HIDWORD(v34[8]) = 6;
    LODWORD(v34[6]) = 18;
    v34[0] = &stru_140010A18;
    LODWORD(v34[11]) = 18;
    v34[2] = &v33;
    HIDWORD(v34[13]) = 6;
    v34[5] = byte_14000FCE8;
    HIDWORD(v34[18]) = 6;
    v34[7] = &UnicodeString;
    v34[10] = qword_14000FCD0;
    v34[12] = &v32;
    v34[15] = qword_14000FCA0;
    v34[17] = &DestinationString;
    v34[20] = qword_14000FCB8;
    v34[22] = &v30;
    HIDWORD(v34[23]) = 6;
    v2 = *(_QWORD *)(a1 + 48);
    LODWORD(v34[1]) = 13;
    LODWORD(v34[3]) = 16;
    LODWORD(v34[16]) = 8210;
    LODWORD(v34[21]) = 8210;
    if ( (int)sub_140746CCC(8210, v2, 1, 0, (__int64)v34, 5) >= 0 )
    {
      if ( SLODWORD(v34[4]) < 0 )
        v33 = 0LL;
      if ( SLODWORD(v34[9]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v34[14]) < 0 )
        RtlInitUnicodeString(&v32, 0LL);
      if ( SLODWORD(v34[19]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v34[24]) < 0 )
        RtlInitUnicodeString(&v30, 0LL);
      Buffer = DestinationString.Buffer;
      v4 = 32;
      if ( DestinationString.Buffer )
      {
        Length = DestinationString.Length;
        if ( DestinationString.Length > 4u )
        {
          v13 = 0;
          if ( (unsigned __int64)DestinationString.Length >> 1 != 2 )
          {
            v14 = 0LL;
            do
            {
              if ( !Buffer[v14] )
              {
                Buffer[v14] = 32;
                Buffer = DestinationString.Buffer;
                Length = DestinationString.Length;
              }
              v14 = ++v13;
            }
            while ( v13 < ((unsigned __int64)Length >> 1) - 2 );
          }
          DestinationString.Length = Length - 2;
        }
      }
      v5 = v30.Buffer;
      if ( v30.Buffer )
      {
        v15 = v30.Length;
        if ( v30.Length > 4u )
        {
          v16 = 0;
          if ( (unsigned __int64)v30.Length >> 1 != 2 )
          {
            v17 = 0LL;
            do
            {
              if ( !v5[v17] )
              {
                v5[v17] = 32;
                v5 = v30.Buffer;
                v15 = v30.Length;
              }
              v17 = ++v16;
            }
            while ( v16 < ((unsigned __int64)v15 >> 1) - 2 );
          }
          v30.Length = v15 - 2;
        }
      }
      v6 = *(_DWORD *)(a1 + 396);
      if ( (v6 & 0x6000) != 0 || (sub_1402DEAB0(a1), !sub_1402DEAB0(a1)) )
      {
        if ( (v6 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 )
        {
          if ( ((unsigned __int8)v4 & (unsigned __int8)byte_140C0DD4A) != 0 )
          {
            sub_1402D0E78((__int64)&v30);
            sub_1402D0E78((__int64)&DestinationString);
            v18 = sub_1402D0E78((__int64)&v32);
            sub_1402D0E98(
              v20,
              (__int64)qword_14003B520,
              (__int64)v21,
              *(const wchar_t **)(a1 + 48),
              v22,
              (__int64)&v33,
              (const wchar_t *)v18,
              v19,
              v21,
              14,
              v23);
          }
        }
        else if ( (byte_140C0DD4A & 0x10) != 0 )
        {
          sub_1402D0E78((__int64)&v30);
          sub_1402D0E78((__int64)&DestinationString);
          v24 = sub_1402D0E78((__int64)&v32);
          sub_1402D0E98(
            *(unsigned int *)(a1 + 404),
            (__int64)qword_14003B4D0,
            (__int64)v26,
            *(const wchar_t **)(a1 + 48),
            v27,
            (__int64)&v33,
            (const wchar_t *)v24,
            v25,
            v26,
            *(_DWORD *)(a1 + 404),
            v28);
        }
      }
      else if ( (byte_140C0DD4A & 8) != 0 )
      {
        sub_1402D0E78((__int64)&v30);
        sub_1402D0E78((__int64)&DestinationString);
        v7 = sub_1402D0E78((__int64)&v32);
        sub_1402D0E98(
          *(unsigned int *)(a1 + 404),
          (__int64)qword_14000FC78,
          (__int64)v9,
          *(const wchar_t **)(a1 + 48),
          v10,
          (__int64)&v33,
          (const wchar_t *)v7,
          v8,
          v9,
          *(_DWORD *)(a1 + 404),
          v11);
      }
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v32);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&v30);
}

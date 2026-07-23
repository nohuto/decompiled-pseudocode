/*
 * XREFs of sub_140746B5C @ 0x140746B5C
 * Callers:
 *     sub_140744E30 @ 0x140744E30 (sub_140744E30.c)
 * Callees:
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     sub_1402D1840 @ 0x1402D1840 (sub_1402D1840.c)
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     sub_14055F4A4 @ 0x14055F4A4 (sub_14055F4A4.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140776274 @ 0x140776274 (sub_140776274.c)
 */

__int64 __fastcall sub_140746B5C(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // r15
  int v3; // ebx
  __int64 v4; // rdi
  unsigned int v6; // ebx
  int v8; // ebx
  unsigned __int16 Length; // di
  char *v11; // r9
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // r10
  __int64 v16; // rcx
  char *v17; // r11
  unsigned __int64 v18; // r14
  __int64 v19; // [rsp+20h] [rbp-60h]
  __int64 v20; // [rsp+28h] [rbp-58h]
  __int64 v21; // [rsp+30h] [rbp-50h]
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-30h] BYREF
  __int128 v23; // [rsp+60h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+70h] [rbp-10h] BYREF
  char *v25; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v26; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+58h] BYREF

  v2 = a1 + 40;
  v3 = *(unsigned __int16 *)(a1 + 40);
  v4 = a1 + 72;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v6 = *(unsigned __int16 *)(a1 + 72) + v3 + 4;
  UnicodeString.Buffer = 0LL;
  v23 = 0LL;
  TimeFields = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    v6 += *(unsigned __int16 *)(a1 + 88) + 2;
  if ( !(unsigned __int8)sub_140776274((void *)(a1 + 188)) )
    v6 += 72;
  if ( (unsigned __int64)v6 + 2 > 0xFFFE )
  {
    v8 = -1073741562;
    goto LABEL_13;
  }
  UnicodeString.Length = v6;
  UnicodeString.MaximumLength = v6 + 2;
  UnicodeString.Buffer = (wchar_t *)sub_1406BE560((unsigned __int16)(v6 + 2));
  if ( !UnicodeString.Buffer )
  {
    v8 = -1073741670;
    goto LABEL_13;
  }
  v8 = sub_1402D1840((__int64)&UnicodeString, (__int64)&v23, 2048, L"%wZ:%wZ", v2, v4);
  if ( v8 >= 0 )
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      v8 = sub_1402D1840((__int64)&v23, (__int64)&v23, 2048, L",%wZ", a1 + 88);
      if ( v8 < 0 )
        goto LABEL_13;
      Length = *(_WORD *)(a1 + 88) + 2 + UnicodeString.Length;
      UnicodeString.Length = Length;
    }
    else
    {
      Length = UnicodeString.Length;
    }
    if ( (unsigned __int8)sub_140776274((void *)(a1 + 188)) )
    {
LABEL_12:
      *a2 = UnicodeString;
      UnicodeString = 0LL;
      goto LABEL_13;
    }
    if ( *(_QWORD *)(a1 + 96) )
    {
LABEL_41:
      RtlTimeToTimeFields((PLARGE_INTEGER)(a1 + 112), &TimeFields);
      LODWORD(v21) = *(unsigned __int16 *)(a1 + 124);
      LODWORD(v20) = (unsigned __int16)HIWORD(*(_DWORD *)(a1 + 124));
      LODWORD(v19) = TimeFields.Year;
      v8 = sub_1402D17BC(
             &v23,
             L",%02d/%02d/%04d,%u.%u.%u.%u",
             (unsigned int)TimeFields.Month,
             (unsigned int)TimeFields.Day,
             v19,
             v20,
             v21,
             *(unsigned __int16 *)(a1 + 122),
             *(unsigned __int16 *)(a1 + 120));
      if ( v8 < 0 )
        goto LABEL_13;
      UnicodeString.Length = v23 + Length;
      goto LABEL_12;
    }
    if ( (v23 & 1) != 0
      || (BYTE2(v23) & 1) != 0
      || (unsigned __int16)v23 > WORD1(v23)
      || WORD1(v23) == 0xFFFF
      || (v11 = (char *)*((_QWORD *)&v23 + 1)) == 0LL && (_DWORD)v23 )
    {
      v8 = -1073741811;
      goto LABEL_13;
    }
    v12 = (unsigned __int64)WORD1(v23) >> 1;
    v13 = 0LL;
    if ( v12 )
    {
      v14 = qword_140869E10;
      v15 = *((_QWORD *)&v23 + 1) - (_QWORD)qword_140869E10;
      v16 = 0x7FFFLL;
      v8 = 0;
      v17 = (char *)*((_QWORD *)&v23 + 1);
      v18 = (unsigned __int64)WORD1(v23) >> 1;
      while ( v16 )
      {
        if ( *(_WORD *)v14 )
        {
          *(_WORD *)((char *)v14 + v15) = *(_WORD *)v14;
          --v16;
          v14 = (__int64 *)((char *)v14 + 2);
          ++v13;
          if ( --v12 )
            continue;
        }
        if ( !v12 && v16 && *(_WORD *)v14 )
          v8 = -2147483643;
        break;
      }
      v27 = v13;
      LOWORD(v12) = v18 - v13;
      v11 = &v17[2 * v13];
      v25 = v11;
      v26 = v18 - v13;
      if ( v8 < 0 )
      {
        sub_14055F4A4(v17, v18, v13, &v27, &v25, &v26, 2048);
        v11 = v25;
        LOWORD(v12) = v26;
        LOWORD(v13) = v27;
      }
    }
    else
    {
      v8 = *((_QWORD *)&v23 + 1) != 0LL ? -2147483643 : -1073741811;
    }
    LOWORD(v23) = 2 * v13;
    if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
    {
      LOWORD(v23) = 0;
      WORD1(v23) = 2 * v12;
      *((_QWORD *)&v23 + 1) = v11;
    }
    if ( v8 >= 0 )
    {
      Length += 2;
      UnicodeString.Length = Length;
      goto LABEL_41;
    }
  }
LABEL_13:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v8;
}

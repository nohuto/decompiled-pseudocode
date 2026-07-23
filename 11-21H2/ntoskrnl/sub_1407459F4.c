/*
 * XREFs of sub_1407459F4 @ 0x1407459F4
 * Callers:
 *     sub_1407459F4 @ 0x1407459F4 (sub_1407459F4.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 * Callees:
 *     sub_1402D0E78 @ 0x1402D0E78 (sub_1402D0E78.c)
 *     sub_1402D1040 @ 0x1402D1040 (sub_1402D1040.c)
 *     sub_1402D1840 @ 0x1402D1840 (sub_1402D1840.c)
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14055F4A4 @ 0x14055F4A4 (sub_14055F4A4.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_1407459F4 @ 0x1407459F4 (sub_1407459F4.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 *     sub_14074703C @ 0x14074703C (sub_14074703C.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

void __fastcall sub_1407459F4(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rdx
  wchar_t *Buffer; // r8
  int v12; // r12d
  __int64 **v13; // r15
  __int64 **v14; // rdx
  char v15; // si
  __int64 *v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rdx
  int *v19; // rax
  const wchar_t *v20; // rdx
  const wchar_t *v21; // r8
  const wchar_t *v22; // r9
  const wchar_t *v23; // r10
  const wchar_t *v24; // r11
  __int64 v25; // r13
  __int64 **v26; // r14
  __int64 **v27; // rax
  wchar_t *v28; // r15
  __int64 v29; // r10
  __int64 v30; // r11
  wchar_t *v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r11
  unsigned __int16 Length; // cx
  unsigned int v36; // r9d
  __int64 v37; // rdx
  int v38; // r8d
  __int64 *v39; // rcx
  __int64 v40; // rax
  unsigned __int16 v41; // ax
  wchar_t *v42; // rax
  UNICODE_STRING v43; // xmm0
  __int64 *v44; // rsi
  void *v45; // rcx
  __int64 v46; // r8
  unsigned __int64 v47; // rdx
  __int16 v48; // ax
  int v49; // ebx
  __int64 v50; // r8
  __int64 v51; // r11
  const WCHAR *v52; // rax
  unsigned __int64 v53; // r9
  __int64 v54; // r10
  char v55; // si
  __int64 *v56; // rbx
  __int64 v57; // r15
  __int64 v58; // rdx
  int *v59; // rax
  const wchar_t *v60; // rdx
  const wchar_t *v61; // r8
  const wchar_t *v62; // r9
  const wchar_t *v63; // r10
  const wchar_t *v64; // r11
  char v65; // si
  __int64 *v66; // rbx
  __int64 v67; // r15
  __int64 v68; // rdx
  int *v69; // rax
  const wchar_t *v70; // rdx
  const wchar_t *v71; // r8
  const wchar_t *v72; // r9
  const wchar_t *v73; // r10
  const wchar_t *v74; // r11
  char v75; // si
  __int64 *v76; // rbx
  __int64 v77; // r15
  __int64 v78; // rdx
  int *v79; // rax
  const wchar_t *v80; // rdx
  const wchar_t *v81; // r8
  const wchar_t *v82; // r9
  const wchar_t *v83; // r10
  const wchar_t *v84; // r11
  int v85; // ecx
  unsigned __int16 v86; // si
  wchar_t *v87; // rax
  __int64 *v88; // rsi
  unsigned int v89; // r15d
  __int64 v90; // r9
  __int64 v91; // r9
  __int64 v92; // rdx
  unsigned __int16 v93; // cx
  unsigned int v94; // r8d
  __int64 v95; // rdx
  UNICODE_STRING *v96; // r8
  UNICODE_STRING *v97; // rdx
  __int64 *v98; // rcx
  int v99; // ebx
  __int64 v100; // [rsp+20h] [rbp-F0h]
  __int64 v101; // [rsp+20h] [rbp-F0h]
  __int64 v102; // [rsp+28h] [rbp-E8h]
  __int64 v103; // [rsp+28h] [rbp-E8h]
  __int64 v104; // [rsp+30h] [rbp-E0h]
  BOOL v105; // [rsp+90h] [rbp-80h]
  _TIME_FIELDS TimeFields; // [rsp+A0h] [rbp-70h] BYREF
  int v107; // [rsp+B0h] [rbp-60h]
  UNICODE_STRING UnicodeString; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v109; // [rsp+C8h] [rbp-48h]
  UNICODE_STRING v110; // [rsp+D0h] [rbp-40h] BYREF
  UNICODE_STRING v111; // [rsp+E0h] [rbp-30h] BYREF
  UNICODE_STRING v112; // [rsp+F0h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp-10h] BYREF
  int v114; // [rsp+110h] [rbp+0h]
  int v115; // [rsp+114h] [rbp+4h]
  __int64 v116; // [rsp+118h] [rbp+8h]
  UNICODE_STRING v117; // [rsp+120h] [rbp+10h] BYREF
  UNICODE_STRING v118; // [rsp+130h] [rbp+20h] BYREF
  __int64 v119; // [rsp+140h] [rbp+30h] BYREF
  __int64 v120; // [rsp+148h] [rbp+38h] BYREF
  __int64 v121; // [rsp+150h] [rbp+40h]
  __int64 v122; // [rsp+158h] [rbp+48h]
  __int64 v123; // [rsp+160h] [rbp+50h]
  UNICODE_STRING v124; // [rsp+168h] [rbp+58h] BYREF
  UNICODE_STRING v125; // [rsp+178h] [rbp+68h] BYREF
  __int64 v126; // [rsp+188h] [rbp+78h] BYREF
  __int128 v127; // [rsp+190h] [rbp+80h] BYREF
  _QWORD v128[20]; // [rsp+1A0h] [rbp+90h] BYREF
  wchar_t v129[12]; // [rsp+240h] [rbp+130h] BYREF
  wchar_t v130[24]; // [rsp+258h] [rbp+148h] BYREF

  v7 = 0LL;
  v123 = a7;
  v107 = a4;
  v121 = a3;
  v109 = a2;
  v8 = a3;
  v116 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v118.Length = 0LL;
  v118.Buffer = 0LL;
  v105 = 1;
  v122 = 0LL;
  *(_QWORD *)&v112.Length = 0LL;
  v112.Buffer = 0LL;
  *(_QWORD *)&v117.Length = 0LL;
  v117.Buffer = 0LL;
  v115 = 0;
  *(_QWORD *)&v110.Length = 0LL;
  v110.Buffer = 0LL;
  TimeFields = 0LL;
  v124 = 0LL;
  v127 = 0LL;
  v111 = 0LL;
  v125 = 0LL;
  if ( (byte_140C0DD4A & 0x18) != 0x18 )
    goto LABEL_39;
  if ( a3 )
  {
    memset(v128, 0, sizeof(v128));
    v9 = *(_QWORD *)(v8 + 16);
    v10 = *(_QWORD *)(v8 + 64);
    v128[0] = &qword_14000FD30;
    v128[2] = &DestinationString;
    v128[5] = qword_14000FD18;
    v128[7] = &UnicodeString;
    v128[10] = qword_14000FD00;
    v128[12] = &v118;
    LODWORD(v128[1]) = 18;
    HIDWORD(v128[3]) = 6;
    LODWORD(v128[6]) = 8210;
    HIDWORD(v128[8]) = 6;
    LODWORD(v128[11]) = 18;
    HIDWORD(v128[13]) = 6;
    if ( (int)sub_140746CCC(18, v10, 8, v9, (__int64)v128, 3) < 0 )
      goto LABEL_39;
    if ( SLODWORD(v128[4]) < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( SLODWORD(v128[9]) < 0 )
      RtlInitUnicodeString(&UnicodeString, 0LL);
    Buffer = UnicodeString.Buffer;
    if ( UnicodeString.Buffer && (Length = UnicodeString.Length, UnicodeString.Length > 4u) )
    {
      v36 = 0;
      if ( (unsigned __int64)UnicodeString.Length >> 1 != 2 )
      {
        v37 = 0LL;
        do
        {
          if ( !Buffer[v37] )
          {
            Buffer[v37] = 59;
            Buffer = UnicodeString.Buffer;
            Length = UnicodeString.Length;
          }
          v37 = ++v36;
        }
        while ( v36 < ((unsigned __int64)Length >> 1) - 2 );
      }
      UnicodeString.Length = Length - 2;
    }
    else
    {
      RtlFreeUnicodeString(&UnicodeString);
      RtlInitUnicodeString(&UnicodeString, 0LL);
    }
    if ( SLODWORD(v128[14]) < 0 )
      RtlInitUnicodeString(&v118, 0LL);
    if ( DestinationString.Buffer )
      v105 = RtlEqualUnicodeString((PCUNICODE_STRING)(v8 + 40), &DestinationString, 1u) != 0;
    RtlTimeToTimeFields((PLARGE_INTEGER)(v8 + 112), &TimeFields);
    LODWORD(v102) = TimeFields.Year;
    LODWORD(v100) = TimeFields.Day;
    if ( (int)sub_1402E0198(v129, 11LL, L"%02d/%02d/%04d", (unsigned int)TimeFields.Month, v100, v102) < 0 )
      v129[0] = 0;
    LODWORD(v103) = *(unsigned __int16 *)(v8 + 122);
    LODWORD(v101) = *(unsigned __int16 *)(v8 + 124);
    if ( (int)sub_1402E0198(
                v130,
                24LL,
                L"%u.%u.%u.%u",
                (unsigned __int16)HIWORD(*(_DWORD *)(v8 + 124)),
                v101,
                v103,
                *(unsigned __int16 *)(v8 + 120)) < 0 )
      v130[0] = 0;
    v12 = *(_DWORD *)(v8 + 108);
    v13 = (__int64 **)(v8 + 224);
    v14 = *(__int64 ***)(v8 + 224);
    if ( v12 == -1 )
      v12 = 0;
    v114 = v12;
    if ( v14 != v13 )
    {
      v38 = 0;
      do
      {
        v39 = v14[22];
        v38 += *((unsigned __int16 *)v14 + 20) + *((unsigned __int16 *)v14 + 36) + 22;
        if ( v39 )
        {
          v40 = -1LL;
          do
            ++v40;
          while ( *((_WORD *)v39 + v40) );
          v38 += 2 * v40 + 2;
        }
        v14 = (__int64 **)*v14;
      }
      while ( v14 != v13 );
      v41 = v38 + 2;
      if ( (unsigned int)(v38 + 2) > 0xFFFE )
        v41 = -2;
      v112.MaximumLength = v41;
      v42 = (wchar_t *)sub_1406BE560(v41);
      v112.Buffer = v42;
      if ( !v42 )
        goto LABEL_39;
      v43 = v112;
      *v42 = 0;
      v44 = *v13;
      TimeFields = (_TIME_FIELDS)v43;
      if ( v44 != (__int64 *)v13 )
      {
        do
        {
          if ( v44 != *v13 )
          {
            if ( (TimeFields.Year & 1) != 0 )
              break;
            if ( (TimeFields.Month & 1) != 0 )
              break;
            if ( TimeFields.Year > (unsigned int)TimeFields.Month )
              break;
            if ( TimeFields.Month == -1 )
              break;
            v45 = *(void **)&TimeFields.Minute;
            if ( !*(_QWORD *)&TimeFields.Minute && (TimeFields.Year || TimeFields.Month) )
              break;
            v46 = *(_QWORD *)&TimeFields.Minute;
            v47 = (unsigned __int64)(unsigned __int16)TimeFields.Month >> 1;
            v48 = v47;
            if ( v47 )
            {
              v50 = 0x7FFFLL;
              v51 = *(_QWORD *)&TimeFields.Minute - (_QWORD)L" ";
              v52 = L" ";
              v53 = (unsigned __int64)(unsigned __int16)TimeFields.Month >> 1;
              v49 = 0;
              v54 = 0LL;
              while ( v50 )
              {
                if ( !*v52 )
                {
                  v7 = 0LL;
LABEL_85:
                  if ( !v53 && v50 && *v52 )
                    v49 = -2147483643;
                  break;
                }
                *(const WCHAR *)((char *)v52 + v51) = *v52;
                --v50;
                ++v52;
                v7 = 0LL;
                ++v54;
                if ( !--v53 )
                  goto LABEL_85;
              }
              v46 = (__int64)v45 + 2 * v54;
              v48 = v47 - v54;
              v119 = v46;
              v120 = v47 - v54;
              if ( v49 < 0 )
              {
                sub_14055F4A4(v45, v47, v46, &v126, &v119, &v120, 2048);
                v46 = v119;
                v48 = v120;
              }
            }
            else
            {
              if ( !*(_QWORD *)&TimeFields.Minute )
                break;
              v49 = -2147483643;
            }
            TimeFields.Year = 0;
            TimeFields.Month = 2 * v48;
            *(_QWORD *)&TimeFields.Minute = v46;
            if ( v49 < 0 )
              break;
          }
          LODWORD(v104) = *((_DWORD *)v44 + 27);
          if ( (int)sub_1402D1840(
                      (__int64)&TimeFields,
                      (__int64)&TimeFields,
                      2048,
                      L"%wZ:%wZ:%08X",
                      v44 + 5,
                      v44 + 9,
                      v104) < 0
            || v44[22] && (int)sub_1402D1840((__int64)&TimeFields, (__int64)&TimeFields, 2048, L":%ws", v44[22]) < 0 )
          {
            break;
          }
          v44 = (__int64 *)*v44;
        }
        while ( v44 != (__int64 *)v13 );
        v8 = v121;
        LOBYTE(v12) = v114;
      }
    }
    LOBYTE(a4) = v107;
    a1 = v116;
  }
  else
  {
    v129[0] = 0;
    LOBYTE(v12) = 0;
    v130[0] = 0;
    v105 = 0;
  }
  if ( a5 < 0 )
  {
    if ( a5 == -1073740959 )
    {
      if ( (byte_140C0DD4A & 0x20) != 0 )
      {
        v65 = a4 & 1;
        if ( v8 && *(_DWORD *)(v8 + 108) != -1 || v8 )
        {
          v66 = (__int64 *)(v8 + 240);
          v7 = v8 + 272;
          v67 = v8 + 88;
        }
        else
        {
          v67 = 0LL;
          v66 = qword_140A37EC8;
        }
        sub_1402D0E78(*(_QWORD *)(a1 + 16) + 40LL);
        sub_1402D0E78((__int64)&v112);
        sub_1402D0E78(v68);
        sub_1402D0E78(v67);
        v69 = sub_1402D0E78(v7);
        sub_1402D1040(
          v105,
          (__int64)qword_14003B120,
          (__int64)v71,
          *(const wchar_t **)(v109 + 8),
          v74,
          (__int64)v66,
          v129,
          v130,
          (const wchar_t *)v69,
          v105,
          v70,
          v12,
          v71,
          v73,
          v65,
          97,
          v72);
      }
    }
    else if ( (byte_140C0DD4A & 0x10) != 0 )
    {
      v75 = a4 & 1;
      if ( v8 && *(_DWORD *)(v8 + 108) != -1 || v8 )
      {
        v76 = (__int64 *)(v8 + 240);
        v7 = v8 + 272;
        v77 = v8 + 88;
      }
      else
      {
        v77 = 0LL;
        v76 = qword_140A37EC8;
      }
      sub_1402D0E78(*(_QWORD *)(a1 + 16) + 40LL);
      sub_1402D0E78((__int64)&v112);
      sub_1402D0E78(v78);
      sub_1402D0E78(v77);
      v79 = sub_1402D0E78(v7);
      sub_1402D1040(
        v105,
        (__int64)qword_14003B510,
        (__int64)v81,
        *(const wchar_t **)(v109 + 8),
        v84,
        (__int64)v76,
        v129,
        v130,
        (const wchar_t *)v79,
        v105,
        v80,
        v12,
        v81,
        v83,
        v75,
        a5,
        v82);
    }
  }
  else if ( (a4 & 0x70) != 0 )
  {
    if ( (byte_140C0DD4A & 0x20) != 0 )
    {
      v55 = a4 & 1;
      if ( v8 && *(_DWORD *)(v8 + 108) != -1 || v8 )
      {
        v56 = (__int64 *)(v8 + 240);
        v7 = v8 + 272;
        v57 = v8 + 88;
      }
      else
      {
        v57 = 0LL;
        v56 = qword_140A37EC8;
      }
      sub_1402D0E78(*(_QWORD *)(a1 + 16) + 40LL);
      sub_1402D0E78((__int64)&v112);
      sub_1402D0E78(v58);
      sub_1402D0E78(v57);
      v59 = sub_1402D0E78(v7);
      sub_1402D1040(
        v105,
        (__int64)qword_14003B400,
        (__int64)v61,
        *(const wchar_t **)(v109 + 8),
        v64,
        (__int64)v56,
        v129,
        v130,
        (const wchar_t *)v59,
        v105,
        v60,
        v12,
        v61,
        v63,
        v55,
        a5,
        v62);
    }
  }
  else if ( (byte_140C0DD4A & 8) != 0 )
  {
    v15 = a4 & 1;
    if ( v8 && *(_DWORD *)(v8 + 108) != -1 || v8 )
    {
      v16 = (__int64 *)(v8 + 240);
      v7 = v8 + 272;
      v17 = v8 + 88;
    }
    else
    {
      v17 = 0LL;
      v16 = qword_140A37EC8;
    }
    sub_1402D0E78(*(_QWORD *)(a1 + 16) + 40LL);
    sub_1402D0E78((__int64)&v112);
    sub_1402D0E78(v18);
    sub_1402D0E78(v17);
    v19 = sub_1402D0E78(v7);
    sub_1402D1040(
      v105,
      (__int64)&byte_14000FC68,
      (__int64)v21,
      *(const wchar_t **)(v109 + 8),
      v24,
      (__int64)v16,
      v129,
      v130,
      (const wchar_t *)v19,
      v105,
      v20,
      v12,
      v21,
      v23,
      v15,
      a5,
      v22);
  }
  if ( v8 )
  {
    v25 = a6;
    v26 = (__int64 **)(v8 + 208);
    v27 = *(__int64 ***)(v8 + 208);
    if ( v27 != (__int64 **)(v8 + 208) )
    {
      v85 = v115;
      do
      {
        v27 = (__int64 **)*v27;
        ++v85;
      }
      while ( v27 != v26 );
      if ( v85 )
      {
        v86 = 0x7FFF;
        if ( (unsigned int)(1646 * v85 + 2) <= 0x7FFF )
        {
          v86 = 1646 * v85 + 2;
          v110.MaximumLength = v86;
        }
        else
        {
          v110.MaximumLength = 0x7FFF;
        }
        v110.Length = 0;
        v87 = (wchar_t *)sub_1406BE560(v86);
        v110.Buffer = v87;
        v28 = v87;
        if ( !v87 )
          goto LABEL_39;
        memset(v87, 0, v86);
        v110.MaximumLength = v86 - 2;
        v88 = *v26;
        TimeFields = (_TIME_FIELDS)v110;
        if ( v88 == (__int64 *)v26 )
          goto LABEL_32;
        v89 = v107 & 1;
        do
        {
          v90 = v89 | 0x10;
          if ( !*((_DWORD *)v88 + 97) )
            v90 = v89;
          sub_1407459F4(v116, v109, v88, v90, a5, v25, v123);
          memset(v128, 0, sizeof(v128));
          v91 = v88[2];
          v128[0] = &qword_14000FD30;
          LODWORD(v128[1]) = 18;
          v128[2] = &v124;
          v128[5] = qword_14000FD60;
          v128[7] = &v127;
          LODWORD(v128[16]) = 18;
          v128[10] = qword_14000FD18;
          HIDWORD(v128[3]) = 6;
          v128[12] = &v111;
          v128[15] = qword_14000FD00;
          v128[17] = &v125;
          v92 = v88[8];
          LODWORD(v128[6]) = 13;
          LODWORD(v128[8]) = 16;
          LODWORD(v128[11]) = 8210;
          HIDWORD(v128[13]) = 6;
          HIDWORD(v128[18]) = 6;
          if ( (int)sub_140746CCC(6, v92, 8, v91, (__int64)v128, 4) >= 0 )
          {
            if ( SLODWORD(v128[4]) < 0 && !RtlCreateUnicodeString(&v124, (PCWSTR)v88[6]) )
              RtlInitUnicodeString(&v124, 0LL);
            if ( SLODWORD(v128[9]) < 0 || (int)sub_1407454A8((unsigned int *)&v127, (__int64)&v117, 1) < 0 )
              RtlInitUnicodeString(&v117, 0LL);
            if ( SLODWORD(v128[14]) < 0 )
              RtlInitUnicodeString(&v111, 0LL);
            if ( v111.Buffer && (v93 = v111.Length, v111.Length > 4u) )
            {
              v94 = 0;
              if ( (unsigned __int64)v111.Length >> 1 != 2 )
              {
                v95 = 0LL;
                do
                {
                  if ( !v111.Buffer[v95] )
                  {
                    v111.Buffer[v95] = 59;
                    v93 = v111.Length;
                  }
                  v95 = ++v94;
                }
                while ( v94 < ((unsigned __int64)v93 >> 1) - 2 );
                v25 = a6;
              }
              v111.Length = v93 - 2;
            }
            else
            {
              RtlFreeUnicodeString(&v111);
              RtlInitUnicodeString(&v111, 0LL);
            }
            if ( SLODWORD(v128[19]) < 0 )
              RtlInitUnicodeString(&v125, 0LL);
            v96 = &v125;
            if ( !v125.Buffer )
              v96 = (UNICODE_STRING *)&qword_140A37C28;
            v97 = &v111;
            v98 = qword_140869E10;
            if ( !v111.Buffer )
              v97 = (UNICODE_STRING *)&qword_140A37C28;
            if ( v88 == *v26 )
              v98 = (__int64 *)&word_140867F00;
            v99 = sub_1402D1840(
                    (__int64)&TimeFields,
                    (__int64)&TimeFields,
                    2048,
                    L"%ws%wZ:%wZ:%wZ:%wZ",
                    v98,
                    &v124,
                    &v117,
                    v97,
                    v96);
            RtlFreeUnicodeString(&v117);
            RtlFreeUnicodeString(&v111);
            RtlFreeUnicodeString(&v124);
            RtlFreeUnicodeString(&v125);
            if ( v99 < 0 )
              break;
          }
          v88 = (__int64 *)*v88;
        }
        while ( v88 != (__int64 *)v26 );
        v8 = v121;
      }
    }
    v28 = v110.Buffer;
LABEL_32:
    LODWORD(v29) = 0;
    if ( *(_QWORD *)(v109 + 32) )
      v29 = *(_QWORD *)(v109 + 32);
    if ( *(_QWORD *)(v109 + 48) && *(_WORD *)(v109 + 40) > 2u )
    {
      v30 = *(_QWORD *)(v109 + 48);
      v32 = -1LL;
      do
        ++v32;
      while ( *(_WORD *)(v30 + 2 * v32) );
      while ( *(_WORD *)(v30 + 2 * v32 + 2) )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( *(_WORD *)(v30 + 2 * v33) );
        v34 = v30 + 2 * v33;
        v32 = -1LL;
        v30 = v34 + 2;
        do
          ++v32;
        while ( *(_WORD *)(v30 + 2 * v32) );
      }
    }
    else
    {
      LODWORD(v30) = v122;
    }
    v31 = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      v31 = *(wchar_t **)(v8 + 48);
    sub_14074703C(
      v116 + 40,
      v29,
      v30,
      *(_QWORD *)(v8 + 264),
      (__int64)v31,
      *(_QWORD *)(v8 + 280),
      (__int64)v129,
      (__int64)v130,
      (__int64)v118.Buffer,
      (__int64)v28,
      v105,
      (__int64)&UnicodeString,
      byte_140C54E98 != 0,
      (v107 & 0x70) != 0,
      v25,
      a5,
      v123);
  }
LABEL_39:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&v112);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v110);
  RtlFreeUnicodeString(&v118);
}

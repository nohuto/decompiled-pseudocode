/*
 * XREFs of sub_140747740 @ 0x140747740
 * Callers:
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_1409477A4 @ 0x1409477A4 (sub_1409477A4.c)
 * Callees:
 *     sub_1402D1EB4 @ 0x1402D1EB4 (sub_1402D1EB4.c)
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E5528 @ 0x1406E5528 (sub_1406E5528.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407448BC @ 0x1407448BC (sub_1407448BC.c)
 *     sub_1407449E0 @ 0x1407449E0 (sub_1407449E0.c)
 *     sub_1407459F4 @ 0x1407459F4 (sub_1407459F4.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 *     sub_1407474E4 @ 0x1407474E4 (sub_1407474E4.c)
 *     sub_1407476FC @ 0x1407476FC (sub_1407476FC.c)
 *     sub_14074A08C @ 0x14074A08C (sub_14074A08C.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140767220 @ 0x140767220 (sub_140767220.c)
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     sub_14077139C @ 0x14077139C (sub_14077139C.c)
 *     sub_140778D60 @ 0x140778D60 (sub_140778D60.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140947274 @ 0x140947274 (sub_140947274.c)
 *     sub_14094C9C4 @ 0x14094C9C4 (sub_14094C9C4.c)
 *     sub_14094D7E8 @ 0x14094D7E8 (sub_14094D7E8.c)
 */

__int64 __fastcall sub_140747740(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // r12d
  unsigned __int16 *v6; // r15
  int v7; // edi
  char v8; // r13
  bool v9; // r14
  int v10; // esi
  char v11; // al
  __int64 v12; // rsi
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  char v28; // r14
  int v29; // eax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // [rsp+28h] [rbp-D8h]
  int v36; // [rsp+28h] [rbp-D8h]
  int v37; // [rsp+28h] [rbp-D8h]
  int v38; // [rsp+28h] [rbp-D8h]
  int v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+64h] [rbp-9Ch] BYREF
  int v41; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v48[10]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v49[18]; // [rsp+100h] [rbp+0h] BYREF
  char v50; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  int v54; // [rsp+1B8h] [rbp+B8h] BYREF

  v3 = 0;
  v6 = 0LL;
  memset(v48, 0, 0x48uLL);
  v41 = 1;
  v7 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v8 = 0;
  UnicodeString.Buffer = 0LL;
  v9 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  P = 0LL;
  v54 = 0;
  v42 = 0;
  v40 = 0;
  v44 = 0LL;
  v39 = 0;
  v46 = 0LL;
  v50 = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v10 = -1073741808;
    goto LABEL_50;
  }
  v6 = (unsigned __int16 *)(a1 + 40);
  sub_1402D2774(&stru_14000FE48, (unsigned __int16 *)(a1 + 40));
  v10 = sub_1407448BC(*(_QWORD *)(a1 + 48), a2, v48);
  if ( v10 >= 0 )
  {
    v11 = v48[0];
    if ( (a3 & 1) != 0 )
    {
      v11 = LOBYTE(v48[0]) | 1;
      LODWORD(v48[0]) |= 1u;
    }
    v12 = a2;
    if ( !a2 )
      v12 = v48[2];
    v52 = v12;
    if ( (v11 & 1) != 0 || byte_140C097C4 )
      goto LABEL_8;
    memset(v49, 0, 0x50uLL);
    HIDWORD(v49[3]) = 6;
    LODWORD(v49[1]) = 8210;
    v49[0] = qword_140038CB8;
    LODWORD(v49[6]) = 8210;
    v26 = *(_QWORD *)(a1 + 48);
    v49[2] = &UnicodeString;
    v49[5] = qword_1400388F0;
    v49[7] = &DestinationString;
    HIDWORD(v49[8]) = 6;
    v10 = sub_140746CCC(6LL, v26, 1, v12, (__int64)v49, 2u);
    if ( v10 >= 0 )
    {
      if ( SLODWORD(v49[4]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v49[9]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( UnicodeString.Buffer && !*UnicodeString.Buffer )
      {
        v9 = 1;
        v3 = -1073740656;
        goto LABEL_13;
      }
LABEL_8:
      v10 = sub_1407449E0((__int64)v48, UnicodeString.Buffer, &P);
      if ( v10 >= 0 )
      {
        if ( DestinationString.Buffer )
        {
          v10 = sub_14094D7E8(v48, P, 0LL);
          goto LABEL_13;
        }
        v13 = sub_1407702BC(a1, (unsigned int)v48, (_DWORD)P, (unsigned int)&v54, (__int64)&v42);
        v10 = v13;
        if ( v13 >= 0 )
        {
          v7 = v54;
          v8 = 1;
LABEL_12:
          v50 = 1;
          goto LABEL_13;
        }
        if ( v13 != -1073740653 && v13 != -1073740651 )
          goto LABEL_12;
      }
LABEL_13:
      if ( UnicodeString.Buffer && (P || v9) )
        sub_14077139C(
          qword_140D00AC0,
          (unsigned int)v48,
          *(_QWORD *)(a1 + 48),
          1,
          v52,
          v35,
          (__int64)qword_140038CB8,
          0,
          0LL,
          0,
          0);
      if ( DestinationString.Buffer )
      {
        v16 = v52;
LABEL_44:
        if ( v50 )
        {
          v23 = *(_QWORD *)(a1 + 48);
          v39 = 8;
          if ( (int)sub_14077DA5C(
                      qword_140D00AC0,
                      v23,
                      1,
                      v16,
                      0LL,
                      (__int64)qword_14000FE18,
                      (__int64)&v41,
                      (__int64)&v44,
                      8,
                      (__int64)&v39,
                      0) >= 0
            && v41 == 9
            && v39 == 8 )
          {
            v24 = v44;
          }
          else
          {
            v24 = 0LL;
            v44 = 0LL;
          }
          sub_1407459F4(a1, (__int64)v48, (__int64)P, v42, v10, v24, (__int64)&v46);
        }
        goto LABEL_48;
      }
      if ( !UnicodeString.Buffer )
      {
        if ( v9 )
          goto LABEL_92;
        if ( P )
        {
          if ( *((int *)P + 103) >= 0 )
            goto LABEL_19;
          v3 = *((_DWORD *)P + 103);
LABEL_92:
          v29 = sub_1407702BC(a1, (unsigned int)v48, 0, (unsigned int)&v54, (__int64)&v42);
          v10 = v29;
          if ( v29 < 0 )
          {
            if ( v29 == -1073740653 || v29 == -1073740651 )
              goto LABEL_19;
          }
          else
          {
            v7 = v54;
            v8 = 1;
            switch ( v3 )
            {
              case 0xC0000490:
                v40 = -536870360;
                break;
              case 0xC0000491:
                v40 = -536870320;
                break;
              case 0xC0000492:
                v40 = -536870319;
                break;
              case 0xC0000493:
                v40 = -536870318;
                break;
              case 0xC0000494:
                v40 = -536870375;
                break;
            }
          }
          v50 = 1;
LABEL_19:
          if ( v8 )
          {
            if ( byte_140C097C4 || (a3 & 2) != 0 )
              v7 |= 0x40000u;
            v14 = *(_DWORD *)(a1 + 704);
            if ( (v7 & 0x40) != 0 )
              v15 = v14 & 0xFFFFFFFE;
            else
              v15 = v14 | 1;
            *(_DWORD *)(a1 + 704) = v15;
          }
          v16 = v52;
          v17 = *(_QWORD *)(a1 + 48);
          v39 = 4;
          if ( (int)sub_14077CD90(qword_140D00AC0, v17, v52, 11, (__int64)&v41, (__int64)&v54, (__int64)&v39, 0) < 0
            || v41 != 4
            || v39 != 4 )
          {
            v54 = 0;
          }
          v19 = *(_DWORD *)(a1 + 396) & 0x2000;
          if ( v10 < 0 )
          {
            if ( v19 )
            {
              v34 = *(unsigned int *)(a1 + 404);
              if ( (_DWORD)v34 == 1 || (_DWORD)v34 == 18 )
                sub_140765114(a1, v34, (unsigned int)v10);
            }
          }
          else
          {
            v54 &= 0xFFF7FB9F;
            v7 &= ~0x20u;
            if ( v19 )
            {
              if ( *(_DWORD *)(a1 + 404) == 1
                || (v30 = *(unsigned int *)(a1 + 404), (unsigned int)v30 <= 0x38)
                && (v31 = 0x100000010040000LL, _bittest64(&v31, v30)) )
              {
                sub_140764FE4(a1);
              }
            }
            v20 = *(_DWORD *)(a1 + 300);
            if ( ((v20 - 771) & 0xFFFFFFEE) == 0 && v20 != 787 )
            {
              v21 = *(_DWORD *)(a1 + 396);
              if ( (v21 & 0x6000) != 0 )
              {
                if ( (v21 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 && (v42 & 0x70) == 0 )
                {
                  sub_140764FE4(a1);
                  sub_14074A08C(a1, 4LL);
                }
              }
              else if ( (v42 & 0x70) == 0 || byte_140C097C4 )
              {
                if ( (v7 & 0x40) != 0 )
                  sub_140765114(a1, 28LL, v3);
              }
              else
              {
                v32 = 0LL;
                if ( (v42 & 0x10) != 0 )
                {
                  v32 = 128LL;
                  v33 = 128LL;
                  v44 = 128LL;
                }
                else
                {
                  v33 = v44;
                }
                if ( (v42 & 0x20) != 0 )
                {
                  v33 = v32 | 0x10;
                  v44 = v32 | 0x10;
                  v32 |= 0x10uLL;
                }
                if ( (v42 & 0x40) != 0 )
                {
                  v33 = v32 | 0x200;
                  v44 = v32 | 0x200;
                }
                sub_140947274(*(_QWORD *)(a1 + 48), v18, v33);
                sub_140765114(a1, 14LL, 3221226194LL);
                sub_140767220(a1, 4LL);
              }
            }
            if ( v40 && (v7 & 0x40) != 0 )
            {
              sub_14077139C(
                qword_140D00AC0,
                (unsigned int)v48,
                *(_QWORD *)(a1 + 48),
                1,
                v52,
                v36,
                (__int64)&qword_140010A48,
                23,
                (__int64)&v40,
                4,
                0);
            }
            else if ( (v48[0] & 1) == 0 )
            {
              sub_14077139C(
                qword_140D00AC0,
                (unsigned int)v48,
                *(_QWORD *)(a1 + 48),
                1,
                v52,
                v36,
                (__int64)&qword_140010A48,
                0,
                0LL,
                0,
                0);
            }
          }
          if ( v8 || v7 )
          {
            v54 |= v7;
            sub_1406E5528(4LL, (__int64)v48, 0xBu, 4, (__int64)&v54, 4);
            if ( v8 )
            {
              v22 = *(_QWORD *)(a1 + 48);
              v46 = MEMORY[0xFFFFF78000000014];
              sub_14077139C(
                qword_140D00AC0,
                (unsigned int)v48,
                v22,
                1,
                v52,
                v37,
                (__int64)qword_14000FE30,
                16,
                (__int64)&v46,
                8,
                0);
              if ( (unsigned int)sub_14077DA5C(
                                   qword_140D00AC0,
                                   *(_QWORD *)(a1 + 48),
                                   1,
                                   v52,
                                   0LL,
                                   (__int64)qword_14000FDF0,
                                   (__int64)&v41,
                                   0LL,
                                   0,
                                   (__int64)&v39,
                                   0) != -1073741789
                || v39 != 8 )
              {
                sub_14077139C(
                  qword_140D00AC0,
                  (unsigned int)v48,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v52,
                  v38,
                  (__int64)qword_14000FDF0,
                  16,
                  (__int64)&v46,
                  8,
                  0);
              }
            }
          }
          goto LABEL_44;
        }
        if ( v10 != -1073740656 || (dword_140D3B050 & 2) == 0 )
          goto LABEL_19;
        if ( !byte_140C097C4 || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
        {
          if ( (unsigned __int8)sub_140778D60(*(PCWSTR *)(a1 + 48)) )
          {
            v27 = *(_QWORD *)(a1 + 48);
            v39 = 4;
            if ( (int)sub_14077CD90(qword_140D00AC0, v27, v52, 11, (__int64)&v41, (__int64)&v54, (__int64)&v39, 0) >= 0
              && v41 == 4
              && v39 == 4 )
            {
              v28 = v54;
            }
            else
            {
              v28 = 0;
              v54 = 0;
            }
            v9 = (v28 & 0x20) != 0;
          }
          else
          {
            v9 = 1;
          }
        }
        else
        {
          v7 = 32;
        }
        if ( (unsigned __int8)sub_140778D60(*(PCWSTR *)(a1 + 48)) )
        {
          if ( (int)sub_14094C9C4(a1, v48, &v54) >= 0 )
          {
            v7 |= v54;
            if ( (v54 & 1) != 0 )
            {
              v9 = 0;
              v7 &= ~0x20u;
            }
          }
        }
        v3 = -1073740656;
      }
      if ( !v9 )
        goto LABEL_19;
      goto LABEL_92;
    }
  }
LABEL_48:
  if ( P )
    sub_1407474E4((char *)P);
LABEL_50:
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&DestinationString);
  sub_1407476FC((__int64)v48);
  if ( v6 )
    sub_1402D1EB4(&stru_14000FE08, v6, v10);
  return (unsigned int)v10;
}

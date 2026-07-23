/*
 * XREFs of sub_140913964 @ 0x140913964
 * Callers:
 *     sub_1407C0160 @ 0x1407C0160 (sub_1407C0160.c)
 * Callees:
 *     sub_1402A21B0 @ 0x1402A21B0 (sub_1402A21B0.c)
 *     sub_1402A2204 @ 0x1402A2204 (sub_1402A2204.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14067C50C @ 0x14067C50C (sub_14067C50C.c)
 *     sub_14067C528 @ 0x14067C528 (sub_14067C528.c)
 *     sub_14067E828 @ 0x14067E828 (sub_14067E828.c)
 *     sub_14067E9B8 @ 0x14067E9B8 (sub_14067E9B8.c)
 *     sub_14067EA18 @ 0x14067EA18 (sub_14067EA18.c)
 *     sub_14067EF3C @ 0x14067EF3C (sub_14067EF3C.c)
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 *     sub_140681834 @ 0x140681834 (sub_140681834.c)
 *     sub_14069F004 @ 0x14069F004 (sub_14069F004.c)
 *     sub_14069FC64 @ 0x14069FC64 (sub_14069FC64.c)
 *     sub_1406A0010 @ 0x1406A0010 (sub_1406A0010.c)
 *     sub_1406A0070 @ 0x1406A0070 (sub_1406A0070.c)
 *     sub_14071784C @ 0x14071784C (sub_14071784C.c)
 *     sub_14071C120 @ 0x14071C120 (sub_14071C120.c)
 *     sub_14071F6D0 @ 0x14071F6D0 (sub_14071F6D0.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_140721CA0 @ 0x140721CA0 (sub_140721CA0.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_14087D6D0 @ 0x14087D6D0 (sub_14087D6D0.c)
 *     sub_140881426 @ 0x140881426 (sub_140881426.c)
 *     sub_14091BC2C @ 0x14091BC2C (sub_14091BC2C.c)
 *     sub_1409226E0 @ 0x1409226E0 (sub_1409226E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4248 @ 0x140AB4248 (sub_140AB4248.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_140913964(_QWORD *a1, int a2, int a3)
{
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  ULONG_PTR v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // r15d
  int v30; // r15d
  int v31; // r15d
  __int16 v32; // ax
  unsigned int v33; // r14d
  _QWORD *v34; // rax
  __int64 v35; // rbx
  __int64 v36; // r8
  __int64 v37; // [rsp+28h] [rbp-49h] BYREF
  int v38; // [rsp+30h] [rbp-41h] BYREF
  __int64 v39; // [rsp+38h] [rbp-39h] BYREF
  __int128 v40; // [rsp+40h] [rbp-31h] BYREF
  __int128 v41; // [rsp+50h] [rbp-21h] BYREF
  __int128 v42; // [rsp+60h] [rbp-11h]
  _OWORD v43[3]; // [rsp+70h] [rbp-1h] BYREF

  v39 = 0LL;
  v41 = 0LL;
  WORD1(v41) = -1;
  v37 = 0LL;
  memset(v43, 0, sizeof(v43));
  v42 = 0LL;
  sub_1407C97FC(&v39);
  v38 = 0;
  v40 = 0LL;
  sub_140AB4550(v43);
  if ( a2 == 1 && (a3 & 0xFFFFFFF0) != 0 )
  {
    v6 = -1073741811;
    goto LABEL_25;
  }
  if ( (unsigned __int8)sub_140AB4248() )
  {
LABEL_24:
    v6 = -1073741431;
    goto LABEL_25;
  }
  while ( 1 )
  {
    v10 = MEMORY[0xFFFFF78000000014];
    sub_140AB4370(v8, v7, v9);
    v11 = a1[1];
    sub_1407C05F4((__int64)&v41, v11);
    sub_14071F6D0((__int64)&v41);
    v6 = sub_140AB43C0(a1, 0LL);
    if ( v6 < 0 )
      goto LABEL_55;
    if ( a1[7] || a1[8] )
    {
      v6 = sub_14067F480(a1, &v37);
      if ( v6 < 0 )
        goto LABEL_55;
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 32) + 160LL) & 2) != 0 )
      {
        v6 = -1072103423;
        goto LABEL_55;
      }
      v12 = v37;
      v6 = sub_140AB43C0(a1, v37);
      if ( v6 < 0 )
        goto LABEL_55;
    }
    else
    {
      v12 = v37;
    }
    if ( (unsigned int)sub_140721CA0(v11, (__int64)a1) == 1 )
    {
      v6 = -1073741790;
      goto LABEL_55;
    }
    if ( (unsigned int)(a2 - 2) <= 2 )
      v12 = v15;
    v37 = v12;
    if ( v12 )
      break;
    v16 = sub_14069FC64(v13, 0LL, v14, (__int64)&v40);
    v6 = v16;
    if ( v16 == -1073741267 )
    {
      sub_1406A0070(v11, 3, &v40, v17);
      sub_140721BAC((__int64)&v41);
      sub_140AB4260(v19, v18, v20, v21);
      v6 = sub_1406A0010((__int64)&v40, 0LL);
      if ( v6 < 0 )
        goto LABEL_25;
      sub_14091BC2C(&v38);
      sub_140681834((__int64)&v40);
      v40 = 0LL;
    }
    else
    {
      if ( v16 < 0 )
        goto LABEL_55;
      if ( *(_DWORD *)(v11 + 40) != -1 )
      {
        sub_14067C50C(*(_QWORD *)(v11 + 32));
        v6 = sub_14087D6D0(*(_QWORD *)(v11 + 32), *(unsigned int *)(v11 + 40), 0);
        if ( v6 >= 0 )
        {
          v27 = sub_14067E828(v11, (__int64)&v39, 1);
          v28 = v27;
          v29 = a2 - 1;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( v31 )
              {
                if ( v31 == 1 )
                {
                  *(_BYTE *)(v27 + 55) = a3;
                  *(_BYTE *)(v11 + 185) = a3;
                }
              }
              else
              {
                v32 = *(_WORD *)(v27 + 2);
                if ( (a3 & 4) != 0 )
                {
                  *(_WORD *)(v28 + 2) = v32 | 0x80;
                  *(_WORD *)(v11 + 186) |= 0x80u;
                }
                else
                {
                  if ( (a3 & 1) != 0 )
                  {
                    *(_WORD *)(v28 + 2) = v32 | 0x300;
                    *(_WORD *)(v11 + 186) |= 0x300u;
                  }
                  else
                  {
                    *(_WORD *)(v28 + 2) = v32 & 0xFEFF;
                    *(_WORD *)(v11 + 186) &= ~0x100u;
                  }
                  if ( (a3 & 2) != 0 )
                  {
                    *(_WORD *)(v28 + 2) |= 0x200u;
                    *(_WORD *)(v11 + 186) |= 0x200u;
                  }
                }
              }
            }
            else
            {
              *(_DWORD *)(v27 + 52) ^= (*(_DWORD *)(v27 + 52) ^ (a3 << 20)) & 0xF00000;
              *(_DWORD *)(v11 + 184) ^= (*(_DWORD *)(v11 + 184) ^ *(unsigned __int16 *)(v27 + 54)) & 0xF0;
              if ( (a3 & 2) != 0 )
              {
                *(_WORD *)(v27 + 2) &= ~0x80u;
                *(_WORD *)(v11 + 186) = *(_WORD *)(v27 + 2);
              }
            }
          }
          else
          {
            v33 = *(_DWORD *)(v27 + 52) ^ (*(_DWORD *)(v27 + 52) ^ (a3 << 16)) & 0xF0000;
            *(_DWORD *)(v27 + 52) = v33;
            *(_DWORD *)(v11 + 184) ^= (*(_DWORD *)(v11 + 184) ^ HIWORD(v33)) & 0xF;
          }
          *(_QWORD *)(v28 + 4) = v10;
          v6 = 0;
          ++*(_QWORD *)(v11 + 304);
          *(_QWORD *)(v11 + 168) = v10;
          sub_140881426(v11, (unsigned int *)&v39);
        }
        sub_14067C528(*(_QWORD *)(v11 + 32));
        goto LABEL_55;
      }
      sub_140721BAC((__int64)&v41);
      v6 = sub_1409226E0(&v41, 0LL, 0LL);
      if ( v6 < 0 )
        goto LABEL_56;
      sub_140AB4260(v23, v22, v24, v25);
      sub_14069F004((__int64)&v41);
      v41 = 0LL;
      WORD1(v41) = -1;
      v42 = 0LL;
    }
    if ( (unsigned __int8)sub_140AB4248() )
      goto LABEL_24;
  }
  v34 = sub_14067EA18();
  v35 = (__int64)v34;
  if ( !v34 )
  {
    v6 = -1073741670;
    goto LABEL_55;
  }
  sub_1402A21B0(v34, v11);
  v6 = sub_1402A2204((_QWORD *)v35, v12);
  if ( v6 < 0 )
  {
LABEL_49:
    sub_14071C120((_QWORD *)v35);
    ExFreePoolWithTag((PVOID)v35, 0x77554D43u);
    goto LABEL_55;
  }
  if ( !sub_14067EF3C((unsigned int *)(v11 + 248), v35, v36) || !sub_14067E9B8(v11 + 264, (_QWORD *)v35, 1LL) )
  {
    v6 = -1072103423;
    goto LABEL_49;
  }
  *(_DWORD *)(v35 + 68) = 7;
  *(_DWORD *)(v35 + 88) = a3;
  v6 = sub_14071784C(v35, 1u);
  if ( v6 < 0 )
    goto LABEL_49;
  v6 = 0;
LABEL_55:
  sub_140721BAC((__int64)&v41);
LABEL_56:
  sub_140AB4260(v23, v22, v24, v25);
LABEL_25:
  sub_140AB4580(v43);
  sub_14069F004((__int64)&v41);
  sub_140681834((__int64)&v40);
  return (unsigned int)v6;
}

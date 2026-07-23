/*
 * XREFs of sub_14053F5E8 @ 0x14053F5E8
 * Callers:
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 * Callees:
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_14053FB50 @ 0x14053FB50 (sub_14053FB50.c)
 *     sub_14067E8A8 @ 0x14067E8A8 (sub_14067E8A8.c)
 *     sub_14067E974 @ 0x14067E974 (sub_14067E974.c)
 *     sub_14067EB68 @ 0x14067EB68 (sub_14067EB68.c)
 *     sub_14067EDC0 @ 0x14067EDC0 (sub_14067EDC0.c)
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_14069F004 @ 0x14069F004 (sub_14069F004.c)
 *     sub_14069F308 @ 0x14069F308 (sub_14069F308.c)
 *     sub_1406BF278 @ 0x1406BF278 (sub_1406BF278.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406E9370 @ 0x1406E9370 (sub_1406E9370.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_140716758 @ 0x140716758 (sub_140716758.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 *     sub_14071B4A0 @ 0x14071B4A0 (sub_14071B4A0.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14071BB4C @ 0x14071BB4C (sub_14071BB4C.c)
 *     sub_14071BC04 @ 0x14071BC04 (sub_14071BC04.c)
 *     sub_14071C050 @ 0x14071C050 (sub_14071C050.c)
 *     sub_14071F6D0 @ 0x14071F6D0 (sub_14071F6D0.c)
 *     sub_140721878 @ 0x140721878 (sub_140721878.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_1409150D4 @ 0x1409150D4 (sub_1409150D4.c)
 *     sub_14091523C @ 0x14091523C (sub_14091523C.c)
 *     sub_14091CB44 @ 0x14091CB44 (sub_14091CB44.c)
 *     sub_14091CDC0 @ 0x14091CDC0 (sub_14091CDC0.c)
 *     sub_14091CF4C @ 0x14091CF4C (sub_14091CF4C.c)
 *     sub_14091F87C @ 0x14091F87C (sub_14091F87C.c)
 *     sub_140920CA0 @ 0x140920CA0 (sub_140920CA0.c)
 *     sub_1409226E0 @ 0x1409226E0 (sub_1409226E0.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 */

__int64 __fastcall sub_14053F5E8(__int64 a1, __int64 a2, _QWORD **a3)
{
  char v5; // si
  char v6; // r12
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rdx
  int v17; // eax
  ULONG_PTR v18; // rdi
  __int64 v19; // r15
  __int64 v21; // rdx
  ULONG_PTR v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  int v25; // r15d
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // rdx
  ULONG_PTR v32; // rbx
  __int64 v33; // rax
  ULONG_PTR v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // [rsp+20h] [rbp-59h] BYREF
  __int64 v37; // [rsp+28h] [rbp-51h] BYREF
  _OWORD v38[2]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v39[2]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v40; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v41[5]; // [rsp+80h] [rbp+7h] BYREF
  int v43; // [rsp+F8h] [rbp+7Fh] BYREF

  v43 = 0;
  memset(v39, 0, sizeof(v39));
  v36 = 0LL;
  memset(v38, 0, sizeof(v38));
  v37 = 0LL;
  v40 = 0LL;
  memset(v41, 0, 32);
  sub_14069F308(v39);
  sub_14069F308(v38);
  v5 = 0;
  sub_1407C97FC(&v37);
  sub_1407C97FC(&v36);
  sub_14091CDC0(v41);
  v6 = 0;
  while ( 1 )
  {
    v18 = *(_QWORD *)(a1 + 8);
    v19 = *(_QWORD *)(v18 + 72);
    if ( (*(_DWORD *)(v18 + 184) & 0x80000) != 0 )
    {
      v7 = -1073741535;
      goto LABEL_24;
    }
    v7 = sub_1407C05F4(v39, *(_QWORD *)(a1 + 8));
    if ( v7 < 0 )
      goto LABEL_24;
    v7 = sub_1407C05F4(v38, v19);
    if ( v7 < 0 )
      goto LABEL_24;
    sub_14071BB4C(v18);
    sub_14071F6D0(v38);
    sub_14067E974(v39);
    if ( (unsigned __int8)sub_140AB45A0(a1, 0LL) )
    {
      v7 = 0;
      goto LABEL_59;
    }
    v9 = sub_140920CA0(v39, v8, &v43);
    v10 = 0LL;
    v7 = v9;
    if ( v9 < 0 )
      goto LABEL_59;
    if ( v43 )
    {
      v7 = -1073741535;
      goto LABEL_59;
    }
    v11 = *(_QWORD *)(v18 + 192);
    if ( v11 && *(_QWORD *)(v11 + 32) != v11 + 32 )
    {
      if ( !v5 )
      {
        sub_140721BAC(v39);
        sub_140721BAC(v38);
        sub_14071C050(v18);
LABEL_20:
        sub_140AB4260(v13, v12, v14, v15, v36, v37);
        sub_14069F004(v38);
        sub_14069F004(v39);
        sub_14071B6EC();
        v5 = 1;
        goto LABEL_21;
      }
      v6 = 1;
      v7 = sub_14091CF4C(v18, v41);
      if ( v7 < 0 )
        goto LABEL_59;
    }
    v16 = *(unsigned int *)(v18 + 40);
    if ( (_DWORD)v16 != -1 )
      break;
    if ( *(_DWORD *)(v19 + 40) != -1 )
      goto LABEL_27;
    sub_140721BAC(v39);
    sub_140721BAC(v38);
    v17 = sub_1409226E0(v38, 0LL, 0LL);
    v7 = v17;
    if ( v17 == -1073741444 )
    {
      v7 = 0;
      goto LABEL_60;
    }
    if ( v17 < 0 )
      goto LABEL_60;
    if ( v5 )
    {
      sub_14071F6D0(v38);
      sub_14067E974(v39);
LABEL_27:
      v7 = sub_14053FB50(v10, v39);
      if ( v7 >= 0 )
      {
        ((void (__fastcall *)(_OWORD *, _QWORD, __int64, __int64, __int64, __int64))sub_140721878)(
          v38,
          0LL,
          1LL,
          a2,
          v36,
          v37);
        sub_1406E9370(v18, v21, a3, 0LL);
        sub_14067EE40(v18, 8LL, a3);
        if ( v6 )
        {
          sub_14091CB44(v18);
        }
        else
        {
          sub_14067EDC0(v18, a3);
          sub_14067EB68(v18);
        }
        v7 = 0;
      }
      goto LABEL_59;
    }
    sub_14071C050(v18);
    sub_14069F004(v38);
    sub_14069F004(v39);
LABEL_21:
    sub_14069F308(v38);
    sub_14069F308(v39);
  }
  if ( !v5 )
  {
    sub_140721BAC(v39);
    sub_140721BAC(v38);
    sub_14071C050(v18);
    sub_14067E8A8(v41, a3);
    sub_140346C60(a3);
    goto LABEL_20;
  }
  v22 = *(_QWORD *)(v18 + 32);
  if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
    v23 = sub_1406BF400(v22, v16);
  else
    v23 = sub_1407C9820(v22);
  v24 = v23;
  v25 = 0;
  if ( *(_DWORD *)(v23 + 24) + *(_DWORD *)(v23 + 20) )
  {
    while ( 1 )
    {
      v7 = sub_1406BF278(*(_QWORD *)(v18 + 32));
      if ( v7 < 0 )
        break;
      v7 = sub_140716758(*(_QWORD *)(v18 + 32), 0LL);
      if ( v7 < 0 )
        break;
      if ( ++v25 >= (unsigned int)(*(_DWORD *)(v24 + 24) + *(_DWORD *)(v24 + 20)) )
        goto LABEL_39;
    }
  }
  else
  {
LABEL_39:
    v7 = sub_140716758(*(_QWORD *)(v18 + 32), *(unsigned int *)(v18 + 40));
    if ( v7 >= 0 )
    {
      while ( 1 )
      {
        sub_1406BF278(*(_QWORD *)(v18 + 32));
        v34 = *(_QWORD *)(v18 + 32);
        if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
          v26 = sub_1406BF400(v34, 0LL);
        else
          v26 = sub_1407C9820(v34);
        v27 = *(unsigned __int16 *)(v26 + 72);
        if ( (*(_BYTE *)(v26 + 2) & 0x20) != 0 )
        {
          v28 = sub_14071BC04(v26 + 76, v27);
        }
        else
        {
          *((_QWORD *)&v40 + 1) = v26 + 76;
          LOWORD(v40) = v27;
          WORD1(v40) = v27;
          v28 = sub_140718B68(&v40);
        }
        v29 = *(_QWORD *)(v18 + 32);
        v30 = v28;
        if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
          sub_1406BF450(v29, &v36);
        else
          sub_1407C97C0(v29, &v36);
        v31 = (unsigned int)(v30 + 37 * *(_DWORD *)(v18 + 16));
        v32 = *(_QWORD *)(v18 + 32);
        v33 = sub_1409150D4(v32, v31, 0LL);
        if ( v33 )
        {
          *(_DWORD *)(v33 + 40) = -1;
          v32 = *(_QWORD *)(v18 + 32);
        }
        sub_1407164DC(v32, 0LL);
      }
    }
  }
  v35 = *(_QWORD *)(v18 + 32);
  if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
    sub_1406BF450(v35, &v37);
  else
    sub_1407C97C0(v35, &v37);
LABEL_59:
  sub_140721BAC(v39);
  sub_140721BAC(v38);
LABEL_60:
  sub_14071C050(v18);
LABEL_24:
  sub_14067E8A8(v41, a3);
  sub_14069F004(v39);
  sub_14069F004(v38);
  return (unsigned int)v7;
}

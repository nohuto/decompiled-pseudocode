/*
 * XREFs of sub_14069E98C @ 0x14069E98C
 * Callers:
 *     sub_14069E454 @ 0x14069E454 (sub_14069E454.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_140681834 @ 0x140681834 (sub_140681834.c)
 *     sub_14068934C @ 0x14068934C (sub_14068934C.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_1406893EC @ 0x1406893EC (sub_1406893EC.c)
 *     sub_14069E21C @ 0x14069E21C (sub_14069E21C.c)
 *     sub_14069E26C @ 0x14069E26C (sub_14069E26C.c)
 *     sub_14069E368 @ 0x14069E368 (sub_14069E368.c)
 *     sub_14069F004 @ 0x14069F004 (sub_14069F004.c)
 *     sub_14069F668 @ 0x14069F668 (sub_14069F668.c)
 *     sub_14069F770 @ 0x14069F770 (sub_14069F770.c)
 *     sub_14069FC64 @ 0x14069FC64 (sub_14069FC64.c)
 *     sub_14069FD1C @ 0x14069FD1C (sub_14069FD1C.c)
 *     sub_14069FFC0 @ 0x14069FFC0 (sub_14069FFC0.c)
 *     sub_14069FFE8 @ 0x14069FFE8 (sub_14069FFE8.c)
 *     sub_1406A0010 @ 0x1406A0010 (sub_1406A0010.c)
 *     sub_1406A0070 @ 0x1406A0070 (sub_1406A0070.c)
 *     sub_1406A0094 @ 0x1406A0094 (sub_1406A0094.c)
 *     sub_140719010 @ 0x140719010 (sub_140719010.c)
 *     sub_140721878 @ 0x140721878 (sub_140721878.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_140914CA4 @ 0x140914CA4 (sub_140914CA4.c)
 *     sub_1409193DC @ 0x1409193DC (sub_1409193DC.c)
 *     sub_14091CEA0 @ 0x14091CEA0 (sub_14091CEA0.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_14069E98C(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR v11; // rsi
  int v12; // edi
  __int64 v13; // r14
  int v14; // ebx
  __int64 v15; // rdx
  char v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  void *v31; // rdi
  void *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  signed __int32 v38[8]; // [rsp+0h] [rbp-A9h] BYREF
  __int64 v39; // [rsp+20h] [rbp-89h]
  __int64 v40; // [rsp+28h] [rbp-81h]
  __int64 v41; // [rsp+30h] [rbp-79h] BYREF
  __int128 v42; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v43[2]; // [rsp+48h] [rbp-61h] BYREF
  _LIST_ENTRY ListHead; // [rsp+58h] [rbp-51h] BYREF
  __int64 v45; // [rsp+68h] [rbp-41h]
  _OWORD v46[2]; // [rsp+70h] [rbp-39h] BYREF
  _OWORD v47[3]; // [rsp+90h] [rbp-19h] BYREF

  v45 = a4;
  v43[1] = v43;
  LOWORD(v41) = 0;
  v43[0] = v43;
  memset(v46, 0, sizeof(v46));
  WORD1(v46[0]) = -1;
  memset(v47, 0, sizeof(v47));
  ListHead = 0LL;
  v42 = 0LL;
  InitializeListHead(&ListHead);
  sub_1406893EC();
  sub_140689388(1);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 6;
  HIDWORD(v41) = 6;
  v13 = *(_QWORD *)(v11 + 32);
  if ( (*(_DWORD *)(v11 + 8) & 0x80u) != 0 )
    goto LABEL_53;
  v14 = sub_140AB43C0(a1, 0LL);
  if ( v14 < 0 )
    goto LABEL_37;
  if ( (*(_DWORD *)(v11 + 8) & 0x40000) != 0 )
  {
    v14 = -1073740763;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v13 + 2944) && ((a2 & 1) == 0 || (*(_DWORD *)(v13 + 4112) & 0x20) == 0) )
  {
    v14 = -1073741431;
    goto LABEL_37;
  }
  if ( (int)sub_1407C05F4(v46, v11) < 0 )
  {
    v14 = -1073741670;
    goto LABEL_37;
  }
  sub_140721878(v46, 0LL, 4LL, v43, v39, v40, v41, v42, *((_QWORD *)&v42 + 1));
  LOBYTE(v15) = 1;
  sub_14069F668(a1, v15, v43);
  v8 = *(_QWORD *)(v11 + 32);
  if ( v8 == qword_140D3CA28 || (*(_DWORD *)(v11 + 184) & 0x40000) == 0 )
  {
    v14 = -1073741811;
    goto LABEL_37;
  }
  if ( (*(_DWORD *)(v8 + 4112) & 4) != 0 )
  {
LABEL_53:
    v14 = -1073741790;
    goto LABEL_37;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !(unsigned __int8)sub_14069F770(v11) && *(_QWORD *)v11 == 2LL )
      goto LABEL_22;
    if ( a3 )
    {
      v14 = sub_14069E368(v11, v45);
      if ( v14 >= 0 )
      {
        v14 = 259;
        goto LABEL_14;
      }
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  v24 = *(_QWORD *)(v11 + 192);
  if ( v24 && *(_QWORD *)(v24 + 32) != v24 + 32 )
  {
    sub_14091CEA0(3LL);
LABEL_36:
    v14 = -1073741535;
    goto LABEL_37;
  }
  LOBYTE(v7) = 1;
  v25 = sub_14069FC64(v11, v7, v9, &v42);
  v14 = v25;
  if ( v25 == -1073741267 )
  {
LABEL_62:
    sub_1406A0070(v11, 10LL, &v42);
    sub_140AB4260(v35, v34, v36, v37);
    sub_14068934C();
    v12 = 0;
    HIDWORD(v41) = 0;
    v14 = sub_1406A0010(&v42, 0LL);
    if ( v14 >= 0 )
      v14 = -1073741267;
    v17 = 0;
    goto LABEL_38;
  }
  if ( v25 < 0 )
  {
LABEL_37:
    v17 = v41;
    goto LABEL_38;
  }
  v26 = sub_14069E26C(v11, 0, (__int64)&v42);
  v14 = v26;
  if ( v26 == -1073741267 )
    goto LABEL_62;
  if ( v26 < 0 )
    goto LABEL_37;
  sub_14069E21C(v11, 1LL, 1, (__int64)&ListHead, 0LL);
  sub_14067EE40(v11, 1LL, (__int64)&ListHead, 1);
LABEL_22:
  *(_DWORD *)(v11 + 8) |= 0x40000u;
  v17 = 1;
  if ( *(_BYTE *)(v13 + 2944) == 1 )
  {
    sub_140914CA4(v13);
    ++dword_140C49410;
  }
  sub_140346C60(&ListHead);
  sub_140AB4260(v19, v18, v20, v21);
  sub_14068934C();
  _InterlockedIncrement(&dword_140CE1C20);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v13 + 1640));
  ExRundownCompleted((PEX_RUNDOWN_REF)(v13 + 1640));
  sub_1406893EC();
  sub_140689388(1);
  v22 = *(_QWORD *)(v13 + 4152);
  if ( !v22 )
    goto LABEL_25;
  v14 = sub_1406A0094(v22, &v42);
  if ( v14 < 0 )
  {
    v12 = HIDWORD(v41);
  }
  else
  {
    sub_1406A0070(v11, 9LL, &v42);
    sub_140AB4260(v28, v27, v29, v30);
    sub_14068934C();
    v12 = 0;
    HIDWORD(v41) = 0;
    v14 = sub_1406A0010(&v42, (char *)&v41 + 1);
    if ( v14 >= 0 )
    {
      sub_140681834((__int64)&v42);
      v42 = 0LL;
      if ( BYTE1(v41) )
        sub_1409193DC(*(_QWORD *)(v13 + 4152));
      sub_1406893EC();
      v31 = (void *)sub_14069FFE8(*(_QWORD *)(v13 + 4152), 0LL);
      v32 = (void *)sub_14069FFC0(*(_QWORD *)(v13 + 4152));
      sub_14068934C();
      if ( v31 )
        ZwClose(v31);
      if ( v32 )
        ZwClose(v32);
      sub_1406893EC();
      LOBYTE(v33) = 1;
      sub_14069FD1C(*(_QWORD *)(v13 + 4152), v33);
      sub_140689388(1);
      HIDWORD(v41) = 6;
LABEL_25:
      sub_140AB4550(v47);
      sub_14067BE48(v11, v23, (_DWORD *)&v41 + 1);
      sub_140AB4580(v47);
      v14 = 0;
      goto LABEL_26;
    }
  }
LABEL_38:
  if ( (v12 & 4) == 0 )
  {
    sub_1406893EC();
    v12 |= 4u;
    HIDWORD(v41) = v12;
  }
  if ( (v12 & 2) == 0 )
  {
    sub_140689388(1);
    v12 |= 2u;
    HIDWORD(v41) = v12;
  }
  if ( v17 )
  {
    _InterlockedExchange64((volatile __int64 *)(v13 + 1640), 0LL);
    *(_DWORD *)(v11 + 8) &= ~0x40000u;
LABEL_26:
    if ( _InterlockedExchangeAdd(&dword_140CE1C20, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v38, 0);
      if ( qword_140C49428 )
        ExfUnblockPushLock(&qword_140C49428, 0LL);
    }
    LOBYTE(v12) = BYTE4(v41);
  }
LABEL_14:
  if ( (v12 & 2) != 0 )
    sub_140AB4260(v8, v7, v9, v10);
  if ( (v12 & 4) != 0 )
    sub_14068934C();
  if ( (_QWORD *)v43[0] != v43 )
    sub_140719010(v43);
  sub_14069F004(v46);
  sub_140681834((__int64)&v42);
  return (unsigned int)v14;
}

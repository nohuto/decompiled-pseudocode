/*
 * XREFs of sub_140913E28 @ 0x140913E28
 * Callers:
 *     sub_1407C0160 @ 0x1407C0160 (sub_1407C0160.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_1402A21B0 @ 0x1402A21B0 (sub_1402A21B0.c)
 *     sub_1402A2204 @ 0x1402A2204 (sub_1402A2204.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14067E828 @ 0x14067E828 (sub_14067E828.c)
 *     sub_14067E9B8 @ 0x14067E9B8 (sub_14067E9B8.c)
 *     sub_14067EA18 @ 0x14067EA18 (sub_14067EA18.c)
 *     sub_14067EF3C @ 0x14067EF3C (sub_14067EF3C.c)
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 *     sub_140681834 @ 0x140681834 (sub_140681834.c)
 *     sub_14069FC64 @ 0x14069FC64 (sub_14069FC64.c)
 *     sub_1406A0010 @ 0x1406A0010 (sub_1406A0010.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406E9124 @ 0x1406E9124 (sub_1406E9124.c)
 *     sub_14071784C @ 0x14071784C (sub_14071784C.c)
 *     sub_14071C120 @ 0x14071C120 (sub_14071C120.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14071F6D0 @ 0x14071F6D0 (sub_14071F6D0.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
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

__int64 __fastcall sub_140913E28(_QWORD *a1, _QWORD *a2)
{
  ULONG_PTR v4; // rdi
  char v5; // r15
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  PPRIVILEGE_SET v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  _QWORD *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v33; // [rsp+38h] [rbp-49h] BYREF
  __int128 v34; // [rsp+40h] [rbp-41h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+50h] [rbp-31h]
  int v36; // [rsp+60h] [rbp-21h] BYREF
  __int64 v37; // [rsp+68h] [rbp-19h] BYREF
  __int128 v38; // [rsp+70h] [rbp-11h] BYREF
  _OWORD v39[3]; // [rsp+80h] [rbp-1h] BYREF

  v33 = 0LL;
  v37 = 0LL;
  memset(v39, 0, sizeof(v39));
  v36 = 0;
  sub_1407C97FC(&v33);
  v34 = 0LL;
  WORD1(v34) = -1;
  *(_OWORD *)Privileges = 0LL;
  v38 = 0LL;
  sub_140AB4550(v39);
  while ( 1 )
  {
    if ( (unsigned __int8)sub_140AB4248() )
    {
      v6 = -1073741431;
      v5 = 0;
      goto LABEL_25;
    }
    sub_140AB4370(v20, v19, v21);
    v4 = a1[1];
    v5 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 32) + 160LL) & 0x100000) != 0 )
      break;
    v6 = sub_1407C05F4((__int64)&v34, a1[1]);
    if ( v6 < 0 )
      goto LABEL_25;
    sub_14071F6D0((__int64)&v34);
    v6 = sub_140AB43C0(a1, 0LL);
    if ( v6 < 0 )
      goto LABEL_49;
    if ( *(_BYTE *)(v4 + 65) == 1 )
    {
      v6 = -1073741790;
      goto LABEL_49;
    }
    if ( a1[7] || a1[8] )
    {
      v6 = sub_14067F480(a1, &v37);
      if ( v6 < 0 )
        goto LABEL_49;
      v8 = v37;
      v6 = sub_140AB43C0(a1, v37);
      if ( v6 < 0 )
        goto LABEL_49;
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 32) + 160LL) & 2) != 0 )
      {
        v6 = -1072103423;
        goto LABEL_49;
      }
      if ( v8 )
      {
        v30 = sub_14067EA18();
        v31 = (__int64)v30;
        if ( !v30 )
        {
          v6 = -1073741670;
LABEL_49:
          sub_140721BAC((__int64)&v34);
          goto LABEL_25;
        }
        sub_1402A21B0(v30, v4);
        v6 = sub_1402A2204((_QWORD *)v31, v8);
        if ( v6 >= 0 )
        {
          if ( sub_14067EF3C((unsigned int *)(v4 + 248), v31, v32) && sub_14067E9B8(v4 + 264, (_QWORD *)v31, 1LL) )
          {
            *(_DWORD *)(v31 + 68) = 8;
            *(_QWORD *)(v31 + 88) = *a2;
            v6 = sub_14071784C(v31, 1u);
            if ( v6 >= 0 )
            {
              v6 = 0;
              goto LABEL_49;
            }
          }
          else
          {
            v6 = -1072103423;
          }
        }
        sub_14071C120((_QWORD *)v31);
        ExFreePoolWithTag((PVOID)v31, 0x77554D43u);
        goto LABEL_49;
      }
    }
    v9 = sub_14069FC64(v4, 0LL, v7, (__int64)&v38);
    v6 = v9;
    if ( v9 == -1073741267 )
    {
      sub_1406E9124(v4, 0LL, 2u, v10, v38);
      sub_140721BAC((__int64)&v34);
      v14 = Privileges[1];
      if ( Privileges[1] )
        SeFreePrivileges(Privileges[1]);
      v34 = 0LL;
      WORD1(v34) = -1;
      *(_OWORD *)Privileges = 0LL;
      sub_140AB4260(v14, v11, v12, v13);
      v5 = 0;
      v6 = sub_1406A0010((__int64)&v38, 0LL);
      if ( v6 < 0 )
        goto LABEL_25;
      sub_14091BC2C(&v36);
      sub_140681834((__int64)&v38);
      v38 = 0LL;
    }
    else
    {
      if ( v9 < 0 )
        goto LABEL_49;
      if ( *(_DWORD *)(v4 + 40) != -1 )
      {
        ExAcquirePushLockSharedEx(*(_QWORD *)(v4 + 32) + 72LL, 0LL);
        v6 = sub_14071F300(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40), 0);
        if ( v6 >= 0 )
        {
          *(_QWORD *)(sub_14067E828(v4, (__int64)&v33, 1) + 4) = *a2;
          v27 = *a2;
          v28 = *(_QWORD *)(v4 + 32);
          ++*(_QWORD *)(v4 + 304);
          *(_QWORD *)(v4 + 168) = v27;
          if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
            sub_1406BF450(v28, &v33);
          else
            sub_1407C97C0(v28, (unsigned int *)&v33);
          v6 = 0;
        }
        v29 = *(_QWORD *)(v4 + 32);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v29 + 72));
        sub_1402AFC00(v29 + 72);
        goto LABEL_49;
      }
      sub_140721BAC((__int64)&v34);
      v6 = sub_1409226E0(&v34, 0LL, 0LL);
      if ( v6 < 0 )
        goto LABEL_25;
      sub_140AB4260(v16, v15, v17, v18);
      if ( Privileges[1] )
        SeFreePrivileges(Privileges[1]);
      v34 = 0LL;
      WORD1(v34) = -1;
      *(_OWORD *)Privileges = 0LL;
    }
  }
  v6 = -1073741790;
LABEL_25:
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  sub_140681834((__int64)&v38);
  if ( v5 )
    sub_140AB4260(v23, v22, v24, v25);
  sub_140AB4580(v39);
  return (unsigned int)v6;
}

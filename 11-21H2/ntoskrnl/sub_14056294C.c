/*
 * XREFs of sub_14056294C @ 0x14056294C
 * Callers:
 *     sub_140950744 @ 0x140950744 (sub_140950744.c)
 * Callees:
 *     sub_1402D21B8 @ 0x1402D21B8 (sub_1402D21B8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14056294C(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 v5; // ax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int16 v8; // ax
  __int64 v9; // rdx
  unsigned __int16 v11; // [rsp+20h] [rbp-41h] BYREF
  unsigned __int16 v12; // [rsp+24h] [rbp-3Dh] BYREF
  unsigned __int16 v13; // [rsp+28h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-31h] BYREF
  __int16 *v15; // [rsp+40h] [rbp-21h]
  __int64 v16; // [rsp+48h] [rbp-19h]
  __int64 v17; // [rsp+50h] [rbp-11h]
  int v18; // [rsp+58h] [rbp-9h]
  int v19; // [rsp+5Ch] [rbp-5h]
  unsigned __int16 *v20; // [rsp+60h] [rbp-1h]
  __int64 v21; // [rsp+68h] [rbp+7h]
  __int64 v22; // [rsp+70h] [rbp+Fh]
  int v23; // [rsp+78h] [rbp+17h]
  int v24; // [rsp+7Ch] [rbp+1Bh]
  __int16 *v25; // [rsp+80h] [rbp+1Fh]
  __int64 v26; // [rsp+88h] [rbp+27h]
  __int64 v27; // [rsp+90h] [rbp+2Fh]
  int v28; // [rsp+98h] [rbp+37h]
  int v29; // [rsp+9Ch] [rbp+3Bh]
  int v30; // [rsp+C8h] [rbp+67h] BYREF

  v30 = a2;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v30;
  if ( a3 )
    v5 = *(_WORD *)a3 >> 1;
  else
    v5 = 0;
  v11 = v5;
  v15 = (__int16 *)&v11;
  v16 = 2LL;
  if ( a3 )
    v6 = *(_QWORD *)(a3 + 8);
  else
    v6 = 0LL;
  v17 = v6;
  v18 = 2 * v5;
  v12 = *(_WORD *)a4 >> 1;
  v23 = 2 * v12;
  v20 = &v12;
  v7 = *(_QWORD *)(a4 + 8);
  v19 = 0;
  v21 = 2LL;
  v22 = v7;
  v24 = 0;
  if ( a5 )
    v8 = *(_WORD *)a5 >> 1;
  else
    v8 = 0;
  v13 = v8;
  v25 = (__int16 *)&v13;
  v26 = 2LL;
  if ( a5 )
    v9 = *(_QWORD *)(a5 + 8);
  else
    v9 = 0LL;
  v27 = v9;
  v28 = 2 * v8;
  v29 = 0;
  return sub_1402D21B8(&stru_14003B5F0, 7u, &UserData);
}

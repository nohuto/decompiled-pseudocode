/*
 * XREFs of sub_1409237B4 @ 0x1409237B4
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14065E380 @ 0x14065E380 (sub_14065E380.c)
 *     sub_14065E3D4 @ 0x14065E3D4 (sub_14065E3D4.c)
 *     sub_14067E8A8 @ 0x14067E8A8 (sub_14067E8A8.c)
 *     sub_14067EB68 @ 0x14067EB68 (sub_14067EB68.c)
 *     sub_14067EDC0 @ 0x14067EDC0 (sub_14067EDC0.c)
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_14071B5A0 @ 0x14071B5A0 (sub_14071B5A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14091CB44 @ 0x14091CB44 (sub_14091CB44.c)
 */

void __fastcall sub_1409237B4(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int *v3; // r14
  __int64 v6; // rax
  ULONG_PTR v8; // rbx
  int v9; // r9d
  __int64 v10; // rsi
  ULONG_PTR v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  ULONG_PTR v16; // rcx
  __int64 v17; // [rsp+40h] [rbp-39h] BYREF
  __int64 v18; // [rsp+48h] [rbp-31h] BYREF
  __int64 v19; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-19h] BYREF
  __int64 *v21; // [rsp+80h] [rbp+7h]
  int v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+8Ch] [rbp+13h]
  __int64 *v24; // [rsp+90h] [rbp+17h]
  int v25; // [rsp+98h] [rbp+1Fh]
  int v26; // [rsp+9Ch] [rbp+23h]

  v18 = 0xFFFFFFFFLL;
  v3 = *(unsigned int **)(a1 + 104);
  v6 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(v6 + 32);
  if ( (int)sub_1407164DC(v8, *(unsigned int *)(v6 + 40), 0) < 0
    && (unsigned int)dword_140C03868 > 5
    && sub_1402A2000((__int64)&dword_140C03868, 0x200000000000LL) )
  {
    v23 = 0;
    v26 = 0;
    v21 = &v17;
    LODWORD(v17) = v9;
    v24 = &v19;
    v22 = 4;
    v19 = 0x1000000LL;
    v25 = 8;
    sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)&byte_14002A1FF, 0LL, 0LL, 4u, &v20);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL);
  if ( *v3 == 1 )
    sub_14065E3D4(v8, *(unsigned int *)(v10 + 40), (__int64)v3);
  sub_14071B5A0(v10, 1);
  v11 = *(unsigned int *)(v10 + 40);
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    v12 = sub_1406BF400(v8, v11, &v18);
  else
    v12 = sub_1407C9820(v8, v11, (unsigned int *)&v18);
  *(_WORD *)(v10 + 176) = *(_WORD *)(v12 + 52);
  *(_QWORD *)(v12 + 4) = *a2;
  v13 = *a2;
  ++*(_QWORD *)(v10 + 304);
  *(_QWORD *)(v10 + 168) = v13;
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    sub_1406BF450(v8, &v18);
  else
    sub_1407C97C0(v8, (unsigned int *)&v18);
  v17 = 0LL;
  v14 = *(_QWORD *)(a1 + 48);
  LODWORD(v17) = 8;
  WORD2(v17) = 257;
  sub_1406E93C0(v14, (__int64)sub_14091CDA0, (__int64)sub_14091CD70, a3, (__int64)&v17, 1, 1);
  sub_14067EE40(*(_QWORD *)(a1 + 48), 8LL, a3, 1);
  sub_14067EDC0(*(_QWORD *)(a1 + 48), a3);
  v15 = *(_QWORD *)(a1 + 112);
  v16 = *(_QWORD *)(a1 + 48);
  if ( v15 )
  {
    sub_14091CB44(v16, v15, a3);
    sub_14067E8A8(*(_QWORD **)(a1 + 112), a3);
    SeFreePrivileges(*(PPRIVILEGE_SET *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else
  {
    sub_14067EB68(v16);
  }
  sub_14065E380(v8, v3);
  *(_QWORD *)(a1 + 104) = 0LL;
}

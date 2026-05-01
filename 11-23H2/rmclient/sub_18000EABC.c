/*
 * XREFs of sub_18000EABC @ 0x18000EABC
 * Callers:
 *     sub_18000FFC4 @ 0x18000FFC4 (sub_18000FFC4.c)
 * Callees:
 *     sub_18000CDC4 @ 0x18000CDC4 (sub_18000CDC4.c)
 *     sub_18000F768 @ 0x18000F768 (sub_18000F768.c)
 *     sub_180011784 @ 0x180011784 (sub_180011784.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_18000EABC(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+48h] [rbp-21h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h] BYREF
  __int16 v11; // [rsp+58h] [rbp-11h] BYREF
  char v12; // [rsp+5Ah] [rbp-Fh]
  unsigned int v13; // [rsp+5Ch] [rbp-Dh]
  unsigned __int16 v14; // [rsp+60h] [rbp-9h]
  __int128 v15; // [rsp+68h] [rbp-1h]
  __int16 v16; // [rsp+78h] [rbp+Fh] BYREF
  char v17; // [rsp+7Ah] [rbp+11h]
  int v18; // [rsp+7Ch] [rbp+13h]
  unsigned __int16 v19; // [rsp+80h] [rbp+17h]
  __int128 v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v22 = *(_QWORD *)(a1 + 24) + 10LL;
  v11 = *(_WORD *)(a1 + 2);
  v12 = *(_BYTE *)(a1 + 4);
  v16 = *(_WORD *)(a1 + 6);
  v17 = *(_BYTE *)(a1 + 8);
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0LL;
  while ( (unsigned __int8)sub_18000F768(&v11, &v22, v2) )
  {
    v5 = 0;
    if ( v13 )
    {
      while ( (unsigned __int8)sub_18000F768(&v16, &v22, *(_QWORD *)(a1 + 32)) )
      {
        v6 = *(_QWORD *)(a2 + 112);
        v21 = v18;
        v23 = v19;
        v8 = *((_QWORD *)&v20 + 1);
        v9 = v14;
        v10 = *((_QWORD *)&v15 + 1);
        if ( !v6 )
          sub_180011784();
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, int *))(*(_QWORD *)v6 + 32LL))(
                v6,
                &v10,
                &v9,
                &v8,
                &v23,
                &v21) )
        {
          sub_18000CDC4(a2);
          return 0;
        }
        if ( ++v5 >= v13 )
          break;
      }
    }
    v2 = *(_QWORD *)(a1 + 32);
  }
  sub_18000CDC4(a2);
  return 1;
}

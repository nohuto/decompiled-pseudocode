/*
 * XREFs of sub_18009B150 @ 0x18009B150
 * Callers:
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 *     sub_18009474C @ 0x18009474C (sub_18009474C.c)
 *     sub_18009ADA0 @ 0x18009ADA0 (sub_18009ADA0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18009B150(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // esi
  __int64 v14; // r8
  char *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21[2]; // [rsp+20h] [rbp-30h] BYREF
  char *v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h]
  __int64 v24; // [rsp+40h] [rbp-10h]

  sub_18009474C(a1 + 96, a2);
  v6 = a3[1];
  v7 = 0LL;
  v8 = 0LL;
  if ( v6 )
  {
    v7 = *a3;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    v8 = v6;
  }
  *(_QWORD *)(a1 + 160) = v7;
  v9 = *(volatile signed __int32 **)(a1 + 168);
  *(_QWORD *)(a1 + 168) = v8;
  if ( v9 && _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
  LOBYTE(v10) = sub_18002BA14(a1, 1);
  if ( (_BYTE)v10 )
  {
    v12 = sub_18002B9E0(v11);
    sub_180039EBC(v12, &v22);
    v13 = 0;
    v14 = v23;
    v15 = v22;
    v10 = (v23 - (__int64)v22) >> 4;
    if ( v10 )
    {
      v16 = 0LL;
      do
      {
        v17 = 2 * v16;
        v18 = *(_QWORD *)&v15[8 * v17 + 8];
        if ( v18 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
          v18 = *(_QWORD *)&v15[8 * v17 + 8];
        }
        v21[0] = *(_QWORD *)&v15[8 * v17];
        v21[1] = v18;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v21[0] + 32LL))(v21[0]) )
          sub_18009ADA0(a1, v21);
        sub_180010910((__int64)v21);
        ++v13;
        v14 = v23;
        v15 = v22;
        v10 = (v23 - (__int64)v22) >> 4;
        v16 = v13;
      }
      while ( v13 < v10 );
    }
    if ( v15 )
    {
      sub_1800126E8((__int64)v15, v14);
      LOBYTE(v10) = sub_180010884(v22, (v24 - (_QWORD)v22) & 0xFFFFFFFFFFFFFFF0uLL);
    }
  }
  v19 = *(_QWORD *)(a2 + 16);
  if ( v19 )
  {
    sub_180088D1C(v19, *(_QWORD *)(a2 + 24));
    LOBYTE(v10) = sub_180010884(*(char **)(a2 + 16), 16 * ((__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 16)) >> 4));
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  return v10;
}

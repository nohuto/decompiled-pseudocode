/*
 * XREFs of sub_180049994 @ 0x180049994
 * Callers:
 *     sub_180048C70 @ 0x180048C70 (sub_180048C70.c)
 *     sub_18006986C @ 0x18006986C (sub_18006986C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18006978C @ 0x18006978C (sub_18006978C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_180049994(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 *v4; // rdi
  signed __int32 v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  volatile signed __int32 *v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF
  __int128 v16; // [rsp+60h] [rbp-10h] BYREF

  v1 = a1[15];
  a1[15] = 0LL;
  v13[0] = v1;
  v3 = a1[16];
  a1[16] = 0LL;
  v15 = 0LL;
  v13[1] = v3;
  sub_180010910((__int64)v13);
  sub_180010910((__int64)&v15);
  v4 = a1 + 17;
  LOBYTE(v5) = sub_1800122C0(a1 + 17);
  if ( (_BYTE)v5 )
  {
    v6 = a1[28];
    v7 = *v4;
    v12 = 0LL;
    if ( v6 )
    {
      *(_QWORD *)&v12 = a1[27];
      *((_QWORD *)&v12 + 1) = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    }
    sub_18006978C(v7, &v12);
    v8 = *v4;
    *v4 = 0LL;
    v14[0] = v8;
    v9 = a1[18];
    a1[18] = 0LL;
    v14[1] = v9;
    v16 = 0LL;
    sub_180010910((__int64)v14);
    LOBYTE(v5) = sub_180010910((__int64)&v16);
    v10 = (volatile signed __int32 *)a1[28];
    a1[28] = 0LL;
    a1[27] = 0LL;
    if ( v10 )
    {
      v5 = _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF);
      if ( v5 == 1 )
        LOBYTE(v5) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return v5;
}

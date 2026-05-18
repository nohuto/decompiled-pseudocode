/*
 * XREFs of sub_18005DF04 @ 0x18005DF04
 * Callers:
 *     sub_18005D0C0 @ 0x18005D0C0 (sub_18005D0C0.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180016ED0 @ 0x180016ED0 (sub_180016ED0.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18005D3E4 @ 0x18005D3E4 (sub_18005D3E4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005DF04(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  __int64 v6; // r11
  __int64 *v7; // r10
  __int64 *v8; // r9
  __int64 *v9; // r8
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 *v16; // rax
  __int128 v18; // [rsp+20h] [rbp-50h] BYREF
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21[4]; // [rsp+50h] [rbp-20h] BYREF

  v5 = sub_180028544(a3);
  v18 = 0LL;
  v7 = (__int64 *)a1[14];
  v8 = (__int64 *)v7[1];
  v9 = v7;
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( *((_DWORD *)v8 + 8) >= v5 )
    {
      v9 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( *((_BYTE *)v9 + 25) || v5 < *((_DWORD *)v9 + 8) || v9 == v7 || !sub_1800122C0(v9 + 5) )
  {
    v14 = sub_180016ED0(v6, v21);
    v13 = *v14;
    v15 = v14[1];
    *v14 = 0LL;
    v14[1] = 0LL;
    v20[0] = 0LL;
    v12 = v13;
    *(_QWORD *)&v18 = v13;
    v20[1] = 0LL;
    *((_QWORD *)&v18 + 1) = v15;
    sub_180010910((__int64)v20);
    sub_180010910((__int64)v21);
    v19 = 0LL;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v12 = v18;
    }
    v19 = v18;
    sub_18005D3E4(a1, &v19);
  }
  else
  {
    v11 = v10[1];
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v11 = v10[1];
    }
    v12 = *v10;
    v19 = 0uLL;
    *(_QWORD *)&v18 = v12;
    *((_QWORD *)&v18 + 1) = v11;
    sub_180010910((__int64)&v19);
    v13 = v12;
  }
  v16 = sub_18002B9EC((__int64)a1, v21);
  sub_18002BC44(v12, v16);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 40LL))(v13, a1[16], a2);
  return sub_180010910((__int64)&v18);
}

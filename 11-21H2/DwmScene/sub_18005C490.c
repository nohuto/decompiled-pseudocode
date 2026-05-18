/*
 * XREFs of sub_18005C490 @ 0x18005C490
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 __fastcall sub_18005C490(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v6; // r8
  char *v7; // rcx
  unsigned __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17[2]; // [rsp+30h] [rbp-30h] BYREF
  char *v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]

  v4 = sub_18002B9E0(a1);
  sub_180039EBC(v4, &v18);
  v5 = 0;
  v6 = v19;
  v7 = v18;
  result = (v19 - (__int64)v18) >> 4;
  if ( result )
  {
    v9 = 0LL;
    do
    {
      v10 = 2 * v9;
      v11 = *(_QWORD *)&v7[8 * v10 + 8];
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
        v11 = *(_QWORD *)&v7[8 * v10 + 8];
      }
      v17[0] = *(_QWORD *)&v7[8 * v10];
      v17[1] = v11;
      v12 = sub_180028544(v17[0]);
      v13 = (__int64 *)sub_180029E58((__int64 *)(a1 + 128), v12);
      v14 = v13[1];
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        v14 = v13[1];
      }
      v15 = *v13;
      v16[0] = v15;
      v16[1] = v14;
      if ( v15 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 40LL))(v15, a2);
      sub_180010910((__int64)v16);
      sub_180010910((__int64)v17);
      ++v5;
      v6 = v19;
      v7 = v18;
      result = (v19 - (__int64)v18) >> 4;
      v9 = v5;
    }
    while ( v5 < result );
  }
  if ( v7 )
  {
    sub_1800126E8((__int64)v7, v6);
    return sub_180010884(v18, (v20 - (_QWORD)v18) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return result;
}

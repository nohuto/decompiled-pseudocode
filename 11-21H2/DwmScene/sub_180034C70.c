/*
 * XREFs of sub_180034C70 @ 0x180034C70
 * Callers:
 *     sub_180031EE8 @ 0x180031EE8 (sub_180031EE8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180030860 @ 0x180030860 (sub_180030860.c)
 *     sub_1800337A4 @ 0x1800337A4 (sub_1800337A4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180034C70(__int64 a1, int a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rcx
  _QWORD *v12; // rax
  unsigned int v13; // ebx
  __int128 v15; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h] BYREF
  char v21; // [rsp+78h] [rbp-8h]
  int v22; // [rsp+A0h] [rbp+20h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+30h]

  v23 = a2;
  v22 = 0;
  sub_18002C460(a1 + 8, (__int64)&v20);
  v15 = 0LL;
  if ( v22 )
  {
    v3 = (__int64 *)sub_1800337A4((__int64 *)(a1 + 1080), &v22);
    v4 = v3[1];
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v4 = v3[1];
    }
    v5 = *v3;
    v16[0] = 0LL;
    *(_QWORD *)&v15 = v5;
    v16[1] = 0LL;
    *((_QWORD *)&v15 + 1) = v4;
    sub_180010910((__int64)v16);
  }
  v23 = *(_DWORD *)(a1 + 1096);
  *(_DWORD *)(a1 + 1096) = v23 + 1;
  v6 = sub_18001D684();
  v7 = v6;
  v24 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Utils::JsonConfigurationManager>::`vftable';
    sub_180030860(v6 + 16, &v23, &v15);
  }
  else
  {
    v7 = 0LL;
  }
  v19[0] = v7 + 16;
  v19[1] = v7;
  if ( v7 != -16 )
  {
    v8 = *(_QWORD *)(v7 + 32);
    if ( !v8 || !*(_DWORD *)(v8 + 8) )
    {
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v17[0] = v7 + 16;
      v17[1] = v7;
      v9 = 0LL;
      v10 = 0LL;
      if ( v7 )
      {
        v9 = v7 + 16;
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
        v10 = v7;
      }
      *(_QWORD *)(v7 + 24) = v9;
      v11 = *(volatile signed __int32 **)(v7 + 32);
      *(_QWORD *)(v7 + 32) = v10;
      if ( v11 && _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      sub_180010910((__int64)v17);
    }
  }
  v12 = (_QWORD *)sub_1800337A4((__int64 *)(a1 + 1080), (int *)&v23);
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v18[0] = *v12;
  *v12 = v7 + 16;
  v18[1] = v12[1];
  v12[1] = v7;
  sub_180010910((__int64)v18);
  v13 = v23;
  sub_180010910((__int64)v19);
  sub_180010910((__int64)&v15);
  if ( v21 )
    j_LanguageEnumProc(v20);
  return v13;
}

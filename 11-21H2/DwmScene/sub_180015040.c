/*
 * XREFs of sub_180015040 @ 0x180015040
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180015040(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  __int128 v19; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21[2]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v24; // [rsp+70h] [rbp-18h] BYREF
  char v25; // [rsp+78h] [rbp-10h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 40);
      if ( v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
        v5 = *(_QWORD *)(v4 + 40);
      }
      v6 = *(_QWORD *)(v4 + 32);
      v21[0] = v6;
      v21[1] = v5;
      v19 = 0LL;
      v7 = *(_QWORD *)(v6 + 80);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 8);
        while ( v8 )
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8);
          if ( v9 == v8 )
          {
            v19 = *(_OWORD *)(v6 + 72);
            break;
          }
        }
      }
      sub_18002C460(v19 + 16, &v24);
      sub_180010910((__int64)&v19);
      sub_18001490C(v21[0], v23);
      if ( a2 )
        v10 = a2 + 2;
      else
        v10 = (__int64 *)(qword_1801F7498 + 96);
      v11 = v10[1];
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
        v11 = v10[1];
      }
      v12 = *v10;
      v20[0] = *v10;
      v20[1] = v11;
      v13 = v23[0];
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
        v12 = v20[0];
      }
      v22[0] = *(_QWORD *)(v13 + 88);
      *(_QWORD *)(v13 + 88) = v12;
      v22[1] = *(_QWORD *)(v13 + 96);
      *(_QWORD *)(v13 + 96) = v11;
      sub_180010910((__int64)v22);
      sub_180010910((__int64)v20);
      v14 = (__int64 *)a1[1];
      if ( v14 != a2 )
      {
        if ( a2 )
        {
          (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
          v14 = (__int64 *)a1[1];
        }
        a1[1] = a2;
        if ( v14 )
          (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
      }
      sub_180010910((__int64)v23);
      if ( v25 )
        j_LanguageEnumProc(v24, v15, v16, v17);
      sub_180010910((__int64)v21);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F364(
      retaddr,
      64LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}

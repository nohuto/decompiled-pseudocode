/*
 * XREFs of sub_180015360 @ 0x180015360
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001483C @ 0x18001483C (sub_18001483C.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     sub_180050984 @ 0x180050984 (sub_180050984.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180015360(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rdx
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  __int128 v17; // [rsp+20h] [rbp-78h] BYREF
  __int128 v18; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+60h] [rbp-38h] BYREF
  char v22; // [rsp+68h] [rbp-30h]
  __int64 v23[5]; // [rsp+70h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  try
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    v3 = *(_QWORD *)(v2 + 40);
    if ( v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v3 = *(_QWORD *)(v2 + 40);
    }
    v4 = *(_QWORD *)(v2 + 32);
    v20[0] = v4;
    v20[1] = v3;
    v17 = 0LL;
    v5 = *(_QWORD *)(v4 + 80);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      while ( v6 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
        if ( v7 == v6 )
        {
          v17 = *(_OWORD *)(v4 + 72);
          break;
        }
      }
    }
    sub_18002C460(v17 + 16, &v21);
    sub_180010910((__int64)&v17);
    sub_18001483C(v20[0], v19);
    v8 = a1[1];
    if ( v8 )
      sub_180050984(v19[0], v8 + 32);
    else
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 16LL))(v19[0]);
    v18 = 0LL;
    v9 = *(_QWORD *)(v4 + 80);
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      while ( v10 )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
        if ( v11 == v10 )
        {
          v18 = *(_OWORD *)(v4 + 72);
          break;
        }
      }
    }
    v12 = sub_1800129F4(v23, (__int64)&qword_1801F7FD8);
    sub_180046AE0(v18, v12);
    sub_180010910((__int64)&v18);
    sub_180010910((__int64)v19);
    if ( v22 )
      j_LanguageEnumProc(v21, v13, v14, v15);
    sub_180010910((__int64)v20);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F364(
      retaddr,
      118LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}

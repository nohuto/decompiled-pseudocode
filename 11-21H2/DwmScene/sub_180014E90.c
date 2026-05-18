/*
 * XREFs of sub_180014E90 @ 0x180014E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180053418 @ 0x180053418 (sub_180053418.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180014E90(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 v9; // r8
  __int64 v10; // rcx
  __int128 v11; // rax
  char v12; // bl
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  __int128 v17; // [rsp+20h] [rbp-78h] BYREF
  __int128 v18; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20[2]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v21; // [rsp+60h] [rbp-38h] BYREF
  _QWORD v22[2]; // [rsp+70h] [rbp-28h] BYREF
  __int64 v23; // [rsp+80h] [rbp-18h] BYREF
  char v24; // [rsp+88h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    v4 = *(_QWORD *)(v3 + 40);
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v4 = *(_QWORD *)(v3 + 40);
    }
    v5 = *(_QWORD *)(v3 + 32);
    v20[0] = v5;
    v20[1] = v4;
    v17 = 0LL;
    v6 = *(_QWORD *)(v5 + 80);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
        if ( v8 == v7 )
        {
          v17 = *(_OWORD *)(v5 + 72);
          break;
        }
      }
    }
    sub_18002C460(v17 + 16, &v23);
    sub_180010910((__int64)&v17);
    sub_18001490C(v20[0], v22);
    v9 = v22[0];
    if ( a2 )
    {
      v10 = *(_QWORD *)(a2 + 24);
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v10 = *(_QWORD *)(a2 + 24);
      }
      v19[0] = *(_QWORD *)(a2 + 16);
      v19[1] = v10;
      *(_QWORD *)&v11 = v19;
      v12 = 1;
    }
    else
    {
      v21 = 0LL;
      *(_QWORD *)&v11 = &v21;
      v12 = 2;
    }
    v18 = 0LL;
    *((_QWORD *)&v11 + 1) = *(_QWORD *)(v11 + 8);
    if ( *((_QWORD *)&v11 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL));
    *(_QWORD *)&v11 = *(_QWORD *)v11;
    v18 = v11;
    sub_180053418(v9, &v18);
    if ( (v12 & 2) != 0 )
    {
      v12 &= ~2u;
      sub_180010910((__int64)&v21);
    }
    if ( (v12 & 1) != 0 )
      sub_180010910((__int64)v19);
    sub_180010910((__int64)v22);
    if ( v24 )
      j_LanguageEnumProc(v23, v13, v14, v15);
    sub_180010910((__int64)v20);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F364(
      retaddr,
      87LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}

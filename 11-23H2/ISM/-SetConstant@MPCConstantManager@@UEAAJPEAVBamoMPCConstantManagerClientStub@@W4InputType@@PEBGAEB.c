/*
 * XREFs of ?SetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x1800ACBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x1800AB0A8 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 */

__int64 __fastcall MPCConstantManager::SetConstant(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        PROPVARIANT *propvarIn,
        __int64 a6)
{
  HRESULT v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64, __int64); // rsi
  __int64 v14; // rdx
  HRESULT v15; // eax
  HRESULT v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64, _QWORD); // rsi
  unsigned int v21; // eax
  __int64 v22; // [rsp+20h] [rbp-30h]
  ULONGLONG pullRet; // [rsp+28h] [rbp-28h] BYREF
  DOUBLE pdblRet[2]; // [rsp+30h] [rbp-20h] BYREF
  __m128i v25; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( *(_WORD *)propvarIn == 4 || *(_WORD *)propvarIn == 5 )
  {
    v16 = PropVariantToDouble(propvarIn, pdblRet);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x103,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        (const char *)(unsigned int)v16,
        v22);
    v17 = a6;
    v18 = -1LL;
    BYTE4(v22) = 2;
    v19 = *(_QWORD *)(a6 + 8);
    v25.m128i_i64[0] = a4;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD))(v19 + 24);
    do
      ++v18;
    while ( *(_WORD *)(a4 + 2 * v18) );
    v25.m128i_i64[1] = v18;
    *(float *)&v22 = pdblRet[0];
    v21 = MPCConstantManager::ChangeConstant(a1, a3, &v25, v22);
    return v20(v17 + 8, v21);
  }
  else
  {
    if ( *(_WORD *)propvarIn == 11 )
    {
      v15 = PropVariantToBoolean(propvarIn, (BOOL *)&propvarIn);
      if ( v15 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFE,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v15,
          v22);
      v11 = a6;
      LOBYTE(v22) = (_DWORD)propvarIn != 0;
      BYTE4(v22) = 1;
      v25.m128i_i64[0] = a4;
      v12 = -1LL;
      v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL);
      do
        ++v12;
      while ( *(_WORD *)(a4 + 2 * v12) );
    }
    else
    {
      if ( *(_WORD *)propvarIn != 21 )
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL))(a6 + 8, 2147942487LL);
      v10 = PropVariantToUInt64(propvarIn, &pullRet);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFA,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v10,
          v22);
      v11 = a6;
      v12 = -1LL;
      BYTE4(v22) = 0;
      v25.m128i_i64[0] = a4;
      v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL);
      LODWORD(v22) = pullRet;
      do
        ++v12;
      while ( *(_WORD *)(a4 + 2 * v12) );
    }
    v25.m128i_i64[1] = v12;
    v14 = (unsigned int)MPCConstantManager::ChangeConstant(a1, a3, &v25, v22);
    return v13(v11 + 8, v14);
  }
}

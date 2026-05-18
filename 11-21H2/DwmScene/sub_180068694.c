/*
 * XREFs of sub_180068694 @ 0x180068694
 * Callers:
 *     sub_18006865C @ 0x18006865C (sub_18006865C.c)
 *     sub_1800688C8 @ 0x1800688C8 (sub_1800688C8.c)
 *     sub_18008918C @ 0x18008918C (sub_18008918C.c)
 *     sub_180089950 @ 0x180089950 (sub_180089950.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008BE10 @ 0x18008BE10 (sub_18008BE10.c)
 *     sub_18008C410 @ 0x18008C410 (sub_18008C410.c)
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 *     sub_1800A956C @ 0x1800A956C (sub_1800A956C.c)
 *     sub_1800AAA68 @ 0x1800AAA68 (sub_1800AAA68.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180030740 @ 0x180030740 (sub_180030740.c)
 *     sub_180066E6C @ 0x180066E6C (sub_180066E6C.c)
 *     sub_180067D9C @ 0x180067D9C (sub_180067D9C.c)
 *     sub_1800695C8 @ 0x1800695C8 (sub_1800695C8.c)
 *     sub_1800948D4 @ 0x1800948D4 (sub_1800948D4.c)
 *     sub_180095990 @ 0x180095990 (sub_180095990.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180068694(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rcx
  __int64 v16; // rbx
  __int64 *v17; // rbx
  __int64 v18; // rsi
  __int64 *v19; // r9
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r9
  _QWORD *v23; // r8
  _QWORD v25[3]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v27[10]; // [rsp+60h] [rbp-1h] BYREF
  int v28; // [rsp+C0h] [rbp+5Fh] BYREF
  _QWORD *v29; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v30; // [rsp+D0h] [rbp+6Fh] BYREF

  v29 = a2;
  v9 = sub_18001D684();
  v10 = v9;
  v30 = v9;
  if ( v9 )
  {
    *(_OWORD *)v9 = 0LL;
    *(_DWORD *)(v9 + 8) = 1;
    *(_DWORD *)(v9 + 12) = 1;
    *(_QWORD *)v9 = &std::_Ref_count_obj2<Spectre::Engine::ShaderPipeline>::`vftable';
    sub_180066E6C();
  }
  else
  {
    v10 = 0LL;
  }
  v11 = (_QWORD *)(v10 + 16);
  *a2 = v10 + 16;
  a2[1] = v10;
  if ( v10 != -16 )
  {
    v12 = *(_QWORD *)(v10 + 24);
    if ( !v12 || !*(_DWORD *)(v12 + 8) )
    {
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v10 = a2[1];
      }
      v25[0] = v11;
      v25[1] = v10;
      v13 = 0LL;
      v14 = 0LL;
      if ( v10 )
      {
        v13 = v11;
        v14 = v10;
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
      }
      *v11 = v13;
      v15 = (volatile signed __int32 *)v11[1];
      v11[1] = v14;
      if ( v15 && _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      sub_180010910((__int64)v25);
    }
  }
  v26[0] = a3;
  v26[1] = a4;
  sub_1800948D4(*a2, v26);
  if ( a5 )
  {
    v16 = *a2;
    v27[2] = 0LL;
    v27[3] = 15LL;
    LOBYTE(v27[0]) = 0;
    sub_180012190(v27, byte_180128042, 0LL);
    sub_180095990(v16, v27);
  }
  v28 = sub_1800695C8(a1);
  if ( !v28 )
    sub_18001F2B4(
      &stru_1801EA448,
      2,
      "ShaderFamily::CreatePipeline() -- shaderModel is in invalid state. Pipeline creation must happen during a BeginSha"
      "derModel() / EndShaderModel() block.");
  v17 = (__int64 *)sub_180067D9C((__int64 *)(a1 + 416), &v28);
  v18 = *v17;
  if ( v17[1] == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list too long");
  v19 = (__int64 *)sub_180011088(0x20uLL);
  v19[2] = 0LL;
  v19[3] = 0LL;
  v20 = a2[1];
  if ( v20 )
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
  v19[2] = *a2;
  v19[3] = a2[1];
  ++v17[1];
  v29 = (_QWORD *)v18;
  v30 = *(_QWORD *)(v18 + 8);
  sub_180030740(v19, (__int64 *)&v29);
  sub_180030740((__int64 *)(v21 + 8), &v30);
  *(_QWORD *)(v18 + 8) = v22;
  *v23 = v22;
  return a2;
}

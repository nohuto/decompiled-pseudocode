/*
 * XREFs of sub_180016778 @ 0x180016778
 * Callers:
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18002C3FC @ 0x18002C3FC (sub_18002C3FC.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_180037E5C @ 0x180037E5C (sub_180037E5C.c)
 *     sub_1800D8F04 @ 0x1800D8F04 (sub_1800D8F04.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_180016778(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // r10
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  volatile signed __int32 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rcx
  __int128 v22; // [rsp+20h] [rbp-49h] BYREF
  __int128 v23; // [rsp+30h] [rbp-39h] BYREF
  __int128 v24; // [rsp+40h] [rbp-29h] BYREF
  __int128 v25; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-9h] BYREF
  __int128 v27; // [rsp+70h] [rbp+7h] BYREF
  __int64 v28; // [rsp+80h] [rbp+17h] BYREF
  char v29; // [rsp+88h] [rbp+1Fh]

  v8 = sub_18001D684(4648LL);
  if ( v8 )
  {
    v22 = 0LL;
    v9 = *(_QWORD *)(a1 + 472);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = *(_QWORD *)(a1 + 472);
    }
    *(_QWORD *)&v22 = *(_QWORD *)(a1 + 464);
    *((_QWORD *)&v22 + 1) = v9;
    v10 = (_QWORD *)sub_1800D8F04(v8, a1, &v22);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = sub_18001D684(24LL);
  v12 = v11;
  if ( v11 )
  {
    *(_DWORD *)(v11 + 8) = 1;
    *(_DWORD *)(v11 + 12) = 1;
    *(_QWORD *)v11 = &std::_Ref_count<Spectre::Engine::D3D11::RenderDeviceD3D11>::`vftable';
    *(_QWORD *)(v11 + 16) = v10;
  }
  else
  {
    v12 = 0LL;
  }
  *(_QWORD *)&v25 = v10;
  *((_QWORD *)&v25 + 1) = v12;
  if ( v10 )
  {
    v13 = v10[2];
    if ( !v13 || !*(_DWORD *)(v13 + 8) )
    {
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v26[0] = v10;
      v26[1] = v12;
      v14 = 0LL;
      v15 = 0LL;
      if ( v12 )
      {
        v14 = v10;
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
        v15 = v12;
      }
      v10[1] = v14;
      v16 = (volatile signed __int32 *)v10[2];
      v10[2] = v15;
      if ( v16 && _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      sub_180010910((__int64)v26);
    }
  }
  sub_18002C3FC(v10 + 3, &v28);
  (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*v10 + 240LL))(v10, a3, a4);
  v23 = 0LL;
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  *(_QWORD *)&v23 = v10;
  *((_QWORD *)&v23 + 1) = v12;
  sub_180034E40(a1, &v23);
  sub_180010910((__int64)&v23);
  v27 = 0LL;
  v24 = 0LL;
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  *(_QWORD *)&v24 = v10;
  *((_QWORD *)&v24 + 1) = v12;
  sub_180037E5C(a1, 7LL, &v24, &v27);
  *a2 = v10;
  a2[1] = v12;
  v25 = 0LL;
  if ( v29 )
    j_LanguageEnumProc(v28, v17, v18, v19);
  sub_180010910((__int64)&v25);
  sub_180010910((__int64)(a3 + 9));
  v20 = (char *)a3[6];
  if ( v20 )
  {
    sub_180010884(v20, (a3[8] - (_QWORD)v20) & 0xFFFFFFFFFFFFFFFCuLL);
    a3[6] = 0LL;
    a3[7] = 0LL;
    a3[8] = 0LL;
  }
  return a2;
}

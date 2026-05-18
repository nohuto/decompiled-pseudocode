/*
 * XREFs of sub_1800D78AC @ 0x1800D78AC
 * Callers:
 *     sub_1800DA3D0 @ 0x1800DA3D0 (sub_1800DA3D0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180018350 @ 0x180018350 (sub_180018350.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180028DDC @ 0x180028DDC (sub_180028DDC.c)
 *     sub_18002C358 @ 0x18002C358 (sub_18002C358.c)
 *     sub_18002C730 @ 0x18002C730 (sub_18002C730.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800D8738 @ 0x1800D8738 (sub_1800D8738.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall sub_1800D78AC(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  volatile signed __int32 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int64 v25; // rdx
  __int64 v27; // [rsp+28h] [rbp-49h] BYREF
  char v28; // [rsp+30h] [rbp-41h]
  __int128 v29; // [rsp+38h] [rbp-39h] BYREF
  __int128 v30; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v31[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v32; // [rsp+68h] [rbp-9h] BYREF
  char v33; // [rsp+70h] [rbp-1h]
  _QWORD v34[2]; // [rsp+78h] [rbp+7h] BYREF
  __int128 v35[3]; // [rsp+88h] [rbp+17h] BYREF

  sub_18002C730((__int64)(a1 + 3));
  v27 = 0LL;
  v28 = 0;
  if ( sub_18002850C((__int64)a1) )
  {
    v10 = sub_180028DDC(v9, (__int64)&v32);
    if ( &v27 != (__int64 *)v10 )
    {
      v27 = *(_QWORD *)v10;
      v28 = *(_BYTE *)(v10 + 8);
      *(_QWORD *)v10 = 0LL;
      *(_BYTE *)(v10 + 8) = 0;
    }
    if ( v33 )
      j_LanguageEnumProc(v32);
  }
  v11 = sub_18001D684();
  v12 = v11;
  if ( v11 )
  {
    *(_OWORD *)v11 = 0LL;
    *(_DWORD *)(v11 + 8) = 1;
    *(_DWORD *)(v11 + 12) = 1;
    *(_QWORD *)v11 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::RenderOutputD3D11CoreWindow>::`vftable';
    sub_1800D8738(v11 + 16, a3, a4, a5, 0, v27);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = v12 + 16;
  *a2 = v12 + 16;
  a2[1] = v12;
  if ( v12 != -16 )
  {
    v14 = *(_QWORD *)(v12 + 88);
    if ( !v14 || !*(_DWORD *)(v14 + 8) )
    {
      if ( v12 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
        v12 = a2[1];
      }
      v34[0] = v13;
      v34[1] = v12;
      v15 = 0LL;
      v16 = 0LL;
      if ( v12 )
      {
        v15 = v13;
        v16 = v12;
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
      }
      *(_QWORD *)(v13 + 64) = v15;
      v17 = *(volatile signed __int32 **)(v13 + 72);
      *(_QWORD *)(v13 + 72) = v16;
      if ( v17 && _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      sub_180010910((__int64)v34);
    }
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  v18 = a2[1];
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = a2[1];
  }
  v19 = *a2;
  *(_QWORD *)&v29 = *a2;
  *((_QWORD *)&v29 + 1) = v18;
  v20 = a1[32];
  if ( v20 == a1[33] )
  {
    sub_180018350(a1 + 31, (char *)v20, &v29);
  }
  else
  {
    *(_QWORD *)v20 = v19;
    *(_QWORD *)(v20 + 8) = v18;
    v29 = 0LL;
    a1[32] += 16LL;
  }
  sub_180010910((__int64)&v29);
  v30 = 0LL;
  v21 = a2[1];
  if ( v21 )
  {
    *(_QWORD *)&v30 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
    *((_QWORD *)&v30 + 1) = v21;
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 12));
  }
  v35[0] = 0LL;
  v22 = a1[2];
  if ( !v22 )
LABEL_35:
    sub_1800120F4();
  v23 = *(_DWORD *)(v22 + 8);
  do
  {
    if ( !v23 )
      goto LABEL_35;
    v24 = v23;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 8), v23 + 1, v23);
  }
  while ( v24 != v23 );
  v25 = a1[2];
  v31[0] = (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL);
  v31[1] = v25;
  v35[0] = 0LL;
  sub_18002C358((__int64)v31, (__int64)&v30);
  sub_180010910((__int64)v35);
  if ( v28 )
    j_LanguageEnumProc(v27);
  return a2;
}

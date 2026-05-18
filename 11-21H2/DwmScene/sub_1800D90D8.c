/*
 * XREFs of sub_1800D90D8 @ 0x1800D90D8
 * Callers:
 *     sub_1800D9980 @ 0x1800D9980 (sub_1800D9980.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_1800299BC @ 0x1800299BC (sub_1800299BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D90D8(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char *v10; // rdi
  char *v11; // rcx
  __int64 v12; // rcx
  char *v13; // rdi
  char *v14; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  v2 = sub_180028544(a1);
  sub_18001F2B4(&stru_1801EA4C8, 3, "RenderDeviceD3D11 destructor -- RenderDeviceID=%d", v2);
  sub_18001F2B4(&stru_1801EA4C8, 3, "-------------------------------------------------");
  v3 = *(_QWORD *)(a1 + 4640);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 4640) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 4624);
  if ( v4 >= 8 )
    sub_180010884(*(char **)(a1 + 4600), 2 * v4 + 2);
  *(_QWORD *)(a1 + 4616) = 0LL;
  *(_QWORD *)(a1 + 4624) = 7LL;
  *(_WORD *)(a1 + 4600) = 0;
  v5 = *(_QWORD *)(a1 + 4280);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 4280) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *(_QWORD *)(a1 + 4272);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 4272) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *(_QWORD *)(a1 + 4264);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 4264) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *(_QWORD *)(a1 + 4256);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 4256) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 4168));
  v9 = *(_QWORD *)(a1 + 4152);
  v10 = *(char **)(v9 + 8);
  if ( !v10[25] )
  {
    do
    {
      sub_1800299BC(a1 + 4152, a1 + 4152, *((char **)v10 + 2));
      v11 = v10;
      v10 = *(char **)v10;
      sub_180010884(v11, 0x28uLL);
    }
    while ( !v10[25] );
    v9 = *(_QWORD *)(a1 + 4152);
  }
  sub_180010884((char *)v9, 0x28uLL);
  v12 = *(_QWORD *)(a1 + 4136);
  v13 = *(char **)(v12 + 8);
  if ( !v13[25] )
  {
    do
    {
      sub_1800299BC(a1 + 4136, a1 + 4136, *((char **)v13 + 2));
      v14 = v13;
      v13 = *(char **)v13;
      sub_180010884(v14, 0x28uLL);
    }
    while ( !v13[25] );
    v12 = *(_QWORD *)(a1 + 4136);
  }
  sub_180010884((char *)v12, 0x28uLL);
  return sub_180027830(a1);
}

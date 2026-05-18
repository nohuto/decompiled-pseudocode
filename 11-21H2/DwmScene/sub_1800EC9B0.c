/*
 * XREFs of sub_1800EC9B0 @ 0x1800EC9B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180096358 @ 0x180096358 (sub_180096358.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800ECC88 @ 0x1800ECC88 (sub_1800ECC88.c)
 *     sub_1800ECFC0 @ 0x1800ECFC0 (sub_1800ECFC0.c)
 *     sub_1800ED178 @ 0x1800ED178 (sub_1800ED178.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800EC9B0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _BYTE *, _QWORD *); // r12
  __int64 v15; // rcx
  int v16; // eax
  __int64 (__fastcall *v17)(__int64, _BYTE *, _QWORD *); // r12
  __int64 v18; // rcx
  int v19; // eax
  __int64 (__fastcall *v20)(__int64, _BYTE *, _QWORD *); // r15
  __int64 v21; // rcx
  int v22; // eax
  __int64 v24; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+28h] [rbp-D8h]
  __int128 v26; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v27; // [rsp+40h] [rbp-C0h]
  __int128 v28; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v29[40]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v30[64]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[272]; // [rsp+C0h] [rbp-40h] BYREF

  v27 = a2;
  v4 = *a2;
  if ( v4 )
  {
    v5 = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    v24 = a1[12];
    a1[12] = v4;
    v25 = a1[13];
    a1[13] = v5;
    v6 = &v24;
  }
  else
  {
    v7 = sub_18001D684();
    if ( v7 )
    {
      *(_DWORD *)(v7 + 8) = 1;
      *(_DWORD *)(v7 + 12) = 1;
      *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Engine::RenderStateDesc>::`vftable';
      sub_180096358(v7 + 16);
    }
    else
    {
      v8 = 0LL;
    }
    v28 = 0LL;
    v24 = a1[12];
    a1[12] = v8 + 16;
    v25 = a1[13];
    a1[13] = v8;
    sub_180010910((__int64)&v24);
    v6 = (__int64 *)&v28;
  }
  sub_180010910((__int64)v6);
  v26 = 0LL;
  v9 = a1[10];
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 8);
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
      if ( v11 == v10 )
      {
        v12 = a1[9];
        v26 = *(_OWORD *)(a1 + 9);
        goto LABEL_12;
      }
    }
  }
  v12 = v26;
LABEL_12:
  sub_1800DA968(v12, &v24);
  sub_1800ED178(a1[12], v29);
  v13 = v24;
  v14 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v24 + 176LL);
  v15 = a1[14];
  if ( v15 )
  {
    a1[14] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v14(v13, v29, a1 + 14);
  sub_1800DD668(v12, v16);
  sub_1800ECC88(a1[12], v31);
  v17 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v13 + 160LL);
  v18 = a1[15];
  if ( v18 )
  {
    a1[15] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v17(v13, v31, a1 + 15);
  sub_1800DD668(v12, v19);
  sub_1800ECFC0(a1[12], v30);
  v20 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v13 + 168LL);
  v21 = a1[16];
  if ( v21 )
  {
    a1[16] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v20(v13, v30, a1 + 16);
  sub_1800DD668(v12, v22);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  sub_180010910((__int64)&v26);
  return sub_180010910((__int64)a2);
}

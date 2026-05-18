/*
 * XREFs of sub_1800166AC @ 0x1800166AC
 * Callers:
 *     sub_1800167D0 @ 0x1800167D0 (sub_1800167D0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010214 @ 0x180010214 (sub_180010214.c)
 *     sub_180013A90 @ 0x180013A90 (sub_180013A90.c)
 *     sub_18001C1B8 @ 0x18001C1B8 (sub_18001C1B8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800166AC(__int64 *a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (_DWORD *)sub_18001C1B8(56LL, &unk_180106A06);
  v5 = (__int64)v4;
  v9 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &ISpectreMesh::`vftable';
    v4[3] = 1;
    *(_QWORD *)v4 = off_1800FAB50;
    if ( qword_1801D3388 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801D3388 + 8LL))(qword_1801D3388);
    *(_QWORD *)v5 = off_1800FA668;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_DWORD *)(v5 + 32) = 0;
    *(_DWORD *)(v5 + 36) = 0;
    *(_DWORD *)(v5 + 40) = 0;
    *(_DWORD *)(v5 + 44) = 1065353216;
    *(_DWORD *)(v5 + 48) = 1065353216;
    *(_DWORD *)(v5 + 52) = 1065353216;
    v8 = v5;
    v9 = 0LL;
    v6 = sub_180013A90(v5, a2);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      sub_18000E72C(&v8);
      v6 = 0;
    }
    else
    {
      sub_18000E72C(&v8);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  sub_180010214(&v9);
  return (unsigned int)v6;
}

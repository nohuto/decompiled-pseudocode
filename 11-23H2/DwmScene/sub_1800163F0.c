/*
 * XREFs of sub_1800163F0 @ 0x1800163F0
 * Callers:
 *     sub_180016530 @ 0x180016530 (sub_180016530.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010214 @ 0x180010214 (sub_180010214.c)
 *     sub_18001278C @ 0x18001278C (sub_18001278C.c)
 *     sub_18001C1B8 @ 0x18001C1B8 (sub_18001C1B8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800163F0(__int64 *a1, int *a2, _QWORD *a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (_DWORD *)sub_18001C1B8(208LL, &unk_180106A06);
  v7 = (__int64)v6;
  v11 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = &ISpectreLightNode::`vftable';
    v6[3] = 1;
    *(_QWORD *)v6 = off_1800FA6E0;
    if ( qword_1801D3388 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801D3388 + 8LL))(qword_1801D3388);
    *(_QWORD *)v7 = off_1800FAA58;
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = 0LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_QWORD *)(v7 + 52) = 0LL;
    *(_QWORD *)(v7 + 60) = 0LL;
    *(_DWORD *)(v7 + 68) = 1065353216;
    *(_QWORD *)(v7 + 184) = 0LL;
    *(_QWORD *)(v7 + 192) = 0LL;
    *(_DWORD *)(v7 + 200) = 0;
    v10 = v7;
    v11 = 0LL;
    v8 = sub_18001278C(v7, *a2, a3);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *a1 = v7;
      sub_18000E72C(&v10);
      v8 = 0;
    }
    else
    {
      sub_18000E72C(&v10);
    }
  }
  else
  {
    v8 = -2147024882;
  }
  sub_180010214(&v11);
  return (unsigned int)v8;
}

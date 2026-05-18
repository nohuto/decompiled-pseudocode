/*
 * XREFs of sub_180016A78 @ 0x180016A78
 * Callers:
 *     sub_180016B9C @ 0x180016B9C (sub_180016B9C.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010214 @ 0x180010214 (sub_180010214.c)
 *     sub_18001C00C @ 0x18001C00C (sub_18001C00C.c)
 *     sub_18001C1B8 @ 0x18001C1B8 (sub_18001C1B8.c)
 *     sub_1800A3A14 @ 0x1800A3A14 (sub_1800A3A14.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180016A78(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (_DWORD *)sub_18001C1B8(200LL, &unk_180106A06);
  v5 = v4;
  v9 = v4;
  v8 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &ISpectreWorld::`vftable';
    v4[3] = 1;
    *(_QWORD *)v4 = off_1800FAA10;
    if ( qword_1801D3388 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801D3388 + 8LL))(qword_1801D3388);
    *v5 = off_1800FA698;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v5[4] = 0LL;
    v5[5] = 0LL;
    sub_1800A3A14(v5 + 6);
    v8 = v5;
    v9 = 0LL;
    v6 = sub_18001C00C(v5, a2);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      *a1 = v5;
      sub_18000E72C((__int64 *)&v8);
      v6 = 0;
    }
    else
    {
      sub_18000E72C((__int64 *)&v8);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  sub_180010214(&v9);
  return (unsigned int)v6;
}

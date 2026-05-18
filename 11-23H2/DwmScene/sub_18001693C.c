/*
 * XREFs of sub_18001693C @ 0x18001693C
 * Callers:
 *     sub_180016A48 @ 0x180016A48 (sub_180016A48.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010214 @ 0x180010214 (sub_180010214.c)
 *     sub_18001B8FC @ 0x18001B8FC (sub_18001B8FC.c)
 *     sub_18001C1B8 @ 0x18001C1B8 (sub_18001C1B8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001693C(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (_DWORD *)sub_18001C1B8(32LL, &unk_180106A06);
  v5 = v4;
  v9 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &ISpectreTexture::`vftable';
    v4[3] = 1;
    *(_QWORD *)v4 = off_1800FA8F8;
    if ( qword_1801D3388 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801D3388 + 8LL))(qword_1801D3388);
    *v5 = off_1800FA8D0;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v8 = v5;
    v9 = 0LL;
    v6 = sub_18001B8FC(v5, a2);
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

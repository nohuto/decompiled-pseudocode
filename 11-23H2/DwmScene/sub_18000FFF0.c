/*
 * XREFs of sub_18000FFF0 @ 0x18000FFF0
 * Callers:
 *     sub_1800100B8 @ 0x1800100B8 (sub_1800100B8.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010128 @ 0x180010128 (sub_180010128.c)
 *     sub_180010214 @ 0x180010214 (sub_180010214.c)
 *     sub_180019608 @ 0x180019608 (sub_180019608.c)
 *     sub_18001C1B8 @ 0x18001C1B8 (sub_18001C1B8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18000FFF0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = sub_18001C1B8(184LL, &unk_180106A06);
  v9 = v4;
  v8 = v4;
  if ( v4 )
  {
    v6 = sub_180010128(v4);
    v8 = v6;
    v9 = 0LL;
    v5 = sub_180019608(v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      sub_18000E72C(&v8);
      v5 = 0;
    }
    else
    {
      sub_18000E72C(&v8);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  sub_180010214(&v9);
  return (unsigned int)v5;
}

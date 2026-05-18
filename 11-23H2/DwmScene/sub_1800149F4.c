/*
 * XREFs of sub_1800149F4 @ 0x1800149F4
 * Callers:
 *     sub_180014AC4 @ 0x180014AC4 (sub_180014AC4.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010214 @ 0x180010214 (sub_180010214.c)
 *     sub_180014AF4 @ 0x180014AF4 (sub_180014AF4.c)
 *     sub_180014DB0 @ 0x180014DB0 (sub_180014DB0.c)
 *     sub_18001506C @ 0x18001506C (sub_18001506C.c)
 *     sub_18001C1B8 @ 0x18001C1B8 (sub_18001C1B8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800149F4(__int64 *a1, __int64 a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (void *)sub_18001C1B8(48LL, &unk_180106A06);
  v11 = v4;
  if ( v4 )
  {
    v6 = sub_180014AF4(v4);
    v10 = 0LL;
    sub_180014DB0(&v10, v6);
    v11 = 0LL;
    v7 = a2;
    v8 = v10;
    v5 = sub_18001506C(v10, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      sub_18000E72C(&v10);
      v5 = 0;
    }
    else
    {
      sub_18000E72C(&v10);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  sub_180010214(&v11);
  return (unsigned int)v5;
}

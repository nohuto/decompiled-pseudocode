/*
 * XREFs of sub_1800E502C @ 0x1800E502C
 * Callers:
 *     sub_1800E61F4 @ 0x1800E61F4 (sub_1800E61F4.c)
 *     sub_1800E657C @ 0x1800E657C (sub_1800E657C.c)
 * Callees:
 *     sub_180010D08 @ 0x180010D08 (sub_180010D08.c)
 *     sub_18005E25C @ 0x18005E25C (sub_18005E25C.c)
 *     sub_18005E3F8 @ 0x18005E3F8 (sub_18005E3F8.c)
 *     sub_1800E4AE8 @ 0x1800E4AE8 (sub_1800E4AE8.c)
 *     sub_1800E4DA0 @ 0x1800E4DA0 (sub_1800E4DA0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800E502C(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // r10
  __int64 v4; // r10
  __int64 v5; // rcx
  __int16 v6; // ax
  __int64 *v7; // r11
  int v8; // r8d
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rcx
  char v15; // al
  __int64 *v16; // r11
  int v17; // r8d
  __int64 v18; // r10
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF
  char v23; // [rsp+48h] [rbp+10h] BYREF

  v1 = (__int64 *)(a1 + 160);
  LOBYTE(v2) = sub_180010D08((_QWORD *)(a1 + 160));
  if ( !(_BYTE)v2 )
  {
    if ( sub_180010D08((_QWORD *)(v3 + 168)) )
    {
      sub_18005E3F8(v4);
      v6 = sub_18005E25C(v5);
      v2 = sub_1800E4AE8(v9, &v22, *v7, v6, v8);
      v10 = 0LL;
      if ( &v23 != (char *)v2 )
      {
        v10 = *v2;
        *v2 = 0LL;
      }
      v11 = *v1;
      *v1 = v10;
      if ( v11 )
        LOBYTE(v2) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = v22;
      if ( v22 )
      {
LABEL_15:
        v22 = 0LL;
        LOBYTE(v2) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    else
    {
      LOBYTE(v2) = sub_180010D08((_QWORD *)(v4 + 176));
      if ( (_BYTE)v2 )
      {
        sub_18005E3F8(v13);
        v15 = sub_18005E25C(v14);
        v2 = sub_1800E4DA0(v18, &v22, *v16, v15, v17);
        v19 = 0LL;
        if ( &v23 != (char *)v2 )
        {
          v19 = *v2;
          *v2 = 0LL;
        }
        v20 = *v1;
        *v1 = v19;
        if ( v20 )
          LOBYTE(v2) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        v12 = v22;
        if ( v22 )
          goto LABEL_15;
      }
    }
  }
  return (char)v2;
}

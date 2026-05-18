/*
 * XREFs of sub_1800E83A0 @ 0x1800E83A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180096E78 @ 0x180096E78 (sub_180096E78.c)
 *     sub_1800E0240 @ 0x1800E0240 (sub_1800E0240.c)
 *     sub_1800F1010 @ 0x1800F1010 (sub_1800F1010.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E83A0(__int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 *v7; // rdx
  char v8; // di
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  _BYTE v14[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  _QWORD v16[2]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  v6 = 0;
  LODWORD(v18) = 0;
  if ( *a2 )
  {
    v7 = sub_180096E78(*a2, v17, *(_DWORD *)(a1 + 88));
    v8 = 1;
    v9 = *v7;
  }
  else
  {
    v15 = 0LL;
    v7 = (__int64 *)v14;
    v8 = 2;
    v9 = 0LL;
  }
  v16[0] = v9;
  v16[1] = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    sub_180010910((__int64)v14);
  }
  if ( (v8 & 1) != 0 )
    sub_180010910((__int64)v17);
  if ( v9 )
  {
    v10 = *(_QWORD *)sub_1800F1010(v9, &v18);
    v11 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = *(_QWORD *)(*a2 + 112);
    if ( v12 )
      v6 = *(_DWORD *)(v12 + 20);
    v6 = sub_1800E0240(v6, 0);
  }
  else
  {
    v10 = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 152LL))(
    *(_QWORD *)(a1 + 144),
    v10,
    v6,
    a3);
  return sub_180010910((__int64)v16);
}

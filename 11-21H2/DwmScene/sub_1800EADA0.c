/*
 * XREFs of sub_1800EADA0 @ 0x1800EADA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18009B364 @ 0x18009B364 (sub_18009B364.c)
 *     sub_1800E6BAC @ 0x1800E6BAC (sub_1800E6BAC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800EADA0(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rdx
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-10h] BYREF

  if ( *a2 )
  {
    v3 = sub_18009B364(*a2, v10, *(_DWORD *)(a1 + 88));
    v4 = 1;
    v5 = *v3;
  }
  else
  {
    v9[1] = 0LL;
    v3 = v9;
    v4 = 2;
    v5 = 0LL;
  }
  v8[0] = v5;
  v8[1] = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    sub_180010910((__int64)v9);
  }
  if ( (v4 & 1) != 0 )
    sub_180010910((__int64)v10);
  sub_1800E6BAC(v9, v8);
  v6 = v9[0];
  if ( v9[0] )
  {
    v6 = *(_QWORD *)(v9[0] + 144);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 136LL))(*(_QWORD *)(a1 + 144), v6);
  sub_180010910((__int64)v9);
  return sub_180010910((__int64)v8);
}

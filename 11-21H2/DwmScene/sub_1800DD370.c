/*
 * XREFs of sub_1800DD370 @ 0x1800DD370
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18003D520 @ 0x18003D520 (sub_18003D520.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DD370(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  sub_18003D520(*(_QWORD ***)(a1 + 272));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 48LL))(*(_QWORD *)(a1 + 272));
  v9 = 0LL;
  v8[0] = *(_QWORD *)(a1 + 272);
  *(_QWORD *)(a1 + 272) = 0LL;
  v8[1] = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 280) = 0LL;
  sub_180010910((__int64)v8);
  sub_180010910((__int64)&v9);
  v2 = *(_QWORD *)(a1 + 4256);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 4256) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_DWORD *)(a1 + 4248) = 6;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4264) + 880LL))(*(_QWORD *)(a1 + 4264));
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4264) + 888LL))(*(_QWORD *)(a1 + 4264));
  v4 = *(_QWORD *)(a1 + 4264);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 4264) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 4272);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 4272) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *(_QWORD *)(a1 + 4280);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 4280) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *(_QWORD *)(a1 + 4640);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 4640) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}

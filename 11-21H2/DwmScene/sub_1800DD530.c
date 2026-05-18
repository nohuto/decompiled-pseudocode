/*
 * XREFs of sub_1800DD530 @ 0x1800DD530
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003D520 @ 0x18003D520 (sub_18003D520.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800DD530(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rax
  void (__fastcall ***v4)(_QWORD, void *, __int64 *); // rdi
  void (__fastcall *v5)(_QWORD, void *, __int64 *); // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD ***)(a1 + 272);
  if ( v2 )
    sub_18003D520(v2);
  v10 = 0LL;
  v3 = sub_1800DA968(a1, &v11);
  v4 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*v3;
  v5 = **(void (__fastcall ***)(_QWORD, void *, __int64 *))*v3;
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v5(v4, &unk_1801BB810, &v10);
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 136LL))(v10);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 48LL))(*(_QWORD *)(a1 + 272));
  v9 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return result;
}

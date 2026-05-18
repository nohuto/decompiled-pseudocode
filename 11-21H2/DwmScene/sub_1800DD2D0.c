/*
 * XREFs of sub_1800DD2D0 @ 0x1800DD2D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800DD2D0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  result = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 4256))(
             *(_QWORD *)(a1 + 4256),
             &unk_1801BB810,
             &v5);
  v4 = v5;
  if ( v5 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 96LL))(v5, a2);
    v4 = v5;
  }
  if ( v4 )
  {
    v5 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}

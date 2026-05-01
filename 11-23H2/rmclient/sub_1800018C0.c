/*
 * XREFs of sub_1800018C0 @ 0x1800018C0
 * Callers:
 *     sub_1800175A0 @ 0x1800175A0 (sub_1800175A0.c)
 *     sub_1800175C0 @ 0x1800175C0 (sub_1800175C0.c)
 * Callees:
 *     sub_180001848 @ 0x180001848 (sub_180001848.c)
 *     sub_180004900 @ 0x180004900 (sub_180004900.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800018C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // ebx
  _QWORD *v8; // r8

  *a3 = 0LL;
  if ( (unsigned int)sub_180004900(a2, &unk_180026170) || (unsigned int)sub_180004900(v3, &unk_1800261B0) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  else
  {
    v7 = sub_180001848(v5, v6);
    if ( v7 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  return (unsigned int)v7;
}

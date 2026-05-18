/*
 * XREFs of sub_1800706E0 @ 0x1800706E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800706E0(__int64 a1, _QWORD *a2, int a3, __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx

  v4 = a3;
  if ( a3 < 0 || a3 >= (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, a4) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v7 = sub_18006B2C0(*a4);
    *a2 = 0LL;
    a2[1] = 0LL;
    v8 = *(_QWORD *)(v7 + 16 * v4 + 16);
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v8 = *(_QWORD *)(v7 + 16 * v4 + 16);
    }
    *a2 = *(_QWORD *)(v7 + 16 * v4 + 8);
    a2[1] = v8;
  }
  return a2;
}

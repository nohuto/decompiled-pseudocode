/*
 * XREFs of sub_1800103A0 @ 0x1800103A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800106DC @ 0x1800106DC (sub_1800106DC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800103A0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( (unsigned int)sub_1800106DC(a2, &unk_1801065E0, a3, a1)
    || (unsigned int)sub_1800106DC(v4, &unk_1801065D0, v5, v6) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}

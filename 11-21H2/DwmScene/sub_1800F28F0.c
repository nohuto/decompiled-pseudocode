/*
 * XREFs of sub_1800F28F0 @ 0x1800F28F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800F28F0(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdi
  char result; // al
  __int64 v6; // rdx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (_QWORD *)(a1 + 536);
  result = sub_1800122D0(a2, (_QWORD *)(a1 + 536));
  if ( result )
  {
    if ( sub_1800122C0(v3) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 336LL))(a1);
      *(_BYTE *)(a1 + 504) = 0;
    }
    v6 = a2[1];
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = a2[1];
    }
    v7[0] = *v3;
    *v3 = *a2;
    v7[1] = v3[1];
    v3[1] = v6;
    sub_180010910((__int64)v7);
    result = sub_1800122C0(v3);
    if ( result )
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1);
      *(_BYTE *)(a1 + 504) = 1;
    }
  }
  return result;
}

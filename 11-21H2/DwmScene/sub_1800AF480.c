/*
 * XREFs of sub_1800AF480 @ 0x1800AF480
 * Callers:
 *     sub_1800B1CA0 @ 0x1800B1CA0 (sub_1800B1CA0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800AF480(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_BYTE *)(a1 + 56) || (result = sub_1800122D0((_QWORD *)(a1 + 24), (_QWORD *)(a1 + 8))) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = (_QWORD *)(a1 + 24);
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = *(_QWORD *)(a1 + 16);
    }
    v8[0] = *v6;
    *v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v5;
    v8[1] = v7;
    sub_180010910((__int64)v8);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, a1 + 24);
  }
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}

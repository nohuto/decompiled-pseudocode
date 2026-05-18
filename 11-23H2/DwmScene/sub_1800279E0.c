/*
 * XREFs of sub_1800279E0 @ 0x1800279E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall sub_1800279E0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v6, a2);
  return *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8LL) == *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL)
      && *(_DWORD *)v4 == *(_DWORD *)a3;
}

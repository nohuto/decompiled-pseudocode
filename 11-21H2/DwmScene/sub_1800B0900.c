/*
 * XREFs of sub_1800B0900 @ 0x1800B0900
 * Callers:
 *     sub_1800B1CA0 @ 0x1800B1CA0 (sub_1800B1CA0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B0900(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  char v5; // [rsp+20h] [rbp-28h]
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  if ( *(_BYTE *)(a1 + 61) )
  {
    v3 = *a2;
    v6 = *(_OWORD *)(a1 + 44);
    v5 = *(_BYTE *)(a1 + 60);
    result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int128 *, char))(v3 + 168))(
               a2,
               a1 + 24,
               *(unsigned int *)(a1 + 40),
               &v6,
               v5);
    *(_BYTE *)(a1 + 61) = 0;
  }
  return result;
}

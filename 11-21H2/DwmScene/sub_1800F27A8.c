/*
 * XREFs of sub_1800F27A8 @ 0x1800F27A8
 * Callers:
 *     sub_1800F1C20 @ 0x1800F1C20 (sub_1800F1C20.c)
 *     sub_1800F1F50 @ 0x1800F1F50 (sub_1800F1F50.c)
 *     sub_1800F2230 @ 0x1800F2230 (sub_1800F2230.c)
 *     sub_1800F2C64 @ 0x1800F2C64 (sub_1800F2C64.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180020FCC @ 0x180020FCC (sub_180020FCC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800F27A8(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v10);
  v9 = 0LL;
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
      if ( v6 == v5 )
      {
        v9 = *(_OWORD *)v3;
        break;
      }
    }
  }
  sub_180020FCC(a2, (__int64 *)&v9);
  sub_180010910((__int64)&v9);
  v7 = v11;
  if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return a2;
}

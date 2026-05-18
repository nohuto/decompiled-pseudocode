/*
 * XREFs of sub_1800E0390 @ 0x1800E0390
 * Callers:
 *     sub_180011740 @ 0x180011740 (sub_180011740.c)
 *     sub_180011B90 @ 0x180011B90 (sub_180011B90.c)
 *     sub_1800DF530 @ 0x1800DF530 (sub_1800DF530.c)
 *     sub_1800DF6B0 @ 0x1800DF6B0 (sub_1800DF6B0.c)
 *     sub_1800DF800 @ 0x1800DF800 (sub_1800DF800.c)
 *     sub_1800DFC90 @ 0x1800DFC90 (sub_1800DFC90.c)
 *     sub_1800E00E0 @ 0x1800E00E0 (sub_1800E00E0.c)
 *     sub_1800E0710 @ 0x1800E0710 (sub_1800E0710.c)
 *     sub_1800E1120 @ 0x1800E1120 (sub_1800E1120.c)
 *     sub_1800E1690 @ 0x1800E1690 (sub_1800E1690.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001872C @ 0x18001872C (sub_18001872C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800E0390(__int64 a1, _QWORD *a2)
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
  v7 = v11;
  if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, v4, v3);
  if ( (_QWORD)v9 )
  {
    sub_18001872C(a2, (__int64 *)&v9);
    sub_180010910((__int64)&v9);
  }
  else
  {
    sub_180010910((__int64)&v9);
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}

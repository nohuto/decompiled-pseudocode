/*
 * XREFs of sub_1800F1050 @ 0x1800F1050
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800F1278 @ 0x1800F1278 (sub_1800F1278.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F1050(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 12LL);
  v5 = *(_QWORD *)(a1 + 104);
  v11 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v10 = 0LL;
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 8);
    while ( v7 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
      if ( v8 == v7 )
      {
        v10 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  ((void (__fastcall *)(__int64, __int128 *, __int64 *, _QWORD))sub_1800F1278)(a2, &v10, &v11, v4);
  sub_180010910((__int64)&v10);
  return a2;
}

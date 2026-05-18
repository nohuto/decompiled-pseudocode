/*
 * XREFs of sub_18003D7E0 @ 0x18003D7E0
 * Callers:
 *     sub_18003D188 @ 0x18003D188 (sub_18003D188.c)
 *     sub_1800E7AE0 @ 0x1800E7AE0 (sub_1800E7AE0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800288E8 @ 0x1800288E8 (sub_1800288E8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D7E0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int64 v6; // rcx
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *(_QWORD *)(a1 + 80);
  v9 = 0LL;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 8);
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4);
      if ( v5 == v4 )
      {
        v6 = *(_QWORD *)(a1 + 72);
        v7 = *(_QWORD *)(a1 + 80);
        *(_QWORD *)&v9 = v6;
        *((_QWORD *)&v9 + 1) = v7;
        if ( v6 )
          *(_DWORD *)(a1 + 104) = sub_1800288E8(v6);
        return sub_180010910((__int64)&v9);
      }
    }
  }
  return sub_180010910((__int64)&v9);
}

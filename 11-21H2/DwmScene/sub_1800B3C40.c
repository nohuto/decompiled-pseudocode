/*
 * XREFs of sub_1800B3C40 @ 0x1800B3C40
 * Callers:
 *     sub_180028864 @ 0x180028864 (sub_180028864.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800B3C40(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a2[1] )
  {
    *(_QWORD *)a1 = *a2;
    v6 = a2[1];
    *(_QWORD *)(a1 + 8) = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
  }
  (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, a1 + 16);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 4;
  if ( !v7 )
    a3 = 4;
  *(_DWORD *)(a1 + 32) = a3;
  if ( v7 )
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
  *(_DWORD *)(a1 + 36) = v8;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_OWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_OWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  sub_180010910((__int64)a2);
  return a1;
}

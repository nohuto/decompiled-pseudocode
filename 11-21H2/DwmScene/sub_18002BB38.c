/*
 * XREFs of sub_18002BB38 @ 0x18002BB38
 * Callers:
 *     sub_180010D18 @ 0x180010D18 (sub_180010D18.c)
 *     sub_180016ED0 @ 0x180016ED0 (sub_180016ED0.c)
 *     sub_1800262D0 @ 0x1800262D0 (sub_1800262D0.c)
 *     sub_180026660 @ 0x180026660 (sub_180026660.c)
 *     sub_18005B914 @ 0x18005B914 (sub_18005B914.c)
 *     sub_180079C78 @ 0x180079C78 (sub_180079C78.c)
 *     sub_1800913B8 @ 0x1800913B8 (sub_1800913B8.c)
 *     sub_180093B40 @ 0x180093B40 (sub_180093B40.c)
 *     sub_1800961B0 @ 0x1800961B0 (sub_1800961B0.c)
 *     sub_1800975AC @ 0x1800975AC (sub_1800975AC.c)
 *     sub_180097FDC @ 0x180097FDC (sub_180097FDC.c)
 *     sub_1800982D8 @ 0x1800982D8 (sub_1800982D8.c)
 *     sub_180098480 @ 0x180098480 (sub_180098480.c)
 *     sub_180098628 @ 0x180098628 (sub_180098628.c)
 *     sub_1800987D0 @ 0x1800987D0 (sub_1800987D0.c)
 *     sub_180098978 @ 0x180098978 (sub_180098978.c)
 *     sub_18009A8F4 @ 0x18009A8F4 (sub_18009A8F4.c)
 * Callees:
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002BB38(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax

  v2 = a2[1];
  v5 = 0LL;
  v6 = 0LL;
  if ( v2 )
  {
    v6 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
    v5 = v2;
  }
  *(_QWORD *)(a1 + 72) = v6;
  v7 = *(volatile signed __int32 **)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v5;
  if ( v7 && _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
  result = sub_180028544(*a2);
  *(_DWORD *)(a1 + 88) = result;
  return result;
}

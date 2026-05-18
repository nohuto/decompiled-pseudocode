/*
 * XREFs of sub_18000C8D4 @ 0x18000C8D4
 * Callers:
 *     sub_1800307C8 @ 0x1800307C8 (sub_1800307C8.c)
 *     sub_180054D3C @ 0x180054D3C (sub_180054D3C.c)
 *     sub_180060DF0 @ 0x180060DF0 (sub_180060DF0.c)
 *     sub_180060E30 @ 0x180060E30 (sub_180060E30.c)
 *     sub_18006120C @ 0x18006120C (sub_18006120C.c)
 *     sub_180067640 @ 0x180067640 (sub_180067640.c)
 *     sub_18006B5A8 @ 0x18006B5A8 (sub_18006B5A8.c)
 *     sub_180079E88 @ 0x180079E88 (sub_180079E88.c)
 *     sub_18007B960 @ 0x18007B960 (sub_18007B960.c)
 *     sub_18007CFD0 @ 0x18007CFD0 (sub_18007CFD0.c)
 *     sub_18008A6B0 @ 0x18008A6B0 (sub_18008A6B0.c)
 *     sub_18008DE00 @ 0x18008DE00 (sub_18008DE00.c)
 *     sub_1800942C4 @ 0x1800942C4 (sub_1800942C4.c)
 *     sub_1800AF520 @ 0x1800AF520 (sub_1800AF520.c)
 *     sub_1800AF9AC @ 0x1800AF9AC (sub_1800AF9AC.c)
 *     sub_1800AFE3C @ 0x1800AFE3C (sub_1800AFE3C.c)
 *     sub_1800B0270 @ 0x1800B0270 (sub_1800B0270.c)
 *     sub_1800B0CB8 @ 0x1800B0CB8 (sub_1800B0CB8.c)
 *     sub_1800B2890 @ 0x1800B2890 (sub_1800B2890.c)
 *     sub_1800B7118 @ 0x1800B7118 (sub_1800B7118.c)
 *     sub_1800E8B70 @ 0x1800E8B70 (sub_1800E8B70.c)
 *     sub_1800F161C @ 0x1800F161C (sub_1800F161C.c)
 * Callees:
 *     sub_18000B53C @ 0x18000B53C (sub_18000B53C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_18000C8D4(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 i; // rbx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; i != a3; ++i )
  {
    result = (_UNKNOWN **)_guard_xfg_dispatch_icall_fptr();
    a1 += a2;
  }
  return result;
}

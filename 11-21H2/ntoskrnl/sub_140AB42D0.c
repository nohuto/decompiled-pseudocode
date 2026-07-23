/*
 * XREFs of sub_140AB42D0 @ 0x140AB42D0
 * Callers:
 *     sub_140346910 @ 0x140346910 (sub_140346910.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_1406A18C0 @ 0x1406A18C0 (sub_1406A18C0.c)
 *     sub_1406A5C00 @ 0x1406A5C00 (sub_1406A5C00.c)
 *     sub_1406B3C34 @ 0x1406B3C34 (sub_1406B3C34.c)
 *     sub_1406DAD3C @ 0x1406DAD3C (sub_1406DAD3C.c)
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 *     sub_140718E30 @ 0x140718E30 (sub_140718E30.c)
 *     sub_14071B730 @ 0x14071B730 (sub_14071B730.c)
 *     sub_14071F6D0 @ 0x14071F6D0 (sub_14071F6D0.c)
 *     sub_140721B68 @ 0x140721B68 (sub_140721B68.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 *     sub_1407C300C @ 0x1407C300C (sub_1407C300C.c)
 *     sub_1407C83F0 @ 0x1407C83F0 (sub_1407C83F0.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 *     sub_14090C1BC @ 0x14090C1BC (sub_14090C1BC.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_140915D20 @ 0x140915D20 (sub_140915D20.c)
 *     sub_140915DB8 @ 0x140915DB8 (sub_140915DB8.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall sub_140AB42D0(__int64 a1)
{
  __int64 result; // rax

  result = ExAcquirePushLockSharedEx(a1 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
  return result;
}

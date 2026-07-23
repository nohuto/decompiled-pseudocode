/*
 * XREFs of sub_1407C0854 @ 0x1407C0854
 * Callers:
 *     sub_1402089E0 @ 0x1402089E0 (sub_1402089E0.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_14067E974 @ 0x14067E974 (sub_14067E974.c)
 *     sub_1406B656C @ 0x1406B656C (sub_1406B656C.c)
 *     sub_1406C1694 @ 0x1406C1694 (sub_1406C1694.c)
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_14071F6D0 @ 0x14071F6D0 (sub_14071F6D0.c)
 *     sub_14072E210 @ 0x14072E210 (sub_14072E210.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C0D40 @ 0x1407C0D40 (sub_1407C0D40.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_1407C64A0 @ 0x1407C64A0 (sub_1407C64A0.c)
 *     sub_14080F9EC @ 0x14080F9EC (sub_14080F9EC.c)
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 *     sub_140915544 @ 0x140915544 (sub_140915544.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 *     sub_1409174A4 @ 0x1409174A4 (sub_1409174A4.c)
 *     sub_140919308 @ 0x140919308 (sub_140919308.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall sub_1407C0854(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = result;
  return result;
}

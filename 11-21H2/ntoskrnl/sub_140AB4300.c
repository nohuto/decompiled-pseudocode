/*
 * XREFs of sub_140AB4300 @ 0x140AB4300
 * Callers:
 *     sub_1402089E0 @ 0x1402089E0 (sub_1402089E0.c)
 *     sub_140346910 @ 0x140346910 (sub_140346910.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_1406A18C0 @ 0x1406A18C0 (sub_1406A18C0.c)
 *     sub_1406A5C00 @ 0x1406A5C00 (sub_1406A5C00.c)
 *     sub_1406B3C34 @ 0x1406B3C34 (sub_1406B3C34.c)
 *     sub_1406B656C @ 0x1406B656C (sub_1406B656C.c)
 *     sub_1406C1694 @ 0x1406C1694 (sub_1406C1694.c)
 *     sub_1406DAD3C @ 0x1406DAD3C (sub_1406DAD3C.c)
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 *     sub_140718E30 @ 0x140718E30 (sub_140718E30.c)
 *     sub_14071B730 @ 0x14071B730 (sub_14071B730.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_14072E210 @ 0x14072E210 (sub_14072E210.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C0D40 @ 0x1407C0D40 (sub_1407C0D40.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_1407C2FB4 @ 0x1407C2FB4 (sub_1407C2FB4.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_1407C64A0 @ 0x1407C64A0 (sub_1407C64A0.c)
 *     sub_1407C83F0 @ 0x1407C83F0 (sub_1407C83F0.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 *     sub_14080F9EC @ 0x14080F9EC (sub_14080F9EC.c)
 *     sub_14090C1BC @ 0x14090C1BC (sub_14090C1BC.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 *     sub_140915544 @ 0x140915544 (sub_140915544.c)
 *     sub_140915D20 @ 0x140915D20 (sub_140915D20.c)
 *     sub_140915DB8 @ 0x140915DB8 (sub_140915DB8.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 *     sub_1409174A4 @ 0x1409174A4 (sub_1409174A4.c)
 *     sub_140919308 @ 0x140919308 (sub_140919308.c)
 *     sub_140AB48B4 @ 0x140AB48B4 (sub_140AB48B4.c)
 *     sub_140B15C50 @ 0x140B15C50 (sub_140B15C50.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_14069FA08 @ 0x14069FA08 (sub_14069FA08.c)
 *     sub_140736280 @ 0x140736280 (sub_140736280.c)
 */

__int64 __fastcall sub_140AB4300(ULONG_PTR a1)
{
  int v2; // edi
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 8) & 0x80000;
  if ( sub_140736280(a1) )
    *(_QWORD *)(v3 + 56) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 56));
  result = ExReleasePushLockEx(v3 + 48, 0LL);
  if ( v2 )
    return sub_14069FA08(a1);
  return result;
}

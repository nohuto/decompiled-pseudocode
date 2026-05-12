/*
 * XREFs of sub_1C003EE1C @ 0x1C003EE1C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 *     sub_1C00129D8 @ 0x1C00129D8 (sub_1C00129D8.c)
 *     sub_1C0016A98 @ 0x1C0016A98 (sub_1C0016A98.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1C0016FE4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1C003609C @ 0x1C003609C (sub_1C003609C.c)
 *     sub_1C0040BC4 @ 0x1C0040BC4 (sub_1C0040BC4.c)
 *     sub_1C0040D18 @ 0x1C0040D18 (sub_1C0040D18.c)
 *     sub_1C004E7B0 @ 0x1C004E7B0 (sub_1C004E7B0.c)
 *     sub_1C0079AD4 @ 0x1C0079AD4 (sub_1C0079AD4.c)
 *     sub_1C0079D34 @ 0x1C0079D34 (sub_1C0079D34.c)
 *     sub_1C0079ED4 @ 0x1C0079ED4 (sub_1C0079ED4.c)
 *     sub_1C007A098 @ 0x1C007A098 (sub_1C007A098.c)
 *     sub_1C007A184 @ 0x1C007A184 (sub_1C007A184.c)
 *     sub_1C007A558 @ 0x1C007A558 (sub_1C007A558.c)
 *     sub_1C007A6B8 @ 0x1C007A6B8 (sub_1C007A6B8.c)
 *     sub_1C007A7F0 @ 0x1C007A7F0 (sub_1C007A7F0.c)
 *     sub_1C007A9C8 @ 0x1C007A9C8 (sub_1C007A9C8.c)
 *     sub_1C007AB88 @ 0x1C007AB88 (sub_1C007AB88.c)
 *     sub_1C007ACDC @ 0x1C007ACDC (sub_1C007ACDC.c)
 *     sub_1C007B570 @ 0x1C007B570 (sub_1C007B570.c)
 *     sub_1C007B6C0 @ 0x1C007B6C0 (sub_1C007B6C0.c)
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 *     sub_1C007EDC0 @ 0x1C007EDC0 (sub_1C007EDC0.c)
 *     sub_1C007EEF0 @ 0x1C007EEF0 (sub_1C007EEF0.c)
 *     sub_1C00800D4 @ 0x1C00800D4 (sub_1C00800D4.c)
 *     sub_1C00801DC @ 0x1C00801DC (sub_1C00801DC.c)
 *     sub_1C00803F0 @ 0x1C00803F0 (sub_1C00803F0.c)
 *     sub_1C008061C @ 0x1C008061C (sub_1C008061C.c)
 *     sub_1C0080710 @ 0x1C0080710 (sub_1C0080710.c)
 *     sub_1C0080978 @ 0x1C0080978 (sub_1C0080978.c)
 *     sub_1C00A3A64 @ 0x1C00A3A64 (sub_1C00A3A64.c)
 *     sub_1C00AC32C @ 0x1C00AC32C (sub_1C00AC32C.c)
 *     sub_1C00AC434 @ 0x1C00AC434 (sub_1C00AC434.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C003EE1C(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))qword_1C0093C08)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}

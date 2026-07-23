/*
 * XREFs of HalReturnToFirmware @ 0x14050A7E0
 * Callers:
 *     sub_140390D20 @ 0x140390D20 (sub_140390D20.c)
 *     sub_14050A920 @ 0x14050A920 (sub_14050A920.c)
 *     sub_14050AC80 @ 0x14050AC80 (sub_14050AC80.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140578830 @ 0x140578830 (sub_140578830.c)
 *     sub_140579150 @ 0x140579150 (sub_140579150.c)
 *     sub_14057938C @ 0x14057938C (sub_14057938C.c)
 *     sub_140A4AF0C @ 0x140A4AF0C (sub_140A4AF0C.c)
 *     sub_140A6BE04 @ 0x140A6BE04 (sub_140A6BE04.c)
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 *     sub_140AA8D9C @ 0x140AA8D9C (sub_140AA8D9C.c)
 * Callees:
 *     sub_14022D9F0 @ 0x14022D9F0 (sub_14022D9F0.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405033CC @ 0x1405033CC (sub_1405033CC.c)
 *     sub_14050A93C @ 0x14050A93C (sub_14050A93C.c)
 *     sub_14050AABC @ 0x14050AABC (sub_14050AABC.c)
 *     sub_14051F9A8 @ 0x14051F9A8 (sub_14051F9A8.c)
 */

void __fastcall __noreturn HalReturnToFirmware(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      KdPowerTransitionEx(4, 0);
      sub_14050AABC();
    }
    else if ( a1 <= 1 || a1 > 3 )
    {
      DbgPrint("HalReturnToFirmware called\n");
      __debugbreak();
    }
  }
  KdPowerTransitionEx(4, 0);
  if ( qword_140CE1BE0 )
    sub_14042A5E0(v2, v1);
  _disable();
  if ( !byte_140C4C678 || dword_140C4C460 )
    sub_1405033CC(v2, v1);
  sub_14022D9F0(v2, v1, v3);
  if ( dword_140C0CA30 )
    sub_14051F9A8();
  sub_14050A93C(0LL, 0LL);
  JUMPOUT(0x14050A86BLL);
}

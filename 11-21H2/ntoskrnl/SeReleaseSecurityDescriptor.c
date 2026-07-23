/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x1407B3DA0
 * Callers:
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140666D1C @ 0x140666D1C (sub_140666D1C.c)
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     sub_14066F980 @ 0x14066F980 (sub_14066F980.c)
 *     ObDeleteCapturedInsertInfo @ 0x140680050 (ObDeleteCapturedInsertInfo.c)
 *     NtSetSecurityObject @ 0x1406B57C0 (NtSetSecurityObject.c)
 *     sub_1406C5CA0 @ 0x1406C5CA0 (sub_1406C5CA0.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_14072DDC0 @ 0x14072DDC0 (sub_14072DDC0.c)
 *     sub_14072E210 @ 0x14072E210 (sub_14072E210.c)
 *     sub_140753358 @ 0x140753358 (sub_140753358.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     sub_1407CCD80 @ 0x1407CCD80 (sub_1407CCD80.c)
 *     sub_1407CDBA0 @ 0x1407CDBA0 (sub_1407CDBA0.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 *     sub_14091822C @ 0x14091822C (sub_14091822C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}

/*
 * XREFs of sub_14079435C @ 0x14079435C
 * Callers:
 *     sub_140630ACC @ 0x140630ACC (sub_140630ACC.c)
 *     sub_140630D00 @ 0x140630D00 (sub_140630D00.c)
 *     sub_1406EC524 @ 0x1406EC524 (sub_1406EC524.c)
 *     sub_1406ECACC @ 0x1406ECACC (sub_1406ECACC.c)
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EDFEC @ 0x1406EDFEC (sub_1406EDFEC.c)
 *     sub_1406EEF3C @ 0x1406EEF3C (sub_1406EEF3C.c)
 *     sub_14079488C @ 0x14079488C (sub_14079488C.c)
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 *     sub_140864164 @ 0x140864164 (sub_140864164.c)
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 *     sub_1409E9F80 @ 0x1409E9F80 (sub_1409E9F80.c)
 *     sub_1409EC9EC @ 0x1409EC9EC (sub_1409EC9EC.c)
 *     sub_1409ED7D4 @ 0x1409ED7D4 (sub_1409ED7D4.c)
 * Callees:
 *     sub_1407942E0 @ 0x1407942E0 (sub_1407942E0.c)
 *     sub_1407943B0 @ 0x1407943B0 (sub_1407943B0.c)
 *     sub_140794404 @ 0x140794404 (sub_140794404.c)
 */

__int64 __fastcall sub_14079435C(ACCESS_MASK DesiredAccess, __int64 a2)
{
  void *v4; // rdi
  unsigned int v5; // ebx

  v4 = (void *)sub_1407942E0(a2);
  v5 = sub_140794404(v4, DesiredAccess);
  sub_1407943B0(a2, v4);
  return v5;
}

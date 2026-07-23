/*
 * XREFs of sub_140339C20 @ 0x140339C20
 * Callers:
 *     sub_14026E158 @ 0x14026E158 (sub_14026E158.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_140284A20 @ 0x140284A20 (sub_140284A20.c)
 *     sub_1402E57FC @ 0x1402E57FC (sub_1402E57FC.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140324C60 @ 0x140324C60 (sub_140324C60.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_14037E338 @ 0x14037E338 (sub_14037E338.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     sub_1403D452C @ 0x1403D452C (sub_1403D452C.c)
 *     sub_14045C812 @ 0x14045C812 (sub_14045C812.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_140586E78 @ 0x140586E78 (sub_140586E78.c)
 *     sub_14058A110 @ 0x14058A110 (sub_14058A110.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_1405B1A10 @ 0x1405B1A10 (sub_1405B1A10.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405BA768 @ 0x1405BA768 (sub_1405BA768.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 *     sub_1405C37D0 @ 0x1405C37D0 (sub_1405C37D0.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 *     sub_14079D08C @ 0x14079D08C (sub_14079D08C.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 *     sub_1407F1AF8 @ 0x1407F1AF8 (sub_1407F1AF8.c)
 *     sub_1407F8CF0 @ 0x1407F8CF0 (sub_1407F8CF0.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 *     sub_14097E8C8 @ 0x14097E8C8 (sub_14097E8C8.c)
 *     sub_140983680 @ 0x140983680 (sub_140983680.c)
 *     sub_1409839C0 @ 0x1409839C0 (sub_1409839C0.c)
 *     sub_140AF35B8 @ 0x140AF35B8 (sub_140AF35B8.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_140339C20(char *a1, int a2, __int64 a3)
{
  char *result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  int v5; // edx

  result = a1;
  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = (a2 - 1) << byte_140C506CC;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)];
    v5 = *((_DWORD *)CurrentPrcb + 8342);
  }
  *(_DWORD *)(a3 + 12) = v5;
  *(_DWORD *)(a3 + 8) = (1 << byte_140C506CD) - 1;
  if ( !a1 || (a1[184] & 7u) >= 2 )
    result = (char *)CurrentPrcb + 33360;
  *(_QWORD *)a3 = result;
  return result;
}

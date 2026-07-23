/*
 * XREFs of KeCancelTimer @ 0x140356EB0
 * Callers:
 *     sub_140256998 @ 0x140256998 (sub_140256998.c)
 *     sub_14028AF80 @ 0x14028AF80 (sub_14028AF80.c)
 *     sub_1402A4320 @ 0x1402A4320 (sub_1402A4320.c)
 *     sub_1402E2BF8 @ 0x1402E2BF8 (sub_1402E2BF8.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_140356E00 @ 0x140356E00 (sub_140356E00.c)
 *     sub_140356F50 @ 0x140356F50 (sub_140356F50.c)
 *     sub_1403580A8 @ 0x1403580A8 (sub_1403580A8.c)
 *     sub_14035F934 @ 0x14035F934 (sub_14035F934.c)
 *     sub_14038B9A0 @ 0x14038B9A0 (sub_14038B9A0.c)
 *     sub_140398DF0 @ 0x140398DF0 (sub_140398DF0.c)
 *     sub_140399318 @ 0x140399318 (sub_140399318.c)
 *     sub_1403A4EC4 @ 0x1403A4EC4 (sub_1403A4EC4.c)
 *     sub_1403D93F4 @ 0x1403D93F4 (sub_1403D93F4.c)
 *     sub_1403DDF0C @ 0x1403DDF0C (sub_1403DDF0C.c)
 *     sub_14053BFB8 @ 0x14053BFB8 (sub_14053BFB8.c)
 *     sub_14053DAFC @ 0x14053DAFC (sub_14053DAFC.c)
 *     sub_140576200 @ 0x140576200 (sub_140576200.c)
 *     sub_1405CFB5C @ 0x1405CFB5C (sub_1405CFB5C.c)
 *     sub_1406127D0 @ 0x1406127D0 (sub_1406127D0.c)
 *     sub_14063DFAC @ 0x14063DFAC (sub_14063DFAC.c)
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 *     sub_1406E18A0 @ 0x1406E18A0 (sub_1406E18A0.c)
 *     sub_1406EADD4 @ 0x1406EADD4 (sub_1406EADD4.c)
 *     sub_1407D4E34 @ 0x1407D4E34 (sub_1407D4E34.c)
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 *     sub_1407FFF4C @ 0x1407FFF4C (sub_1407FFF4C.c)
 *     sub_140829870 @ 0x140829870 (sub_140829870.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_1408553A0 @ 0x1408553A0 (sub_1408553A0.c)
 *     sub_140908680 @ 0x140908680 (sub_140908680.c)
 *     sub_140918E48 @ 0x140918E48 (sub_140918E48.c)
 *     sub_14091D790 @ 0x14091D790 (sub_14091D790.c)
 *     sub_14092BDD0 @ 0x14092BDD0 (sub_14092BDD0.c)
 *     sub_14098F180 @ 0x14098F180 (sub_14098F180.c)
 *     sub_1409A332C @ 0x1409A332C (sub_1409A332C.c)
 *     sub_1409A3B04 @ 0x1409A3B04 (sub_1409A3B04.c)
 *     sub_1409F80D4 @ 0x1409F80D4 (sub_1409F80D4.c)
 *     sub_140A01F78 @ 0x140A01F78 (sub_140A01F78.c)
 *     sub_140A50C40 @ 0x140A50C40 (sub_140A50C40.c)
 *     sub_140A59518 @ 0x140A59518 (sub_140A59518.c)
 *     sub_140A91368 @ 0x140A91368 (sub_140A91368.c)
 *     sub_140A9CF88 @ 0x140A9CF88 (sub_140A9CF88.c)
 *     sub_140AAB7B4 @ 0x140AAB7B4 (sub_140AAB7B4.c)
 *     sub_140AABA70 @ 0x140AABA70 (sub_140AABA70.c)
 *     sub_140AACB80 @ 0x140AACB80 (sub_140AACB80.c)
 *     sub_140AAED7C @ 0x140AAED7C (sub_140AAED7C.c)
 * Callees:
 *     sub_140357840 @ 0x140357840 (sub_140357840.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  __int64 v1; // rdx
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN v3; // di
  __int64 v5; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v8; // r8
  int v9; // eax
  bool v10; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v1 = (-1LL << (CurrentIrql + 1)) & 4;
    *(_DWORD *)(v5 + 20) |= v1;
  }
  LOBYTE(v1) = 1;
  v3 = sub_140357840(a1, v1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}

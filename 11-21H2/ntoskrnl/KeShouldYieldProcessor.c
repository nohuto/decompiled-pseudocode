/*
 * XREFs of KeShouldYieldProcessor @ 0x140222100
 * Callers:
 *     sub_140200D20 @ 0x140200D20 (sub_140200D20.c)
 *     sub_140213398 @ 0x140213398 (sub_140213398.c)
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_1402655A0 @ 0x1402655A0 (sub_1402655A0.c)
 *     sub_140270A00 @ 0x140270A00 (sub_140270A00.c)
 *     sub_140274818 @ 0x140274818 (sub_140274818.c)
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     sub_14028CF90 @ 0x14028CF90 (sub_14028CF90.c)
 *     sub_14028E8E0 @ 0x14028E8E0 (sub_14028E8E0.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_1402CD9C0 @ 0x1402CD9C0 (sub_1402CD9C0.c)
 *     sub_1402CF630 @ 0x1402CF630 (sub_1402CF630.c)
 *     sub_1402CFF00 @ 0x1402CFF00 (sub_1402CFF00.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_14030EC70 @ 0x14030EC70 (sub_14030EC70.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_14031E200 @ 0x14031E200 (sub_14031E200.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 *     sub_140334830 @ 0x140334830 (sub_140334830.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 *     sub_1403525F0 @ 0x1403525F0 (sub_1403525F0.c)
 *     sub_1403D5614 @ 0x1403D5614 (sub_1403D5614.c)
 *     sub_140589B90 @ 0x140589B90 (sub_140589B90.c)
 *     sub_14058C874 @ 0x14058C874 (sub_14058C874.c)
 *     sub_14058EB84 @ 0x14058EB84 (sub_14058EB84.c)
 *     sub_14059109C @ 0x14059109C (sub_14059109C.c)
 *     sub_1405910C0 @ 0x1405910C0 (sub_1405910C0.c)
 *     sub_140591AD0 @ 0x140591AD0 (sub_140591AD0.c)
 *     sub_140593E88 @ 0x140593E88 (sub_140593E88.c)
 *     sub_1405941C0 @ 0x1405941C0 (sub_1405941C0.c)
 *     sub_14059DF58 @ 0x14059DF58 (sub_14059DF58.c)
 *     sub_14059E660 @ 0x14059E660 (sub_14059E660.c)
 *     sub_1405A645C @ 0x1405A645C (sub_1405A645C.c)
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_1405A8748 @ 0x1405A8748 (sub_1405A8748.c)
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 *     sub_1405A9744 @ 0x1405A9744 (sub_1405A9744.c)
 *     sub_1405AAA4C @ 0x1405AAA4C (sub_1405AAA4C.c)
 *     sub_1405ABA64 @ 0x1405ABA64 (sub_1405ABA64.c)
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 *     sub_1405B4BA8 @ 0x1405B4BA8 (sub_1405B4BA8.c)
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_1405BF718 @ 0x1405BF718 (sub_1405BF718.c)
 *     sub_1405C00C0 @ 0x1405C00C0 (sub_1405C00C0.c)
 *     sub_1405C2A4C @ 0x1405C2A4C (sub_1405C2A4C.c)
 *     sub_1405C4FB8 @ 0x1405C4FB8 (sub_1405C4FB8.c)
 * Callees:
 *     sub_140222280 @ 0x140222280 (sub_140222280.c)
 *     sub_14062E40C @ 0x14062E40C (sub_14062E40C.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rcx
  LOGICAL v1; // ebx
  __int64 v2; // rdx
  unsigned int v3; // r9d
  __int64 v4; // r8
  unsigned int v5; // edi
  __int64 v6; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  v2 = *((unsigned int *)CurrentPrcb + 3311);
  v3 = *((_DWORD *)CurrentPrcb + 8107);
  v4 = *((unsigned int *)CurrentPrcb + 8279);
  if ( (v2 & 1) != 0 )
  {
    v5 = 1;
    if ( (unsigned int)v4 > 7 )
    {
      if ( *((_BYTE *)CurrentPrcb + 13241) )
        goto LABEL_8;
      goto LABEL_18;
    }
LABEL_5:
    if ( v3 <= 7 )
      return 0;
    if ( !v5 )
    {
LABEL_15:
      _disable();
      *((_DWORD *)CurrentPrcb + 8107) = 0;
      *((_DWORD *)CurrentPrcb + 8279) = 0;
      sub_140222280(CurrentPrcb, v2, v4);
      _enable();
      v5 = 0;
      goto LABEL_8;
    }
LABEL_18:
    if ( (v2 & 0x1E) != 0 )
    {
      v5 = 5;
      goto LABEL_8;
    }
    if ( *((_QWORD *)CurrentPrcb + 1) != *((_QWORD *)CurrentPrcb + 3) )
    {
      v5 = 6;
      goto LABEL_8;
    }
    goto LABEL_15;
  }
  v5 = 0;
  if ( (v2 & 0x1E) == 0 )
  {
    if ( *((_BYTE *)CurrentPrcb + 13241) )
    {
      v5 = 3;
      goto LABEL_8;
    }
    v6 = *((_QWORD *)CurrentPrcb + 2);
    if ( v6 && v6 != *((_QWORD *)CurrentPrcb + 1) )
    {
      v5 = 4;
      goto LABEL_8;
    }
    goto LABEL_5;
  }
  v5 = 2;
LABEL_8:
  if ( (DWORD1(xmmword_140D06900) & 0x4000000) != 0 )
    sub_14062E40C(v5, v3, v4);
  LOBYTE(v1) = v5 != 0;
  return v1;
}

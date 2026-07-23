/*
 * XREFs of sub_140229CA0 @ 0x140229CA0
 * Callers:
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 * Callees:
 *     sub_140229D30 @ 0x140229D30 (sub_140229D30.c)
 */

void __fastcall sub_140229CA0(__int64 a1, char a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // r9
  _QWORD *v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // r8

  CurrentPrcb = KeGetCurrentPrcb();
  if ( a3 )
  {
    if ( a3 == 1 && a2 > *(char *)(a1 + 195) )
    {
      if ( *(_BYTE *)(a1 + 793) )
      {
        v4 = (_QWORD *)(a1 + 808);
        if ( *(_QWORD *)(a1 + 808) == 1LL )
        {
          v5 = 35704LL;
          goto LABEL_8;
        }
      }
    }
  }
  else if ( a2 < *(char *)(a1 + 563) )
  {
    if ( *(_BYTE *)(a1 + 871) )
    {
      v4 = (_QWORD *)(a1 + 816);
      if ( *(_QWORD *)(a1 + 816) == 1LL )
      {
        v5 = 35696LL;
LABEL_8:
        v6 = (_QWORD *)((char *)CurrentPrcb + v5);
        if ( (struct _KPRCB *)((char *)CurrentPrcb + v5) )
        {
          *v4 = *v6;
          *v6 = v4;
          _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
          sub_140229D30(CurrentPrcb);
        }
      }
    }
  }
}

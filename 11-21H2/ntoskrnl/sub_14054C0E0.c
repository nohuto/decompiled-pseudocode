/*
 * XREFs of sub_14054C0E0 @ 0x14054C0E0
 * Callers:
 *     sub_1403B6B58 @ 0x1403B6B58 (sub_1403B6B58.c)
 *     sub_1405430DC @ 0x1405430DC (sub_1405430DC.c)
 *     sub_1405434E0 @ 0x1405434E0 (sub_1405434E0.c)
 *     sub_14054C654 @ 0x14054C654 (sub_14054C654.c)
 *     sub_14054C810 @ 0x14054C810 (sub_14054C810.c)
 *     sub_140931100 @ 0x140931100 (sub_140931100.c)
 * Callees:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 */

void __fastcall sub_14054C0E0(int a1, unsigned __int64 a2)
{
  unsigned int v2; // ecx

  if ( a1 > 589831 )
  {
    if ( a1 == 589843 )
    {
      v2 = 1073741939;
      goto LABEL_23;
    }
    if ( a1 == 589847 )
    {
      v2 = 1073741857;
      goto LABEL_23;
    }
    if ( a1 > 655359 )
    {
      if ( a1 <= 655375 )
      {
        v2 = a1 + 1073086608;
        goto LABEL_23;
      }
      if ( a1 == 655379 )
      {
        v2 = 1073741955;
        goto LABEL_23;
      }
    }
    goto LABEL_20;
  }
  if ( a1 == 589831 )
  {
    v2 = 1073741828;
    goto LABEL_23;
  }
  if ( a1 < 528 )
    goto LABEL_20;
  if ( a1 <= 532 )
  {
    v2 = a1 + 1073741552;
    goto LABEL_23;
  }
  if ( a1 == 533 )
  {
    v2 = 1073742085;
    goto LABEL_23;
  }
  if ( a1 == 624 )
  {
    v2 = 1073742102;
    goto LABEL_23;
  }
  if ( a1 != 589826 )
  {
LABEL_20:
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  v2 = 0x40000000;
LABEL_23:
  __writemsr(v2, a2);
}

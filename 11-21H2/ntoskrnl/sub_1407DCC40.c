/*
 * XREFs of sub_1407DCC40 @ 0x1407DCC40
 * Callers:
 *     sub_140702420 @ 0x140702420 (sub_140702420.c)
 * Callees:
 *     sub_1407DB510 @ 0x1407DB510 (sub_1407DB510.c)
 *     sub_1407DBF54 @ 0x1407DBF54 (sub_1407DBF54.c)
 *     sub_1407DCCD8 @ 0x1407DCCD8 (sub_1407DCCD8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407DCC40(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225659LL;
  P = 0LL;
  if ( (dword_140C4E968 & 1) != 0 || (dword_140C54630 & 1) != 0 )
  {
    sub_1407DB510(a1, (unsigned __int64)&P + 1);
    if ( (dword_140C54630 & 1) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 1524);
      if ( v3 )
      {
        if ( sub_1407DBF54(v3) )
          _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x4000u);
      }
    }
  }
  sub_1407DCCD8(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}

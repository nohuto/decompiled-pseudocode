/*
 * XREFs of sub_1C001A2F4 @ 0x1C001A2F4
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 *     sub_1C0012B64 @ 0x1C0012B64 (sub_1C0012B64.c)
 *     sub_1C00176A0 @ 0x1C00176A0 (sub_1C00176A0.c)
 *     sub_1C0019498 @ 0x1C0019498 (sub_1C0019498.c)
 *     sub_1C001A278 @ 0x1C001A278 (sub_1C001A278.c)
 *     sub_1C001DDAC @ 0x1C001DDAC (sub_1C001DDAC.c)
 *     sub_1C0022A14 @ 0x1C0022A14 (sub_1C0022A14.c)
 *     sub_1C00406EC @ 0x1C00406EC (sub_1C00406EC.c)
 *     sub_1C0040778 @ 0x1C0040778 (sub_1C0040778.c)
 *     sub_1C0040950 @ 0x1C0040950 (sub_1C0040950.c)
 *     sub_1C004096C @ 0x1C004096C (sub_1C004096C.c)
 *     sub_1C0040BC4 @ 0x1C0040BC4 (sub_1C0040BC4.c)
 *     sub_1C0040CEC @ 0x1C0040CEC (sub_1C0040CEC.c)
 *     sub_1C0040D18 @ 0x1C0040D18 (sub_1C0040D18.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C001A2F4(struct _EX_RUNDOWN_REF *a1)
{
  signed __int64 Count; // rdi
  bool v3; // zf
  signed __int64 v4; // rax

  Count = a1[11].Count;
  if ( (Count & 1) == 0 )
  {
    ExWaitForRundownProtectionRelease(a1 + 10);
    ExRundownCompleted(a1 + 10);
    do
    {
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[11], Count | 1, Count);
      v3 = Count == v4;
      Count = v4;
    }
    while ( !v3 && (v4 & 1) == 0 );
  }
}

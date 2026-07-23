/*
 * XREFs of RtlpGetContextFlagsLocation @ 0x14030DDA8
 * Callers:
 *     RtlCopyContext @ 0x1407706C0 (RtlCopyContext.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1407A0DB8 (RtlWow64GetCpuAreaInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetContextFlagsLocation(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = 0LL;
  if ( (a2 & 0x10000) == 0 )
  {
    if ( (a2 & 0x100000) != 0 )
    {
      a1 += 48LL;
    }
    else if ( (a2 & 0x200000) == 0 )
    {
      if ( (a2 & 0x400000) != 0 )
        return a1;
      return v2;
    }
  }
  return a1;
}

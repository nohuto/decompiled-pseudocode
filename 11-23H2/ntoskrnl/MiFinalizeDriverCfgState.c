/*
 * XREFs of MiFinalizeDriverCfgState @ 0x1407E3028
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703DC0 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiProcessKernelCfgImage @ 0x1403682B0 (MiProcessKernelCfgImage.c)
 *     MiCompleteSecureDriverLoad @ 0x140885888 (MiCompleteSecureDriverLoad.c)
 */

__int64 __fastcall MiFinalizeDriverCfgState(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  result = MiProcessKernelCfgImage(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( (MiFlags & 0x44000) != 0x4000 || (*(_DWORD *)(a1 + 104) & 0x2000) != 0 )
      return 0LL;
    result = MiCompleteSecureDriverLoad(a1);
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 104) |= 0x2000u;
      return 0LL;
    }
  }
  return result;
}

/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x1407D4654
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140B469CC (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407D46B4 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x1407D4748 (LdrInitSecurityCookie.c)
 */

__int64 __fastcall MiProcessLoadConfigForDriver(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // eax
  int v6; // r8d

  if ( !_bittest16((const signed __int16 *)(a1 + 110), 9u) )
  {
    result = MiProcessKernelCfgImageLoadConfig();
    if ( (int)result < 0 )
      return result;
    if ( a2 )
    {
      ExGenRandom(0);
      v5 = ExGenRandom(0);
      LdrInitSecurityCookie(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v6, v5);
    }
  }
  return 0LL;
}

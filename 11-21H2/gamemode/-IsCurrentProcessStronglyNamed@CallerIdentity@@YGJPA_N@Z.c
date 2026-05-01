/*
 * XREFs of ?IsCurrentProcessStronglyNamed@CallerIdentity@@YGJPA_N@Z @ 0x10006515
 * Callers:
 *     _ReleaseExclusiveCpuSets@0 @ 0x10005C20 (_ReleaseExclusiveCpuSets@0.c)
 * Callees:
 *     ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z @ 0x100063E5 (-IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z.c)
 */

int __thiscall CallerIdentity::IsCurrentProcessStronglyNamed(_BYTE *ecx0)
{
  HANDLE CurrentProcess; // eax
  int result; // eax

  CurrentProcess = GetCurrentProcess();
  result = ARI::ProcessToken::SysAppId::IsProcessStronglyNamed(CurrentProcess, ecx0);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}

/*
 * XREFs of ?IsAMDCpu@AutoGameProfile@@YA_NXZ @ 0x18073F0E8
 * Callers:
 *     ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x18073E874 (-GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AutoGameProfile::IsAMDCpu(AutoGameProfile *this)
{
  if ( AGMHooks::g_pTestHooks )
    return (**(__int64 (__fastcall ***)(struct AGMHooks::TestHooks *))AGMHooks::g_pTestHooks)(AGMHooks::g_pTestHooks);
  _RAX = 0LL;
  __asm { cpuid }
  return (_DWORD)_RBX == 1752462657 && (_DWORD)_RCX == 1145913699 && (_DWORD)_RDX == 1769238117;
}

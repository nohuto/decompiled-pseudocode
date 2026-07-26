/*
 * XREFs of ndisInitHypervisorInfo @ 0x1C00C3290
 * Callers:
 *     NdisGetHypervisorInfo @ 0x1C00C3350 (NdisGetHypervisorInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisInitHypervisorInfo(_DWORD *a1)
{
  __int64 result; // rax

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 786816;
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    a1[1] = 1;
    _RAX = 1073741825LL;
    __asm { cpuid }
    if ( (_DWORD)result == 824407624 )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      result = 2 - (unsigned int)((__PAIR64__(_RBX, _RAX) & 0x100000000000LL) != 0);
      a1[2] = result;
    }
  }
  return result;
}

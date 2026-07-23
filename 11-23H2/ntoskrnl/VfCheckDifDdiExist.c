/*
 * XREFs of VfCheckDifDdiExist @ 0x140ACA2A0
 * Callers:
 *     DifRegisterPlugin @ 0x1405D55E0 (DifRegisterPlugin.c)
 * Callees:
 *     ViCheckDifDdiExist @ 0x140ACA934 (ViCheckDifDdiExist.c)
 */

char __fastcall VfCheckDifDdiExist(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  char **v3; // rax

  if ( !(unsigned __int8)ViCheckDifDdiExist(&VfDifThunks, a1) && !(unsigned __int8)ViCheckDifDdiExist(&VfPoolThunks, v1) )
  {
    v3 = &VfDifIoCallbackThunks;
    while ( *((_DWORD *)v3 + 7) != (_DWORD)v2 )
    {
      v3 += 4;
      if ( !*v3 )
        return ViCheckDifDdiExist(&VfRegularThunks, v2);
    }
  }
  return 1;
}

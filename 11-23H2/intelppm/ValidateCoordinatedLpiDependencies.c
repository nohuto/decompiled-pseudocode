/*
 * XREFs of ValidateCoordinatedLpiDependencies @ 0x1C0038704
 * Callers:
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0044C98 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C0038784 (ValidateCoordinatedLpiDependenciesProcessor.c)
 */

__int64 __fastcall ValidateCoordinatedLpiDependencies(_DWORD *a1)
{
  __int64 v1; // rbx
  unsigned int v3; // esi
  _DWORD *v4; // rbp
  __int64 result; // rax

  v1 = 0LL;
  if ( !*a1 )
    return 0LL;
  while ( 1 )
  {
    v3 = 0;
    v4 = &a1[80 * v1];
    if ( v4[87] )
      break;
LABEL_6:
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= *a1 )
      return 0LL;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v4 + 45) + 16LL * v3) != -1 )
    {
      result = ValidateCoordinatedLpiDependenciesProcessor(v4 + 12);
      if ( (int)result < 0 )
        return result;
    }
    if ( ++v3 >= v4[87] )
      goto LABEL_6;
  }
}

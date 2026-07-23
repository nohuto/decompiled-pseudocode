/*
 * XREFs of MiLocateLowestConflictingVad @ 0x140223334
 * Callers:
 *     MiUpdateVadBits @ 0x1406B2E58 (MiUpdateVadBits.c)
 *     MiExpandVadBitMap @ 0x1406B2EE0 (MiExpandVadBitMap.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140214E40 (MiCheckForConflictingVad.c)
 */

__int64 **__fastcall MiLocateLowestConflictingVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 **result; // rax
  unsigned __int64 *v5; // r11
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // rcx
  unsigned __int64 i; // rdx

  result = MiCheckForConflictingVad(a1, a2, a3);
  v5 = (unsigned __int64 *)result;
  if ( result )
  {
    while ( 1 )
    {
      v6 = *v5;
      v7 = v5;
      if ( *v5 )
      {
        for ( ; *(_QWORD *)(v6 + 8); v6 = *(_QWORD *)(v6 + 8) )
          ;
      }
      else
      {
        for ( i = v5[2]; ; i = *(_QWORD *)(v6 + 16) )
        {
          v6 = i & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v6 || *(unsigned __int64 **)(v6 + 8) == v7 )
            break;
          v7 = (unsigned __int64 *)v6;
        }
      }
      if ( !v6
        || (((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) << 12) | 0xFFF) < a2 )
      {
        break;
      }
      v5 = (unsigned __int64 *)v6;
    }
    return (__int64 **)v5;
  }
  return result;
}

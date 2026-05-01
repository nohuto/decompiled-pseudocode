/*
 * XREFs of CrmGlobalsRegistrationRemoveAll @ 0x18006CE10
 * Callers:
 *     CrmGlobalsCleanup @ 0x18006CCCC (CrmGlobalsCleanup.c)
 * Callees:
 *     CrmGlobalsRegistrationsDeleteRoutine @ 0x18006CF2C (CrmGlobalsRegistrationsDeleteRoutine.c)
 */

__int64 CrmGlobalsRegistrationRemoveAll()
{
  DWORD CurrentThreadId; // eax
  unsigned __int64 v1; // rcx
  char v2; // al
  int v3; // edi
  _QWORD *v4; // rdx
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rbx
  char v7; // dl

  RtlAcquireSRWLockExclusive(&unk_1800DC1B0);
  CurrentThreadId = GetCurrentThreadId();
  v1 = xmmword_1800DC1C0;
  dword_1800DC1B8 = CurrentThreadId;
  v2 = BYTE8(xmmword_1800DC1C0);
  if ( (BYTE8(xmmword_1800DC1C0) & 1) != 0 && (_QWORD)xmmword_1800DC1C0 )
    v1 = (unsigned __int64)&xmmword_1800DC1C0 ^ xmmword_1800DC1C0;
  v3 = BYTE8(xmmword_1800DC1C0) & 1;
  if ( v1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v1 )
        {
          v4 = (_QWORD *)v1;
          if ( v3 )
            v1 ^= *(_QWORD *)v1;
          else
            v1 = *(_QWORD *)v1;
          *v4 = 0LL;
        }
        v5 = (unsigned __int64 *)(v1 + 8);
        if ( !*(_QWORD *)(v1 + 8) )
          break;
        if ( v3 )
          v1 ^= *v5;
        else
          v1 = *v5;
        *v5 = 0LL;
      }
      v6 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v3 && v6 )
        v6 ^= v1;
      CrmGlobalsRegistrationsDeleteRoutine(v1, 0LL);
      if ( !v6 )
        break;
      v1 = v6;
    }
    v2 = BYTE8(xmmword_1800DC1C0);
  }
  xmmword_1800DC1C0 = 0LL;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  if ( (v2 & 1) != 0 )
    v7 = 1;
  dword_1800DC1B8 = 0;
  BYTE8(xmmword_1800DC1C0) = v7;
  return RtlReleaseSRWLockExclusive(&unk_1800DC1B0);
}

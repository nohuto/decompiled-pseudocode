/*
 * XREFs of CrmGlobalsRegistrationAdd @ 0x180005104
 * Callers:
 *     CrmRegistrationStart @ 0x180005054 (CrmRegistrationStart.c)
 * Callees:
 *     CrmGlobalsRegistrationTreeCompareRoutine @ 0x180011CA4 (CrmGlobalsRegistrationTreeCompareRoutine.c)
 */

__int64 __fastcall CrmGlobalsRegistrationAdd(__int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // r8
  unsigned __int64 v4; // rbx
  int v5; // edi
  unsigned __int64 v6; // rax

  RtlAcquireSRWLockExclusive(&unk_1800DC1B0);
  CurrentThreadId = GetCurrentThreadId();
  v4 = xmmword_1800DC1C0;
  dword_1800DC1B8 = CurrentThreadId;
  if ( (BYTE8(xmmword_1800DC1C0) & 1) != 0 && (_QWORD)xmmword_1800DC1C0 )
    v4 = (unsigned __int64)&xmmword_1800DC1C0 ^ xmmword_1800DC1C0;
  LOBYTE(v3) = 0;
  v5 = BYTE8(xmmword_1800DC1C0) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( (int)CrmGlobalsRegistrationTreeCompareRoutine(a1 + 16, v4, v3) < 0 )
      {
        v6 = *(_QWORD *)v4;
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_15;
          v6 ^= v4;
        }
        if ( !v6 )
        {
LABEL_15:
          LOBYTE(v3) = 0;
          break;
        }
      }
      else
      {
        v6 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_16;
          v6 ^= v4;
        }
        if ( !v6 )
        {
LABEL_16:
          LOBYTE(v3) = 1;
          break;
        }
      }
      v4 = v6;
    }
  }
  RtlRbInsertNodeEx(&xmmword_1800DC1C0, v4, v3, a1 + 32);
  dword_1800DC1B8 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800DC1B0);
}

/*
 * XREFs of CrmGlobalsRundown @ 0x18003E8B8
 * Callers:
 *     CrmSessionUserNotification @ 0x180042A9C (CrmSessionUserNotification.c)
 *     CrmGlobalsPeriodicRundown @ 0x18006D000 (CrmGlobalsPeriodicRundown.c)
 * Callees:
 *     CrmLogStateMonitorRundown @ 0x18003E9C8 (CrmLogStateMonitorRundown.c)
 *     CrmGlobalsRegistrationRundownHelper @ 0x18003F7E0 (CrmGlobalsRegistrationRundownHelper.c)
 */

__int64 CrmGlobalsRundown()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  char v3; // dl
  unsigned __int64 v4; // rcx
  PVOID *v5; // rbx
  __int64 v6; // rdi

  RtlAcquireSRWLockShared(&unk_1800DC1B0);
  v0 = xmmword_1800DC1C0;
  if ( (_QWORD)xmmword_1800DC1C0 )
  {
    while ( 1 )
    {
LABEL_2:
      if ( (int)CrmGlobalsRegistrationRundownHelper(v0, 0LL) < 0 )
        goto LABEL_20;
      v1 = *(_QWORD *)v0;
      if ( !*(_QWORD *)v0 )
      {
        v1 = *(_QWORD *)(v0 + 8);
        if ( !v1 )
          break;
      }
      if ( (BYTE8(xmmword_1800DC1C0) & 1) != 0 )
        v0 ^= v1;
      else
        v0 = v1;
    }
    v2 = v0;
    v3 = BYTE8(xmmword_1800DC1C0) & 1;
    while ( 1 )
    {
      v2 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v3 )
      {
        if ( !v2 )
          break;
        v2 ^= v0;
      }
      if ( !v2 )
        break;
      v4 = *(_QWORD *)(v2 + 8);
      if ( v3 )
      {
        if ( !v4 )
          goto LABEL_15;
        v4 ^= v2;
      }
      if ( v4 && v4 != v0 )
      {
        v0 = v4;
        goto LABEL_2;
      }
LABEL_15:
      v0 = v2;
    }
  }
LABEL_20:
  RtlReleaseSRWLockShared(&unk_1800DC1B0);
  RtlAcquireSRWLockShared(&CrmGlobals);
  v5 = &qword_1800DC050;
  v6 = 42LL;
  do
  {
    if ( *v5 )
      CrmLogStateMonitorRundown();
    ++v5;
    --v6;
  }
  while ( v6 );
  return RtlReleaseSRWLockShared(&CrmGlobals);
}

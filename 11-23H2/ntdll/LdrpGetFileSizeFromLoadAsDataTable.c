/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x180026F50
 * Callers:
 *     LdrpResGetMappingSize @ 0x180022630 (LdrpResGetMappingSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023940 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetImageSize @ 0x180088E08 (LdrpGetImageSize.c)
 * Callees:
 *     RtlpEnterCriticalSectionContended @ 0x180021B80 (RtlpEnterCriticalSectionContended.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     LdrpInitMuiCritsRtlInitOnce @ 0x18009F46C (LdrpInitMuiCritsRtlInitOnce.c)
 */

__int64 __fastcall LdrpGetFileSizeFromLoadAsDataTable(__int64 a1)
{
  struct _TEB *v2; // rcx
  int v3; // ecx
  __int64 v4; // rax
  __int64 v6; // [rsp+40h] [rbp+8h]

  if ( !a1 )
    return 0LL;
  v6 = 0LL;
  LdrpInitMuiCritsRtlInitOnce();
  v2 = NtCurrentTeb();
  if ( _interlockedbittestandreset(&LoadAsDataCrits.LockCount, 0) )
  {
    LoadAsDataCrits.OwningThread = v2->ClientId.UniqueThread;
    LoadAsDataCrits.RecursionCount = 1;
  }
  else if ( LoadAsDataCrits.OwningThread == v2->ClientId.UniqueThread )
  {
    ++LoadAsDataCrits.RecursionCount;
  }
  else
  {
    RtlpEnterCriticalSectionContended((__int64)&LoadAsDataCrits);
  }
  v3 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    while ( v3 > 0 )
    {
      v4 = 48LL * --v3;
      if ( *(_QWORD *)((char *)LoadAsDataTable + v4) == a1 )
      {
        v6 = *(_QWORD *)((char *)LoadAsDataTable + v4 + 16);
        break;
      }
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v6;
}

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
  if ( _interlockedbittestandreset(&dword_180186368, 0) )
  {
    qword_180186370 = (__int64)v2->ClientId.UniqueThread;
    dword_18018636C = 1;
  }
  else if ( (void *)qword_180186370 == v2->ClientId.UniqueThread )
  {
    ++dword_18018636C;
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
      if ( *(_QWORD *)(v4 + LoadAsDataTable) == a1 )
      {
        v6 = *(_QWORD *)(v4 + LoadAsDataTable + 16);
        break;
      }
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v6;
}

/*
 * XREFs of ?MatchingSessionExistsInMasterList@AppList@GamingAudio@@AEAA_NPEAVSessionInfoItem@2@@Z @ 0x18040E0A8
 * Callers:
 *     ?UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ @ 0x18040E6A0 (-UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall GamingAudio::AppList::MatchingSessionExistsInMasterList(GamingAudio::AppList *this, HSTRING *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rdi
  __int64 v5; // rcx
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v7; // rax

  if ( a2 )
  {
    v2 = (__int64 *)*((_QWORD *)this + 21);
    v3 = (__int64 *)*((_QWORD *)this + 20);
    if ( (unsigned int)(v2 - v3) )
    {
      while ( v3 != v2 )
      {
        v5 = *v3;
        if ( *v3 && *(_DWORD *)(v5 + 80) && *(_DWORD *)(v5 + 48) == *((_DWORD *)a2 + 12) )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(a2[7], 0LL);
          v7 = WindowsGetStringRawBuffer(*(HSTRING *)(*v3 + 56), 0LL);
          if ( CompareStringOrdinal(v7, -1, StringRawBuffer, -1, 0) != 2 )
          {
            *(_DWORD *)(*v3 + 80) = 0;
            return 0;
          }
          return 1;
        }
        ++v3;
      }
    }
  }
  return 0;
}

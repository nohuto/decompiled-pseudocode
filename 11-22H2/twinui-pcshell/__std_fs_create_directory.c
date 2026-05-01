/*
 * XREFs of __std_fs_create_directory @ 0x1807375B0
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800905A0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 * Callees:
 *     __std_fs_get_stats @ 0x180193700 (__std_fs_get_stats.c)
 */

__int64 __fastcall _std_fs_create_directory(LPCWSTR lpFileName)
{
  DWORD LastError; // eax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h]

  if ( CreateDirectoryW(lpFileName, 0LL) )
  {
    HIDWORD(v5) = 0;
    LOBYTE(v5) = 1;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError == 183 )
    {
      LastError = _std_fs_get_stats(lpFileName, (__int64)v4, 3, -1);
      if ( !LastError && (v4[16] & 0x10) == 0 )
        LastError = 183;
    }
    LOBYTE(v5) = 0;
    HIDWORD(v5) = LastError;
  }
  return v5;
}

/*
 * XREFs of RaidGetStorageAdapterSelfEncryptionProperty @ 0x1C003B4B4
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C009FC4C (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 */

__int64 __fastcall RaidGetStorageAdapterSelfEncryptionProperty(__int64 a1, _DWORD *a2, size_t *a3)
{
  size_t v6; // r8
  unsigned __int64 v7; // rax
  char v9; // r14
  int TcgProperties; // eax
  _OWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF

  v6 = *a3;
  memset(v11, 0, sizeof(v11));
  memset_0(a2, 0, v6);
  v7 = *a3;
  if ( *a3 < 8 )
  {
    *a3 = 0LL;
    return 3221225507LL;
  }
  if ( v7 >= 0xC )
  {
    if ( v7 >= 0x10 )
    {
      v9 = 1;
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 0) == 1 )
        return 2147483665LL;
      TcgProperties = RaidGetTcgProperties(a1, v11);
      *a2 = 16;
      a2[1] = 16;
      if ( TcgProperties >= 0 && **(_DWORD **)(a1 + 6016) == 512 )
        a2[3] = 2;
      else
        v9 = 0;
      *((_BYTE *)a2 + 8) = v9;
      *a3 = 16LL;
      *(_DWORD *)(a1 + 136) &= ~1u;
    }
    else
    {
      *a2 = 12;
      a2[1] = 12;
      *((_BYTE *)a2 + 8) = 0;
      *a3 = 12LL;
    }
  }
  else
  {
    *a2 = 16;
    a2[1] = 16;
    *a3 = 8LL;
  }
  return 0LL;
}

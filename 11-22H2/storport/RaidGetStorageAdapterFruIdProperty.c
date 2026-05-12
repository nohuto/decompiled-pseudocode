/*
 * XREFs of RaidGetStorageAdapterFruIdProperty @ 0x1C00A7608
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C009FC4C (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

__int64 __fastcall RaidGetStorageAdapterFruIdProperty(__int64 a1, _DWORD *a2, size_t *a3)
{
  int v7; // esi
  __int64 v8; // rcx
  size_t v9; // rax
  _BYTE v10[8]; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE Src[144]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(v10, 0, 0x90uLL);
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 19) )
    return 3221225659LL;
  memset_0(a2, 0, *a3);
  if ( *a3 >= 8 )
  {
    if ( *a3 >= 0x10 )
    {
      v7 = RaCallMiniportAdapterControl(a1 + 336);
      if ( v7 < 0 )
        goto LABEL_9;
      v8 = -1LL;
      do
        ++v8;
      while ( Src[v8] );
      v9 = (unsigned int)(v8 + 12);
      *a2 = 16;
      a2[1] = v9;
      if ( *a3 >= v9 )
      {
        a2[2] = v8;
        memmove(a2 + 3, Src, (unsigned int)v8);
        return (unsigned int)v7;
      }
    }
    else
    {
      *a2 = 16;
      a2[1] = 16;
    }
    *a3 = 8LL;
    return 0LL;
  }
  v7 = -1073741789;
LABEL_9:
  *a3 = 0LL;
  return (unsigned int)v7;
}

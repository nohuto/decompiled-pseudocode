/*
 * XREFs of StorGetMFNDCapabilities @ 0x1C0090A68
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0038568 (RaidAdapterStartMiniport.c)
 *     StorQueryMFNDCapability @ 0x1C0090CF4 (StorQueryMFNDCapability.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorGetMFNDCapabilities(__int64 *a1, char a2)
{
  void *v4; // rcx
  __int64 v6; // rdx
  void *Pool; // rdi
  int v8; // esi
  _DWORD v9[16]; // [rsp+50h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  v4 = (void *)a1[738];
  if ( v4 && !a2 )
    return 0LL;
  v6 = a1[71];
  if ( (*(_DWORD *)(v6 + 184) & 0x4000) == 0 || (*(_DWORD *)(v6 + 188) & 2) == 0 )
    return 3221225659LL;
  if ( a2 && v4 )
  {
    ExFreePoolWithTag(v4, 0x464D6152u);
    a1[738] = 0LL;
  }
  Pool = (void *)RaidAllocatePool(64LL, 128LL, 1179476306LL, a1[1]);
  if ( !Pool )
    return 3221225626LL;
  v9[0] = v9[0] & 0xFFFFFF00 | 0xD2;
  v9[10] = 32;
  LOWORD(v9[15]) = 1;
  v8 = StorSendMFNDCommand((_DWORD)a1, (_DWORD)Pool, 128, (unsigned int)v9);
  if ( v8 < 0 )
    ExFreePoolWithTag(Pool, 0x464D6152u);
  else
    a1[738] = (__int64)Pool;
  return (unsigned int)v8;
}

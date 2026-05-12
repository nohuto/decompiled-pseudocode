/*
 * XREFs of StorGetMFNDCapabilities @ 0x1C00ABD64
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0039A7C (RaidAdapterStartMiniport.c)
 *     StorQueryMFNDCapability @ 0x1C00AC42C (StorQueryMFNDCapability.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorMapMFNDErrorToNtStatus @ 0x1C003E6B8 (StorMapMFNDErrorToNtStatus.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorGetMFNDCapabilities(__int64 *a1, char a2)
{
  void *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 Pool; // rax
  void *v8; // rdi
  _DWORD v9[15]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v10; // [rsp+9Ch] [rbp+53h]
  unsigned int v11; // [rsp+C0h] [rbp+77h] BYREF

  memset_0(v9, 0, 0x40uLL);
  v4 = (void *)a1[746];
  if ( v4 && !a2 )
    return 0LL;
  v6 = a1[71];
  if ( (*(_DWORD *)(v6 + 184) & 0x4000) == 0 || (*(_DWORD *)(v6 + 188) & 2) == 0 )
    return 3221225659LL;
  if ( a2 && v4 )
  {
    ExFreePoolWithTag(v4, 0x464D6152u);
    a1[746] = 0LL;
  }
  Pool = RaidAllocatePool(64LL, 128LL, 1179476306LL, a1[1]);
  v8 = (void *)Pool;
  if ( !Pool )
    return 3221225626LL;
  v9[10] = 32;
  v10 = 1;
  v9[0] = v9[0] & 0xFFFFFF00 | 0xD2;
  result = StorSendMFNDCommand((_DWORD)a1, Pool, 0, 128, (__int64)v9);
  v11 = result;
  if ( (int)result < 0 )
  {
    StorMapMFNDErrorToNtStatus(0, &v11);
    ExFreePoolWithTag(v8, 0x464D6152u);
    return v11;
  }
  else
  {
    a1[746] = (__int64)v8;
  }
  return result;
}

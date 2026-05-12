/*
 * XREFs of StorResetMFND @ 0x1C00919E0
 * Callers:
 *     RaidAdapterReconfigureMFND @ 0x1C0036034 (RaidAdapterReconfigureMFND.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C00680FC (StorSetMFNDOperationPrivilege.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorResetMFND(__int64 a1, char a2)
{
  char v4; // si
  __int64 result; // rax
  unsigned int v6; // edi
  _DWORD v7[16]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  memset(v7, 0, sizeof(v7));
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(a1 + 5896) != 1 )
  {
    result = StorSetMFNDOperationPrivilege(a1, 1);
    if ( (int)result < 0 )
      return result;
    v4 = 1;
  }
  LOBYTE(v7[15]) = 3;
  v7[15] = v7[15] & 0xF0FFFFFF | 0x1000000;
  v7[0] = 209;
  LOBYTE(v7[14]) = a2;
  v6 = StorSendMFNDCommand(a1, 0, 0, (unsigned int)v7);
  if ( v4 )
    StorSetMFNDOperationPrivilege(a1, 0);
  return v6;
}

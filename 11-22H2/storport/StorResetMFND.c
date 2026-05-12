/*
 * XREFs of StorResetMFND @ 0x1C00ADB84
 * Callers:
 *     RaidAdapterReconfigureMFND @ 0x1C0037294 (RaidAdapterReconfigureMFND.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C0077910 (StorSetMFNDOperationPrivilege.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorResetMFND(__int64 a1, char a2)
{
  char v4; // di
  __int64 result; // rax
  unsigned int v6; // esi
  _DWORD v7[14]; // [rsp+60h] [rbp-48h] BYREF
  char v8; // [rsp+98h] [rbp-10h]
  unsigned int v9; // [rsp+9Ch] [rbp-Ch]

  v4 = 0;
  memset_0(v7, 0, 0x40uLL);
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(a1 + 5960) != 1 )
  {
    result = StorSetMFNDOperationPrivilege(a1, 1);
    if ( (int)result < 0 )
      return result;
    v4 = 1;
  }
  LOBYTE(v9) = 3;
  v9 = v9 & 0xF0FFFFFF | 0x1000000;
  v7[0] = 209;
  v8 = a2;
  v6 = StorSendMFNDCommand(a1, 0, 0, 0, (__int64)v7);
  if ( v4 )
    StorSetMFNDOperationPrivilege(a1, 0);
  return v6;
}

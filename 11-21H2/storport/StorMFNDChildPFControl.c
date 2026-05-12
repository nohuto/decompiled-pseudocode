/*
 * XREFs of StorMFNDChildPFControl @ 0x1C0090BBC
 * Callers:
 *     RaidAdapterMFNDChildPFControl @ 0x1C00354B8 (RaidAdapterMFNDChildPFControl.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C00680FC (StorSetMFNDOperationPrivilege.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorMFNDChildPFControl(__int64 a1, int a2, unsigned __int16 a3)
{
  char v6; // si
  __int64 result; // rax
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  unsigned int v12; // ebx
  _DWORD v13[16]; // [rsp+50h] [rbp-48h] BYREF

  memset(v13, 0, sizeof(v13));
  v6 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(a1 + 5900) != 1 )
    return 3221225860LL;
  v8 = a2 - 1;
  if ( !v8 )
  {
    v11 = 0;
    goto LABEL_12;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = 0x10000;
    goto LABEL_12;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = 0x20000;
    goto LABEL_12;
  }
  if ( v10 != 1 )
    return 3221225659LL;
  v11 = 196608;
LABEL_12:
  if ( *(_DWORD *)(a1 + 5896) != 1 )
  {
    result = StorSetMFNDOperationPrivilege(a1, 1);
    if ( (int)result < 0 )
      return result;
    v6 = 1;
  }
  LOBYTE(v13[15]) = 4;
  v13[0] = 208;
  v13[15] = v13[15] & 0xF00000FF | ((v11 | a3) << 8);
  v12 = StorSendMFNDCommand(a1, 0, 0, (unsigned int)v13);
  if ( v6 )
    StorSetMFNDOperationPrivilege(a1, 0);
  return v12;
}

/*
 * XREFs of PssNtDuplicateSnapshot @ 0x180128CF0
 * Callers:
 *     <none>
 * Callees:
 *     PssNtValidateDescriptor @ 0x180129400 (PssNtValidateDescriptor.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18012BEFC (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18012C484 (PsspDuplicateSnapshotRemoteToRemote.c)
 */

__int64 __fastcall PssNtDuplicateSnapshot(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v9; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = a3;
  if ( a1 == -1 )
  {
    result = PssNtValidateDescriptor(a2, retaddr);
    if ( (int)result >= 0 )
    {
      if ( v6 == -1 )
        v9 = -1LL;
      else
        v9 = v6;
      return PsspDuplicateSnapshotLocalToRemote(a2, v9, a4, a5);
    }
  }
  else
  {
    if ( a3 == -1 )
      LODWORD(a3) = -1;
    return PsspDuplicateSnapshotRemoteToRemote(a1, a2, a3, a4, a5);
  }
  return result;
}

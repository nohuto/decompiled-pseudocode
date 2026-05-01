/*
 * XREFs of sub_18001CE50 @ 0x18001CE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_18001CD28 @ 0x18001CD28 (sub_18001CD28.c)
 */

CLIENT_CALL_RETURN __fastcall sub_18001CE50(__int64 a1)
{
  int v1; // edx
  __int64 v3; // rdi
  int v4; // edx
  int v5; // edx
  CLIENT_CALL_RETURN result; // rax
  char v7; // bl

  v1 = *(_DWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v4 = v1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
          return (CLIENT_CALL_RETURN)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*(_QWORD *)(a1 + 8));
        return result;
      }
      RtlAcquireSRWLockExclusive(v3 + 8);
      *(_DWORD *)(v3 + 76) = *(_DWORD *)(a1 + 24);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v3 + 8);
      *(_DWORD *)(v3 + 64) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(v3 + 68) = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(v3 + 76) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(v3 + 72) = *(_DWORD *)(a1 + 36);
    }
    RtlReleaseSRWLockExclusive(v3 + 8);
    return sub_18001CD28(v3);
  }
  RtlAcquireSRWLockExclusive(v3 + 8);
  v7 = 1;
  if ( *(_DWORD *)(v3 + 40) == 1 )
  {
    *(_DWORD *)(v3 + 40) = 2;
    *(_DWORD *)(v3 + 44) = *(_WORD *)(a1 + 42) & 7;
    *(_DWORD *)(v3 + 48) = *(unsigned __int16 *)(a1 + 40);
    *(_QWORD *)(v3 + 56) = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v7 = 0;
  }
  result.Simple = RtlReleaseSRWLockExclusive(v3 + 8);
  if ( v7 )
    return (CLIENT_CALL_RETURN)RtlWakeAllConditionVariable(v3 + 16);
  return result;
}

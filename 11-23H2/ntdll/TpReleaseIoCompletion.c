/*
 * XREFs of TpReleaseIoCompletion @ 0x18004BBC0
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18004BB64 (TppIopValidateIo.c)
 *     TppCleanupGroupMemberRelease @ 0x18004EEE0 (TppCleanupGroupMemberRelease.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseIoCompletion(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = TppIopValidateIo((_PEB_LDR_DATA *)a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}

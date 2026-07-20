/*
 * XREFs of SmpDeleteSubSys @ 0x14001AD78
 * Callers:
 *     SmpHandleConnectionRequest @ 0x140003230 (SmpHandleConnectionRequest.c)
 *     SmpLoadSubSystem @ 0x1400199F8 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140002444 (SmpDereferenceKnownSubSys.c)
 *     SmpLockKnownSubSysList @ 0x140002614 (SmpLockKnownSubSysList.c)
 *     SmpCompleteSubSysStatusChange @ 0x14000270C (SmpCompleteSubSysStatusChange.c)
 *     SmpUnlockKnownSubSysList @ 0x140003800 (SmpUnlockKnownSubSysList.c)
 */

void __fastcall SmpDeleteSubSys(char *BaseAddress)
{
  int v2; // edi
  __int64 v3; // rdx
  PVOID *v4; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (BaseAddress[8] & 4) == 0 )
  {
    v2 = 1;
    SmpLockKnownSubSysList(*((_DWORD *)BaseAddress + 16), 0, (__int64)v5);
    if ( (BaseAddress[8] & 4) != 0 )
    {
      v2 = 0;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)BaseAddress + 2, 4u);
      v3 = *((_QWORD *)BaseAddress + 9);
      if ( *(char **)(v3 + 8) != BaseAddress + 72
        || (v4 = (PVOID *)*((_QWORD *)BaseAddress + 10), *v4 != BaseAddress + 72) )
      {
        __fastfail(3u);
      }
      *v4 = (PVOID)v3;
      *(_QWORD *)(v3 + 8) = v4;
    }
    SmpUnlockKnownSubSysList((__int64)v5, v3);
    if ( v2 == 1 )
    {
      SmpCompleteSubSysStatusChange((__int64)BaseAddress);
      SmpDereferenceKnownSubSys(BaseAddress);
    }
  }
}

/*
 * XREFs of RootHub_D0Exit @ 0x1C000D388
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000DD50 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     Controller_NotifyPortStateToPep @ 0x1C000CFBC (Controller_NotifyPortStateToPep.c)
 *     RootHub_HandleResumedPorts @ 0x1C000D530 (RootHub_HandleResumedPorts.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C000D734 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011F9C (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_DumpPortData @ 0x1C00133B0 (RootHub_DumpPortData.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013A48 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall RootHub_D0Exit(__int64 a1, int a2, int a3)
{
  int v4; // ebx
  __int64 v6; // r13
  int v7; // r12d
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // r8
  __int16 Ulong; // ax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // r14
  __int64 v17; // rbx
  __int16 v18; // ax

  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  RootHub_HandleResumedPorts();
  v7 = 2;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v8 = 0;
    do
    {
      if ( v4 != 5 )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(v9 + 336) >> 26;
        LOBYTE(v10) = (*(_QWORD *)(v9 + 336) & 0x4000000LL) != 0;
        if ( (int)RootHub_WaitForPendingU3TransitionCompletion(a1, v8 + 1, v10) < 0 && a3 == 7 )
          ((void (__fastcall *)(__int64, _QWORD))qword_1C00627D0)(UcxDriverGlobals, *(_QWORD *)a1);
        Ulong = XilRegister_ReadUlong(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL), *(_QWORD *)(a1 + 40) + 16LL * v8);
        if ( (Ulong & 0x201) == 0x201 )
        {
          v12 = Ulong & 0x1E0;
          if ( ((v12 - 128) & 0xFFFFFF3F) != 0 || v12 == 256 )
            v7 = 1;
        }
      }
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x40000000LL) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 40) + 16LL * v8;
        RootHub_AcquireReadModifyWriteLock(a1, v8);
        v14 = XilRegister_ReadUlong(v6, v13);
        if ( a3 != 7 || (v14 & 0x20000) == 0 )
          XilRegister_WriteUlong(v6, v13, v14 & 0xE00C200 | 0x20000u);
        RootHub_ReleaseReadModifyWriteLock(a1, v8);
      }
      v15 = 112LL * v8;
      if ( (*(_DWORD *)(v15 + *(_QWORD *)(a1 + 48) + 64) & 2) != 0
        || (unsigned int)(a3 - 3) <= 3 && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x20000000LL) != 0 )
      {
        v17 = *(_QWORD *)(a1 + 40) + 16LL * v8;
        RootHub_AcquireReadModifyWriteLock(a1, v8);
        v18 = XilRegister_ReadUlong(v6, v17);
        XilRegister_WriteUlong(v6, v17, v18 & 0xC200);
        RootHub_ReleaseReadModifyWriteLock(a1, v8);
      }
      RootHub_DumpPortData(*(_QWORD *)(a1 + 40) + 16LL * v8++, *(_QWORD *)(a1 + 8));
      v4 = a2;
      *(_BYTE *)(v15 + *(_QWORD *)(a1 + 48) + 18) = 0;
    }
    while ( v8 + 1 <= *(_DWORD *)(a1 + 16) );
  }
  return Controller_NotifyPortStateToPep(*(_QWORD *)(a1 + 8), v7);
}

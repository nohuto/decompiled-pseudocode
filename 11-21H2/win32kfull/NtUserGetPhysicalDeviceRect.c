/*
 * XREFs of NtUserGetPhysicalDeviceRect @ 0x1C01F57B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserGetPhysicalDeviceRect(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  __int64 v10; // rcx
  char v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  v13 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v12);
  if ( !a1 || !a2 )
  {
    v8 = 87LL;
    goto LABEL_9;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v13, 0LL) )
  {
    v8 = 6LL;
LABEL_9:
    UserSetLastError(v8, v6);
    goto LABEL_10;
  }
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (_BYTE *)MmUserProbeAddress;
  *v9 = *v9;
  v9[15] = v9[15];
  *a2 = *(_OWORD *)(v13 + 140);
  v5 = 1;
LABEL_10:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v12, (__int64)v9, v7);
  UserSessionSwitchLeaveCrit(v10);
  return v5;
}

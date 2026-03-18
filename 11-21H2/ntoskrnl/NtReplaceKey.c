/*
 * XREFs of NtReplaceKey @ 0x14090F3F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpNameFromAttributes @ 0x14067DB18 (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x14067DE4C (CmCheckNoTxContext.c)
 *     CmPostCallbackNotificationEx @ 0x14067FF60 (CmPostCallbackNotificationEx.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     CmReplaceKey @ 0x1409136B4 (CmReplaceKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AB4138 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AB4178 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtReplaceKey(_OWORD *a1, int a2, _OWORD *a3)
{
  char v6; // si
  KPROCESSOR_MODE PreviousMode; // di
  char UnloadRundown; // r13
  int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  _QWORD *v14; // rdi
  int v15; // eax
  unsigned int v16; // eax
  unsigned __int8 *v17; // rdx
  ULONG v19; // [rsp+20h] [rbp-E0h]
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v24[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v25; // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+90h] [rbp-70h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-60h]
  __int128 v28; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+C0h] [rbp-40h] BYREF
  PVOID *p_Object; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  __int64 *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]

  Object = 0LL;
  v25 = 0LL;
  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v22[1] = v22;
  v22[0] = v22;
  *(_OWORD *)v24 = 0LL;
  *(_OWORD *)P = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  CmpInitializeThreadInfo((__int64)&v25);
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
  {
    v9 = CmCheckNoTxContext();
    if ( v9 >= 0 )
    {
      if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v6 = 1;
        v9 = CmpNameFromAttributes(a1, PreviousMode, (UNICODE_STRING *)v24);
        if ( v9 >= 0 )
        {
          v9 = CmpNameFromAttributes(a3, PreviousMode, (UNICODE_STRING *)P);
          if ( v9 >= 0 )
          {
            LOBYTE(v12) = PreviousMode;
            v13 = CmObReferenceObjectByHandle(a2, 0, v11, v12, (__int64)&Object, 0LL);
            v14 = Object;
            v9 = v13;
            if ( v13 >= 0 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) == 0 )
              {
                if ( !CmpCallBackCount
                  || CmpIsRegistryLockAcquired()
                  || (*(_QWORD *)&v26 = v14,
                      *((_QWORD *)&v26 + 1) = P,
                      *(_QWORD *)&v27 = v24,
                      v15 = CmpCallCallBacksEx(0x2Du, (__int64)&v26, 0LL, 1, 0x2Eu, 0LL, (__int64)v22),
                      v9 = v15,
                      v15 >= 0) )
                {
                  v16 = CmReplaceKey(*(_QWORD *)(v14[1] + 32LL));
                  v9 = CmPostCallbackNotificationEx(46, (__int64)v14, v16, (__int64)&v26, 0LL, v22);
                  if ( v9 == -1073740541 )
                    v9 = 0;
                }
                else if ( v15 == -1073740541 )
                {
                  v9 = 0;
                }
              }
              else
              {
                v9 = -1073741790;
              }
            }
            if ( v14 )
              ObfDereferenceObject(v14);
          }
        }
      }
      else
      {
        v9 = -1073741727;
      }
    }
  }
  else
  {
    v9 = -1073741431;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v24[1] )
    ExFreePoolWithTag(v24[1], 0);
  if ( v6 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  CmCleanupThreadInfo((__int64 *)&v25);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)dword_140C03868 > 5 && tlgKeywordOn((__int64)&dword_140C03868, 0x400000000000LL) )
    {
      v31 = 8LL;
      p_Object = (PVOID *)&v21;
      v17 = (unsigned __int8 *)word_140028CEA;
      v19 = 3;
      goto LABEL_35;
    }
  }
  else if ( (unsigned int)dword_140C03868 > 5 && tlgKeywordOn((__int64)&dword_140C03868, 0x400000000000LL) )
  {
    LODWORD(Object) = v9;
    p_Object = &Object;
    v17 = (unsigned __int8 *)byte_140028D20;
    v33 = 8LL;
    v32 = &v21;
    v31 = 4LL;
    v19 = 4;
LABEL_35:
    v21 = 0x1000000LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03868, v17, 0LL, 0LL, v19, &v29);
  }
  return (unsigned int)v9;
}

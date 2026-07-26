/*
 * XREFs of ndisLwmCreateIrpHandler @ 0x1C00CBD60
 * Callers:
 *     ?ndisLwmDispatchIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00CBEF8 (-ndisLwmDispatchIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     ?ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z @ 0x1C0027114 (-ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C003338C (WPP_RECORDER_SF_d_ea_1C003338C.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D038 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     IsFileObjectForNetworkInterface @ 0x1C00CBBE8 (IsFileObjectForNetworkInterface.c)
 */

__int64 __fastcall ndisLwmCreateIrpHandler(struct _IRP *a1, struct _IO_STACK_LOCATION *a2)
{
  _BYTE *Pool2; // rax
  GUID *v6; // rbx
  unsigned int v7; // edi
  void *v8; // r8
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-18h] BYREF
  void *v10; // [rsp+60h] [rbp+18h] BYREF

  GuidString = 0LL;
  if ( IsFileObjectForNetworkInterface((__int64)a2, (__int64)&GuidString) )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, 20LL, 1668236366);
    v6 = (GUID *)Pool2;
    if ( Pool2 )
    {
      *(_WORD *)(Pool2 + 17) = 0;
      Pool2[19] = 0;
      v8 = ndisSecurityDescriptor;
      *(_OWORD *)Pool2 = 0LL;
      Pool2[16] = 0;
      v10 = Pool2;
      Pool2[16] = ndisCheckAccess(a1, a2, v8) != 0;
      v7 = RtlGUIDFromString(&GuidString, v6);
      if ( !v7 )
      {
        a2->FileObject->FsContext = v6;
        return 0LL;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0x10u,
          (struct _GUID *)&WPP_9c8fc78aeca7325506c7c0cc4d060098_Traceguids,
          v7);
    }
    else
    {
      v10 = 0LL;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0xFu,
          (struct _GUID *)&WPP_9c8fc78aeca7325506c7c0cc4d060098_Traceguids);
      v7 = -1073741670;
    }
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>(&v10);
    return v7;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_9c8fc78aeca7325506c7c0cc4d060098_Traceguids);
  return 3221225523LL;
}

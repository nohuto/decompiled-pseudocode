/*
 * XREFs of RmpTracingControlCallback @ 0x180047450
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180029F54 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x18002A1F0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18004B2D8 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18004B348 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@65@Z @ 0x180083DA4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlg_ea_180083DA4.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180087118 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18008E7D0 (-LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 */

void __fastcall RmpTracingControlCallback(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6, __int64 a7)
{
  struct _RM_OBJECT_HEADER *i; // rax
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r9
  ExecutionModel::ResourceSet *Next; // rax
  struct _RM_OBJECT_HEADER *v13; // rbx
  unsigned __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v15[5]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v16[5]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v17[144]; // [rsp+B0h] [rbp-50h] BYREF

  if ( a2 == 2 )
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
    RmpAcquireGlobalLock();
    RmpObjectTableEnumerationBegin(
      (struct _RM_OBJECT_TABLE *)(a7 + 16),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v16);
    for ( i = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v16);
          ;
          i = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v16) )
    {
      v13 = i;
      if ( !i )
        break;
      if ( (*((_BYTE *)i + 852) & 1) == 0 )
      {
        v8 = RmpActivityHostQueryCommit(i, 0LL, 0LL, &v14);
        v9 = v14;
        if ( v8 < 0 )
          v9 = 0LL;
        v14 = v9;
        if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 9LL) )
        {
          v15[3] = *((_QWORD *)v13 + 4);
          v15[4] = (char *)v13 + 88;
          v15[2] = v11;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>>(
            v10,
            &unk_1800C20E8);
        }
        v15[1] = 3LL;
        v15[0] = RmpActivityHostEnumerateResourceSetGetFirst(v13, 3LL);
        while ( 1 )
        {
          Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v15);
          if ( !Next )
            break;
          ExecutionModel::ResourceSet::LogRundownEvent(Next);
        }
      }
      RmpObjectRelease((char *)v13);
    }
    RtlReleaseSRWLockShared(v16[0] + 16LL);
    RmpReleaseGlobalLock();
    CempLockTrackerClearForThread(HampLockTrackerId);
  }
}

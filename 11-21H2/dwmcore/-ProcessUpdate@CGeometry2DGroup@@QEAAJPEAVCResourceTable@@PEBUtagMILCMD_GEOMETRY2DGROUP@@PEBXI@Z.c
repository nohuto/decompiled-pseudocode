/*
 * XREFs of ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x180206434
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180046E80 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800E15E4 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x1801139E0 (-UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometry2DGroup::ProcessUpdate(
        CGeometry2DGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRY2DGROUP *a3,
        __int64 a4,
        unsigned int a5)
{
  int v9; // eax
  __int64 v10; // rcx
  struct CResource **v11; // rdx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct CResource **v17; // [rsp+60h] [rbp+8h] BYREF

  CGeometry2DGroup::UnRegisterNotifiers(this);
  v9 = CResource::UnmarshalResourceArray(
         a4,
         a5,
         *((_DWORD *)a3 + 2),
         0x42u,
         (unsigned int *)this + 26,
         (void **)&v17,
         (__int64)a2,
         1);
  v11 = v17;
  *((_QWORD *)this + 14) = v17;
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x1E1u);
    goto LABEL_5;
  }
  v13 = CResource::RegisterNNotifiersInternal(this, v11, *((unsigned int *)this + 26));
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x1F7u);
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v12, 0x1E4u);
LABEL_5:
    CGeometry2DGroup::UnRegisterNotifiers(this);
  }
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return v12;
}

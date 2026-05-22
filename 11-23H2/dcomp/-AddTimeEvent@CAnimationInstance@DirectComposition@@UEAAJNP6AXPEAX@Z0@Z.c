/*
 * XREFs of ?AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z @ 0x1800E8900
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z @ 0x180030EE0 (-ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z @ 0x180063D90 (-PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?EnsureCallbackId@CAnimationInstance@DirectComposition@@AEAAJXZ @ 0x1800E8AAC (-EnsureCallbackId@CAnimationInstance@DirectComposition@@AEAAJXZ.c)
 *     ?GetLastPrimitiveEndTime@CAnimationData@DirectComposition@@QEAA_JXZ @ 0x1800E8B78 (-GetLastPrimitiveEndTime@CAnimationData@DirectComposition@@QEAA_JXZ.c)
 *     ?InsertAt@?$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJAEBUDwmAnimationTimeEventData@@I@Z @ 0x1800E8D08 (-InsertAt@-$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJAEBUDwmAnimationTimeEventData@@I@Z.c)
 *     ?InsertAt@?$DynArray@UTimeEventCallbackData@CAnimationInstance@DirectComposition@@$0A@@@QEAAJAEBUTimeEventCallbackData@CAnimationInstance@DirectComposition@@I@Z @ 0x1800E8DE0 (-InsertAt@-$DynArray@UTimeEventCallbackData@CAnimationInstance@DirectComposition@@$0A@@@QEAAJAEB.c)
 *     ?RemoveAt@?$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJI@Z @ 0x1800E9094 (-RemoveAt@-$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationInstance::AddTimeEvent(
        DirectComposition::CAnimationInstance *this,
        double a2,
        void (*a3)(void *),
        void *a4)
{
  char v7; // r12
  unsigned int v8; // esi
  __int64 v9; // rbp
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  const void **v13; // r14
  char *v14; // rbp
  DirectComposition::CDeviceLock *v16; // [rsp+20h] [rbp-78h] BYREF
  void (*v17)(void *); // [rsp+28h] [rbp-70h] BYREF
  void *v18; // [rsp+30h] [rbp-68h]

  v16 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v16);
  v7 = 0;
  v8 = 0;
  if ( _finite(a2)
    && a3
    && *((_DWORD *)this + 27) != -1
    && (v9 = DirectComposition::CAnimationBuilder::ConvertDoubleToQPC(a2),
        v9 >= *((_QWORD *)DirectComposition::CAnimationData::PrimitiveAtIndex(
                            (DirectComposition::CAnimationInstance *)((char *)this + 112),
                            0LL)
              + 1))
    && v9 <= DirectComposition::CAnimationData::GetLastPrimitiveEndTime((DirectComposition::CAnimationInstance *)((char *)this + 112)) )
  {
    v10 = DirectComposition::CAnimationInstance::EnsureCallbackId(this);
    if ( v10 >= 0 )
    {
      v11 = *((_DWORD *)this + 26);
      ++*((_DWORD *)this + 27);
      v8 = *((_DWORD *)this + 24);
      LODWORD(v18) = v11;
      HIDWORD(v18) = *((_DWORD *)this + 27);
      v17 = (void (*)(void *))v9;
      if ( v8 )
      {
        do
        {
          v12 = v8 - 1;
          if ( *(_QWORD *)(*((_QWORD *)this + 9) + 16LL * (v8 - 1)) <= v9 )
            break;
          --v8;
        }
        while ( v12 );
      }
      v13 = (const void **)((char *)this + 72);
      v10 = DynArray<DwmAnimationTimeEventData,0>::InsertAt((char *)this + 72, &v17, v8);
      if ( v10 >= 0 )
      {
        v14 = (char *)this + 40;
        v17 = a3;
        v18 = a4;
        v7 = 1;
        v10 = DynArray<DirectComposition::CAnimationInstance::TimeEventCallbackData,0>::InsertAt(
                (char *)this + 40,
                &v17,
                v8);
        goto LABEL_14;
      }
    }
  }
  else
  {
    v10 = -2147024809;
  }
  v14 = (char *)this + 40;
  v13 = (const void **)((char *)this + 72);
LABEL_14:
  if ( v10 >= 0 )
  {
    v10 = DirectComposition::CResourceProxy::SetBufferProperty(
            (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 4) + 8LL),
            13,
            *v13,
            16LL * *((unsigned int *)this + 24));
    if ( v10 >= 0 )
      goto LABEL_19;
    DynArray<DwmAnimationTimeEventData,0>::RemoveAt(v14, v8);
  }
  if ( v7 )
    DynArray<DwmAnimationTimeEventData,0>::RemoveAt(v13, v8);
LABEL_19:
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v16);
  return (unsigned int)v10;
}

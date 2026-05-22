/*
 * XREFs of ?ResetTimeEvents@CAnimationInstance@DirectComposition@@UEAAJXZ @ 0x1800E9110
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationInstance::ResetTimeEvents(DirectComposition::CAnimationInstance *this)
{
  int v2; // edi
  DirectComposition::CDeviceLock *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v4);
  v2 = DirectComposition::CResourceProxy::SetBufferProperty(
         (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 4) + 8LL),
         13,
         0LL,
         0LL);
  if ( v2 >= 0 )
  {
    *((_DWORD *)this + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 72, 0x10u);
    *((_DWORD *)this + 16) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 40, 0x10u);
    ++*((_DWORD *)this + 26);
    *((_DWORD *)this + 27) = 0;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v4);
  return (unsigned int)v2;
}

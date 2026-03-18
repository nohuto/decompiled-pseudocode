/*
 * XREFs of ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x1C0076DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z @ 0x1C00169D0 (-FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z.c)
 *     Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage @ 0x1C0027E3C (Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x1C0076264 (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     ?FlipManagerConsumerIFlipTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C0081CF4 (-FlipManagerConsumerIFlipTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 */

void __fastcall CFlipManagerToken::Discard(CFlipManagerToken *this)
{
  struct FlipManagerObject *v2; // rcx
  _QWORD *v3; // rcx
  __int64 v4; // rcx
  struct FlipManagerObject *v5; // rcx

  if ( !(unsigned int)Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage() )
  {
    v2 = (struct FlipManagerObject *)*((_QWORD *)this + 8);
    if ( v2 )
    {
      FlipManagerDwmReleaseFlipManagerObject(v2);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
  v3 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( (unsigned int)Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage()
    && !*((_DWORD *)this + 6)
    && *((_BYTE *)this + 99) )
  {
    (*(void (__fastcall **)(CFlipManagerToken *))(*(_QWORD *)this + 16LL))(this);
    (*(void (__fastcall **)(CFlipManagerToken *))(*(_QWORD *)this + 24LL))(this);
    FlipManagerConsumerIFlipTokenCompleted((CFlipManagerToken *)((char *)this - 8), 0LL);
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( (unsigned int)Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage() )
  {
    v5 = (struct FlipManagerObject *)*((_QWORD *)this + 8);
    if ( v5 )
    {
      FlipManagerDwmReleaseFlipManagerObject(v5);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
  *((_DWORD *)this + 6) = 6;
}

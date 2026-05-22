/*
 * XREFs of ?GetAutomationProvider_Callback@CompositionIsland@Composition@UI@Windows@@QEAAJPEAPEAUIInspectable@@@Z @ 0x180112650
 * Callers:
 *     ?GetAutomationProvider@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180112590 (-GetAutomationProvider@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJPEAPEAUIInspectabl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_3c1ecbca6da52e5f52a0f6ea881ae9e6___ @ 0x1801112B4 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_3c1ecbca6da52e5f52a0f6ea881ae9e6_.c)
 *     ??$MakeAndInitialize2@VCompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@V1234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@@Z @ 0x1801114B4 (--$MakeAndInitialize2@VCompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Wind.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::GetAutomationProvider_Callback(
        RTL_SRWLOCK *this,
        struct IInspectable **a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  char *v10; // rax
  Microsoft::WRL2::ContextSession *Ptr; // rcx
  __int64 v12[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = this + 49;
  if ( this[49].Ptr )
  {
    AcquireSRWLockExclusive(this + 50);
    if ( v2->Ptr )
      v5 = (__int64)(*((_QWORD *)v2->Ptr + 3) - *((_QWORD *)v2->Ptr + 2)) >> 3;
    else
      v5 = 0LL;
    if ( v2 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(v2 + 1);
    if ( v5 )
    {
      v14 = 0LL;
      v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs,Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs>(&v14);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5CA,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
          (const char *)(unsigned int)v6);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
        return v7;
      }
      v9 = v14;
      if ( v14 )
        v10 = (char *)v14 + 24;
      else
        v10 = 0LL;
      Ptr = (Microsoft::WRL2::ContextSession *)this[3].Ptr;
      v12[1] = (unsigned __int64)&this[16] & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64);
      v12[0] = (__int64)v2;
      v12[2] = (__int64)v10;
      Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_3c1ecbca6da52e5f52a0f6ea881ae9e6___(Ptr, v12);
      *a2 = 0LL;
      if ( *((_BYTE *)v9 + 48) )
      {
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v9 + 5);
        *a2 = (struct IInspectable *)*((_QWORD *)v9 + 5);
      }
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
    }
  }
  return 0LL;
}

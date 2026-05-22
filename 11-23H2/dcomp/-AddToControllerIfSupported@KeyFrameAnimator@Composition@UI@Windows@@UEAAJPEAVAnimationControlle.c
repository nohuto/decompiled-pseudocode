/*
 * XREFs of ?AddToControllerIfSupported@KeyFrameAnimator@Composition@UI@Windows@@UEAAJPEAVAnimationController@234@@Z @ 0x18003B5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x18003BDBC (-AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVKeyFrameAnimator@Composition@UI@Windows@@@?$vector@PEAVKeyFrameAnimator@Composition@UI@Windows@@V?$allocator@PEAVKeyFrameAnimator@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEAVKeyFrameAnimator@Composition@UI@Windows@@QEAPEAV2345@AEBQEAV2345@@Z @ 0x1800449B8 (--$_Emplace_reallocate@AEBQEAVKeyFrameAnimator@Composition@UI@Windows@@@-$vector@PEAVKeyFrameAni.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimator::AddToControllerIfSupported(
        Microsoft::WRL2::NestableRuntimeClass **this,
        struct Windows::UI::Composition::AnimationController *a2)
{
  char *v4; // rcx
  Microsoft::WRL2::NestableRuntimeClass ***v5; // rdx
  char v6; // al
  int v7; // ebp
  DirectComposition::CDevice *v8; // rdi
  _DWORD *v9; // rax
  void (__fastcall ***v10)(_QWORD); // rcx
  Microsoft::WRL2::NestableRuntimeClass *v11; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v12; // rcx
  int v14; // eax
  const char *v15; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Windows::UI::Composition::KeyFrameAnimator *v17; // [rsp+50h] [rbp+8h] BYREF
  void *v18; // [rsp+60h] [rbp+18h] BYREF

  if ( this[43] )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x2D9,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimator.cpp",
      (const char *)0x8000FFFFLL,
      (int)"Animator already has an owning controller.",
      v15);
    return 2147549183LL;
  }
  else if ( this[35] )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x2DE,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimator.cpp",
      (const char *)0x8000FFFFLL,
      (int)"An animator created from animation trigger should never be directly controlled.",
      v15);
    return 2147549183LL;
  }
  else
  {
    v17 = (Windows::UI::Composition::KeyFrameAnimator *)this;
    v4 = (char *)a2 + 200;
    v5 = (Microsoft::WRL2::NestableRuntimeClass ***)*((_QWORD *)a2 + 26);
    if ( v5 == *((Microsoft::WRL2::NestableRuntimeClass ****)a2 + 27) )
    {
      std::vector<Windows::UI::Composition::KeyFrameAnimator *>::_Emplace_reallocate<Windows::UI::Composition::KeyFrameAnimator * const &>(
        v4,
        v5,
        &v17);
    }
    else
    {
      *v5 = this;
      *((_QWORD *)a2 + 26) += 8LL;
    }
    v6 = *((_BYTE *)a2 + 152);
    if ( (v6 & 1) == 0 )
    {
      *((_BYTE *)a2 + 152) = v6 | 1;
      DirectComposition::CDevice::AddDirtyRebuildableObject(
        *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
        (struct Windows::UI::Composition::AnimationController *)((char *)a2 + 136));
    }
    if ( *((_BYTE *)a2 + 196) && *((_DWORD *)this + 78) == 1 )
    {
      v7 = *((_DWORD *)this + 32);
      if ( v7 )
      {
        v8 = (DirectComposition::CDevice *)*((_QWORD *)this[3] + 57);
        DirectComposition::CDevice::BeginKernelCommand(v8, 0x18u, &v18, 0);
        v9 = v18;
        *(_DWORD *)v18 = 8;
        v9[1] = v7;
        v9[2] = 20;
        *((_QWORD *)v9 + 2) = 2LL;
        v10 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v8 + 10);
        if ( v10 )
          (**v10)(v10);
      }
      v11 = this[40];
      *((_DWORD *)this + 78) = 2;
      if ( v11 )
      {
        v14 = (*(__int64 (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v11 + 72LL))(v11);
        if ( v14 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x220,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimator.cpp",
            (const char *)(unsigned int)v14);
      }
    }
    if ( this[43] != a2 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)a2 + 4) == 1 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::AnimationController *))(*(_QWORD *)a2 + 80LL))(a2);
      v12 = this[43];
      this[43] = a2;
      if ( v12 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
    }
    return 0LL;
  }
}

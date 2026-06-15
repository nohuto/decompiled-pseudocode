/*
 * XREFs of ?RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ @ 0x1800503D8
 * Callers:
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x1800502D8 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??0CConstraintModelResourceManager@@AEAA@XZ @ 0x18004C438 (--0CConstraintModelResourceManager@@AEAA@XZ.c)
 *     ?Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z @ 0x180056004 (-Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioResourceManager::RuntimeClassInitialize(CAudioResourceManager *this)
{
  CConstraintModelResourceManager **v2; // rsi
  struct IAudioResourceControl *v3; // rbx
  CConstraintModelResourceManager *v4; // rax
  CConstraintModelResourceManager *v5; // rdi
  int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CConstraintModelResourceManager **)((char *)this + 48);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)this + 6);
  v3 = (struct IAudioResourceControl *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  if ( v2 )
  {
    v4 = (CConstraintModelResourceManager *)operator new(0x148uLL);
    if ( v4 )
      v5 = CConstraintModelResourceManager::CConstraintModelResourceManager(v4);
    else
      v5 = 0LL;
    if ( v5 )
    {
      v6 = CConstraintModelResourceManager::Initialize(v5, v3);
      if ( v6 >= 0 )
      {
        *v2 = v5;
        return 0LL;
      }
      (*(void (__fastcall **)(CConstraintModelResourceManager *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
    else
    {
      v6 = -2147024882;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3F1,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v6,
    v8);
  return (unsigned int)v6;
}

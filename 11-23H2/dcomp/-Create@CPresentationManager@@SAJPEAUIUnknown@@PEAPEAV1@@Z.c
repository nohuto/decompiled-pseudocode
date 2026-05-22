/*
 * XREFs of ?Create@CPresentationManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1801AD4D0
 * Callers:
 *     ?Initialize@CDeviceTextureManager@DirectComposition@@AEAAJXZ @ 0x180098A88 (-Initialize@CDeviceTextureManager@DirectComposition@@AEAAJXZ.c)
 *     ?CreatePresentationManager@CPresentationFactory@@UEAAJPEAPEAUIPresentationManager@@@Z @ 0x1801AEF50 (-CreatePresentationManager@CPresentationFactory@@UEAAJPEAPEAUIPresentationManager@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CPresentationManager@@AEAA@XZ @ 0x1801ACE58 (--0CPresentationManager@@AEAA@XZ.c)
 *     ?Initialize@CPresentationManager@@AEAAJPEAUIUnknown@@@Z @ 0x1801ADD50 (-Initialize@CPresentationManager@@AEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CPresentationManager::Create(struct IUnknown *a1, struct CPresentationManager **a2)
{
  CPresentationManager *v4; // rax
  CPresentationManager *v5; // rax
  CPresentationManager *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  int v10; // ecx
  CPresentationManager *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = (CPresentationManager *)operator new(0xE0uLL);
  if ( !v4 )
  {
    v12 = 0LL;
    goto LABEL_7;
  }
  v5 = CPresentationManager::CPresentationManager(v4);
  v12 = v5;
  v6 = v5;
  if ( !v5 )
  {
LABEL_7:
    v8 = -2147024882;
    v9 = 19;
    v10 = -2147024882;
    goto LABEL_8;
  }
  (*(void (__fastcall **)(CPresentationManager *))(*(_QWORD *)v5 + 8LL))(v5);
  v7 = CPresentationManager::Initialize(v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 22;
    v10 = v7;
LABEL_8:
    DoStackCaptureDirect(v10, v9);
    goto LABEL_9;
  }
  v12 = 0LL;
  *a2 = v6;
LABEL_9:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v12);
  return v8;
}

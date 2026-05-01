/*
 * XREFs of ?_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804E37D4
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2AE0 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z @ 0x1804E35F4 (-_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z.c)
 *     ?_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ @ 0x1804E37B0 (-_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ.c)
 *     s_GetAlignedRectsForApp @ 0x1804E40B0 (s_GetAlignedRectsForApp.c)
 */

void __fastcall CAppArrangementSingleTransitionTarget::_PrepareTaggingForDelayedStoryboard(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3)
{
  __int64 v3; // rax
  int (__fastcall *v6)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rdi
  __int64 *v7; // rbx
  bool v8; // dl
  __int128 *v9; // rbx
  int v10; // edi
  __int128 v11; // xmm0
  int v12; // ecx
  int v13; // eax
  __int128 v14; // xmm0
  int v15; // eax
  CAppTransitionTargetBase *v16; // rcx
  int v17; // eax
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF
  struct ITemporaryAppVisual *v19; // [rsp+60h] [rbp+18h] BYREF

  v19 = a3;
  v3 = *(_QWORD *)a2;
  v19 = 0LL;
  v6 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v3 + 32);
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v19, &v18);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v7);
  if ( v6(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v7) >= 0 )
  {
    v8 = (!(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
       || CAppArrangementSingleTransitionTarget::_IsDragVisual(this))
      && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2);
    v9 = (__int128 *)((char *)this + 188);
    v10 = 159744000;
    v11 = *(_OWORD *)((char *)this + 188);
    *(_OWORD *)((char *)this + 104) = v11;
    v12 = *((_DWORD *)this + 27);
    v13 = *((_DWORD *)this + 26);
    *((_DWORD *)this + 26) = 0;
    *(_OWORD *)((char *)this + 120) = v11;
    *((_DWORD *)this + 28) -= v13;
    *((_DWORD *)this + 29) -= v12;
    *((_DWORD *)this + 27) -= v12;
    if ( v8 )
    {
      v14 = *v9;
      v15 = *((_DWORD *)this + 40);
      *(_OWORD *)((char *)this + 72) = *v9;
      *(_OWORD *)((char *)this + 88) = v14;
      if ( (v15 & 0x1A) != 0 )
      {
        *((_DWORD *)this + 10) = 3;
      }
      else if ( (v15 & 1) != 0 )
      {
        *((_DWORD *)this + 10) = 6;
      }
      else
      {
        *((_DWORD *)this + 10) = (v15 & 0x20) != 0 ? 83 : 21;
      }
    }
    else if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
           && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
    {
      s_GetAlignedRectsForApp((_DWORD)this + 172, (_DWORD)this + 188, (_DWORD)this + 72, (_DWORD)this + 88, 0LL, 0LL);
      if ( Geometry::operator==((_DWORD *)this + 43, (_DWORD *)this + 47)
        || (*(unsigned __int8 (__fastcall **)(CAppArrangementSingleTransitionTarget *, struct IAppLayoutOperationItem *))(*(_QWORD *)this + 80LL))(
             this,
             a2) )
      {
        v16 = (CAppTransitionTargetBase *)((unsigned __int8)Geometry::operator==(
                                                              (_DWORD *)this + 43,
                                                              (_DWORD *)this + 47) << 21);
        v10 = (_DWORD)v16 + 159744000;
        *((_DWORD *)this + 10) = 28;
      }
      else
      {
        v10 = 696614912;
        *((_DWORD *)this + 10) = 23;
      }
      goto LABEL_11;
    }
    v16 = (CAppTransitionTargetBase *)*((unsigned int *)this + 19);
    v17 = *((_DWORD *)this + 18);
    *((_DWORD *)this + 18) = 0;
    *((_DWORD *)this + 20) -= v17;
    *((_DWORD *)this + 21) -= (_DWORD)v16;
    *((_DWORD *)this + 19) -= (_DWORD)v16;
LABEL_11:
    *((_DWORD *)this + 11) = CAppTransitionTargetBase::_GetDwmTargetFlag(v16, *((HWND *)this + 7), 0, v10);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
}

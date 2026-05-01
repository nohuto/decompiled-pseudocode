/*
 * XREFs of ?v_PrepareAppRects@CAppArrangementSingleTransitionTarget@@EEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18059C150
 * Callers:
 *     <none>
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MatchRectPillarBoxState@@YAXPEBUtagRECT@@00PEAU1@1@Z @ 0x18059A924 (-MatchRectPillarBoxState@@YAXPEBUtagRECT@@00PEAU1@1@Z.c)
 *     ?v_PrepareAppRects@CAppTransitionTargetBase@@MEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18059C2E0 (-v_PrepareAppRects@CAppTransitionTargetBase@@MEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryApp.c)
 */

void __fastcall CAppArrangementSingleTransitionTarget::v_PrepareAppRects(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  __int64 v7; // rax
  int (__fastcall *v8)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rdi
  __int64 *v9; // rbx
  struct tagRECT *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v13; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  CAppTransitionTargetBase::v_PrepareAppRects(this, a2, a3, a4);
  v7 = *(_QWORD *)a2;
  v12 = 0LL;
  if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(v7 + 80))(a2) )
  {
    v8 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
    v9 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v12, &v14);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v9);
    if ( v8(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v9) >= 0 )
    {
      if ( IsIconic(*((HWND *)this + 7))
        && (int)DwmpQueryWindowThumbnailSourceSize(*((_QWORD *)this + 7), 0LL, &v14) >= 0 )
      {
        v10 = (struct tagRECT *)((char *)this + 204);
        v13.left = 0;
        v13.top = 0;
        *(_QWORD *)&v13.right = v14;
        *(struct tagRECT *)((char *)this + 204) = v13;
      }
      else
      {
        v10 = (struct tagRECT *)((char *)this + 204);
        GetWindowRect(*((HWND *)this + 7), (LPRECT)((char *)this + 204));
      }
      v11 = *(_QWORD *)this;
      *(struct tagRECT *)((char *)this + 172) = *v10;
      if ( (*(unsigned __int8 (__fastcall **)(CAppArrangementSingleTransitionTarget *))(v11 + 72))(this) && a3 )
      {
        v13 = *v10;
        MatchRectPillarBoxState(
          &v13,
          (const struct tagRECT *)((char *)this + 236),
          (const struct tagRECT *)((char *)this + 252),
          (struct tagRECT *)((char *)this + 172),
          v10);
      }
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
}

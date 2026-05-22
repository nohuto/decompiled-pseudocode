/*
 * XREFs of ?UnbindIntersectingAnimators@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVTargetMapEntry@234@G_N@Z @ 0x18004D0E0
 * Callers:
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@U_D3DCOLORVALUE@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x180044B50 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPro.c)
 *     ??$InsertProperty@UPropertySetScalarValue@@M@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBM@Z @ 0x18004C620 (--$InsertProperty@UPropertySetScalarValue@@M@CompositionPropertySet@Composition@UI@Windows@@AEAA.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 *     ?StopAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18004D5B0 (-StopAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ?RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAVCompositionPropertyAnimator@234@@Z @ 0x180050220 (-RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@23.c)
 *     ?NotifyPropertyChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAJIIPEA_N@Z @ 0x180050AC0 (-NotifyPropertyChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAJIIPEA_N@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 *     ?UnregisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@_N@Z @ 0x18016959C (-UnregisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationBindingManager::UnbindIntersectingAnimators(
        Windows::UI::Composition::AnimationBindingManager *this,
        struct Windows::UI::Composition::TargetMapEntry *a2,
        unsigned __int16 a3,
        char a4)
{
  __int64 *v4; // rbx
  __int64 *v8; // r13
  __int64 v9; // rcx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rbp
  int v14; // r14d
  DirectComposition::CDevice *v15; // rdi
  _DWORD *v16; // rax
  void (__fastcall ***v17)(_QWORD); // rcx
  int v18; // r14d
  DirectComposition::CDevice *v19; // rdi
  _DWORD *v20; // rax
  void (__fastcall ***v21)(_QWORD); // rcx
  __int64 **v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rcx
  int v26; // r9d
  int v27; // r8d
  int i; // r10d
  char v29; // al
  int v30; // r9d
  int v31; // r8d
  unsigned __int64 v32; // r10
  char v33; // cl
  void *v34; // [rsp+60h] [rbp+8h] BYREF
  void *v35; // [rsp+68h] [rbp+10h] BYREF

  v34 = this;
  v4 = (__int64 *)*((_QWORD *)a2 + 1);
  v8 = v4;
  while ( v4 )
  {
    v9 = *v4;
    if ( *v4 )
    {
      if ( *(_DWORD *)v9 == 1 )
      {
        v26 = *(unsigned __int8 *)(v9 + 4);
        LOWORD(v27) = 0;
        if ( (_BYTE)v26 )
        {
          for ( i = 0; i < v26; ++i )
          {
            v29 = v26 - i;
            v27 = (unsigned __int16)v27 | (1 << ((*(unsigned __int8 *)(v9 + 8) >> (2 * v29 - 2)) & 3));
          }
        }
        else
        {
          LOWORD(v27) = -1;
        }
        LOWORD(v10) = v27;
      }
      else
      {
        if ( *(_DWORD *)v9 != 2 )
          Microsoft::WRL2::FailFast::Unexpected(0LL);
        LOWORD(v10) = 0;
        if ( *(_BYTE *)(v9 + 4) )
        {
          v30 = *(unsigned __int8 *)(v9 + 4);
          v31 = 0;
          v32 = *(_QWORD *)(v9 + 8);
          do
          {
            v33 = v30 - v31++;
            v10 = (unsigned __int16)v10 | (1 << ((v32 >> (4 * v33 - 4)) & 0xF));
          }
          while ( v31 < v30 );
        }
        else
        {
          LOWORD(v10) = -1;
        }
      }
    }
    else
    {
      LOWORD(v10) = -1;
    }
    if ( ((unsigned __int16)v10 & a3) != 0 )
    {
      if ( a4 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4[1] + 400LL))(v4[1]);
        v12 = v11;
        if ( v11 < 0 )
        {
          DoStackCaptureDirect(v11, 0x233u);
          return v12;
        }
      }
      v13 = v4[1];
      v14 = *(_DWORD *)(v13 + 128);
      if ( v14 )
      {
        v15 = *(DirectComposition::CDevice **)(*(_QWORD *)(v13 + 24) + 456LL);
        DirectComposition::CDevice::BeginKernelCommand(v15, 0x18u, &v34, 0);
        v16 = v34;
        *(_DWORD *)v34 = 8;
        v16[1] = v14;
        v16[2] = 6;
        *((_QWORD *)v16 + 2) = 1LL;
        v17 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v15 + 10);
        if ( v17 )
          (**v17)(v17);
      }
      if ( a4 )
      {
        v18 = *(_DWORD *)(v13 + 128);
        if ( v18 )
        {
          v19 = *(DirectComposition::CDevice **)(*(_QWORD *)(v13 + 24) + 456LL);
          DirectComposition::CDevice::BeginKernelCommand(v19, 0x18u, &v35, 0);
          v20 = v35;
          *(_DWORD *)v35 = 8;
          v20[1] = v18;
          v20[2] = 7;
          *((_QWORD *)v20 + 2) = 1LL;
          v21 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v19 + 10);
          if ( v21 )
            (**v21)(v21);
        }
      }
      v22 = (__int64 **)(v4 + 3);
      v23 = v4[3];
      if ( v4 == *((__int64 **)a2 + 1) )
        *((_QWORD *)a2 + 1) = v23;
      else
        v8[3] = v23;
      v24 = v4;
      v4 = *v22;
      *v22 = (__int64 *)*((_QWORD *)a2 + 2);
      *((_QWORD *)a2 + 2) = v24;
    }
    else
    {
      v8 = v4;
      v4 = (__int64 *)v4[3];
    }
  }
  return 0;
}

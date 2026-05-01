/*
 * XREFs of ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18006EB70
 * Callers:
 *     ?OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18006E810 (-OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?_GetApplicationFromFrame@CApplicationFrameService@@AEAAJPEAUIApplicationFrame@@PEAPEAUIImmersiveApplication@@@Z @ 0x18006EA80 (-_GetApplicationFromFrame@CApplicationFrameService@@AEAAJPEAUIApplicationFrame@@PEAPEAUIImmersiv.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006EC80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18022A46C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18022A46C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationFrameService::GetFrameByWindow(
        CApplicationFrameService *this,
        HWND a2,
        struct IApplicationFrameProxy **a3)
{
  struct IApplicationFrameProxy **v3; // r11
  unsigned __int64 i; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // r11
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // r11
  int CanCastTo; // edi
  signed __int64 v20; // rtt
  __int64 v21; // r9

  v3 = a3;
  *a3 = 0LL;
  for ( i = 0LL; i < *((_QWORD *)this + 13); ++i )
  {
    v6 = *((_QWORD *)this + 12);
    v7 = *(_QWORD *)(v6 + 8 * i);
    if ( *(HWND *)(v7 + 80) == a2 )
    {
      if ( !v7 )
        goto LABEL_9;
      v8 = *(_QWORD *)(v7 + 64);
      while ( v8 >= 0 )
      {
        if ( (_DWORD)v8 != 0x7FFFFFFF )
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v8 + 1, v8);
          if ( v9 != v8 )
            continue;
        }
        goto LABEL_9;
      }
      goto LABEL_29;
    }
  }
  for ( i = 0LL; ; ++i )
  {
    if ( i >= *((_QWORD *)this + 9) )
      return (unsigned int)-2147023728;
    v6 = *((_QWORD *)this + 8);
    v7 = *(_QWORD *)(v6 + 8 * i);
    if ( *(HWND *)(v7 + 80) == a2 )
      break;
  }
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 64);
    while ( v8 >= 0 )
    {
      if ( (_DWORD)v8 != 0x7FFFFFFF )
      {
        v20 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v8 + 1, v8);
        if ( v20 != v8 )
          continue;
      }
      goto LABEL_9;
    }
LABEL_29:
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v8 + 16), (volatile int *)v7);
  }
LABEL_9:
  v10 = *(_QWORD *)(v6 + 8 * i);
  *v3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(
                       &GUID_7342f6ea_5b75_4f66_8b08_e40f686d2b41,
                       &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v12 = v10;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    CanCastTo = 0;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v13, v14)
      || (unsigned int)InlineIsEqualGUID(v15, &GUID_143715d9_a015_40ea_b695_d5cc267e36ee) )
    {
      *v17 = v16;
      CanCastTo = 0;
LABEL_13:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 8LL))(*v17);
      goto LABEL_14;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                  v10 + 16,
                  v21,
                  v17);
    if ( CanCastTo >= 0 )
      goto LABEL_13;
  }
LABEL_14:
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::Release(v10);
  return (unsigned int)CanCastTo;
}

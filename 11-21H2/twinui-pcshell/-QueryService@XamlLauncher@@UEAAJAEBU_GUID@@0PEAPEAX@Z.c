/*
 * XREFs of ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180073D20
 * Callers:
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x18002765C (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180114F20 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@UIImmersiveLauncherInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180080D70 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellHookNot.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall XamlLauncher::QueryService(
        XamlLauncher *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  void **v4; // r11
  int v5; // ebx
  __int64 v6; // rax
  char *v7; // rcx
  char *v8; // rcx
  int CanCastTo; // edi
  IUnknown *v11; // rcx

  v4 = a4;
  v5 = 0;
  *a4 = 0LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ImmersiveLauncher.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ImmersiveLauncher.Revision )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ImmersiveLauncher.SubAuthority;
  if ( !v6 )
  {
    v7 = (char *)this - 48;
    if ( a3->Data1 )
    {
      if ( a3->Data1 == -62389853
        && *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
        && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
        && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
      {
        *a4 = v7;
        CanCastTo = 0;
LABEL_12:
        (*(void (__fastcall **)(void *))(*(_QWORD *)*v4 + 8LL))(*v4);
        return CanCastTo;
      }
    }
    else if ( *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
           && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
           && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      *a4 = v7;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
      return v5;
    }
    v8 = v7 + 24;
    if ( a3->Data1 == -657063015
      && *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_d8d60399_a0f1_f987_5551_321fd1b49864.Data2
      && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_d8d60399_a0f1_f987_5551_321fd1b49864.Data4
      && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_d8d60399_a0f1_f987_5551_321fd1b49864.Data4[4]
      || (v8 += 8, a3->Data1 == -1124993201)
      && *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_bcf1f74f_2413_46b3_8707_ec2fca11965d.Data2
      && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_bcf1f74f_2413_46b3_8707_ec2fca11965d.Data4
      && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_bcf1f74f_2413_46b3_8707_ec2fca11965d.Data4[4] )
    {
      *a4 = v8;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>::CanCastTo(
                    v8 + 8,
                    a3,
                    a4);
      if ( CanCastTo == -2147467262 )
        CanCastTo = -2147467262;
    }
    if ( CanCastTo < 0 )
      return CanCastTo;
    goto LABEL_12;
  }
  v11 = (IUnknown *)*((_QWORD *)this - 4);
  if ( v11 )
    return IUnknown_QueryService(v11, a2, a3, a4);
  else
    return -2147467262;
}

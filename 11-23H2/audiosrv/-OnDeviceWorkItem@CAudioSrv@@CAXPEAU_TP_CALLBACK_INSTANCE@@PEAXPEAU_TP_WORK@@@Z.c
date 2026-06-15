/*
 * XREFs of ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003AE80
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180007DF0 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x1800360E0 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAXXZ @ 0x18003AFB0 (-RemoveAll@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall CAudioSrv::OnDeviceWorkItem(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  int v10; // ecx
  unsigned __int64 v11; // rcx
  struct _tagpropertykey v12; // [rsp+30h] [rbp-28h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a2 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 112));
  v5 = (__int64 *)(a2 + 152);
  v6 = (__int64 *)*((_QWORD *)a2 + 19);
  if ( !v6 )
    ATL::AtlThrowImpl(-2147467259);
  v7 = v6[2];
  v8 = *v6;
  *v5 = *v6;
  if ( v8 )
    *(_QWORD *)(v8 + 8) = 0LL;
  else
    v5[1] = 0LL;
  *v6 = v5[4];
  v5[4] = (__int64)v6;
  if ( v5[2]-- == 1 )
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveAll(v5, v6, 0LL);
  if ( v4 )
    LeaveCriticalSection(v4);
  v10 = *(_DWORD *)(v7 + 16);
  if ( v10 == 4 )
  {
    v12 = *(struct _tagpropertykey *)(v7 + 32);
    CPolicyConfig::ProcessPropertyChange(*(const unsigned __int16 **)(v7 + 8), &v12);
  }
  else
  {
    v11 = (unsigned int)(v10 - 1);
    if ( (_DWORD)v11 && (v11 = (unsigned int)(v11 - 1), (_DWORD)v11) && (v11 = (unsigned int)(v11 - 1), (_DWORD)v11) )
    {
      if ( (_DWORD)v11 == 2 )
        (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager + 360LL))(
          g_PolicyManager,
          *(_QWORD *)(v7 + 8),
          *(unsigned int *)(v7 + 20),
          *(unsigned int *)(v7 + 24));
    }
    else
    {
      CAudioSrv::ProcessDeviceInternal((CAudioSrv *)v11, *(const unsigned __int16 **)(v7 + 8));
    }
  }
  (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
}

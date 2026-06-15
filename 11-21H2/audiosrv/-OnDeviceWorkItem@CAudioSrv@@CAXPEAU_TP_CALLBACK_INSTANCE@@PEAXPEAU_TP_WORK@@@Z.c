/*
 * XREFs of ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005A160
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x18003ED24 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18005A308 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800C45D4 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::OnDeviceWorkItem(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v10; // rcx
  struct _tagpropertykey v11; // [rsp+30h] [rbp-28h] BYREF

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
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)v5);
  if ( v4 )
    LeaveCriticalSection(v4);
  v10 = (unsigned int)(*(_DWORD *)(v7 + 16) - 1);
  if ( *(_DWORD *)(v7 + 16) == 1
    || (v10 = (unsigned int)(*(_DWORD *)(v7 + 16) - 2), *(_DWORD *)(v7 + 16) == 2)
    || (v10 = (unsigned int)(*(_DWORD *)(v7 + 16) - 3), *(_DWORD *)(v7 + 16) == 3) )
  {
    CAudioSrv::ProcessDeviceInternal((CAudioSrv *)v10, *(const unsigned __int16 **)(v7 + 8));
  }
  else if ( *(_DWORD *)(v7 + 16) == 4 )
  {
    v11 = *(struct _tagpropertykey *)(v7 + 32);
    CPolicyConfig::ProcessPropertyChange(*(const unsigned __int16 **)(v7 + 8), &v11);
  }
  else if ( *(_DWORD *)(v7 + 16) == 5 )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager + 368LL))(
      g_PolicyManager,
      *(_QWORD *)(v7 + 8),
      *(unsigned int *)(v7 + 20),
      *(unsigned int *)(v7 + 24));
  }
  (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
}

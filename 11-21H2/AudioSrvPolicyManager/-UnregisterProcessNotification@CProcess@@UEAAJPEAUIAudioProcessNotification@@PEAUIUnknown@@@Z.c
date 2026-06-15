/*
 * XREFs of ?UnregisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x18001CA20
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180016FDC (-FreeNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_polic.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x180017720 (-GetNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::UnregisterProcessNotification(
        CProcess *this,
        struct IAudioProcessNotification *a2,
        struct IUnknown *a3)
{
  unsigned int v5; // esi
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 Node; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  struct IUnknown *v14; // [rsp+70h] [rbp+18h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = a3;
  v5 = -2147024809;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 592);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 592));
  v12[0] = 0LL;
  Node = ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::GetNode(
           (__int64)this + 632,
           (unsigned int *)&v14,
           &v15,
           &v13,
           v12);
  v8 = Node;
  if ( Node )
  {
    v9 = (unsigned int)(*(_DWORD *)(Node + 24) % *((_DWORD *)this + 162));
    v10 = *(_QWORD *)(Node + 16);
    if ( v12[0] )
      *(_QWORD *)(v12[0] + 16LL) = v10;
    else
      *(_QWORD *)(*((_QWORD *)this + 79) + 8 * v9) = v10;
    ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::FreeNode(
      (__int64)this + 632,
      v8);
    ((void (__fastcall *)(struct IUnknown *))a3->lpVtbl->Release)(a3);
    v5 = 0;
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return v5;
}

/*
 * XREFs of ?Navigate@AccessibleElementBase@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x1802E53C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1803BF370 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805850F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibleElementBase::Navigate(
        AccessibleElementBase *this,
        enum NavigateDirection a2,
        struct IRawElementProviderFragment **a3)
{
  AccessibleElementBase *v5; // rbx
  int Element; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  void *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v17; // [rsp+50h] [rbp+20h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+68h] [rbp+38h] BYREF

  *a3 = 0LL;
  v17 = 0LL;
  v5 = (AccessibleElementBase *)((char *)this - 8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  Element = AccessibleElementBase::_GetElement(v5, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v17);
  if ( Element >= 0 )
  {
    v18 = 0LL;
    if ( a2 )
    {
      v7 = a2 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
              goto LABEL_16;
            v10 = v17;
            v11 = *(_QWORD *)v17;
            v12 = 8LL;
          }
          else
          {
            v10 = v17;
            v11 = *(_QWORD *)v17;
            v12 = 7LL;
          }
        }
        else
        {
          v10 = v17;
          v11 = *(_QWORD *)v17;
          v12 = 6LL;
        }
      }
      else
      {
        v10 = v17;
        v11 = *(_QWORD *)v17;
        v12 = 5LL;
      }
      v13 = (*(__int64 (__fastcall **)(void *, __int64 *, _QWORD, __int64, int))(v11 + 272))(v10, &v19, 0LL, v12, 1);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v19);
    }
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v18, v13);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    if ( v18 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IRawElementProviderFragment **))(*(_QWORD *)v18 + 376LL))(
              v18,
              &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
              a3);
      Element = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11B,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)v14);
LABEL_17:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
        goto LABEL_18;
      }
    }
LABEL_16:
    Element = 0;
    goto LABEL_17;
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  return (unsigned int)Element;
}

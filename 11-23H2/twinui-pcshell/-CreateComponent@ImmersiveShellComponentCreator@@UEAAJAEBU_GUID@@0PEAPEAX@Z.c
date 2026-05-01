/*
 * XREFs of ?CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800855F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180085850 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x18017DC90 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ImmersiveShellComponentCreator::CreateComponent(
        ImmersiveShellComponentCreator *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  Microsoft::WRL::Details *v7; // rsi
  const struct _GUID **v8; // rbx
  unsigned __int64 v9; // rax
  const struct _GUID *v10; // r9
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  int CacheEntry; // ebx
  int v14; // eax
  __int64 v15; // rcx
  int Ptr; // [rsp+20h] [rbp-38h]
  struct IUnknown **v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+30h] [rbp-28h] BYREF
  int v20[2]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = (Microsoft::WRL::Details *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create(this);
  *(_QWORD *)v20 = 0LL;
  v8 = (const struct _GUID **)((*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)v7 + 32LL))(v7) + 8);
  v9 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)v7 + 40LL))(v7);
  if ( (unsigned __int64)v8 >= v9 )
  {
LABEL_15:
    CacheEntry = -2147221231;
  }
  else
  {
    while ( 1 )
    {
      v10 = *v8;
      if ( *v8 )
      {
        v11 = *(_QWORD **)v10->Data4;
        v12 = *v11 - *(_QWORD *)&a2->Data1;
        if ( *v11 == *(_QWORD *)&a2->Data1 )
          v12 = v11[1] - *(_QWORD *)a2->Data4;
        if ( !v12 )
          break;
      }
      if ( (unsigned __int64)++v8 >= v9 )
        goto LABEL_15;
    }
    v19 = 1;
    CacheEntry = Microsoft::WRL::Details::GetCacheEntry(
                   v7,
                   (struct Microsoft::WRL::Details::ModuleBase *)&v19,
                   &GUID_00000001_0000_0000_c000_000000000046.Data1,
                   v10,
                   v20,
                   v18);
  }
  if ( CacheEntry < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\immersiveshellcomponentcreator.h",
      (const char *)(unsigned int)CacheEntry,
      Ptr);
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, void **))(**(_QWORD **)v20 + 24LL))(
            *(_QWORD *)v20,
            0LL,
            a3,
            a4);
    CacheEntry = v14;
    if ( v14 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\immersiveshellcomponentcreator.h",
        (const char *)(unsigned int)v14,
        Ptr);
    else
      CacheEntry = 0;
  }
  v15 = *(_QWORD *)v20;
  if ( *(_QWORD *)v20 )
  {
    *(_QWORD *)v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)CacheEntry;
}

/*
 * XREFs of ?TrackReference@ProxyObject@Composition@UI@Windows@@UEAAXI@Z @ 0x180079F10
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkCached@ContextRuntimeClass@WRL2@Microsoft@@QEAAX_N@Z @ 0x180065324 (-MarkCached@ContextRuntimeClass@WRL2@Microsoft@@QEAAX_N@Z.c)
 *     ??$MakeAndInitialize2@VAnimationLoggingManager@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVAnimationLoggingManager@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180068798 (--$MakeAndInitialize2@VAnimationLoggingManager@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180079048 (--$_Try_emplace@AEBI$$V@-$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::TrackReference(
        Windows::UI::Composition::ProxyObject *this,
        int a2)
{
  struct Windows::UI::Composition::Compositor *v3; // rbx
  __int64 v4; // r9
  unsigned int v5; // edx
  __int64 *v6; // r8
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  Microsoft::WRL2::ContextRuntimeClass *v12; // rcx
  int v13[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::WRL2::ContextRuntimeClass *v15; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+48h] [rbp+10h] BYREF
  struct Windows::UI::Composition::Compositor *v17; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 != *((_DWORD *)this + 32) && a2 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  v3 = (struct Windows::UI::Composition::Compositor *)*((_QWORD *)this + 3);
  if ( !*((_QWORD *)v3 + 105) )
  {
    v15 = 0LL;
    v17 = v3;
    v11 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::AnimationLoggingManager,Windows::UI::Composition::AnimationLoggingManager,Windows::UI::Composition::Compositor *>(
            &v15,
            &v17);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x111C,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v11,
        v13[0]);
    v12 = v15;
    *((_QWORD *)v3 + 105) = v15;
    Microsoft::WRL2::ContextRuntimeClass::MarkCached(v12, 1);
  }
  v4 = *((_QWORD *)v3 + 105);
  v5 = *((_DWORD *)this + 32);
  v16 = v5;
  v6 = *(__int64 **)(v4 + 152);
  v7 = v6;
  v8 = (__int64 *)v6[1];
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( *((_DWORD *)v8 + 8) >= v5 )
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( v7 == v6 || *((_BYTE *)v7 + 25) || v5 < *((_DWORD *)v7 + 8) )
  {
    v9 = *(_QWORD *)std::map<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>::_Try_emplace<unsigned int const &,>(
                      (const char *)(v4 + 152),
                      (__int64)v13,
                      &v16);
    *(_QWORD *)(v9 + 40) = this;
    v10 = *(_QWORD *)(v9 + 48);
    *(_QWORD *)(v9 + 48) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
}

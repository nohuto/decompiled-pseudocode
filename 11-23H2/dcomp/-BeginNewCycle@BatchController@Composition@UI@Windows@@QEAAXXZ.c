/*
 * XREFs of ?BeginNewCycle@BatchController@Composition@UI@Windows@@QEAAXXZ @ 0x180080488
 * Callers:
 *     ?InternalCommit_Callback@CompositorCommon@Composition@UI@Windows@@QEAAJPEAX@Z @ 0x1800803B4 (-InternalCommit_Callback@CompositorCommon@Composition@UI@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z @ 0x18000D204 (-MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV-$RefPtr.c)
 *     ?CheckCompleted@CompositionBatch@Composition@UI@Windows@@AEAA_NXZ @ 0x180010E0C (-CheckCompleted@CompositionBatch@Composition@UI@Windows@@AEAA_NXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::UI::Composition::BatchController::BeginNewCycle(
        Windows::UI::Composition::BatchController *this)
{
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  Windows::UI::Composition::CompositionBatch *v5; // rcx
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // eax
  Microsoft::WRL2::NestableRuntimeClass *v10; // rcx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  if ( *(_QWORD *)this )
  {
    if ( v2 )
    {
      do
      {
        v4 = *v2 & 0xFFFFFFFFFFFFFFFEuLL;
        ++*(_DWORD *)(*(_QWORD *)this + 140LL);
        *v2 = *(_QWORD *)this;
        v2 = (_QWORD *)v4;
      }
      while ( v4 );
    }
    v5 = *(Windows::UI::Composition::CompositionBatch **)this;
    *((_BYTE *)v5 + 128) = 1;
    v6 = Windows::UI::Composition::CompositionBatch::CheckCompleted(v5);
    v7 = *(_QWORD *)this;
    if ( v6 )
    {
      Windows::UI::Composition::BatchController::MigrateBatch((__int64)this, v7, 0LL, 3);
      LOBYTE(v8) = 1;
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 440LL) + 48LL))(
             *(_QWORD *)(*((_QWORD *)this + 3) + 440LL),
             v8);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xCB7,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
          (const char *)(unsigned int)v9,
          v11);
    }
    else
    {
      Windows::UI::Composition::BatchController::MigrateBatch((__int64)this, v7, 0LL, 2);
    }
    v10 = *(Microsoft::WRL2::NestableRuntimeClass **)this;
    if ( *(_QWORD *)this )
    {
      *(_QWORD *)this = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
    }
  }
  else if ( v2 )
  {
    do
    {
      v3 = *v2 & 0xFFFFFFFFFFFFFFFEuLL;
      *v2 = 0LL;
      v2 = (_QWORD *)v3;
    }
    while ( v3 );
  }
  *((_QWORD *)this + 2) = 0LL;
}

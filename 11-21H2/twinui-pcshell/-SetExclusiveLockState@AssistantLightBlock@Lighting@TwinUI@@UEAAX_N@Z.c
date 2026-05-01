/*
 * XREFs of ?SetExclusiveLockState@AssistantLightBlock@Lighting@TwinUI@@UEAAX_N@Z @ 0x180560E00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UILampArrayPrivate@Internal@Lights@Devices@Windows@@@?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILampArrayPrivate@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180560C04 (--$As@UILampArrayPrivate@Internal@Lights@Devices@Windows@@@-$ComPtr@UILampArray@Lights@Devices@W.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightBlock::SetExclusiveLockState(
        TwinUI::Lighting::AssistantLightBlock *this,
        char a2)
{
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD); // rdi
  DWORD CurrentProcessId; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 8);
  v11 = 0LL;
  if ( a2 )
  {
    v3 = Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray>::As<Windows::Devices::Lights::Internal::ILampArrayPrivate>(
           v2,
           &v11);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightblock.cpp",
        (const char *)(unsigned int)v3);
    v4 = v11;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL);
    CurrentProcessId = GetCurrentProcessId();
    v7 = v5(v4, CurrentProcessId);
    if ( v7 < 0 )
    {
      v8 = 61LL;
LABEL_10:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightblock.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  else
  {
    v9 = Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray>::As<Windows::Devices::Lights::Internal::ILampArrayPrivate>(
           v2,
           &v11);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x42,
        (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightblock.cpp",
        (const char *)(unsigned int)v9);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
    if ( v7 < 0 )
    {
      v8 = 67LL;
      goto LABEL_10;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
}

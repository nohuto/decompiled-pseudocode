/*
 * XREFs of ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x1800ECBF4
 * Callers:
 *     ?EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x1800E9440 (-EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x1800417D8 (-InitializeBase@SystemCursorServiceBase@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1800EC658 (-CreatePermanentCursors@SystemCursorService2@@AEAAJXZ.c)
 *     ?EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ @ 0x1800EC930 (-EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ.c)
 *     ?Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICursorManager@@@Z @ 0x180156060 (-Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICurso.c)
 */

__int64 __fastcall SystemCursorService2::Initialize(SystemCursorService2 *this, int a2)
{
  int PermanentCursors; // ebx
  __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  PermanentCursors = SystemCursorServiceBase::InitializeBase((SystemCursorService2 *)((char *)this + 8));
  if ( PermanentCursors < 0 )
  {
    v5 = 39LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)(unsigned int)PermanentCursors);
    return (unsigned int)PermanentCursors;
  }
  *((_DWORD *)this + 62) = a2;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 6);
  PermanentCursors = CursorManager::Create(this, v7, v8, (char *)this + 48);
  if ( PermanentCursors < 0 )
  {
    v5 = 47LL;
    goto LABEL_3;
  }
  PermanentCursors = SystemCursorService2::CreatePermanentCursors(this);
  if ( PermanentCursors < 0 )
  {
    v5 = 49LL;
    goto LABEL_3;
  }
  PermanentCursors = SystemCursorService2::EnumerateCursorsForShell(this);
  if ( PermanentCursors < 0 )
  {
    v5 = 50LL;
    goto LABEL_3;
  }
  return 0LL;
}

/*
 * XREFs of ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x18000D4B8
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KPEAUICompositeSystemEffect@@@Z @ 0x18000D1C0 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidAECLoopbackSelectionMode@@YA_NPEBG@Z @ 0x18000CAF8 (-IsValidAECLoopbackSelectionMode@@YA_NPEBG@Z.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x18000D54C (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x18000D590 (-GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800D8CE4 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x180103094 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     ??1?$unique_ptr@UAuxiliaryInputDescriptor@@U?$default_delete@UAuxiliaryInputDescriptor@@@std@@@std@@QEAA@XZ @ 0x180104838 (--1-$unique_ptr@UAuxiliaryInputDescriptor@@U-$default_delete@UAuxiliaryInputDescriptor@@@std@@@s.c)
 *     ?RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ @ 0x1801096EC (-RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSharedStreamGroupProxy::ConfigureAuxiliaryInputStream(const unsigned __int16 **this)
{
  struct AuxiliaryInputDescriptor *v2; // rax
  struct AuxiliaryInputDescriptor *v3; // rbx
  int AuxiliaryInputDescriptor; // eax
  unsigned int v5; // edx
  int v7; // eax
  unsigned int v8; // ebx
  CAudioResourceManager *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v14; // [rsp+30h] [rbp+8h] BYREF
  struct AuxiliaryInputDescriptor *v15; // [rsp+38h] [rbp+10h] BYREF

  if ( IsValidAECLoopbackSelectionMode(this[37]) )
  {
    v7 = CSharedStreamGroupProxy::RegisterForLoopbackEndpointChangeNotifications((CSharedStreamGroupProxy *)this);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C9,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v7,
        v12);
      return v8;
    }
  }
  v2 = (struct AuxiliaryInputDescriptor *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 1) = 0;
    *(_DWORD *)v2 = 0;
    *((_QWORD *)v2 + 1) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v15 = v3;
  AuxiliaryInputDescriptor = CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor(
                               (CSharedStreamGroupProxy *)(this + 1),
                               v3);
  if ( AuxiliaryInputDescriptor < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3CE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)AuxiliaryInputDescriptor);
  }
  else if ( *(_DWORD *)v3 == 1 )
  {
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>(&v14, this);
    v9 = g_AudioResourceManager;
    if ( g_AudioResourceManager )
      v9 = (struct IAudioResourceManager *)((char *)g_AudioResourceManager - 8);
    v10 = CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup(v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D2,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v10,
        v12);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v14);
      std::unique_ptr<AuxiliaryInputDescriptor>::~unique_ptr<AuxiliaryInputDescriptor>(&v15);
      return v11;
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v14);
  }
  if ( v3 )
    AuxiliaryInputDescriptor::`scalar deleting destructor'(v3, v5);
  return 0LL;
}

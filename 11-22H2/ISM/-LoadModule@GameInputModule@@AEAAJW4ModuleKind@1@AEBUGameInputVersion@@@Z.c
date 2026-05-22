/*
 * XREFs of ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18004BB94
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18004B808 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x18001B9A0 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@PEA_K@Z @ 0x18004BD60 (-GetSystemDirPath@GameInputModule@@CAJPEBGAEAV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@st.c)
 *     ?ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z @ 0x18004BEF4 (-ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z.c)
 *     ?ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z @ 0x18004C288 (-ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameInputInbox@@@details@wil@@QEAA_NXZ @ 0x18006DAF4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameInputInbox@@@detail.c)
 *     ??1CriticalSectionLock@@QEAA@XZ @ 0x180125E50 (--1CriticalSectionLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1801263D4 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputModule::LoadModule(__int64 a1, __int64 a2, const WCHAR *a3)
{
  int v4; // ebx
  unsigned int v5; // edi
  int SystemDirPath; // eax
  int v7; // edx
  unsigned int v8; // ebx
  const WCHAR *v10; // rbx
  DWORD FileAttributesW; // eax
  HMODULE Library; // rax
  const struct GameInputVersion *v13; // rdx
  HMODULE v14; // rbx
  FARPROC ProcAddress; // rbp
  FARPROC v16; // r14
  FARPROC v17; // rax
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF
  LPCWSTR lpFileName; // [rsp+50h] [rbp+18h] BYREF

  lpFileName = a3;
  v4 = *(_DWORD *)a1;
  v5 = 0;
  if ( !*(_DWORD *)a1 )
  {
    v18 = a1 + 40;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
    v4 = *(_DWORD *)a1;
    if ( !*(_DWORD *)a1 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameInputInbox>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_GameInputInbox>::GetImpl'::`2'::impl);
      lpFileName = 0LL;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameInputInbox>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_GameInputInbox>::GetImpl'::`2'::impl);
      SystemDirPath = GameInputModule::GetSystemDirPath(L"GameInput.dll", &lpFileName);
      v8 = SystemDirPath;
      if ( SystemDirPath < 0 )
      {
        wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)SystemDirPath, v7);
        VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&lpFileName);
        CriticalSectionLock::~CriticalSectionLock((CriticalSectionLock *)&v18);
        return v8;
      }
      v10 = lpFileName;
      FileAttributesW = GetFileAttributesW(lpFileName);
      if ( FileAttributesW != -1
        && (FileAttributesW & 0x550) == 0
        && (int)GameInputModule::ValidateModuleCertChain(v10) >= 0 )
      {
        Library = LoadLibraryExW(v10, 0LL, 0x800u);
        v14 = Library;
        if ( Library )
        {
          if ( GameInputModule::ValidateModuleVersion(Library, v13)
            && (ProcAddress = GetProcAddress(v14, "GameInputCreate")) != 0LL
            && (v16 = GetProcAddress(v14, "DllCanUnloadNow")) != 0LL
            && (v17 = GetProcAddress(v14, "DllGetClassObject")) != 0LL )
          {
            *(_QWORD *)(a1 + 8) = ProcAddress;
            *(_QWORD *)(a1 + 16) = v16;
            *(_QWORD *)(a1 + 24) = v17;
            *(_QWORD *)(a1 + 32) = v14;
          }
          else
          {
            FreeLibrary(v14);
          }
        }
      }
      *(_DWORD *)a1 = 1;
      v4 = 1;
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&lpFileName);
    }
    CriticalSectionLock::~CriticalSectionLock((CriticalSectionLock *)&v18);
  }
  if ( v4 != 1 )
    return 2147549183LL;
  LOBYTE(v5) = *(_QWORD *)(a1 + 32) == 0LL;
  return v5;
}

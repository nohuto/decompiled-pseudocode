/*
 * XREFs of ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x180033814
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18003370C (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 * Callees:
 *     ?ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z @ 0x1800339E0 (-ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z.c)
 *     ?ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z @ 0x180033A84 (-ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z.c)
 *     ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@PEA_K@Z @ 0x180033C3C (-GetSystemDirPath@GameInputModule@@CAJPEBGAEAV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@st.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800FC644 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputModule::LoadModule(__int64 a1, __int64 a2, const WCHAR *a3)
{
  int v3; // ebp
  unsigned int v5; // esi
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int SystemDirPath; // eax
  int v8; // edx
  unsigned int v9; // ebx
  WCHAR *v11; // rbx
  DWORD FileAttributesW; // eax
  HMODULE Library; // rax
  const struct GameInputVersion *v14; // rdx
  HMODULE v15; // rbp
  FARPROC ProcAddress; // r15
  FARPROC v17; // r12
  FARPROC v18; // rax
  LPCWSTR lpFileName; // [rsp+60h] [rbp+18h] BYREF

  lpFileName = a3;
  v3 = *(_DWORD *)a1;
  v5 = 0;
  if ( *(_DWORD *)a1 )
    goto LABEL_20;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
  {
LABEL_19:
    LeaveCriticalSection(v6);
LABEL_20:
    if ( v3 != 1 )
      return 2147549183LL;
    LOBYTE(v5) = *(_QWORD *)(a1 + 32) == 0LL;
    return v5;
  }
  lpFileName = 0LL;
  SystemDirPath = GameInputModule::GetSystemDirPath(L"GameInput.dll", &lpFileName);
  v9 = SystemDirPath;
  if ( SystemDirPath >= 0 )
  {
    v11 = (WCHAR *)lpFileName;
    FileAttributesW = GetFileAttributesW(lpFileName);
    if ( FileAttributesW != -1
      && (FileAttributesW & 0x550) == 0
      && (int)GameInputModule::ValidateModuleCertChain(v11) >= 0 )
    {
      Library = LoadLibraryExW(v11, 0LL, 0x800u);
      v15 = Library;
      if ( Library )
      {
        if ( GameInputModule::ValidateModuleVersion(Library, v14)
          && (ProcAddress = GetProcAddress(v15, "GameInputCreate")) != 0LL
          && (v17 = GetProcAddress(v15, "DllCanUnloadNow")) != 0LL
          && (v18 = GetProcAddress(v15, "DllGetClassObject")) != 0LL )
        {
          *(_QWORD *)(a1 + 8) = ProcAddress;
          *(_QWORD *)(a1 + 16) = v17;
          *(_QWORD *)(a1 + 24) = v18;
          *(_QWORD *)(a1 + 32) = v15;
        }
        else
        {
          FreeLibrary(v15);
        }
      }
    }
    *(_DWORD *)a1 = 1;
    v3 = 1;
    if ( v11 )
      operator delete[](v11);
    goto LABEL_19;
  }
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)SystemDirPath, v8);
  if ( lpFileName )
    operator delete[]((void *)lpFileName);
  LeaveCriticalSection(v6);
  return v9;
}

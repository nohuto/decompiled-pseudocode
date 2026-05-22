/*
 * XREFs of ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18004B808
 * Callers:
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x18004B640 (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 *     ?OnModuleUpdated@GameInputServerProxy@@CAXPEAX@Z @ 0x1801261D0 (-OnModuleUpdated@GameInputServerProxy@@CAXPEAX@Z.c)
 * Callees:
 *     ?CreateServer@GameInputServerProxy@@AEAAJPEAVGameInputModule@@@Z @ 0x18004BA14 (-CreateServer@GameInputServerProxy@@AEAAJPEAVGameInputModule@@@Z.c)
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18004BB94 (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 *     ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@PEA_K@Z @ 0x18004BD60 (-GetSystemDirPath@GameInputModule@@CAJPEBGAEAV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@st.c)
 *     ?StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z @ 0x18004C09C (-StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z.c)
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x18004C380 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GGameInputModule@@QEAAPEAXI@Z @ 0x180126028 (--_GGameInputModule@@QEAAPEAXI@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1801263D4 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputServerProxy::LoadGameInput(GameInputServerProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rax
  struct GameInputModule *v3; // rbx
  int Module; // eax
  int v5; // edx
  int Server; // esi
  GameInputModule *v7; // rdi
  int SystemDirPath; // eax
  unsigned int v9; // edx
  void (*v10)(void *); // r9
  WCHAR *v11; // rbx
  LPCWSTR lpFileName; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (struct GameInputModule *)v2;
  if ( !v2 )
  {
    Server = -2147024882;
    goto LABEL_8;
  }
  LODWORD(v2->DebugInfo) = 0;
  *(_QWORD *)&v2->LockCount = 0LL;
  v2->OwningThread = 0LL;
  v2->LockSemaphore = 0LL;
  v2->SpinCount = 0LL;
  InitializeCriticalSection(v2 + 1);
  GameInputServerProxy::UnloadGameInput(this);
  Module = GameInputModule::LoadModule(v3);
  Server = Module;
  if ( Module == 1 )
  {
    Server = -2147418113;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8000FFFFLL, v5);
    v7 = v3;
    goto LABEL_9;
  }
  v7 = v3;
  if ( Module >= 0 )
  {
    Server = GameInputServerProxy::CreateServer(this, v3);
    if ( Server >= 0 )
    {
      *((_QWORD *)this + 8) = v3;
LABEL_8:
      v7 = 0LL;
    }
  }
LABEL_9:
  lpFileName = 0LL;
  SystemDirPath = GameInputModule::GetSystemDirPath(0LL, &lpFileName);
  v11 = (WCHAR *)lpFileName;
  if ( SystemDirPath >= 0 )
    GameInputWatcher::StartWatching((GameInputServerProxy *)((char *)this + 72), lpFileName, this, v10);
  if ( v11 )
    operator delete[](v11);
  if ( v7 )
    GameInputModule::`scalar deleting destructor'(v7, v9);
  return (unsigned int)Server;
}

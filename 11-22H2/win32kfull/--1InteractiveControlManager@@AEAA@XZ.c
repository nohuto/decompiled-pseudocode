/*
 * XREFs of ??1InteractiveControlManager@@AEAA@XZ @ 0x1C00BBDB8
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C003B554 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x1C00BBE14 (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 */

void __fastcall InteractiveControlManager::~InteractiveControlManager(InteractiveControlManager *this)
{
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx

  InteractiveControlManager::Deinitialize(this);
  v1 = qword_1C0354170;
  qword_1C0354170 = 0LL;
  dword_1C0354150 = 0;
  EtwUnregister(v1);
  v2 = qword_1C0354138;
  qword_1C0354138 = 0LL;
  dword_1C0354118 = 0;
  EtwUnregister(v2);
}

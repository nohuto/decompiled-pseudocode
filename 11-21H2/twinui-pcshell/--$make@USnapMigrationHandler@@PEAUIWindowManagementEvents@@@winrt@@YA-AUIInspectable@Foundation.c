/*
 * XREFs of ??$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@@winrt@@YA?AUIInspectable@Foundation@Windows@0@$$QEAPEAUIWindowManagementEvents@@@Z @ 0x1800A9E78
 * Callers:
 *     ?SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800DBFC0 (-SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@@Z @ 0x1800A9EDC (--0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<SnapMigrationHandler,IWindowManagementEvents *>(
        _QWORD *a1,
        struct IWindowManagementEvents **a2)
{
  SnapMigrationHandler *v5; // [rsp+30h] [rbp+8h]

  v5 = (SnapMigrationHandler *)operator new(0x28uLL);
  SnapMigrationHandler::SnapMigrationHandler(v5, *a2);
  *(_QWORD *)v5 = &SnapMigrationHandler::`vftable';
  *a1 = (char *)v5 + 16;
  return a1;
}

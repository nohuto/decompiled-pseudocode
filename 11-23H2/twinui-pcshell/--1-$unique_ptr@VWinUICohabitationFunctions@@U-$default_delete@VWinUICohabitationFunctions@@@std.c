/*
 * XREFs of ??1?$unique_ptr@VWinUICohabitationFunctions@@U?$default_delete@VWinUICohabitationFunctions@@@std@@@std@@QEAA@XZ @ 0x1801BF440
 * Callers:
 *     _dynamic_atexit_destructor_for__WinUICohabitationFunctions::s_instance___0 @ 0x1802C7C40 (_dynamic_atexit_destructor_for__WinUICohabitationFunctions--s_instance___0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<WinUICohabitationFunctions>::~unique_ptr<WinUICohabitationFunctions>(HMODULE **a1)
{
  HMODULE *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *v1 )
      FreeLibrary(*v1);
    operator delete(v1);
  }
}

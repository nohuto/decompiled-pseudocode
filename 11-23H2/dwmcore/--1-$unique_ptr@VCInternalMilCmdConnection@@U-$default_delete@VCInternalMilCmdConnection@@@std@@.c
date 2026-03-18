/*
 * XREFs of ??1?$unique_ptr@VCInternalMilCmdConnection@@U?$default_delete@VCInternalMilCmdConnection@@@std@@@std@@QEAA@XZ @ 0x18010ED40
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800FEDC0 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 *     _dynamic_atexit_destructor_for__g_pConnection___0 @ 0x180123FF0 (_dynamic_atexit_destructor_for__g_pConnection___0.c)
 * Callees:
 *     ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x1801B30E0 (--_GCInternalMilCmdConnection@@UEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<CInternalMilCmdConnection>::~unique_ptr<CInternalMilCmdConnection>(
        CInternalMilCmdConnection **a1)
{
  CInternalMilCmdConnection *v1; // rcx
  void *result; // rax

  v1 = *a1;
  if ( v1 )
    return CInternalMilCmdConnection::`scalar deleting destructor'(v1, 1u);
  return result;
}

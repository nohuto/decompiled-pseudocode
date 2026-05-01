/*
 * XREFs of ??_ETaskFlowImmersiveShellBroker@@UEAAPEAXI@Z @ 0x18014839C
 * Callers:
 *     ??_ETaskFlowImmersiveShellBroker@@WFA@EAAPEAXI@Z @ 0x18029AD50 (--_ETaskFlowImmersiveShellBroker@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TaskFlowImmersiveShellBroker@@UEAA@XZ @ 0x180148060 (--1TaskFlowImmersiveShellBroker@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

TaskFlowImmersiveShellBroker *__fastcall TaskFlowImmersiveShellBroker::`vector deleting destructor'(
        TaskFlowImmersiveShellBroker *this,
        char a2)
{
  TaskFlowImmersiveShellBroker::~TaskFlowImmersiveShellBroker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x140uLL);
  return this;
}

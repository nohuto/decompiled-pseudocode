/*
 * XREFs of ??_GInputProcessManager@@UEAAPEAXI@Z @ 0x1801B3B80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1InputProcessManager@@UEAA@XZ @ 0x1801B3A6C (--1InputProcessManager@@UEAA@XZ.c)
 */

InputProcessManager *__fastcall InputProcessManager::`scalar deleting destructor'(InputProcessManager *this, char a2)
{
  InputProcessManager::~InputProcessManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

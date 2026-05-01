/*
 * XREFs of ??_GCWRLExecuteCommandBase@@MEAAPEAXI@Z @ 0x1804FEB70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x1804FEA28 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 */

CWRLExecuteCommandBase *__fastcall CWRLExecuteCommandBase::`scalar deleting destructor'(
        CWRLExecuteCommandBase *this,
        char a2)
{
  CWRLExecuteCommandBase::~CWRLExecuteCommandBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

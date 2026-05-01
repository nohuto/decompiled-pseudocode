/*
 * XREFs of ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x180039870
 * Callers:
 *     <none>
 * Callees:
 *     ??1ExternalResourceSet@ExecutionModel@@EEAA@XZ @ 0x18003AA98 (--1ExternalResourceSet@ExecutionModel@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180048F50 (--3@YAXPEAX@Z.c)
 */

ExecutionModel::ExternalResourceSet *__fastcall ExecutionModel::ExternalResourceSet::`scalar deleting destructor'(
        ExecutionModel::ExternalResourceSet *this,
        char a2)
{
  ExecutionModel::ExternalResourceSet::~ExternalResourceSet(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

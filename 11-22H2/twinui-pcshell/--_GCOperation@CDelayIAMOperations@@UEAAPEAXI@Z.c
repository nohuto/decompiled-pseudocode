/*
 * XREFs of ??_GCOperation@CDelayIAMOperations@@UEAAPEAXI@Z @ 0x180397C40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CDelayIAMOperations::COperation *__fastcall CDelayIAMOperations::COperation::`scalar deleting destructor'(
        CDelayIAMOperations::COperation *this,
        char a2)
{
  *(_QWORD *)this = &CDelayIAMOperations::COperation::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

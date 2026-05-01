/*
 * XREFs of ??_GCThreadRefTaker@@UEAAPEAXI@Z @ 0x18049C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CThreadRefTaker@@UEAA@XZ @ 0x1800EB344 (--1CThreadRefTaker@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CThreadRefTaker *__fastcall CThreadRefTaker::`scalar deleting destructor'(CThreadRefTaker *this, char a2)
{
  CThreadRefTaker::~CThreadRefTaker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

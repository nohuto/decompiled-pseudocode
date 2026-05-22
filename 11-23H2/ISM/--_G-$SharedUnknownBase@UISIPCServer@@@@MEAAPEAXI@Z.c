/*
 * XREFs of ??_G?$SharedUnknownBase@UISIPCServer@@@@MEAAPEAXI@Z @ 0x180118A50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1SharedObjectBase@@MEAA@XZ @ 0x180117F48 (--1SharedObjectBase@@MEAA@XZ.c)
 */

SharedObjectBase *__fastcall SharedUnknownBase<ISIPCServer>::`scalar deleting destructor'(
        SharedObjectBase *a1,
        char a2)
{
  *(_QWORD *)a1 = &SharedUnknownBase<ISIPCServer>::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)a1 + 2) = &SharedUnknownBase<ISIPCServer>::`vftable'{for `ISIPCServer'};
  SharedObjectBase::~SharedObjectBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

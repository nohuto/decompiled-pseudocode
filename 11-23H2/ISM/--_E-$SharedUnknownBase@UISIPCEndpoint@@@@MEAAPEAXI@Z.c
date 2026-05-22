/*
 * XREFs of ??_E?$SharedUnknownBase@UISIPCEndpoint@@@@MEAAPEAXI@Z @ 0x1801189F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1SharedObjectBase@@MEAA@XZ @ 0x180117F48 (--1SharedObjectBase@@MEAA@XZ.c)
 */

SharedObjectBase *__fastcall SharedUnknownBase<ISIPCEndpoint>::`vector deleting destructor'(
        SharedObjectBase *a1,
        char a2)
{
  *(_QWORD *)a1 = &SharedUnknownBase<ISIPCEndpoint>::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)a1 + 2) = &SharedUnknownBase<ISIPCEndpoint>::`vftable'{for `ISIPCEndpoint'};
  SharedObjectBase::~SharedObjectBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

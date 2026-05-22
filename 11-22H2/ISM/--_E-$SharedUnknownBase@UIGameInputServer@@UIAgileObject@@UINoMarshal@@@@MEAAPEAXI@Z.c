/*
 * XREFs of ??_E?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAPEAXI@Z @ 0x18006D6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1SharedObjectBase@@MEAA@XZ @ 0x180125FD0 (--1SharedObjectBase@@MEAA@XZ.c)
 */

SharedObjectBase *__fastcall SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vector deleting destructor'(
        SharedObjectBase *a1,
        char a2)
{
  *(_QWORD *)a1 = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)a1 + 2) = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IGameInputServer'};
  *((_QWORD *)a1 + 3) = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IAgileObject'};
  *((_QWORD *)a1 + 4) = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `INoMarshal'};
  SharedObjectBase::~SharedObjectBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

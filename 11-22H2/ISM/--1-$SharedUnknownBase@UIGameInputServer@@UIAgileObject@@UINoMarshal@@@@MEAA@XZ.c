/*
 * XREFs of ??1?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAA@XZ @ 0x18006D6B0
 * Callers:
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x180125EE4 (--1GameInputServerProxy@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::~SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>(
        SharedObjectBase *a1)
{
  *(_QWORD *)a1 = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)a1 + 2) = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IGameInputServer'};
  *((_QWORD *)a1 + 3) = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IAgileObject'};
  *((_QWORD *)a1 + 4) = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `INoMarshal'};
  SharedObjectBase::~SharedObjectBase(a1);
}

/*
 * XREFs of ??1?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@MEAA@XZ @ 0x1800FBF5C
 * Callers:
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x1800FC01C (--1GameInputServerProxy@@EEAA@XZ.c)
 *     ??_E?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@MEAAPEAXI@Z @ 0x1800FC140 (--_E-$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarsha.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::~SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>(
        SharedObjectBase *a1)
{
  *(_QWORD *)a1 = &SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)a1 + 2) = &SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::`vftable'{for `IGameInputServer'};
  *((_QWORD *)a1 + 3) = &SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::`vftable'{for `IGameInputServerDownlevel'};
  *((_QWORD *)a1 + 4) = &SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::`vftable'{for `IAgileObject'};
  *((_QWORD *)a1 + 5) = &SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::`vftable'{for `INoMarshal'};
  SharedObjectBase::~SharedObjectBase(a1);
}

/*
 * XREFs of ?QueryInterface@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FC3E0
 * Callers:
 *     ?QueryInterface@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050240 (-QueryInterface@-$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject.c)
 *     ?QueryInterface@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050260 (-QueryInterface@-$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@_ea_180050260.c)
 *     ?QueryInterface@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050280 (-QueryInterface@-$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@_ea_180050280.c)
 * Callees:
 *     ?AddPublicReference@SharedObjectBase@@IEAAIXZ @ 0x180048B70 (-AddPublicReference@SharedObjectBase@@IEAAIXZ.c)
 *     ??$TryCastToInterface@V?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@@?$InterfaceIterator@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@SAPEAXPEAV1@AEBU_GUID@@@Z @ 0x1800FBEE0 (--$TryCastToInterface@V-$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgil.c)
 */

__int64 __fastcall SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  SharedObjectBase *v3; // r10
  __int64 v4; // rax
  _QWORD *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r9

  v3 = (SharedObjectBase *)(a1 - 16);
  v4 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  v5 = a3;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
    goto LABEL_7;
  v6 = *a2 - *(_QWORD *)&GUID_f05fc5e1_8b6f_426a_acc2_8c73b0e2a844.Data1;
  if ( *a2 == *(_QWORD *)&GUID_f05fc5e1_8b6f_426a_acc2_8c73b0e2a844.Data1 )
    v6 = a2[1] - *(_QWORD *)GUID_f05fc5e1_8b6f_426a_acc2_8c73b0e2a844.Data4;
  if ( v6 )
    v7 = SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::InterfaceIterator<IGameInputServerDownlevel,IAgileObject,INoMarshal>::TryCastToInterface<SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>>(
           a1 - 16,
           a2);
  else
LABEL_7:
    v7 = a1 & ((unsigned __int128)-(__int128)(unsigned __int64)v3 >> 64);
  if ( v7 )
  {
    if ( v5 )
    {
      SharedObjectBase::AddPublicReference(v3);
      result = 0LL;
      *v10 = v9;
    }
    else
    {
      return 2147500035LL;
    }
  }
  else
  {
    if ( v5 )
      *v5 = 0LL;
    return 2147500034LL;
  }
  return result;
}

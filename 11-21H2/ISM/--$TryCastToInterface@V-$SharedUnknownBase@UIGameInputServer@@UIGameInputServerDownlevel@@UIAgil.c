/*
 * XREFs of ??$TryCastToInterface@V?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@@?$InterfaceIterator@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@SAPEAXPEAV1@AEBU_GUID@@@Z @ 0x1800FBEE0
 * Callers:
 *     ?QueryInterface@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FC3E0 (-QueryInterface@-$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@_ea_1800FC3E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::InterfaceIterator<IGameInputServerDownlevel,IAgileObject,INoMarshal>::TryCastToInterface<SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = *a2 - *(_QWORD *)&GUID_f0b6b86e_4f0c_4a0f_814d_c641bbc5f54c.Data1;
  if ( *a2 == *(_QWORD *)&GUID_f0b6b86e_4f0c_4a0f_814d_c641bbc5f54c.Data1 )
    v2 = a2[1] - *(_QWORD *)GUID_f0b6b86e_4f0c_4a0f_814d_c641bbc5f54c.Data4;
  v3 = 0LL;
  if ( !v2 )
  {
    v4 = a1 + 24;
    return v4 & -(__int64)(a1 != 0);
  }
  v5 = *a2 - *(_QWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data1;
  if ( *a2 == *(_QWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data1 )
    v5 = a2[1] - *(_QWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4;
  if ( !v5 )
  {
    v4 = a1 + 32;
    return v4 & -(__int64)(a1 != 0);
  }
  v6 = *a2 - *(_QWORD *)&GUID_ecc8691b_c1db_4dc0_855e_65f6c551af49.Data1;
  if ( *a2 == *(_QWORD *)&GUID_ecc8691b_c1db_4dc0_855e_65f6c551af49.Data1 )
    v6 = a2[1] - *(_QWORD *)GUID_ecc8691b_c1db_4dc0_855e_65f6c551af49.Data4;
  if ( !v6 )
  {
    v4 = a1 + 40;
    return v4 & -(__int64)(a1 != 0);
  }
  return v3;
}

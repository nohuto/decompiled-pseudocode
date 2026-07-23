/*
 * XREFs of KeResetEvent @ 0x1402A40D0
 * Callers:
 *     sub_140237720 @ 0x140237720 (sub_140237720.c)
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     sub_140253900 @ 0x140253900 (sub_140253900.c)
 *     sub_140253E78 @ 0x140253E78 (sub_140253E78.c)
 *     sub_140256C68 @ 0x140256C68 (sub_140256C68.c)
 *     ExUnregisterCallback @ 0x14025DE40 (ExUnregisterCallback.c)
 *     sub_140284C74 @ 0x140284C74 (sub_140284C74.c)
 *     sub_1402853B0 @ 0x1402853B0 (sub_1402853B0.c)
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_140355424 @ 0x140355424 (sub_140355424.c)
 *     sub_14036A48C @ 0x14036A48C (sub_14036A48C.c)
 *     sub_140373D18 @ 0x140373D18 (sub_140373D18.c)
 *     sub_140379848 @ 0x140379848 (sub_140379848.c)
 *     sub_14037A5F0 @ 0x14037A5F0 (sub_14037A5F0.c)
 *     sub_1403867F4 @ 0x1403867F4 (sub_1403867F4.c)
 *     sub_140393EC0 @ 0x140393EC0 (sub_140393EC0.c)
 *     sub_1403A46E4 @ 0x1403A46E4 (sub_1403A46E4.c)
 *     sub_1403B17EC @ 0x1403B17EC (sub_1403B17EC.c)
 *     sub_1403C31D4 @ 0x1403C31D4 (sub_1403C31D4.c)
 *     sub_1403C3E64 @ 0x1403C3E64 (sub_1403C3E64.c)
 *     sub_1403CBBF0 @ 0x1403CBBF0 (sub_1403CBBF0.c)
 *     sub_1403CDBF0 @ 0x1403CDBF0 (sub_1403CDBF0.c)
 *     sub_1403CF698 @ 0x1403CF698 (sub_1403CF698.c)
 *     sub_1403CFD20 @ 0x1403CFD20 (sub_1403CFD20.c)
 *     sub_1403D8FF0 @ 0x1403D8FF0 (sub_1403D8FF0.c)
 *     sub_1404186A0 @ 0x1404186A0 (sub_1404186A0.c)
 *     sub_14053CFF4 @ 0x14053CFF4 (sub_14053CFF4.c)
 *     sub_14059D170 @ 0x14059D170 (sub_14059D170.c)
 *     sub_1405B81F0 @ 0x1405B81F0 (sub_1405B81F0.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 *     sub_1405BE340 @ 0x1405BE340 (sub_1405BE340.c)
 *     sub_1405CCAC0 @ 0x1405CCAC0 (sub_1405CCAC0.c)
 *     sub_1405D6D4C @ 0x1405D6D4C (sub_1405D6D4C.c)
 *     sub_1406128E0 @ 0x1406128E0 (sub_1406128E0.c)
 *     sub_140615360 @ 0x140615360 (sub_140615360.c)
 *     sub_140635EEC @ 0x140635EEC (sub_140635EEC.c)
 *     sub_140647CF0 @ 0x140647CF0 (sub_140647CF0.c)
 *     sub_14064FA50 @ 0x14064FA50 (sub_14064FA50.c)
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 *     sub_14069E454 @ 0x14069E454 (sub_14069E454.c)
 *     sub_1406A4C58 @ 0x1406A4C58 (sub_1406A4C58.c)
 *     sub_1406A7150 @ 0x1406A7150 (sub_1406A7150.c)
 *     sub_1406C3CA8 @ 0x1406C3CA8 (sub_1406C3CA8.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     sub_1406E825C @ 0x1406E825C (sub_1406E825C.c)
 *     sub_1406EC9F8 @ 0x1406EC9F8 (sub_1406EC9F8.c)
 *     sub_1406EDFEC @ 0x1406EDFEC (sub_1406EDFEC.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     sub_1407563A0 @ 0x1407563A0 (sub_1407563A0.c)
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 *     sub_1407D2C60 @ 0x1407D2C60 (sub_1407D2C60.c)
 *     sub_1407E0340 @ 0x1407E0340 (sub_1407E0340.c)
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 *     PoUnregisterPowerSettingCallback @ 0x1407FC690 (PoUnregisterPowerSettingCallback.c)
 *     sub_1408081E0 @ 0x1408081E0 (sub_1408081E0.c)
 *     sub_14080AB40 @ 0x14080AB40 (sub_14080AB40.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     sub_14080F068 @ 0x14080F068 (sub_14080F068.c)
 *     sub_140811238 @ 0x140811238 (sub_140811238.c)
 *     sub_14081CFDC @ 0x14081CFDC (sub_14081CFDC.c)
 *     sub_14084F9EC @ 0x14084F9EC (sub_14084F9EC.c)
 *     sub_140852700 @ 0x140852700 (sub_140852700.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140859F30 (IoRegisterFsRegistrationChangeMountAware.c)
 *     sub_140882180 @ 0x140882180 (sub_140882180.c)
 *     sub_140929380 @ 0x140929380 (sub_140929380.c)
 *     sub_140929F90 @ 0x140929F90 (sub_140929F90.c)
 *     sub_140935044 @ 0x140935044 (sub_140935044.c)
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 *     sub_14093FC6C @ 0x14093FC6C (sub_14093FC6C.c)
 *     sub_140988074 @ 0x140988074 (sub_140988074.c)
 *     sub_14098E120 @ 0x14098E120 (sub_14098E120.c)
 *     sub_140990100 @ 0x140990100 (sub_140990100.c)
 *     sub_140990634 @ 0x140990634 (sub_140990634.c)
 *     sub_1409AB284 @ 0x1409AB284 (sub_1409AB284.c)
 *     sub_1409B5088 @ 0x1409B5088 (sub_1409B5088.c)
 *     sub_1409EF190 @ 0x1409EF190 (sub_1409EF190.c)
 *     sub_140A0D5E8 @ 0x140A0D5E8 (sub_140A0D5E8.c)
 *     sub_140A517EC @ 0x140A517EC (sub_140A517EC.c)
 *     sub_140A52320 @ 0x140A52320 (sub_140A52320.c)
 *     sub_140A651B8 @ 0x140A651B8 (sub_140A651B8.c)
 *     sub_140A65554 @ 0x140A65554 (sub_140A65554.c)
 *     sub_140A6AACC @ 0x140A6AACC (sub_140A6AACC.c)
 *     sub_140AAC1BC @ 0x140AAC1BC (sub_140AAC1BC.c)
 *     sub_140B078E4 @ 0x140B078E4 (sub_140B078E4.c)
 *     sub_140B4F04C @ 0x140B4F04C (sub_140B4F04C.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  unsigned __int8 CurrentIrql; // di
  LONG SignalState; // esi
  __int64 v5; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v8; // r9
  int v9; // edx
  bool v10; // zf
  int v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v5 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v11 = 0;
  while ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
      sub_1402F32E0(&v11);
    while ( (Event->Header.LockNV & 0x80u) != 0 );
  }
  SignalState = Event->Header.SignalState;
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return SignalState;
}

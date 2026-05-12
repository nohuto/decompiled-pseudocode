/*
 * XREFs of sub_1C0011EE8 @ 0x1C0011EE8
 * Callers:
 *     sub_1C0011E40 @ 0x1C0011E40 (sub_1C0011E40.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00076F4 @ 0x1C00076F4 (sub_1C00076F4.c)
 *     sub_1C0012158 @ 0x1C0012158 (sub_1C0012158.c)
 *     sub_1C0012408 @ 0x1C0012408 (sub_1C0012408.c)
 *     sub_1C00140E4 @ 0x1C00140E4 (sub_1C00140E4.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C003F124 @ 0x1C003F124 (sub_1C003F124.c)
 */

__int64 __fastcall sub_1C0011EE8(__int64 a1, IRP *a2)
{
  signed int v4; // eax
  int MinorFunction; // ebp
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rbx

  v4 = sub_1C00076F4(a1);
  if ( v4 < 0 )
  {
    a2->IoStatus.Information = 0LL;
    return sub_1C0003440(a2, 0, v4);
  }
  else
  {
    MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 4) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003F0C4(off_1C0093070->AttachedDevice, 11LL, &unk_1C008A080, a1, a2, MinorFunction);
    }
    if ( MinorFunction == 2 )
    {
      v6 = sub_1C0012158(a1, a2);
    }
    else if ( MinorFunction == 3 )
    {
      v6 = sub_1C0012408(a1, a2);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 24);
      PoStartNextPowerIrp(a2);
      v6 = sub_1C00140E4(v9, a2);
    }
    v7 = v6;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 4) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003F124(off_1C0093070->AttachedDevice, 12LL, &unk_1C008A080, a1, a2, MinorFunction, v6);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296));
    return v7;
  }
}

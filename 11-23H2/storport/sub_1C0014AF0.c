/*
 * XREFs of sub_1C0014AF0 @ 0x1C0014AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

__int64 __fastcall sub_1C0014AF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  NTSTATUS v4; // ebx

  v2 = *(_QWORD *)(a1 + 64);
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 35LL, &unk_1C008A080, v2, a2);
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = *(_DWORD *)(a2 + 48);
  if ( v4 < 0
    || (v4 = PoRequestPowerIrp(
               *(PDEVICE_OBJECT *)(v2 + 8),
               3u,
               stru_1C0084418[*(int *)(*(_QWORD *)(a2 + 184) + 24LL)],
               sub_1C00151A0,
               (PVOID)a2,
               0LL),
        v4 < 0) )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 296));
  }
  else
  {
    v4 = -1073741802;
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 36LL, &unk_1C008A080, v2, a2, v4);
  }
  return (unsigned int)v4;
}

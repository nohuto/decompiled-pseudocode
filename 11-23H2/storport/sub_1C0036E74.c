/*
 * XREFs of sub_1C0036E74 @ 0x1C0036E74
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C003F124 @ 0x1C003F124 (sub_1C003F124.c)
 */

__int64 __fastcall sub_1C0036E74(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // edi
  DWORD LowPart; // ebp

  v4 = a1 + 336;
  if ( v4
    && (v5 = *(_QWORD *)(v4 + 232)) != 0
    && !*(_BYTE *)(a1 + 4306)
    && (*(_BYTE *)(v4 + 248) & 4) != 0
    && *(_QWORD *)(v5 + 144) )
  {
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    (*(void (__fastcall **)(__int64))(v5 + 144))(*(_QWORD *)(v4 + 240) + 16LL);
    return 259;
  }
  else
  {
    LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v6 = sub_1C0003440(a2, 0, 0xC00000BB);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296));
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003F124(off_1C0093070->AttachedDevice, 32LL, &unk_1C0083210, a1, a2, LowPart, v6);
    }
  }
  return v6;
}

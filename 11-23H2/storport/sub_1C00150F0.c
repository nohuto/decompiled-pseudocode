/*
 * XREFs of sub_1C00150F0 @ 0x1C00150F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

void __fastcall sub_1C00150F0(__int64 a1, __int64 a2, int a3, IRP *a4, unsigned int *a5)
{
  __int64 v5; // rbx
  int v7; // esi

  v5 = *(_QWORD *)(a1 + 64);
  if ( a3 == 1 )
  {
    *(_BYTE *)(v5 + 107) &= ~2u;
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 4) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003F074(off_1C0093070->AttachedDevice, 41LL, &unk_1C008A080, v5, a4);
    }
    *(_BYTE *)(v5 + 107) &= ~4u;
    v7 = sub_1C0003440(a4, 0, *a5);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 296));
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 4) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003F0C4(off_1C0093070->AttachedDevice, 42LL, &unk_1C008A080, v5, a4, v7);
    }
  }
}

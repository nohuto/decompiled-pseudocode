/*
 * XREFs of sub_1C0007650 @ 0x1C0007650
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00076F4 @ 0x1C00076F4 (sub_1C00076F4.c)
 *     sub_1C0007728 @ 0x1C0007728 (sub_1C0007728.c)
 *     sub_1C000775C @ 0x1C000775C (sub_1C000775C.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C003F00C @ 0x1C003F00C (sub_1C003F00C.c)
 */

void __fastcall sub_1C0007650(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        unsigned __int64 SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64); // rdi
  __int64 v6; // rdx
  struct _DEVICE_OBJECT *v7; // rcx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v4 = DeferredContext[8];
  v9 = 0LL;
  v8 = 0LL;
  v5 = (void (__fastcall *)(__int64))_InterlockedExchange64((volatile __int64 *)(v4 + 1776), 0LL);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v4 + 304);
    if ( (int)v6 < 6 || (SystemArgument1 = *(unsigned int *)(v4 + 308), (int)SystemArgument1 < 4) )
    {
      if ( (int)sub_1C00076F4(v4, v6, SystemArgument1, SystemArgument2) >= 0 )
      {
        sub_1C000775C(v4, &v8);
        v5(*(_QWORD *)(v4 + 576) + 16LL);
        sub_1C0007728(v4, &v8);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 296));
        if ( *(_BYTE *)(v4 + 105) )
        {
          v7 = *(struct _DEVICE_OBJECT **)(v4 + 32);
          *(_BYTE *)(v4 + 105) = 0;
          IoInvalidateDeviceRelations(v7, BusRelations);
        }
      }
    }
    else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
           && (HIDWORD(off_1C0093070->Timer) & 0x80u) != 0
           && BYTE1(off_1C0093070->Timer) >= 3u )
    {
      sub_1C003F00C(
        off_1C0093070->AttachedDevice,
        v6,
        SystemArgument1,
        v4,
        v6,
        *(_DWORD *)(v4 + 308),
        v8,
        *((_QWORD *)&v8 + 1),
        v9);
    }
  }
}

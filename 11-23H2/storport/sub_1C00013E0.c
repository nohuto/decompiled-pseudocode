/*
 * XREFs of sub_1C00013E0 @ 0x1C00013E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000152C @ 0x1C000152C (sub_1C000152C.c)
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 *     sub_1C0022E74 @ 0x1C0022E74 (sub_1C0022E74.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C004ADF8 @ 0x1C004ADF8 (sub_1C004ADF8.c)
 */

void __fastcall sub_1C00013E0(__int64 a1, unsigned int a2)
{
  int v4; // r8d
  __int64 v5; // rdi
  __int64 v6; // rcx
  void (__fastcall *v7)(__int64, __int64, _DWORD *); // rax
  __int64 v8; // rcx
  _DWORD *v9; // r9
  __int64 v10; // rcx
  _DWORD *v11; // r9
  __int64 v12; // rcx
  _DWORD *v13; // r9
  _DWORD v14[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-18h]
  char v17; // [rsp+64h] [rbp-14h]
  __int16 v18; // [rsp+65h] [rbp-13h]
  char v19; // [rsp+67h] [rbp-11h]

  if ( *(char *)(a1 + 449) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784)) )
  {
    if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
      sub_1C004ADF8(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&unk_1C0089680,
        v4,
        **(_QWORD **)(a1 + 1792),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a2);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) & 4) == 0 )
      goto LABEL_13;
    v5 = *(_QWORD *)(a1 + 24);
    if ( **(_DWORD **)(v5 + 568) != 208 )
      goto LABEL_13;
    if ( (*(_BYTE *)(v5 + 584) & 8) == 0 )
    {
      *(_QWORD *)(v5 + 592) = 0LL;
      *(_QWORD *)(v5 + 600) = 0LL;
      *(_DWORD *)(v5 + 588) = 12;
      if ( (unsigned __int8)sub_1C0022E74(v5 + 336, 0LL) )
        *v9 = 13;
      if ( (unsigned __int8)sub_1C0022E74(v8, 1LL) )
        *v11 = 14;
      if ( (unsigned __int8)sub_1C0022E74(v10, 4LL) )
        *v13 = 15;
      if ( (int)sub_1C0018524(v12, 0LL, v13) < 0 )
        goto LABEL_13;
      *(_BYTE *)(v5 + 584) |= 8u;
    }
    if ( *(_BYTE *)(v5 + 598) && (unsigned __int8)sub_1C0004890(a1, 6LL) )
    {
      v6 = *(_QWORD *)(a1 + 24);
      v18 = 0;
      v19 = 0;
      v14[0] = 1;
      v14[1] = 24;
      v15 = a1 + 88;
      v16 = 0;
      v17 = 1;
      v7 = *(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)(v6 + 568) + 200LL);
      if ( v7 )
        v7(*(_QWORD *)(v6 + 576) + 16LL, 6LL, v14);
    }
LABEL_13:
    sub_1C000152C(a1, a2);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
}

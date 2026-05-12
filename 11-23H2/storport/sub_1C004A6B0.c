/*
 * XREFs of sub_1C004A6B0 @ 0x1C004A6B0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0012F88 @ 0x1C0012F88 (sub_1C0012F88.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     sub_1C0044FB8 @ 0x1C0044FB8 (sub_1C0044FB8.c)
 *     sub_1C004511C @ 0x1C004511C (sub_1C004511C.c)
 *     sub_1C004514C @ 0x1C004514C (sub_1C004514C.c)
 *     sub_1C004CB40 @ 0x1C004CB40 (sub_1C004CB40.c)
 */

__int64 __fastcall sub_1C004A6B0(__int64 a1, __int64 a2, int *a3, _BYTE *a4)
{
  _DWORD *v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rbx
  int *v11; // rcx
  int *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  size_t v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v21; // rcx
  __int64 v22; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v22) = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a3 )
    return 3238002694LL;
  v6 = sub_1C000E2EC(a1);
  if ( !v6 )
    return 3238002694LL;
  if ( !v7 )
    return 3238002694LL;
  if ( *(_WORD *)v7 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(v7 + 4) < 4u )
    return 3238002694LL;
  LOWORD(v22) = *(_WORD *)(v7 + 8);
  BYTE2(v22) = *(_BYTE *)(v7 + 10);
  v8 = sub_1C00081BC((__int64)v6, v22);
  v9 = v8;
  if ( !v8 )
    return 3238002694LL;
  if ( byte_1C0093AEC )
  {
    *(_BYTE *)(v8 + 451) |= 0x20u;
    return 0LL;
  }
  if ( *(char *)(v8 + 449) < 0 )
    return 3238002689LL;
  if ( !sub_1C004514C(a3) )
    return 3238002694LL;
  if ( a3[2] != 1 )
    return 3238002694LL;
  v12 = (int *)sub_1C0012F88(v11, 0);
  if ( !v12 || !sub_1C004511C(v12) || (unsigned int)(*(_DWORD *)(v14 + 8) - 1) > 1 )
    return 3238002694LL;
  v15 = *(_QWORD *)(v13 + 16) - 0x40880B3A585D326BLL;
  if ( *(_QWORD *)(v13 + 16) == 0x40880B3A585D326BLL )
    v15 = *(_QWORD *)(v13 + 24) + 0x41A796F04F77C677LL;
  if ( v15 )
    return 3238002694LL;
  v16 = *(_QWORD *)(v9 + 8);
  v22 = 0LL;
  if ( (int)sub_1C004CB40(v16, a3, v9, &v22) < 0 )
    return 3238002689LL;
  v17 = sub_1C0044FB8(a3);
  v18 = v17;
  v19 = sub_1C0007CF4(64LL, v17 + 184, 1330667858LL, *(_QWORD *)(v9 + 8));
  if ( v19 )
  {
    v20 = v22;
    *(_DWORD *)(v19 + 32) |= 0xEu;
    *(_DWORD *)(v19 + 16) = 0;
    *(_QWORD *)v19 = v20;
    *(_QWORD *)(v19 + 88) = v19 + 80;
    *(_QWORD *)(v19 + 80) = v19 + 80;
    KeInitializeSpinLock((PKSPIN_LOCK)(v19 + 96));
    if ( (a3[3] & 8) != 0 )
      *(_BYTE *)(v9 + 449) |= 0x40u;
    if ( (a3[3] & 0x200) != 0 )
      *(_BYTE *)(v9 + 450) |= 4u;
    *(_QWORD *)(v19 + 8) = v19 + 184;
    memmove((void *)(v19 + 184), a3, v18);
    if ( a4 )
      *a4 = 1;
    if ( *a3 == 3 && (a3[3] & 0x20) != 0 )
      *(_DWORD *)(v19 + 32) |= 0x100u;
    v21 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v9 + 1784);
    *(_QWORD *)(v9 + 1792) = v19;
    ExReInitializeRundownProtectionCacheAware(v21);
    *(_BYTE *)(v9 + 449) |= 0x80u;
    return 0LL;
  }
  PoFxUnregisterDevice(v22);
  return 3238002691LL;
}

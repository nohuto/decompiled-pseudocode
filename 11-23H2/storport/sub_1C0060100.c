/*
 * XREFs of sub_1C0060100 @ 0x1C0060100
 * Callers:
 *     sub_1C00AADD0 @ 0x1C00AADD0 (sub_1C00AADD0.c)
 * Callees:
 *     sub_1C00076F4 @ 0x1C00076F4 (sub_1C00076F4.c)
 *     sub_1C0013D28 @ 0x1C0013D28 (sub_1C0013D28.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C0035DE4 @ 0x1C0035DE4 (sub_1C0035DE4.c)
 *     sub_1C0035EB8 @ 0x1C0035EB8 (sub_1C0035EB8.c)
 *     sub_1C0061A68 @ 0x1C0061A68 (sub_1C0061A68.c)
 *     sub_1C00A7664 @ 0x1C00A7664 (sub_1C00A7664.c)
 */

__int64 __fastcall sub_1C0060100(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r15
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *i; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rbx
  void (__fastcall *v15)(_QWORD); // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v21; // [rsp+58h] [rbp+10h] BYREF
  PVOID v22; // [rsp+60h] [rbp+18h] BYREF

  v21 = a2;
  v4 = *(_QWORD *)(a2[6] + 8LL);
  v5 = a2 + 1;
  v6 = a2[1];
  if ( *(_QWORD **)(v6 + 8) != a2 + 1 )
    goto LABEL_24;
  v7 = (_QWORD *)a2[2];
  if ( (_QWORD *)*v7 != v5 )
    goto LABEL_24;
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = (_QWORD *)a2[7];
  if ( v8 )
  {
    v9 = (_QWORD *)(a1 + 24);
    a2[7] = 0LL;
    v22 = v8;
    for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)i[6] == v8 )
        goto LABEL_16;
    }
    v8[7] = 0LL;
    v11 = v8[1];
    if ( *(_QWORD **)(v11 + 8) != v8 + 1 || (v12 = (_QWORD *)v8[2], (_QWORD *)*v12 != v8 + 1) )
LABEL_24:
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = v8[6];
    v14 = *(_QWORD *)(v13 + 8);
    if ( (int)sub_1C00076F4(v14) >= 0 )
    {
      sub_1C00A7664(v14, v8);
      sub_1C0013D28(v14 + 760, v13 + 64);
      if ( *(_WORD *)(v14 + 4962) )
      {
        v15 = *(void (__fastcall **)(_QWORD))(v14 + 4984);
        if ( v15 )
          v15(*(_QWORD *)(v14 + 4968));
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v14 + 296));
    }
    ObfDereferenceObject(*(PVOID *)(v14 + 8));
    sub_1C0035EB8(&v22);
  }
LABEL_16:
  v16 = (_QWORD *)a2[8];
  a2[8] = 0LL;
  v17 = *(_QWORD **)(a1 + 24);
  v22 = v16;
  while ( v17 != (_QWORD *)(a1 + 24) )
  {
    if ( (_QWORD *)v17[7] == v16 )
      goto LABEL_23;
    v17 = (_QWORD *)*v17;
  }
  v18 = v16[1];
  if ( *(_QWORD **)(v18 + 8) != v16 + 1 )
    goto LABEL_24;
  v19 = (_QWORD *)v16[2];
  if ( (_QWORD *)*v19 != v16 + 1 )
    goto LABEL_24;
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  sub_1C0035DE4(&v22);
LABEL_23:
  ObfDereferenceObject(*(PVOID *)(v4 + 8));
  sub_1C0061A68(&v21);
  return 0LL;
}

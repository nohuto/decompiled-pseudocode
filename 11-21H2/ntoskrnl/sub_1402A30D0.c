/*
 * XREFs of sub_1402A30D0 @ 0x1402A30D0
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 * Callees:
 *     sub_140240DB4 @ 0x140240DB4 (sub_140240DB4.c)
 *     sub_14024A390 @ 0x14024A390 (sub_14024A390.c)
 *     sub_14024E7F8 @ 0x14024E7F8 (sub_14024E7F8.c)
 *     sub_14024E884 @ 0x14024E884 (sub_14024E884.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     sub_1402A2DE8 @ 0x1402A2DE8 (sub_1402A2DE8.c)
 *     sub_1402A386C @ 0x1402A386C (sub_1402A386C.c)
 *     sub_1402A39EC @ 0x1402A39EC (sub_1402A39EC.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1404173E4 @ 0x1404173E4 (sub_1404173E4.c)
 *     sub_140542AEC @ 0x140542AEC (sub_140542AEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402A30D0(__int64 a1, __int64 a2)
{
  char v3; // r15
  char v4; // si
  __int64 v5; // r10
  char v6; // r11
  __int64 v7; // r13
  _QWORD *v8; // rbx
  int v9; // r12d
  __int64 v10; // rbx
  char v11; // r14
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // r11
  __int64 v18; // rcx
  _QWORD *v19; // rax
  void *i; // rbx
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  char v27; // [rsp+40h] [rbp-48h]

  v3 = 0;
  v4 = 0;
  v27 = 0;
  if ( *(_DWORD *)(a1 + 144) == 1 )
    goto LABEL_59;
  v7 = sub_1402A39EC(*(_QWORD *)(a2 + 48));
  if ( (*(_DWORD *)(a1 + 144) & 0x1000000) != 0 )
  {
    for ( i = *(void **)(a1 + 104); ; i = *(void **)i )
    {
      if ( i == (void *)(a1 + 104) )
        goto LABEL_43;
      if ( *(_QWORD *)(v5 + 48) == *((_QWORD *)i + 2) )
        break;
    }
    while ( 1 )
    {
      v21 = *(_QWORD **)(a1 + 88);
      if ( v21 == (_QWORD *)(a1 + 88) )
        break;
      sub_14024E884(v21);
    }
    v22 = (_QWORD *)**((_QWORD **)i + 1);
    v23 = *v22;
    v24 = (_QWORD *)v22[1];
    if ( *(_QWORD **)(*v22 + 8LL) != v22 || (_QWORD *)*v24 != v22 )
      goto LABEL_57;
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    ObfDereferenceObjectWithTag(*((PVOID *)i + 2), 0x746C6644u);
    ExFreePoolWithTag(i, 0);
    v5 = a2;
    v6 = 1;
LABEL_43:
    *(_DWORD *)(a1 + 144) &= ~0x1000000u;
    if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
      v4 = v6;
    v27 = v4;
  }
  v8 = *(_QWORD **)(a1 + 40);
  v9 = 534;
  if ( v8 != (_QWORD *)(a1 + 40) )
  {
    while ( v8 != (_QWORD *)(a1 + 40) )
    {
      v25 = v8[2];
      if ( *(_QWORD *)(v5 + 48) == *(_QWORD *)(v25 + 48) )
      {
        v8 = (_QWORD *)v8[1];
        if ( *(_DWORD *)(v25 + 24) == 590400 )
          v3 = v6;
        v26 = 534LL;
        if ( *(_DWORD *)(v25 + 24) != 590400 )
          v26 = 0LL;
        sub_140542AEC(*v8, v26, 0LL);
        if ( v3 )
          break;
        v5 = a2;
        v6 = 1;
      }
      v8 = (_QWORD *)*v8;
    }
    sub_1402A2DE8(a1);
  }
  if ( !v7 )
    goto LABEL_11;
  v10 = *(_QWORD *)(v7 + 40);
  if ( !v10 )
    goto LABEL_11;
  v11 = 0;
  if ( (*(_DWORD *)(v10 + 48) & 0xF00000) != 0 )
  {
    sub_1402A386C(*(_QWORD *)(v7 + 40));
    sub_14024A390(a1, v10, 0LL);
    sub_140240DB4(a1, v10);
    if ( *(_QWORD *)(a1 + 72) == a1 + 72 )
      *(_BYTE *)(a1 + 32) = 0;
    ObfDereferenceObjectWithTag(*(PVOID *)(v10 + 24), 0x746C6644u);
    goto LABEL_27;
  }
  if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 || !*(_QWORD *)(v10 + 56) )
  {
    sub_1404173E4((PVOID)v10, 0, 0, 0);
    goto LABEL_9;
  }
  sub_1402A386C(*(_QWORD *)(v7 + 40));
  v18 = *v17;
  v19 = (_QWORD *)v17[1];
  if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v19 != v17 )
LABEL_57:
    __fastfail(3u);
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  if ( *(_QWORD *)(a1 + 120) == a1 + 120 )
    *(_DWORD *)(a1 + 144) &= 0xFFFCFFFF;
  if ( *(_QWORD *)(v10 + 40) )
    sub_140240DB4(a1, v10);
LABEL_27:
  ExFreePoolWithTag((PVOID)v10, 0);
  v11 = 1;
LABEL_9:
  sub_1402A2DE8(a1);
  if ( v11 )
    sub_14024E7F8(a1);
LABEL_11:
  if ( *(_QWORD *)(a2 + 48) == *(_QWORD *)(a1 + 8) )
  {
    v12 = *(_DWORD *)(a1 + 144);
    if ( (v12 & 0x1F00F80) == 0 )
    {
      v13 = *(_QWORD *)a1;
      v14 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      *(_BYTE *)(v13 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v13 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v13 + 69));
      if ( *(_DWORD *)(v14 + 24) == 590400 )
      {
        v15 = *(_QWORD *)(v13 + 24);
        *(_OWORD *)v15 = 0LL;
        *(_QWORD *)(v15 + 16) = 0LL;
        *(_DWORD *)v15 = 1572865;
        *(_DWORD *)(v15 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
        *(_QWORD *)(v13 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v13 + 56) = 8LL;
        v9 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v9;
      IofCompleteRequest(*(PIRP *)a1, 1);
      v12 = *(_DWORD *)(a1 + 144);
      v4 = v27;
    }
    if ( (v12 & 0x80u) == 0 )
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      sub_14024A390(a1, 0LL, 0LL);
      sub_140240DB4(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    while ( 1 )
    {
      v16 = *(_QWORD **)(a1 + 88);
      if ( v16 == (_QWORD *)(a1 + 88) )
        break;
      sub_14024E884(v16);
    }
  }
LABEL_59:
  if ( v4 )
    *(_DWORD *)(a1 + 144) |= 0x1000000u;
}

/*
 * XREFs of sub_1402DDAE4 @ 0x1402DDAE4
 * Callers:
 *     sub_140766834 @ 0x140766834 (sub_140766834.c)
 * Callees:
 *     sub_14025B96C @ 0x14025B96C (sub_14025B96C.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_140660534 @ 0x140660534 (sub_140660534.c)
 *     sub_14074A08C @ 0x14074A08C (sub_14074A08C.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140766914 @ 0x140766914 (sub_140766914.c)
 *     sub_1407669D4 @ 0x1407669D4 (sub_1407669D4.c)
 *     sub_140766A5C @ 0x140766A5C (sub_140766A5C.c)
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 *     sub_140767220 @ 0x140767220 (sub_140767220.c)
 *     sub_14076728C @ 0x14076728C (sub_14076728C.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 *     sub_14077503C @ 0x14077503C (sub_14077503C.c)
 *     sub_140810788 @ 0x140810788 (sub_140810788.c)
 *     sub_14094FCD4 @ 0x14094FCD4 (sub_14094FCD4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1402DDAE4(__int64 MaxDataSize, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v4; // r15d
  int v6; // r14d
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rax
  _QWORD *Pool2; // rdi
  _BYTE *v12; // r12
  unsigned int v13; // esi
  __int64 v14; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // r14
  _QWORD *v17; // r15
  KIRQL v18; // r8
  __int64 *v19; // rdx
  __int64 i; // rcx
  __int64 v21; // rax
  PVOID *v22; // r14
  KIRQL v23; // al
  KIRQL v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  __int64 *v29; // rsi
  __int64 v30; // rcx

  v3 = *(_QWORD *)(MaxDataSize + 32);
  v4 = a2;
  v6 = 0;
  sub_14076728C();
  v8 = *(__int64 **)(v7 + 8);
  if ( v8 )
  {
    do
    {
      v28 = *((_DWORD *)v8 + 99);
      v29 = (__int64 *)*v8;
      if ( (v28 & 0x10) != 0 )
      {
        v28 &= ~0x10u;
        *((_DWORD *)v8 + 99) = v28;
      }
      if ( v8[52] || v8[68] || (v28 & 0x40) != 0 )
      {
        sub_140767220(v8, 512LL);
        sub_140766C3C((PDEVICE_OBJECT)v8[4]);
        sub_14074A08C(v8, 512LL);
        sub_140766A5C(v8, 0LL);
      }
      sub_1402DE844(v8, 790LL);
      v8 = v29;
    }
    while ( v29 );
  }
  result = *(unsigned int *)(MaxDataSize + 300);
  if ( (_DWORD)result == 785 || (_DWORD)result == 784 )
  {
    if ( *(_DWORD *)(MaxDataSize + 304) == 787 )
      return result;
    sub_14025B96C(MaxDataSize);
    LODWORD(result) = *(_DWORD *)(MaxDataSize + 300);
  }
  if ( (_DWORD)result != 790 )
    JUMPOUT(0x1402DDB68LL);
  v10 = *(_QWORD *)(v3 + 24);
  while ( v10 )
  {
    v10 = *(_QWORD *)(v10 + 24);
    ++v6;
  }
  Pool2 = 0LL;
  v12 = 0LL;
  if ( v6 )
  {
    v13 = 8 * v6 + 16;
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, v13, 1701081168LL);
    if ( Pool2 )
    {
      v14 = ExAllocatePool2(256LL, v13, 1701081168LL);
      v12 = (_BYTE *)v14;
      if ( v14 )
      {
        v15 = *(_QWORD **)(v3 + 24);
        v16 = Pool2;
        v17 = (_QWORD *)v14;
        while ( v15 )
        {
          ObfReferenceObjectWithTag(v15, 0x746C6644u);
          *v16++ = v15;
          *v17++ = v15[1];
          v15 = (_QWORD *)v15[3];
        }
        v4 = a2;
      }
      else
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
      }
    }
  }
  v18 = KeAcquireQueuedSpinLock(0xAuLL);
  v19 = Pool2;
  if ( Pool2 )
  {
    for ( i = *Pool2; i; i = *v19 )
    {
      *(_DWORD *)(*(_QWORD *)(i + 312) + 32LL) &= ~4u;
      v21 = *v19++;
      *(_DWORD *)(*(_QWORD *)(v21 + 312) + 32LL) |= 8u;
    }
  }
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~4u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 8u;
  KeReleaseQueuedSpinLock(0xAuLL, v18);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 && (unsigned int)(*(_DWORD *)(MaxDataSize + 568) - 3) <= 1 )
    sub_14094FCD4(MaxDataSize);
  v22 = (PVOID *)Pool2;
  if ( Pool2 )
  {
    if ( *Pool2 )
    {
      do
      {
        v23 = KeAcquireQueuedSpinLock(0xAuLL);
        *(_DWORD *)(*((_QWORD *)*v22 + 39) + 32LL) &= ~8u;
        *(_DWORD *)(*((_QWORD *)*v22 + 39) + 32LL) |= 0x10u;
        KeReleaseQueuedSpinLock(0xAuLL, v23);
        sub_140766914(*(PVOID *)((char *)v22 + v12 - (_BYTE *)Pool2));
        ObfDereferenceObject(*v22++);
      }
      while ( *v22 );
    }
    ExFreePoolWithTag(Pool2, 0);
    ExFreePoolWithTag(v12, 0);
  }
  v24 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~8u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 0x10u;
  KeReleaseQueuedSpinLock(0xAuLL, v24);
  v25 = 788LL;
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    v25 = 790LL;
  sub_1402DE844(MaxDataSize, v25);
  if ( v4
    && ((*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0
     || ((v4 - 22) & 0xFFFFFFFD) == 0
     || (unsigned int)sub_140660534(MaxDataSize, v4)
     && !(unsigned int)sub_140660534(v30, *(unsigned int *)(MaxDataSize + 404))) )
  {
    sub_140764FE4(MaxDataSize);
    sub_140765114(MaxDataSize, v4, a3);
  }
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    sub_14077503C(v3);
  result = sub_1407669D4(MaxDataSize);
  v27 = *(_QWORD *)(MaxDataSize + 48);
  if ( v27 )
    return sub_140772044(v26, v27, 23LL);
  return result;
}

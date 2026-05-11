/*
 * XREFs of USBType1SaveLeftovers @ 0x1C0003010
 * Callers:
 *     USBType1BuildIsochUrbRequest @ 0x1C0002900 (USBType1BuildIsochUrbRequest.c)
 * Callees:
 *     memmove @ 0x1C001AC80 (memmove.c)
 */

void __fastcall USBType1SaveLeftovers(__int64 a1, struct _KSSTREAM_POINTER *a2, unsigned int a3, int a4, char a5)
{
  __int64 v6; // r13
  size_t v8; // rbx
  KIRQL v10; // al
  __int64 v11; // rsi
  void *v12; // rcx
  KIRQL v13; // al
  _QWORD *Context; // rcx
  __int64 *v15; // r13
  __int64 v16; // rdx

  v6 = *(_QWORD *)(a1 + 152);
  v8 = a3;
  if ( a5 && a3 == a2->OffsetIn.Count )
  {
    *(_DWORD *)(v6 + 124) = a4 - a3;
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
    Context = a2->Context;
    v15 = (__int64 *)(v6 + 136);
    v16 = *v15;
    if ( *(__int64 **)(*v15 + 8) != v15 )
      __fastfail(3u);
    *Context = v16;
    Context[1] = v15;
    *(_QWORD *)(v16 + 8) = Context;
    *v15 = (__int64)Context;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 112), v13);
    ExFreePool(a2);
  }
  else
  {
    KeWaitForSingleObject((PVOID)(v6 + 152), Executive, 0, 0, 0LL);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
    v11 = *(_QWORD *)(v6 + 136);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 112), v10);
    v12 = *(void **)(v11 + 48);
    *(_DWORD *)(v11 + 36) = v8;
    memmove(v12, a2->OffsetIn.Data, v8);
    *(_DWORD *)(v6 + 124) = a4 - v8;
    if ( !a5 )
      KsStreamPointerAdvanceOffsetsAndUnlock(a2, v8, 0, 0);
  }
}

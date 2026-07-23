/*
 * XREFs of EtwpEventApiCallback @ 0x180030A14
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x1800320D8 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180061CE0 (EtwpAcquireGuidEntryExclusive.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall EtwpEventApiCallback(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r14d
  __int64 v4; // rsi
  bool v7; // r11
  unsigned int v8; // eax
  void (__fastcall *v9)(__int64, _QWORD); // rax
  int v11; // ecx
  __int64 v12; // r15
  unsigned __int8 *v13; // r11
  void *v14; // r8
  _DWORD *Heap; // rax
  unsigned int Size; // [rsp+60h] [rbp-10h]
  int Size_4; // [rsp+64h] [rbp-Ch]

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 240);
  if ( v2 != 2 )
  {
    v7 = *(_BYTE *)(a2 + 116) != 0;
    if ( *(_BYTE *)(a2 + 236) )
      v7 = 1;
    if ( v7 )
    {
      v2 = 1;
    }
    else
    {
      v2 = 0;
      *(_DWORD *)(a1 + 116) = 0;
    }
  }
  v8 = 0;
  if ( *(_DWORD *)(a1 + 116) )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(a1 + 16LL * v8 + 132);
      if ( v11 >= 0 || v11 == 0x80000000 )
        break;
      if ( ++v8 >= *(_DWORD *)(a1 + 116) )
        goto LABEL_7;
    }
    v12 = a1 + *(_QWORD *)(a1 + 16LL * v8 + 120);
    Size = *(_DWORD *)(a1 + 16LL * v8 + 128);
    Size_4 = *(_DWORD *)(a1 + 16LL * v8 + 132);
    if ( *(__int16 *)(a1 + 78) < 0 && v11 == 0x80000000 )
    {
      *(_QWORD *)(v12 + 8) = 0LL;
      v13 = (unsigned __int8 *)(a2 + 142);
      *(_DWORD *)(v12 + 20) = 0;
      *(_DWORD *)(v12 + 16) = Size;
      while ( !*(v13 - 2) || *v13 != (*(_WORD *)(a1 + 78) & 0x7FFF) )
      {
        ++v3;
        v13 += 24;
        if ( v3 >= 4 )
          goto LABEL_23;
      }
      *(_QWORD *)(v12 + 8) = 1LL << ((unsigned __int8)v3 + 32);
LABEL_23:
      if ( v4 )
      {
        EtwpAcquireGuidEntryExclusive(v4);
        v14 = *(void **)(v4 + 168);
        if ( v14 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size + 16LL);
        *(_QWORD *)(v4 + 168) = Heap;
        if ( Heap )
        {
          Heap[2] = Size;
          *(_DWORD *)(*(_QWORD *)(v4 + 168) + 12LL) = Size_4;
          **(_QWORD **)(v4 + 168) = *(_QWORD *)(v4 + 168) + 16LL;
          memmove(**(void ***)(v4 + 168), (const void *)v12, Size);
        }
        *(_DWORD *)(v4 + 48) = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 40));
      }
    }
  }
LABEL_7:
  v9 = *(void (__fastcall **)(__int64, _QWORD))(a2 + 48);
  if ( v9 )
    v9(a1 + 56, v2);
  return 0LL;
}

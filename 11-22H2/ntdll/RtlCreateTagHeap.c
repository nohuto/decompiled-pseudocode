/*
 * XREFs of RtlCreateTagHeap @ 0x18007F9F0
 * Callers:
 *     CsrClientConnectToServer @ 0x18004B5E0 (CsrClientConnectToServer.c)
 *     TpInitializePackage @ 0x18007F92C (TpInitializePackage.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     RtlDebugCreateTagHeap @ 0x18010492C (RtlDebugCreateTagHeap.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x180013F48 (RtlStringCbCopyW.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpAllocateTags @ 0x1800FE5B8 (RtlpAllocateTags.c)
 *     RtlDebugCreateTagHeap @ 0x18010492C (RtlDebugCreateTagHeap.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

ULONG __cdecl RtlCreateTagHeap(PVOID HeapHandle, ULONG Flags, PWSTR TagPrefix, PWSTR TagNames)
{
  __int64 v5; // r12
  ULONG v7; // edx
  int v8; // edi
  int v9; // edx
  __int16 v10; // ax
  PWSTR v11; // rbx
  PWSTR v12; // rsi
  PWSTR v13; // rax
  WCHAR v14; // cx
  __int64 Tags; // rax
  __int64 v16; // r11
  const wchar_t *v17; // r8
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  _WORD *v20; // r15
  __int64 v21; // r11
  __int16 v22; // ax
  __int64 v23; // rbx
  _BYTE *v25; // rdi
  signed __int32 v26; // esi
  void *DeferredCriticalSectionEvent; // r10
  int v28; // eax
  signed __int32 v29[8]; // [rsp+0h] [rbp-B8h] BYREF
  char v30; // [rsp+20h] [rbp-98h]
  int v31; // [rsp+24h] [rbp-94h]
  __int64 v32; // [rsp+28h] [rbp-90h]
  int v33; // [rsp+30h] [rbp-88h]
  unsigned int v34[3]; // [rsp+34h] [rbp-84h] BYREF
  PWSTR v35; // [rsp+40h] [rbp-78h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  unsigned __int64 v37; // [rsp+50h] [rbp-68h]
  PWSTR v38; // [rsp+58h] [rbp-60h]
  __int64 v39; // [rsp+60h] [rbp-58h]
  PWSTR v40; // [rsp+68h] [rbp-50h]
  _WORD *v41; // [rsp+70h] [rbp-48h]
  PVOID v42; // [rsp+78h] [rbp-40h]
  ULONG TagHeap; // [rsp+C0h] [rbp+8h]

  v40 = TagPrefix;
  v42 = HeapHandle;
  v5 = 0LL;
  v30 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0;
  if ( !RtlpGlobalTagHeap )
  {
    RtlpGlobalTagHeap = (__int64)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x2C0uLL);
    if ( !RtlpGlobalTagHeap )
      return 0;
  }
  if ( HeapHandle && (*((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0) )
    return 0;
  if ( HeapHandle )
  {
    v7 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v7 & 0x61000000) != 0 && (v7 & 0x10000000) == 0 )
    {
      TagHeap = RtlDebugCreateTagHeap(HeapHandle);
      goto LABEL_49;
    }
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v30 = 1;
    }
  }
  v8 = 0;
  v31 = 0;
  v9 = 0;
  v33 = 0;
  v10 = 33;
  v11 = TagNames;
  if ( *TagNames == 33 )
  {
    v12 = TagNames + 1;
    v38 = TagNames + 1;
    while ( 1 )
    {
      ++v11;
      if ( !v10 )
        break;
      v10 = *v11;
    }
  }
  else
  {
    v12 = 0LL;
    v38 = 0LL;
  }
  v13 = v11;
  v35 = v11;
  while ( 1 )
  {
    v14 = *v13;
    if ( !*v13 )
      break;
    while ( 1 )
    {
      v35 = ++v13;
      if ( !v14 )
        break;
      v14 = *v13;
    }
    v33 = ++v9;
  }
  if ( v9 )
  {
    Tags = RtlpAllocateTags(HeapHandle);
    v16 = Tags;
    v36 = Tags;
    if ( Tags )
    {
      v32 = 23LL;
      v39 = 23LL;
      v8 = *(unsigned __int16 *)(Tags + 16);
      v31 = v8;
      if ( v8 )
      {
        if ( v8 != 2048 )
        {
LABEL_32:
          if ( !TagPrefix )
            goto LABEL_40;
          v18 = -1LL;
          do
            ++v18;
          while ( TagPrefix[v18] );
          v37 = v18;
          v19 = v18;
          if ( v18 )
          {
            if ( v18 < 0x13 )
            {
              v32 = 23 - v18;
              v39 = 23 - v18;
            }
            else
            {
              v18 = 0LL;
              v37 = 0LL;
            }
            v5 = (unsigned __int64)v40 & -(__int64)(v19 < 0x13);
          }
          else
          {
LABEL_40:
            v18 = 0LL;
            v37 = 0LL;
          }
          v35 = v11;
          while ( *v11 )
          {
            v20 = (_WORD *)(v16 + 20);
            v41 = (_WORD *)(v16 + 20);
            if ( v5 )
            {
              RtlStringCbCopyW((_WORD *)(v16 + 20), 2 * v32, v5);
              v20 += v18;
              v41 = v20;
            }
            RtlStringCbCopyW(v20, 2 * (v32 - v18), (__int64)v11);
            do
            {
              v22 = *v11++;
              v35 = v11;
            }
            while ( v22 );
            v16 = v21 + 72;
            v36 = v16;
          }
          goto LABEL_48;
        }
        v17 = L"GlobalTags";
      }
      else
      {
        if ( !v12 )
        {
LABEL_31:
          v16 += 72LL;
          v36 = v16;
          v8 = *(unsigned __int16 *)(v16 + 16);
          v31 = v8;
          goto LABEL_32;
        }
        v17 = v12;
      }
      RtlStringCbCopyW((_WORD *)(Tags + 20), 0x2EuLL, (__int64)v17);
      goto LABEL_31;
    }
  }
LABEL_48:
  TagHeap = v8 << 18;
LABEL_49:
  if ( v30 )
  {
    v23 = *((_QWORD *)HeapHandle + 44);
    if ( (*(_DWORD *)(v23 + 12))-- == 1 )
    {
      *(_QWORD *)(v23 + 16) = 0LL;
      v25 = (_BYTE *)(v23 + 8);
      v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 8), -1, -2);
      if ( v26 != -2 )
      {
        if ( (*v25 & 1) != 0 )
          RtlpNotOwnerCriticalSection(v23);
        DeferredCriticalSectionEvent = *(void **)(v23 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v23);
        v34[0] = 0;
        while ( v26 != _InterlockedCompareExchange((volatile signed __int32 *)v25, (v26 & 2 | 1) + v26, v26) )
        {
          RtlBackoff(v34);
          _m_prefetchw(v25);
          v26 = *(_DWORD *)v25;
        }
        if ( (v26 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (void *)-1LL )
          {
            _InterlockedOr(v29, 0);
            RtlpWakeByAddress(v23 + 8, 0);
            v28 = 0;
          }
          else
          {
            v28 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
          }
          if ( v28 < 0 )
            RtlRaiseStatus(v28);
        }
      }
    }
  }
  return TagHeap;
}

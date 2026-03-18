/*
 * XREFs of AlpcpExposeViewAttributeInSenderContext @ 0x1407A4E8C
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407A9A80 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407AACC0 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     AlpcpRestoreWriteAccess @ 0x1406F60E8 (AlpcpRestoreWriteAccess.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1407A4A8C (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpLocateView @ 0x1407A4E68 (AlpcpLocateView.c)
 *     AlpcpDeleteView @ 0x1407A58A4 (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateView @ 0x1407A66CC (AlpcpCreateView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407A6A34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x1407A7F84 (AlpcpReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407B0F40 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpExposeViewAttributeInSenderContext(PVOID Object, __int64 a2)
{
  ULONG_PTR v2; // rdi
  int v5; // r14d
  ULONG_PTR i; // rsi
  _QWORD *View; // rax
  _DWORD *v8; // r9
  ULONG_PTR v9; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  int v16; // eax
  __int64 v17; // rax
  _DWORD *v18; // r9
  _DWORD *v19; // r9
  _QWORD *v20; // [rsp+20h] [rbp-40h]
  _OWORD v21[3]; // [rsp+28h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a2 + 144);
  memset(v21, 0, sizeof(v21));
  v5 = 0;
  for ( i = *(_QWORD *)(v2 + 16); ; AlpcpUnlockBlob(i) )
  {
    AlpcpLockForCachedReferenceBlob(i);
    View = AlpcpLocateView(i, (__int64)Object);
    v20 = View;
    v9 = (ULONG_PTR)View;
    if ( !View || AlpcpReferenceBlob((ULONG_PTR)View) > 0 )
      break;
  }
  if ( (*(_DWORD *)(i + 48) & 1) != 0 )
  {
    if ( v9 == *(_QWORD *)(i + 80) )
    {
LABEL_12:
      *(_DWORD *)(a2 + 40) |= 0x4000u;
      *(_QWORD *)(a2 + 144) = v9;
      ++*(_DWORD *)(v9 + 76);
      goto LABEL_13;
    }
    if ( v9 && v9 == *(_QWORD *)(i + 72) )
    {
      v16 = *(_DWORD *)(v2 + 72);
      if ( (v16 & 8) == 0 )
      {
        v17 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48), v8);
        if ( !v17 )
        {
          if ( *(_QWORD *)(v9 + 64) )
          {
            KiStackAttachProcess(*(_KPROCESS **)(v9 + 32), 0LL, (__int64)v21, v18);
            MmUnsecureVirtualMemory(*(HANDLE *)(v9 + 64));
            KiUnstackDetachProcess((__int64)v21, 0LL);
            *(_QWORD *)(v9 + 64) = 0LL;
          }
          *(_DWORD *)(v9 + 72) |= 1u;
          AlpcpDereferenceBlobEx(v9);
          *(_QWORD *)(i + 72) = 0LL;
          *(_QWORD *)(i + 80) = 0LL;
          *(_DWORD *)(i + 48) &= ~1u;
          goto LABEL_12;
        }
        *(_QWORD *)(v2 + 64) = v17;
        v16 = *(_DWORD *)(v2 + 72);
      }
      *(_DWORD *)(v2 + 72) = v16 & 0xFFFFFFFE;
      AlpcpReferenceBlob(v2);
      if ( *(_QWORD *)(v9 + 64) )
      {
        KiStackAttachProcess(*(_KPROCESS **)(v9 + 32), 0LL, (__int64)v21, v19);
        MmUnsecureVirtualMemory(*(HANDLE *)(v9 + 64));
        KiUnstackDetachProcess((__int64)v21, 0LL);
        *(_QWORD *)(v9 + 64) = 0LL;
      }
      *(_DWORD *)(v9 + 72) |= 1u;
      *(_QWORD *)(i + 72) = v2;
      *(_QWORD *)(i + 80) = v9;
      AlpcpDereferenceBlobEx(v9);
      goto LABEL_12;
    }
    v10 = *(_DWORD *)(v2 + 72);
    if ( (v10 & 8) != 0 )
      goto LABEL_9;
    v11 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48), v8);
    if ( v11 )
    {
      *(_QWORD *)(v2 + 64) = v11;
      v10 = *(_DWORD *)(v2 + 72);
LABEL_9:
      *(_DWORD *)(v2 + 72) = v10 & 0xFFFFFFFE;
      AlpcpReferenceBlob(v2);
      *(_QWORD *)(i + 80) = 0LL;
      *(_QWORD *)(i + 72) = v2;
      if ( v9 )
      {
        *(_QWORD *)(i + 80) = v9;
        goto LABEL_12;
      }
      v5 = AlpcpCreateView(i, Object);
      if ( v5 >= 0 )
        goto LABEL_11;
      AlpcpRestoreWriteAccess(v2, v12, v13, v14);
      AlpcpDereferenceBlobEx(v2);
      goto LABEL_35;
    }
    *(_QWORD *)(i + 72) = 0LL;
    *(_QWORD *)(i + 80) = 0LL;
    *(_DWORD *)(i + 48) &= ~1u;
  }
  else if ( v9 )
  {
    goto LABEL_12;
  }
  v5 = AlpcpCreateView(i, Object);
  if ( v5 >= 0 )
  {
LABEL_11:
    v9 = (ULONG_PTR)v20;
    goto LABEL_12;
  }
LABEL_35:
  *(_QWORD *)(a2 + 144) = 0LL;
LABEL_13:
  --*(_DWORD *)(v2 + 76);
  if ( (*(_DWORD *)(v2 + 72) & 2) != 0 )
  {
    AlpcpDeleteView(v2);
    *(_DWORD *)(v2 + 72) &= ~2u;
  }
  AlpcpUnlockBlob(i);
  AlpcpDereferenceBlobEx(v2);
  return (unsigned int)v5;
}

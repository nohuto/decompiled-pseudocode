/*
 * XREFs of VrpPostEnumerateKey @ 0x14077ABA8
 * Callers:
 *     VrpRegistryCallback @ 0x14068E300 (VrpRegistryCallback.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140208AA0 (EtwActivityIdControl.c)
 *     ExGetPreviousMode @ 0x140208C20 (ExGetPreviousMode.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14041B3B0 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x14041B730 (ZwEnumerateKey.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     VrpCleanupBufferParameter @ 0x14068CC68 (VrpCleanupBufferParameter.c)
 *     VrpOutputBufferParameter @ 0x14068CCA0 (VrpOutputBufferParameter.c)
 *     VrpBuildKeyPath @ 0x14068DE10 (VrpBuildKeyPath.c)
 *     VrpProcessBufferParameter @ 0x14068F3B8 (VrpProcessBufferParameter.c)
 *     ObOpenObjectByPointer @ 0x1407376C0 (ObOpenObjectByPointer.c)
 *     VrpFindExactNamespaceNode @ 0x14077B9E4 (VrpFindExactNamespaceNode.c)
 *     VrpUpdateKeyInformation @ 0x1407E03F0 (VrpUpdateKeyInformation.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall VrpPostEnumerateKey(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  KPROCESSOR_MODE AccessMode; // r13
  int v6; // edi
  char *v7; // r14
  int v8; // eax
  bool v9; // cc
  int v10; // eax
  char *v11; // r15
  int v12; // eax
  wchar_t *v13; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v15; // rdi
  unsigned __int64 v16; // r15
  __int64 ExactNamespaceNode; // rax
  int v18; // eax
  __int64 *v19; // r12
  __int64 v20; // rcx
  ULONG_PTR v21; // r15
  __int64 *v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  char *Pool2; // rax
  unsigned int v27; // eax
  void *v28; // rax
  const void *v29; // r15
  PULONG v30; // r13
  NTSTATUS Key; // eax
  __int64 v32; // rcx
  int updated; // eax
  int v34; // eax
  const wchar_t *v35; // rcx
  unsigned __int16 v36; // ax
  char v37; // [rsp+40h] [rbp-198h]
  __int64 v38; // [rsp+48h] [rbp-190h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-188h] BYREF
  int v40; // [rsp+54h] [rbp-184h] BYREF
  PULONG v41; // [rsp+58h] [rbp-180h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-178h] BYREF
  __int64 v43; // [rsp+70h] [rbp-168h]
  const UNICODE_STRING *v44; // [rsp+78h] [rbp-160h]
  HANDLE v45; // [rsp+80h] [rbp-158h] BYREF
  PVOID v46; // [rsp+88h] [rbp-150h]
  PVOID v47; // [rsp+90h] [rbp-148h]
  char *v48; // [rsp+98h] [rbp-140h] BYREF
  UNICODE_STRING Source; // [rsp+A0h] [rbp-138h] BYREF
  PVOID P[2]; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-118h]
  __int64 v52; // [rsp+C8h] [rbp-110h]
  __int64 v53; // [rsp+D0h] [rbp-108h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-100h] BYREF
  GUID ActivityId; // [rsp+108h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56[2]; // [rsp+120h] [rbp-B8h] BYREF
  int *v57; // [rsp+140h] [rbp-98h]
  __int64 v58; // [rsp+148h] [rbp-90h]
  int *v59; // [rsp+150h] [rbp-88h]
  __int64 v60; // [rsp+158h] [rbp-80h]
  __int64 v61; // [rsp+160h] [rbp-78h]
  int v62; // [rsp+168h] [rbp-70h] BYREF
  int v63; // [rsp+16Ch] [rbp-6Ch]
  _DWORD *v64; // [rsp+170h] [rbp-68h]
  __int64 v65; // [rsp+178h] [rbp-60h]
  const wchar_t *v66; // [rsp+180h] [rbp-58h]
  _DWORD v67[2]; // [rsp+188h] [rbp-50h] BYREF
  __int64 *v68; // [rsp+190h] [rbp-48h]
  __int64 v69; // [rsp+198h] [rbp-40h]

  v38 = a2;
  v43 = a1;
  v51 = a2;
  *(_OWORD *)P = 0LL;
  Source = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v47 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v44 = (const UNICODE_STRING *)v3;
  v52 = v3;
  KeyHandle = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v53 = v4;
  v48 = 0LL;
  v46 = 0LL;
  AccessMode = ExGetPreviousMode();
  v37 = AccessMode;
  ResultLength = 0;
  v41 = 0LL;
  v6 = *(_DWORD *)(a1 + 8);
  v45 = 0LL;
  if ( (unsigned int)dword_140C04420 > 5 )
  {
    v40 = *(_DWORD *)(v4 + 12);
    v57 = &v40;
    v58 = 4LL;
    v23 = (__int64 *)(v3 + 16);
    if ( !*(_QWORD *)(v3 + 24) )
      v23 = &EmptyUnicodeString;
    v24 = *(unsigned __int16 *)v23;
    v25 = v23[1];
    v59 = &v62;
    v60 = 2LL;
    v61 = v25;
    v62 = v24;
    v63 = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C04420,
      (unsigned __int8 *)word_14003A5BA,
      &ActivityId,
      0LL,
      5u,
      v56);
  }
  if ( v6 < 0 && v6 != -1073741789 && v6 != -2147483643 )
    goto LABEL_75;
  v6 = VrpProcessBufferParameter(AccessMode, *(_QWORD *)(v4 + 16), *(_DWORD *)(v4 + 24), (__int64 *)&v48);
  if ( v6 < 0 )
    goto LABEL_75;
  v7 = v48;
  v6 = VrpOutputBufferParameter(AccessMode, v48, *(_DWORD *)(v4 + 24), (const void **)(v4 + 16));
  if ( v6 < 0 )
    goto LABEL_75;
  v6 = VrpProcessBufferParameter(AccessMode, *(_QWORD *)(v4 + 32), 4u, (__int64 *)&v41);
  if ( v6 < 0 )
    goto LABEL_75;
  v6 = VrpOutputBufferParameter(AccessMode, v41, 4u, (const void **)(v4 + 32));
  if ( v6 < 0 )
    goto LABEL_75;
  if ( AccessMode == 1 && *(int *)(v43 + 8) >= 0 )
  {
    v8 = *(_DWORD *)(v4 + 12);
    if ( v8 )
    {
      if ( v8 != 1 )
        goto LABEL_12;
      v9 = *((_DWORD *)v7 + 5) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 24);
    }
    else
    {
      v9 = *((_DWORD *)v7 + 3) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 16);
    }
    if ( !v9 )
      goto LABEL_75;
  }
LABEL_12:
  v10 = *(_DWORD *)(v43 + 8);
  if ( v10 == -1073741789 || v10 == -2147483643 || *(_DWORD *)(v4 + 12) == 2 )
  {
    v6 = ObOpenObjectByPointer(
           *(PVOID *)v4,
           0x240u,
           0LL,
           0xF003Fu,
           (POBJECT_TYPE)CmKeyObjectType,
           AccessMode,
           &KeyHandle);
    if ( v6 < 0 )
      goto LABEL_75;
    v6 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, 0LL, 0, &ResultLength);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 )
      goto LABEL_75;
    Pool2 = (char *)ExAllocatePool2(256LL, ResultLength, 1734693462LL);
    v7 = Pool2;
    if ( !Pool2 )
    {
      v6 = -1073741670;
      goto LABEL_75;
    }
    v11 = Pool2;
    v47 = Pool2;
    v6 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, Pool2, ResultLength, &ResultLength);
    if ( v6 < 0 )
      goto LABEL_75;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = *(_DWORD *)(v4 + 12);
  if ( !v12 || v11 )
  {
    Source.MaximumLength = *((_WORD *)v7 + 6);
    Source.Length = Source.MaximumLength;
    v13 = (wchar_t *)(v7 + 16);
  }
  else
  {
    if ( v12 != 1 )
    {
      v6 = -1073741811;
      goto LABEL_75;
    }
    Source.MaximumLength = *((_WORD *)v7 + 10);
    Source.Length = Source.MaximumLength;
    v13 = (wchar_t *)(v7 + 24);
  }
  Source.Buffer = v13;
  v6 = VrpBuildKeyPath(v44 + 1, &Source, (PUNICODE_STRING)P);
  if ( v6 < 0 )
  {
LABEL_75:
    v18 = 0;
    goto LABEL_25;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = (signed __int64 *)(v38 + 16);
  v16 = KeAbPreAcquire(v38 + 16, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 16), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v15, 0LL, v16, (__int64)v15);
  if ( v16 )
    *(_BYTE *)(v16 + 18) = 1;
  ExactNamespaceNode = VrpFindExactNamespaceNode(v38, P, 0LL);
  if ( !ExactNamespaceNode
    || (ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)(ExactNamespaceNode + 24),
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&v45, 0xF003Fu, &ObjectAttributes) < 0) )
  {
    v6 = 0;
    v18 = 1;
LABEL_25:
    v19 = &EmptyUnicodeString;
    v20 = v38;
    goto LABEL_26;
  }
  if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v27 = *(_DWORD *)(v4 + 24);
  if ( v27 )
  {
    v28 = (void *)ExAllocatePool2(256LL, v27, 1734693462LL);
    v46 = v28;
    if ( !v28 )
    {
      v6 = -1073741670;
      goto LABEL_75;
    }
  }
  else
  {
    v28 = 0LL;
  }
  v29 = v28;
  v30 = v41;
  Key = ZwQueryKey(v45, *(KEY_INFORMATION_CLASS *)(v4 + 12), v28, *(_DWORD *)(v4 + 24), v41);
  v6 = Key;
  if ( Key == -1073741789 )
  {
    v29 = 0LL;
  }
  else if ( (int)(Key + 0x80000000) >= 0 && Key != -2147483643 )
  {
    v6 = 0;
LABEL_74:
    AccessMode = v37;
    goto LABEL_75;
  }
  v32 = *(unsigned int *)(v4 + 12);
  if ( (_DWORD)v32 != 2 )
  {
    updated = VrpUpdateKeyInformation(v32, v29, *(unsigned int *)(v4 + 24), v30, P, 0);
    v6 = updated;
    if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
      goto LABEL_74;
  }
  if ( v6 != -2147483643 && v6 != -1073741789 )
    memmove(*(void **)(v4 + 16), v29, *(unsigned int *)(v4 + 24));
  AccessMode = v37;
  v34 = VrpOutputBufferParameter(v37, *(void **)(v4 + 32), 4u, (const void **)&v41);
  v19 = &EmptyUnicodeString;
  v20 = v38;
  if ( v34 >= 0 )
  {
    *(_DWORD *)(v43 + 24) = v6;
    v6 = -1073740541;
  }
  else
  {
    v6 = v34;
  }
  v18 = 0;
LABEL_26:
  if ( v18 )
  {
    v21 = v20 + 16;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v20 + 16));
    KeAbPostRelease(v21);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v6 < 0 && (unsigned int)dword_140C04420 > 2 )
  {
    v40 = *(_DWORD *)(v4 + 12);
    v57 = &v40;
    v58 = 4LL;
    if ( v44[1].Buffer )
      v19 = (__int64 *)&v44[1];
    v59 = &v62;
    v60 = 2LL;
    v61 = v19[1];
    v62 = *(unsigned __int16 *)v19;
    v63 = 0;
    v35 = (const wchar_t *)P[1];
    if ( P[1] )
    {
      v36 = (unsigned __int16)P[0];
    }
    else
    {
      v36 = 0;
      v35 = &word_14001F0C4;
    }
    v64 = v67;
    v65 = 2LL;
    v66 = v35;
    v67[0] = v36;
    v67[1] = 0;
    LODWORD(v38) = v6;
    v68 = &v38;
    v69 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C04420,
      (unsigned __int8 *)word_14003A3D2,
      &ActivityId,
      0LL,
      8u,
      v56);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v45 )
    ZwClose(v45);
  if ( v46 )
    ExFreePoolWithTag(v46, 0x67655256u);
  if ( v47 )
    ExFreePoolWithTag(v47, 0x67655256u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  VrpCleanupBufferParameter(AccessMode, (PVOID *)&v48);
  VrpCleanupBufferParameter(AccessMode, (PVOID *)&v41);
  return (unsigned int)v6;
}

/*
 * XREFs of sub_140691CD8 @ 0x140691CD8
 * Callers:
 *     sub_140780EF0 @ 0x140780EF0 (sub_140780EF0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExGetPreviousMode @ 0x1402DFD50 (ExGetPreviousMode.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406924F0 @ 0x1406924F0 (sub_1406924F0.c)
 *     sub_1406C22CC @ 0x1406C22CC (sub_1406C22CC.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     sub_14077FB68 @ 0x14077FB68 (sub_14077FB68.c)
 *     sub_140780CC8 @ 0x140780CC8 (sub_140780CC8.c)
 *     sub_140780D00 @ 0x140780D00 (sub_140780D00.c)
 *     sub_140782720 @ 0x140782720 (sub_140782720.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140691CD8(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rcx
  KPROCESSOR_MODE AccessMode; // r13
  NTSTATUS v7; // edi
  __int64 *v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  const UNICODE_STRING *v11; // r15
  __int64 v12; // rcx
  unsigned __int16 *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  bool v17; // cc
  int v18; // eax
  unsigned __int16 *Pool2; // rax
  int v20; // eax
  wchar_t *v21; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // r14
  signed __int64 *v24; // rdi
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // eax
  void *v28; // rax
  const void *v29; // r14
  int v30; // r13d
  NTSTATUS Key; // eax
  __int64 *v32; // rcx
  PVOID *v33; // rdx
  wchar_t *Buffer; // rcx
  __int64 v35; // rcx
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  KPROCESSOR_MODE v40; // [rsp+40h] [rbp-198h]
  const UNICODE_STRING *v41; // [rsp+48h] [rbp-190h] BYREF
  __int64 v42; // [rsp+50h] [rbp-188h]
  ULONG ResultLength; // [rsp+58h] [rbp-180h] BYREF
  int v44; // [rsp+5Ch] [rbp-17Ch] BYREF
  PULONG v45; // [rsp+60h] [rbp-178h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-170h] BYREF
  __int64 v47; // [rsp+70h] [rbp-168h]
  HANDLE v48; // [rsp+78h] [rbp-160h] BYREF
  PVOID P; // [rsp+80h] [rbp-158h]
  PVOID v50; // [rsp+88h] [rbp-150h]
  unsigned __int16 *v51; // [rsp+90h] [rbp-148h] BYREF
  UNICODE_STRING Source; // [rsp+98h] [rbp-140h] BYREF
  UNICODE_STRING v53; // [rsp+A8h] [rbp-130h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-118h]
  __int64 v55; // [rsp+C8h] [rbp-110h]
  __int64 v56; // [rsp+D0h] [rbp-108h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-100h] BYREF
  GUID ActivityId; // [rsp+108h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59[2]; // [rsp+120h] [rbp-B8h] BYREF
  int *v60; // [rsp+140h] [rbp-98h]
  __int64 v61; // [rsp+148h] [rbp-90h]
  int *v62; // [rsp+150h] [rbp-88h]
  __int64 v63; // [rsp+158h] [rbp-80h]
  __int64 v64; // [rsp+160h] [rbp-78h]
  int v65; // [rsp+168h] [rbp-70h] BYREF
  int v66; // [rsp+16Ch] [rbp-6Ch]
  _DWORD *v67; // [rsp+170h] [rbp-68h]
  __int64 v68; // [rsp+178h] [rbp-60h]
  PVOID v69; // [rsp+180h] [rbp-58h]
  _DWORD v70[2]; // [rsp+188h] [rbp-50h] BYREF
  const UNICODE_STRING **v71; // [rsp+190h] [rbp-48h]
  __int64 v72; // [rsp+198h] [rbp-40h]

  v42 = a2;
  v47 = a1;
  v54 = a2;
  v53 = 0LL;
  Source = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v50 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v41 = (const UNICODE_STRING *)v3;
  v55 = v3;
  KeyHandle = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v56 = v4;
  v51 = 0LL;
  P = 0LL;
  AccessMode = ExGetPreviousMode();
  v40 = AccessMode;
  ResultLength = 0;
  v45 = 0LL;
  v7 = *(_DWORD *)(a1 + 8);
  v48 = 0LL;
  if ( (unsigned int)dword_140C038A0 > 5 )
  {
    v44 = *(_DWORD *)(v4 + 12);
    v60 = &v44;
    v61 = 4LL;
    v8 = (__int64 *)(v3 + 16);
    if ( !*(_QWORD *)(v3 + 24) )
      v8 = &qword_140001AF8;
    v9 = *(unsigned __int16 *)v8;
    v10 = v8[1];
    v62 = &v65;
    v63 = 2LL;
    v64 = v10;
    v65 = v9;
    v66 = 0;
    sub_14020A9C4((__int64)&dword_140C038A0, (unsigned __int8 *)byte_14002A5D0, &ActivityId, 0LL, 5u, v59);
  }
  if ( v7 < 0 && v7 != -1073741789 && v7 != -2147483643 )
  {
    v11 = (const UNICODE_STRING *)v3;
LABEL_52:
    v23 = v42;
    goto LABEL_53;
  }
  LOBYTE(v5) = AccessMode;
  v7 = sub_140782720(v5, *(_QWORD *)(v4 + 16), *(unsigned int *)(v4 + 24), &v51);
  if ( v7 < 0 )
    goto LABEL_51;
  v13 = v51;
  LOBYTE(v12) = AccessMode;
  v7 = sub_140780D00(v12, v51, *(unsigned int *)(v4 + 24), v4 + 16);
  if ( v7 < 0 )
    goto LABEL_51;
  LOBYTE(v14) = AccessMode;
  v7 = sub_140782720(v14, *(_QWORD *)(v4 + 32), 4LL, &v45);
  if ( v7 < 0 )
    goto LABEL_51;
  LOBYTE(v15) = AccessMode;
  v7 = sub_140780D00(v15, v45, 4LL, v4 + 32);
  if ( v7 < 0 )
    goto LABEL_51;
  if ( AccessMode == 1 && *(int *)(v47 + 8) >= 0 )
  {
    v16 = *(_DWORD *)(v4 + 12);
    if ( !v16 )
    {
      v17 = *((_DWORD *)v13 + 3) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 16);
      goto LABEL_19;
    }
    if ( v16 == 1 )
    {
      v17 = *((_DWORD *)v13 + 5) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 24);
LABEL_19:
      if ( v17 )
        goto LABEL_20;
LABEL_51:
      v11 = v41;
      goto LABEL_52;
    }
  }
LABEL_20:
  v18 = *(_DWORD *)(v47 + 8);
  if ( v18 == -1073741789 || v18 == -2147483643 || *(_DWORD *)(v4 + 12) == 2 )
  {
    v7 = ObOpenObjectByPointer(
           *(PVOID *)v4,
           0x240u,
           0LL,
           0xF003Fu,
           (POBJECT_TYPE)CmKeyObjectType,
           AccessMode,
           &KeyHandle);
    if ( v7 < 0 )
      goto LABEL_51;
    v7 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, 0LL, 0, &ResultLength);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 )
      goto LABEL_51;
    Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, ResultLength, 1734693462LL);
    v13 = Pool2;
    if ( !Pool2 )
    {
      v7 = -1073741670;
      goto LABEL_51;
    }
    v50 = Pool2;
    v7 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, Pool2, ResultLength, &ResultLength);
    if ( v7 < 0 )
      goto LABEL_51;
  }
  v20 = *(_DWORD *)(v4 + 12);
  if ( !v20 || v50 )
  {
    Source.MaximumLength = v13[6];
    Source.Length = Source.MaximumLength;
    v21 = v13 + 8;
  }
  else
  {
    if ( v20 != 1 )
    {
      v7 = -1073741811;
      goto LABEL_51;
    }
    Source.MaximumLength = v13[10];
    Source.Length = Source.MaximumLength;
    v21 = v13 + 12;
  }
  Source.Buffer = v21;
  v7 = sub_14077FB68(v41 + 1, &Source, &v53);
  if ( v7 < 0 )
    goto LABEL_51;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v23 = v42;
  v24 = (signed __int64 *)(v42 + 16);
  ExAcquirePushLockSharedEx(v42 + 16, 0LL);
  v25 = sub_1406924F0(v42, &v53, 0LL);
  if ( !v25
    || (ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)(v25 + 24),
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&v48, 0xF003Fu, &ObjectAttributes) < 0) )
  {
    v7 = 0;
    v11 = v41;
    v26 = 1;
    goto LABEL_54;
  }
  if ( _InterlockedCompareExchange64(v24, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v24);
  sub_1402AFC00((ULONG_PTR)v24);
  sub_1402F9540((__int64)KeGetCurrentThread());
  v27 = *(_DWORD *)(v4 + 24);
  if ( v27 )
  {
    v28 = (void *)ExAllocatePool2(256LL, v27, 1734693462LL);
    P = v28;
    if ( !v28 )
    {
      v7 = -1073741670;
      v11 = v41;
LABEL_53:
      v26 = 0;
      goto LABEL_54;
    }
  }
  else
  {
    v28 = 0LL;
  }
  v29 = v28;
  v30 = (int)v45;
  Key = ZwQueryKey(v48, *(KEY_INFORMATION_CLASS *)(v4 + 12), v28, *(_DWORD *)(v4 + 24), v45);
  v7 = Key;
  if ( Key == -1073741789 )
  {
    v29 = 0LL;
  }
  else if ( (int)(Key + 0x80000000) >= 0 && Key != -2147483643 )
  {
    v7 = 0;
LABEL_50:
    AccessMode = v40;
    goto LABEL_51;
  }
  v37 = *(unsigned int *)(v4 + 12);
  if ( (_DWORD)v37 != 2 )
  {
    v38 = sub_1406C22CC(v37, (_DWORD)v29, *(_DWORD *)(v4 + 24), v30, (__int64)&v53, 0);
    v7 = v38;
    if ( v38 < 0 && v38 != -2147483643 && v38 != -1073741789 )
      goto LABEL_50;
  }
  if ( v7 != -2147483643 && v7 != -1073741789 )
    memmove(*(void **)(v4 + 16), v29, *(unsigned int *)(v4 + 24));
  AccessMode = v40;
  LOBYTE(v37) = v40;
  v39 = sub_140780D00(v37, *(_QWORD *)(v4 + 32), 4LL, &v45);
  v11 = v41;
  v23 = v42;
  if ( v39 >= 0 )
  {
    *(_DWORD *)(v47 + 24) = v7;
    v7 = -1073740541;
  }
  else
  {
    v7 = v39;
  }
  v26 = 0;
LABEL_54:
  if ( v26 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v23 + 16));
    sub_1402AFC00(v23 + 16);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( v7 < 0 && (unsigned int)dword_140C038A0 > 2 )
  {
    v44 = *(_DWORD *)(v4 + 12);
    v60 = &v44;
    v61 = 4LL;
    v32 = (__int64 *)&v11[1];
    if ( !v11[1].Buffer )
      v32 = &qword_140001AF8;
    v62 = &v65;
    v63 = 2LL;
    v64 = v32[1];
    v65 = *(unsigned __int16 *)v32;
    v66 = 0;
    v33 = (PVOID *)&v53;
    if ( !v53.Buffer )
      v33 = (PVOID *)&qword_140001AF8;
    v67 = v70;
    v68 = 2LL;
    v69 = v33[1];
    v70[0] = *(unsigned __int16 *)v33;
    v70[1] = 0;
    LODWORD(v41) = v7;
    v71 = &v41;
    v72 = 4LL;
    sub_14020A9C4((__int64)&dword_140C038A0, (unsigned __int8 *)byte_14002A687, &ActivityId, 0LL, 8u, v59);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v48 )
    ZwClose(v48);
  if ( P )
    ExFreePoolWithTag(P, 0x67655256u);
  if ( v50 )
    ExFreePoolWithTag(v50, 0x67655256u);
  Buffer = v53.Buffer;
  if ( v53.Buffer )
    ExFreePoolWithTag(v53.Buffer, 0x67655256u);
  LOBYTE(Buffer) = AccessMode;
  sub_140780CC8(Buffer, &v51);
  LOBYTE(v35) = AccessMode;
  sub_140780CC8(v35, &v45);
  return (unsigned int)v7;
}

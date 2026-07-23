/*
 * XREFs of NtQueryDirectoryObject @ 0x1406C2660
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ObpLockDirectoryShared @ 0x1406C2B00 (ObpLockDirectoryShared.c)
 *     ObpUnlockDirectory @ 0x1406C3278 (ObpUnlockDirectory.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  __int64 v7; // rbx
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG v12; // r14d
  __int64 Pool2; // r13
  int v15; // ebx
  void *v16; // rcx
  ULONG v17; // r12d
  ULONG v18; // esi
  _QWORD *v19; // rbx
  unsigned int v20; // ecx
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  ULONG v23; // r13d
  ULONG v24; // r11d
  ULONG v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r10
  unsigned int v29; // r9d
  unsigned __int16 v30; // r8
  ULONG v31; // edx
  int v32; // eax
  _OWORD *v33; // r11
  int v34; // ecx
  char *v35; // rbx
  const void **v36; // rdi
  char *v37; // rbx
  char *v38; // rbx
  ULONG v39; // eax
  int v40; // [rsp+30h] [rbp-98h]
  int v41; // [rsp+30h] [rbp-98h]
  int v42; // [rsp+34h] [rbp-94h]
  unsigned int v43; // [rsp+38h] [rbp-90h]
  __int64 v44; // [rsp+40h] [rbp-88h]
  const void **Src; // [rsp+48h] [rbp-80h]
  ULONG v46; // [rsp+54h] [rbp-74h]
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  _QWORD *v48; // [rsp+60h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-60h] BYREF
  __int128 v50; // [rsp+78h] [rbp-50h] BYREF
  __int64 v51; // [rsp+88h] [rbp-40h]

  v7 = Length;
  DestinationString = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Buffer, Length, 2u);
    v10 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Context < 0x7FFFFFFF0000LL )
      v11 = (__int64)Context;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v10 = (__int64)ReturnLength;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
    if ( RestartScan )
      v12 = 0;
    else
      v12 = *Context;
  }
  else if ( RestartScan )
  {
    v12 = 0;
  }
  else
  {
    v12 = *Context;
  }
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return -1073741811;
  Pool2 = ExAllocatePool2(257LL, v7 + 32, 1833853519LL);
  Src = (const void **)Pool2;
  if ( !Pool2 )
    return -1073741670;
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(DirectoryHandle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v44 = Pool2;
    v17 = 32;
    v18 = 0;
    v40 = 0;
    v42 = -2147483622;
    v19 = Object;
    ObpLockDirectoryShared(&v50, Object);
    v20 = 0;
    v43 = 0;
    v21 = v19;
    v48 = v19;
    do
    {
      v22 = (_QWORD *)*v21;
      if ( *v21 )
      {
        while ( 1 )
        {
          v23 = v17;
          v24 = v18;
          v46 = v18;
          v25 = v18++;
          if ( v12 == v25 )
          {
            v26 = v22[1];
            if ( (*(_BYTE *)(v26 - 22) & 2) != 0 )
              v27 = v26 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v26 - 22) & 3];
            else
              v27 = 0LL;
            if ( v27 )
            {
              DestinationString = *(UNICODE_STRING *)(v27 + 8);
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, 0LL);
              v24 = v46;
            }
            v28 = (unsigned __int8)((unsigned __int16)(v26 - 48) >> 8);
            v29 = (unsigned __int8)ObHeaderCookie;
            v30 = DestinationString.Length;
            v31 = DestinationString.Length
                + 36
                + v17
                + *(unsigned __int16 *)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ v28 ^ (unsigned __int8)ObHeaderCookie]
                                      + 16);
            if ( v17 > v31 )
            {
              v32 = 261;
              v42 = 261;
              v18 = v24;
              goto LABEL_44;
            }
            if ( v31 > Length )
            {
              v18 = v24;
              v32 = -1073741789;
              if ( !ReturnSingleEntry )
                v32 = 261;
              v42 = v32;
              v17 += DestinationString.Length
                   + 36
                   + *(unsigned __int16 *)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ v28 ^ (unsigned __int8)ObHeaderCookie]
                                         + 16);
              if ( !ReturnSingleEntry )
                v17 = v23;
              goto LABEL_44;
            }
            *(_WORD *)v44 = DestinationString.Length;
            *(_WORD *)(v44 + 2) = v30 + 2;
            *(_QWORD *)(v44 + 8) = DestinationString.Buffer;
            *(_WORD *)(v44 + 16) = *(_WORD *)(ObTypeIndexTable[v28 ^ *(unsigned __int8 *)(v26 - 24) ^ (unsigned __int64)v29]
                                            + 16);
            *(_WORD *)(v44 + 18) = *(_WORD *)(ObTypeIndexTable[v28 ^ *(unsigned __int8 *)(v26 - 24) ^ (unsigned __int64)v29]
                                            + 16)
                                 + 2;
            *(_QWORD *)(v44 + 24) = *(_QWORD *)(ObTypeIndexTable[v28 ^ *(unsigned __int8 *)(v26 - 24) ^ (unsigned __int64)v29]
                                              + 24);
            v32 = 0;
            v42 = 0;
            v17 = v31;
            v33 = (_OWORD *)(v44 + 32);
            v44 += 32LL;
            v34 = ++v40;
            if ( ReturnSingleEntry )
              goto LABEL_45;
            ++v12;
          }
          v22 = (_QWORD *)*v22;
          if ( !v22 )
          {
            v21 = v48;
            v20 = v43;
            break;
          }
        }
      }
      v43 = ++v20;
      v48 = ++v21;
    }
    while ( v20 < 0x25 );
    v32 = v42;
LABEL_44:
    v33 = (_OWORD *)v44;
    v34 = v40;
LABEL_45:
    if ( v32 >= 0 )
    {
      *v33 = 0LL;
      v33[1] = 0LL;
      v35 = (char *)(v33 + 2);
      if ( v34 )
      {
        v36 = Src + 3;
        do
        {
          v41 = v34 - 1;
          memmove(v35, *(v36 - 2), *((unsigned __int16 *)v36 - 12));
          *(v36 - 2) = (char *)Buffer + v35 - (char *)Src;
          v37 = &v35[*((unsigned __int16 *)v36 - 12)];
          *(_WORD *)v37 = 0;
          v37 += 2;
          memmove(v37, *v36, *((unsigned __int16 *)v36 - 4));
          *v36 = (char *)Buffer + v37 - (char *)Src;
          v38 = &v37[*((unsigned __int16 *)v36 - 4)];
          *(_WORD *)v38 = 0;
          v35 = v38 + 2;
          v36 += 4;
          v34 = v41;
        }
        while ( v41 );
      }
    }
    ObpUnlockDirectory(&v50);
    v39 = Length;
    if ( v17 <= Length )
      v39 = v17;
    memmove(Buffer, Src, v39);
    if ( ReturnLength )
      *ReturnLength = v17;
    v15 = v42;
    if ( v42 >= 0 )
      *Context = v18;
    ObfDereferenceObject(Object);
    v16 = Src;
  }
  else
  {
    v16 = (void *)Pool2;
  }
  ExFreePoolWithTag(v16, 0);
  return v15;
}

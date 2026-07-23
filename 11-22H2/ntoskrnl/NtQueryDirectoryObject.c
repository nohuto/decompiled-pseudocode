/*
 * XREFs of NtQueryDirectoryObject @ 0x1406C2680
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     Feature_813223224__private_IsEnabledDeviceUsage @ 0x140410940 (Feature_813223224__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ObpLockDirectoryShared @ 0x1406C2B78 (ObpLockDirectoryShared.c)
 *     ObpUnlockDirectory @ 0x1406C32F8 (ObpUnlockDirectory.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
  __int64 v7; // rsi
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG v12; // r15d
  const void **Pool2; // rsi
  int v15; // ebx
  unsigned int v16; // edi
  ULONG v17; // r14d
  NTSTATUS v18; // r13d
  _QWORD *v19; // rbx
  unsigned int v20; // ecx
  _QWORD *v21; // rax
  _QWORD *v22; // rsi
  ULONG v23; // eax
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int16 v26; // r13
  int v27; // r12d
  ULONG v28; // eax
  const void **v29; // r9
  unsigned __int64 v30; // rdx
  int v31; // eax
  char *v32; // rbx
  const void **v33; // rsi
  char *v34; // rbx
  char *v35; // rbx
  ULONG v36; // eax
  int v37; // [rsp+30h] [rbp-A8h]
  int v38; // [rsp+30h] [rbp-A8h]
  int v39; // [rsp+34h] [rbp-A4h]
  unsigned __int8 v40; // [rsp+38h] [rbp-A0h]
  unsigned int v41; // [rsp+40h] [rbp-98h]
  ULONG v42; // [rsp+44h] [rbp-94h]
  const void **v43; // [rsp+48h] [rbp-90h]
  const void **Src; // [rsp+50h] [rbp-88h]
  unsigned int v45; // [rsp+5Ch] [rbp-7Ch]
  PVOID Object; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v47; // [rsp+68h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-68h] BYREF
  __int128 v49; // [rsp+80h] [rbp-58h] BYREF
  __int64 v50; // [rsp+90h] [rbp-48h]

  v7 = Length;
  DestinationString = 0LL;
  v49 = 0LL;
  v50 = 0LL;
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
  Pool2 = (const void **)ExAllocatePool2(257LL, v7 + 32, 1833853519LL);
  Src = Pool2;
  if ( !Pool2 )
    return -1073741670;
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(DirectoryHandle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v43 = Pool2;
    v16 = 32;
    v39 = 32;
    v17 = 0;
    v37 = 0;
    v18 = -2147483622;
    v19 = Object;
    ObpLockDirectoryShared(&v49, Object);
    v20 = 0;
    v41 = 0;
    v21 = v19;
    v47 = v19;
    do
    {
      v22 = (_QWORD *)*v21;
      if ( *v21 )
      {
        while ( 1 )
        {
          v45 = v16;
          v42 = v17;
          v23 = v17++;
          if ( v12 == v23 )
          {
            v24 = v22[1];
            if ( (*(_BYTE *)(v24 - 22) & 2) != 0 )
              v25 = v24 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v24 - 22) & 3];
            else
              v25 = 0LL;
            if ( v25 )
              DestinationString = *(UNICODE_STRING *)(v25 + 8);
            else
              RtlInitUnicodeString(&DestinationString, 0LL);
            v40 = (unsigned __int16)(v24 - 48) >> 8;
            v26 = DestinationString.Length;
            v27 = *(unsigned __int16 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v24 - 24) ^ (unsigned __int64)v40]
                                      + 16)
                + DestinationString.Length
                + 36;
            if ( (unsigned int)Feature_813223224__private_IsEnabledDeviceUsage() )
            {
              v28 = v27 + v16;
              if ( v16 > v27 + v16 )
              {
                v18 = 261;
                v17 = v42;
                goto LABEL_43;
              }
            }
            else
            {
              v28 = v16 + v27;
            }
            v16 = v28;
            v39 = v28;
            v29 = v43;
            if ( v28 > Length )
            {
              v17 = v42;
              v18 = -1073741789;
              if ( !ReturnSingleEntry )
              {
                v18 = 261;
                v16 = v45;
              }
              v39 = v16;
              goto LABEL_44;
            }
            *(_WORD *)v43 = v26;
            *((_WORD *)v43 + 1) = v26 + 2;
            v43[1] = DestinationString.Buffer;
            v30 = (unsigned __int8)ObHeaderCookie;
            *((_WORD *)v43 + 8) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v24 - 24) ^ v40 ^ (unsigned __int64)(unsigned __int8)ObHeaderCookie]
                                           + 16);
            *((_WORD *)v43 + 9) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v24 - 24) ^ v40 ^ (unsigned __int64)(unsigned int)v30]
                                           + 16)
                                + 2;
            v43[3] = *(const void **)(ObTypeIndexTable[*(unsigned __int8 *)(v24 - 24) ^ v40 ^ v30] + 24);
            v18 = 0;
            v29 = v43 + 4;
            v43 += 4;
            v31 = ++v37;
            if ( ReturnSingleEntry )
              goto LABEL_45;
            ++v12;
          }
          v22 = (_QWORD *)*v22;
          if ( !v22 )
          {
            v21 = v47;
            v20 = v41;
            break;
          }
        }
      }
      v41 = ++v20;
      v47 = ++v21;
    }
    while ( v20 < 0x25 );
LABEL_43:
    v29 = v43;
LABEL_44:
    v31 = v37;
LABEL_45:
    if ( v18 >= 0 )
    {
      *(_OWORD *)v29 = 0LL;
      *((_OWORD *)v29 + 1) = 0LL;
      v32 = (char *)(v29 + 4);
      if ( v31 )
      {
        v33 = Src + 3;
        do
        {
          v38 = v31 - 1;
          memmove(v32, *(v33 - 2), *((unsigned __int16 *)v33 - 12));
          *(v33 - 2) = (char *)Buffer + v32 - (char *)Src;
          v34 = &v32[*((unsigned __int16 *)v33 - 12)];
          *(_WORD *)v34 = 0;
          v34 += 2;
          memmove(v34, *v33, *((unsigned __int16 *)v33 - 4));
          *v33 = (char *)Buffer + v34 - (char *)Src;
          v35 = &v34[*((unsigned __int16 *)v33 - 4)];
          *(_WORD *)v35 = 0;
          v32 = v35 + 2;
          v33 += 4;
          v31 = v38;
        }
        while ( v38 );
        v16 = v39;
      }
    }
    ObpUnlockDirectory(&v49);
    v36 = Length;
    if ( v16 <= Length )
      v36 = v16;
    memmove(Buffer, Src, v36);
    if ( ReturnLength )
      *ReturnLength = v16;
    if ( v18 >= 0 )
      *Context = v17;
    ObfDereferenceObject(Object);
    ExFreePoolWithTag(Src, 0);
    return v18;
  }
  else
  {
    ExFreePoolWithTag(Pool2, 0);
    return v15;
  }
}

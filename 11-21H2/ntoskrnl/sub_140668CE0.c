/*
 * XREFs of sub_140668CE0 @ 0x140668CE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14066960C @ 0x14066960C (sub_14066960C.c)
 *     sub_14066965C @ 0x14066965C (sub_14066965C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140668CE0(
        HANDLE Handle,
        char *Address,
        SIZE_T Length,
        char a4,
        char a5,
        int *a6,
        unsigned int *a7)
{
  __int64 v7; // rdi
  KPROCESSOR_MODE v9; // si
  int v10; // r14d
  __int64 Pool2; // rdi
  NTSTATUS v12; // esi
  unsigned int v13; // r15d
  int v14; // edi
  unsigned int v15; // edx
  _QWORD *v16; // rcx
  _QWORD *v17; // rbx
  unsigned int v18; // r12d
  int v19; // r13d
  int v20; // eax
  _OWORD *v21; // rdx
  int v22; // r12d
  char *v23; // rbx
  const void **v24; // rsi
  char *v25; // rbx
  char *v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r10
  unsigned int v31; // r9d
  unsigned __int16 v32; // r8
  void *v33; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // [rsp+30h] [rbp-98h]
  int v38; // [rsp+34h] [rbp-94h]
  int v39; // [rsp+38h] [rbp-90h]
  unsigned int v40; // [rsp+3Ch] [rbp-8Ch]
  __int64 v41; // [rsp+40h] [rbp-88h]
  const void **Src; // [rsp+48h] [rbp-80h]
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  _QWORD *v44; // [rsp+60h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-60h] BYREF
  __int128 v46; // [rsp+78h] [rbp-50h] BYREF
  __int64 v47; // [rsp+88h] [rbp-40h]
  unsigned int Size; // [rsp+E0h] [rbp+18h]

  Size = Length;
  v7 = (unsigned int)Length;
  DestinationString = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v9 )
  {
    ProbeForWrite(Address, (unsigned int)Length, 2u);
    v35 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v35 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v35 = *(_DWORD *)v35;
    if ( a7 )
    {
      v36 = (__int64)a7;
      if ( (unsigned __int64)a7 >= 0x7FFFFFFF0000LL )
        v36 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v36 = *(_DWORD *)v36;
    }
    if ( a5 )
      v10 = 0;
    else
      v10 = *a6;
  }
  else if ( a5 )
  {
    v10 = 0;
  }
  else
  {
    v10 = *a6;
  }
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(257LL, v7 + 32, 1833853519LL);
  Src = (const void **)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, qword_140C24FB8, v9, &Object, 0LL);
  if ( v12 < 0 )
  {
    v33 = (void *)Pool2;
  }
  else
  {
    v41 = Pool2;
    v13 = 32;
    v39 = 32;
    v14 = 0;
    v37 = 0;
    v12 = -2147483622;
    v38 = -2147483622;
    sub_14066965C(&v46, Object);
    v15 = 0;
    v40 = 0;
    v16 = Object;
    v44 = Object;
    do
    {
      v17 = (_QWORD *)*v16;
      if ( *v16 )
      {
        while ( 1 )
        {
          v18 = v13;
          v19 = v14;
          v20 = v14++;
          if ( v10 == v20 )
          {
            v28 = v17[1];
            if ( (*(_BYTE *)(v28 - 22) & 2) == 0 || (v29 = byte_140C25440[*(_BYTE *)(v28 - 22) & 3], v28 - 48 == v29) )
              RtlInitUnicodeString(&DestinationString, 0LL);
            else
              DestinationString = *(UNICODE_STRING *)(v28 - 48 - v29 + 8);
            v30 = (unsigned __int8)((unsigned __int16)(v28 - 48) >> 8);
            v31 = (unsigned __int8)dword_140D06C0C;
            v32 = DestinationString.Length;
            v13 += DestinationString.Length
                 + 36
                 + *(unsigned __int16 *)(qword_140D07490[*(unsigned __int8 *)(v28 - 24) ^ v30 ^ (unsigned __int8)dword_140D06C0C]
                                       + 16);
            v39 = v13;
            v21 = (_OWORD *)v41;
            if ( v13 > Size )
            {
              v14 = v19;
              v12 = -1073741789;
              if ( !a4 )
                v12 = 261;
              v38 = v12;
              if ( !a4 )
                v13 = v18;
              v39 = v13;
              goto LABEL_14;
            }
            *(_WORD *)v41 = DestinationString.Length;
            *(_WORD *)(v41 + 2) = v32 + 2;
            *(_QWORD *)(v41 + 8) = DestinationString.Buffer;
            *(_WORD *)(v41 + 16) = *(_WORD *)(qword_140D07490[*(unsigned __int8 *)(v28 - 24) ^ v30 ^ v31] + 16);
            *(_WORD *)(v41 + 18) = *(_WORD *)(qword_140D07490[*(unsigned __int8 *)(v28 - 24) ^ v30 ^ v31] + 16) + 2;
            *(_QWORD *)(v41 + 24) = *(_QWORD *)(qword_140D07490[*(unsigned __int8 *)(v28 - 24) ^ v30 ^ v31] + 24);
            v12 = 0;
            v38 = 0;
            v21 = (_OWORD *)(v41 + 32);
            v41 += 32LL;
            v22 = ++v37;
            if ( a4 )
              goto LABEL_15;
            ++v10;
          }
          v17 = (_QWORD *)*v17;
          if ( !v17 )
          {
            v16 = v44;
            v15 = v40;
            break;
          }
        }
      }
      v40 = ++v15;
      v44 = ++v16;
    }
    while ( v15 < 0x25 );
    v21 = (_OWORD *)v41;
LABEL_14:
    v22 = v37;
LABEL_15:
    if ( v12 >= 0 )
    {
      *v21 = 0LL;
      v21[1] = 0LL;
      v23 = (char *)(v21 + 2);
      if ( v22 )
      {
        v24 = Src + 3;
        do
        {
          memmove(v23, *(v24 - 2), *((unsigned __int16 *)v24 - 12));
          *(v24 - 2) = &Address[v23 - (char *)Src];
          v25 = &v23[*((unsigned __int16 *)v24 - 12)];
          *(_WORD *)v25 = 0;
          v25 += 2;
          memmove(v25, *v24, *((unsigned __int16 *)v24 - 4));
          *v24 = &Address[v25 - (char *)Src];
          v26 = &v25[*((unsigned __int16 *)v24 - 4)];
          *(_WORD *)v26 = 0;
          v23 = v26 + 2;
          v24 += 4;
          --v22;
        }
        while ( v22 );
        v13 = v39;
        v12 = v38;
      }
    }
    sub_14066960C(&v46);
    v27 = Size;
    if ( v13 <= Size )
      v27 = v13;
    memmove(Address, Src, v27);
    if ( a7 )
      *a7 = v13;
    if ( v12 >= 0 )
      *a6 = v14;
    ObfDereferenceObject(Object);
    v33 = Src;
  }
  ExFreePoolWithTag(v33, 0);
  return (unsigned int)v12;
}

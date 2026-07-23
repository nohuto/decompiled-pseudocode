/*
 * XREFs of NtMapViewOfSection @ 0x1406FB000
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406FB240 @ 0x1406FB240 (sub_1406FB240.c)
 *     sub_1406FB478 @ 0x1406FB478 (sub_1406FB478.c)
 *     sub_1406FC8B0 @ 0x1406FC8B0 (sub_1406FC8B0.c)
 *     sub_1406FCA10 @ 0x1406FCA10 (sub_1406FCA10.c)
 *     sub_140757090 @ 0x140757090 (sub_140757090.c)
 *     sub_1409E637C @ 0x1409E637C (sub_1409E637C.c)
 */

NTSTATUS __cdecl NtMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  NTSTATUS result; // eax
  __int64 v14; // rbx
  ULONG v15; // r13d
  PLARGE_INTEGER v16; // rdi
  PSIZE_T v17; // r14
  char v18; // r15
  NTSTATUS v19; // ebx
  bool v20; // zf
  unsigned __int8 v21; // [rsp+40h] [rbp-F8h]
  unsigned __int8 v22; // [rsp+50h] [rbp-E8h]
  __int64 v23[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v24; // [rsp+68h] [rbp-D0h] BYREF
  PVOID Object[2]; // [rsp+78h] [rbp-C0h]
  NTSTATUS v26; // [rsp+88h] [rbp-B0h]
  _QWORD v27[16]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+158h] [rbp+20h] BYREF

  v28 = ZeroBits;
  memset(v27, 0, sizeof(v27));
  *(_OWORD *)v23 = 0LL;
  v24 = 0LL;
  *(_OWORD *)Object = 0LL;
  result = sub_1406FB478(&v28);
  if ( result >= 0 )
  {
    v22 = *((_BYTE *)KeGetCurrentThread() + 562);
    v21 = v22;
    v14 = v28;
    v15 = Win32Protect;
    v16 = SectionOffset;
    v17 = ViewSize;
    result = sub_1406FB240(
               ProcessHandle,
               SectionHandle,
               0LL,
               BaseAddress,
               ViewSize,
               SectionOffset,
               Win32Protect,
               v28,
               v21,
               v23);
    if ( result < 0 )
    {
      ++dword_140C52B18;
      return result;
    }
    v18 = AllocationType;
    v19 = sub_1406FC8B0(v27, v23[1], AllocationType, v15, v14);
    if ( v19 < 0 )
    {
      v20 = v23[0] == 0;
    }
    else
    {
      v19 = sub_1406FCA10(
              Object[0],
              (unsigned int)v27,
              (unsigned int)v23,
              CommitSize,
              (__int64)&v24,
              InheritDisposition,
              0);
      v26 = v19;
      if ( v19 >= 0 )
      {
        if ( (v27[7] & 0x400000000LL) != 0 )
          sub_140757090(Object[1]);
        if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v24) & 2) != 0 )
          sub_1409E637C(Object[1], v22, v23[0], v23[1], v18, v15);
        *v17 = v27[3];
        *BaseAddress = (PVOID)v23[0];
        if ( v16 )
          v16->QuadPart = v24;
        goto LABEL_12;
      }
      v20 = v23[0] == 0;
    }
    if ( v20 )
      ++dword_140C52B18;
    else
      ++dword_140C52B1C;
LABEL_12:
    ObfDereferenceObject(Object[0]);
    ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
    return v19;
  }
  return result;
}

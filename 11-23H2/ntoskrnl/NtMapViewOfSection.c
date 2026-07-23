/*
 * XREFs of NtMapViewOfSection @ 0x140721050
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTiLogMapExecView @ 0x140682E58 (EtwTiLogMapExecView.c)
 *     MiValidateZeroBits @ 0x1407212B0 (MiValidateZeroBits.c)
 *     MiMapViewOfSectionCommon @ 0x140721310 (MiMapViewOfSectionCommon.c)
 *     MiMapParametersInitialize @ 0x14072174C (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140721860 (MiMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1407A3FAC (DbgkMapViewOfSection.c)
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
  __int64 v13; // rdx
  NTSTATUS result; // eax
  __int64 v15; // rbx
  ULONG v16; // esi
  PLARGE_INTEGER v17; // rdi
  PSIZE_T v18; // r12
  ULONG v19; // r14d
  NTSTATUS v20; // ebx
  __int64 v21; // [rsp+20h] [rbp-118h]
  int v22[2]; // [rsp+28h] [rbp-110h]
  char PreviousMode; // [rsp+50h] [rbp-E8h]
  __int64 v24[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v25; // [rsp+68h] [rbp-D0h] BYREF
  PVOID Object[2]; // [rsp+78h] [rbp-C0h]
  NTSTATUS v27; // [rsp+88h] [rbp-B0h]
  _QWORD v28[16]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+158h] [rbp+20h] BYREF

  v29 = ZeroBits;
  memset(v28, 0, sizeof(v28));
  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  *(_OWORD *)Object = 0LL;
  result = MiValidateZeroBits(&v29, v13);
  if ( result >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v15 = v29;
    v16 = Win32Protect;
    v17 = SectionOffset;
    v18 = ViewSize;
    result = MiMapViewOfSectionCommon(
               ProcessHandle,
               SectionHandle,
               0LL,
               BaseAddress,
               ViewSize,
               SectionOffset,
               Win32Protect,
               v29,
               PreviousMode,
               v24);
    if ( result < 0 )
    {
      ++dword_140C67F98;
    }
    else
    {
      v19 = AllocationType;
      v20 = MiMapParametersInitialize(v28, v24[1], AllocationType, v16, v15);
      if ( v20 < 0
        || (v20 = MiMapViewOfSection(
                    Object[0],
                    (unsigned int)v28,
                    (unsigned int)v24,
                    CommitSize,
                    (__int64)&v25,
                    InheritDisposition,
                    0),
            v27 = v20,
            v20 < 0) )
      {
        if ( v24[0] )
          ++dword_140C67F9C;
        else
          ++dword_140C67F98;
      }
      else
      {
        if ( (v28[7] & 0x400000000LL) != 0 )
          DbgkMapViewOfSection(Object[1]);
        if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v25) & 2) != 0 )
        {
          v22[0] = v16;
          LODWORD(v21) = v19;
          EtwTiLogMapExecView((__int64)Object[1], PreviousMode, v24[0], v24[1], v21, *(_QWORD *)v22);
        }
        *v18 = v28[3];
        *BaseAddress = (PVOID)v24[0];
        if ( v17 )
          v17->QuadPart = v25;
      }
      ObfDereferenceObject(Object[0]);
      ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
      return v20;
    }
  }
  return result;
}

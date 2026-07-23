/*
 * XREFs of NtQueryLicenseValue @ 0x1407AF540
 * Callers:
 *     ExpGetNtProductTypeFromLicenseValue @ 0x140801AC4 (ExpGetNtProductTypeFromLicenseValue.c)
 *     MiMemoryLicense @ 0x140B62D90 (MiMemoryLicense.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     ntoskrnl_27 @ 0x1407AF810 (ntoskrnl_27.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  SIZE_T v5; // r14
  NTSTATUS v8; // ebx
  char PreviousMode; // dl
  PULONG v10; // r15
  int v11; // eax
  wchar_t *Buffer; // rdx
  unsigned __int64 v13; // rcx
  void *Pool2; // rax
  void *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
  _DWORD Size[3]; // [rsp+34h] [rbp-64h] BYREF
  PVOID P; // [rsp+40h] [rbp-58h]
  __int128 v22; // [rsp+48h] [rbp-50h] BYREF
  ULONG v23; // [rsp+A0h] [rbp+8h] BYREF
  PULONG v24; // [rsp+A8h] [rbp+10h]
  PVOID v25; // [rsp+B0h] [rbp+18h]
  ULONG v26; // [rsp+B8h] [rbp+20h]

  v26 = DataSize;
  v25 = Data;
  v24 = Type;
  v5 = DataSize;
  v22 = 0LL;
  v8 = 0;
  P = 0LL;
  v23 = 0;
  memset(Size, 0, sizeof(Size));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( ValueName && (v10 = ResultDataSize) != 0LL && (Data || !DataSize) )
  {
    if ( DataSize > 0x800000 )
    {
      v8 = -1073741801;
    }
    else if ( PreviousMode )
    {
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      v11 = *(_DWORD *)&ValueName->Length;
      LODWORD(v22) = *(_DWORD *)&ValueName->Length;
      Buffer = ValueName->Buffer;
      *((_QWORD *)&v22 + 1) = Buffer;
      if ( Buffer && (_WORD)v11 && (v11 & 1) == 0 )
      {
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = (unsigned __int64)Buffer + (unsigned __int16)v11;
        if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
        Pool2 = (void *)ExAllocatePool2(256LL, (unsigned __int16)v22, 542329939LL);
        P = Pool2;
        if ( Pool2 )
        {
          v15 = Pool2;
          memmove(Pool2, *((const void **)&v22 + 1), (unsigned __int16)v22);
          *((_QWORD *)&v22 + 1) = v15;
          if ( Type )
          {
            v16 = (__int64)Type;
            if ( (unsigned __int64)Type >= 0x7FFFFFFF0000LL )
              v16 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v16 = *(_DWORD *)v16;
            v23 = *Type;
          }
          if ( Data
            && (_DWORD)v5
            && (ProbeForWrite(Data, v5, 1u), (*(_QWORD *)&Size[1] = ExAllocatePool2(256LL, v5, 542329939LL)) == 0LL) )
          {
            v8 = -1073741801;
          }
          else
          {
            v17 = (__int64)v10;
            if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
              v17 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v17 = *(_DWORD *)v17;
            Size[0] = *v10;
          }
        }
        else
        {
          v8 = -1073741801;
        }
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v8 >= 0 )
      {
        v8 = ntoskrnl_27((int)&v22, (int)&v23, Size[1], v5, (__int64)Size);
        if ( Type )
          *Type = v23;
        v18 = Size[0];
        *v10 = Size[0];
        if ( v8 >= 0 && Data )
        {
          if ( (unsigned int)v5 < v18 )
            v8 = -1073741789;
          else
            memmove(Data, *(const void **)&Size[1], v18);
        }
      }
    }
    else
    {
      v8 = ntoskrnl_27((int)ValueName, (int)Type, (int)Data, DataSize, (__int64)ResultDataSize);
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(_QWORD *)&Size[1] )
    ExFreePoolWithTag(*(PVOID *)&Size[1], 0);
  return v8;
}

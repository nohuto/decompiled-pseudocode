/*
 * XREFs of NtAdjustPrivilegesToken @ 0x14079DC50
 * Callers:
 *     sub_1409BB4D8 @ 0x1409BB4D8 (sub_1409BB4D8.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406651C8 @ 0x1406651C8 (sub_1406651C8.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_14079E024 @ 0x14079E024 (sub_14079E024.c)
 *     sub_14079E674 @ 0x14079E674 (sub_14079E674.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  char v10; // r14
  __int64 v11; // rsi
  char *v12; // rcx
  PTOKEN_PRIVILEGES v13; // rbx
  NTSTATUS result; // eax
  int v15; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v17; // rsi
  __int64 v18; // r12
  int v19; // r8d
  _QWORD *v20; // rdi
  int v21; // edx
  int v22; // r8d
  ULONG v23; // eax
  signed __int32 v24[8]; // [rsp+0h] [rbp-A8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-88h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-80h]
  __int64 v27; // [rsp+30h] [rbp-78h]
  char v28; // [rsp+50h] [rbp-58h]
  ULONG PrivilegeCount; // [rsp+54h] [rbp-54h]
  PVOID v30; // [rsp+58h] [rbp-50h] BYREF
  ULONG v31; // [rsp+60h] [rbp-48h] BYREF
  ULONG v32; // [rsp+64h] [rbp-44h] BYREF
  __int64 v33; // [rsp+68h] [rbp-40h] BYREF
  NTSTATUS v34; // [rsp+70h] [rbp-38h]
  _DWORD v35[3]; // [rsp+74h] [rbp-34h] BYREF
  char v36; // [rsp+B8h] [rbp+10h] BYREF

  PrivilegeCount = 0;
  v33 = 0LL;
  v35[0] = 0;
  v31 = 0;
  v32 = 0;
  v36 = 0;
  if ( !DisableAllPrivileges && !NewState )
    return -1073741811;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  v28 = v10;
  if ( v10 )
  {
    if ( DisableAllPrivileges )
    {
      v11 = 0x7FFFFFFF0000LL;
    }
    else
    {
      if ( ((unsigned __int8)NewState & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 0x7FFFFFFF0000LL;
      PrivilegeCount = NewState->PrivilegeCount;
      v35[1] = 12 * (PrivilegeCount - 1) + 16;
      if ( 12 * (PrivilegeCount - 1) != -16 )
      {
        v12 = (char *)&NewState->Privileges[PrivilegeCount];
        if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < (char *)NewState )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v13 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ReturnLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
LABEL_16:
    if ( !DisableAllPrivileges )
    {
      result = sub_14079E674(
                 NewState->Privileges,
                 (int)Object,
                 (int)HandleInformation,
                 v27,
                 (__int64)&v33,
                 (__int64)v35);
      v34 = result;
      if ( result < 0 )
        return result;
    }
    goto LABEL_18;
  }
  v13 = PreviousState;
  if ( !DisableAllPrivileges )
  {
    PrivilegeCount = NewState->PrivilegeCount;
    goto LABEL_16;
  }
LABEL_18:
  v30 = 0LL;
  v15 = ObReferenceObjectByHandle(TokenHandle, v13 != 0LL ? 40 : 32, (POBJECT_TYPE)SeTokenObjectType, v10, &v30, 0LL);
  if ( v15 < 0 )
  {
    if ( v33 )
      sub_1406651C8((void *)v33, v10);
    return v15;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v17 = (PERESOURCE *)v30;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v30 + 6), 1u);
    _InterlockedOr(v24, 0);
    v18 = v33;
    LOBYTE(v19) = DisableAllPrivileges;
    v20 = v30;
    sub_14079E024((_DWORD)v30, 0, v19, PrivilegeCount, v33, (__int64)v13, (__int64)&v31, (__int64)&v32, (__int64)&v36);
    if ( v13 && (*ReturnLength = v31, v31 > BufferLength) )
    {
      _InterlockedOr(v24, 0);
      ExReleaseResourceLite(v17[6]);
      sub_1402F9540((__int64)KeGetCurrentThread());
      ObfDereferenceObject(v30);
      if ( v33 )
        sub_1406651C8((void *)v33, v10);
      return -1073741789;
    }
    else
    {
      LOBYTE(v22) = DisableAllPrivileges;
      LOBYTE(v21) = 1;
      v34 = sub_14079E024(
              (_DWORD)v20,
              v21,
              v22,
              PrivilegeCount,
              v18,
              (__int64)v13,
              (__int64)&v31,
              (__int64)&v32,
              (__int64)&v36);
      if ( v13 )
      {
        v23 = v32;
        v13->PrivilegeCount = v32;
        if ( !v23 )
        {
          v13->Privileges[0].Luid = 0LL;
          v13->Privileges[0].Attributes = 0;
        }
      }
      if ( v36 )
        v20[7] = _InterlockedIncrement64(&qword_140C0DA70);
      _InterlockedOr(v24, 0);
      ExReleaseResourceLite(v17[6]);
      sub_1402F9540((__int64)KeGetCurrentThread());
      ObfDereferenceObject(v30);
      if ( v33 )
        sub_1406651C8((void *)v33, v10);
      return v34;
    }
  }
}

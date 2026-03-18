/*
 * XREFs of NtDCompositionSendDwmLpcMessage @ 0x1C00D5730
 * Callers:
 *     <none>
 * Callees:
 *     ReferenceDwmProcess @ 0x1C0086E90 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0086ED4 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1C0086FA0 (UserReferenceDwmApiPort.c)
 *     GreUnlockDwmState @ 0x1C00870B0 (GreUnlockDwmState.c)
 *     UserDereferenceDwmProcess @ 0x1C009BC30 (UserDereferenceDwmProcess.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

__int64 __fastcall NtDCompositionSendDwmLpcMessage(char *Src, size_t Size)
{
  PVOID v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  signed int v9; // ebx
  struct _KPROCESS *v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 CurrentProcess; // rax
  signed int v17; // eax
  __int64 i; // rcx
  void *v19; // rcx
  int v21; // [rsp+38h] [rbp-110h]
  char v22; // [rsp+40h] [rbp-108h]
  struct _KPROCESS *PROCESS; // [rsp+48h] [rbp-100h]
  __int128 v24; // [rsp+50h] [rbp-F8h]
  PVOID v25; // [rsp+60h] [rbp-E8h]
  size_t v26; // [rsp+68h] [rbp-E0h] BYREF
  __int64 *v27; // [rsp+70h] [rbp-D8h]
  void *v28; // [rsp+78h] [rbp-D0h]
  char *v29; // [rsp+88h] [rbp-C0h]
  _DWORD v30[20]; // [rsp+90h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-68h] BYREF

  v28 = Src;
  v29 = Src;
  v26 = Size;
  v27 = (__int64 *)Size;
  v24 = 0LL;
  v4 = 0LL;
  v25 = 0LL;
  v22 = 0;
  memset(v30, 0, 0x48uLL);
  v9 = Size > 0x20 ? 0xC000000D : 0;
  if ( Size > 0x20 )
  {
    v10 = 0LL;
  }
  else
  {
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(&v30[10], Src, Size);
    v10 = 0LL;
  }
  v11 = 0LL;
  if ( Size <= 0x20 )
  {
    v6 = (unsigned int)(v30[10] - 1073741900);
    if ( v30[10] == 1073741900 )
    {
      if ( Size == 32 )
      {
        *(_QWORD *)&v24 = &v30[11];
        v11 = 1LL;
        goto LABEL_26;
      }
    }
    else
    {
      v6 = (unsigned int)(v30[10] - 1073741946);
      if ( v30[10] == 1073741946 )
      {
        if ( Size == 28 )
        {
          *(_QWORD *)&v24 = &v30[13];
          *((_QWORD *)&v24 + 1) = &v30[15];
        }
        else
        {
          v9 = -1073741811;
        }
        if ( v27 == (__int64 *)28 )
          v11 = 2LL;
        goto LABEL_26;
      }
      v6 = (unsigned int)(v30[10] - 1073741949);
      if ( v30[10] == 1073741949
        || (v6 = (unsigned int)(v30[10] - 1073741950), v30[10] == 1073741950)
        || v30[10] == 1073741954 )
      {
        if ( Size == 28 )
          *(_QWORD *)&v24 = &v30[13];
        else
          v9 = -1073741811;
        LOBYTE(v11) = Size == 28;
LABEL_26:
        if ( v9 >= 0 )
        {
          v4 = UserReferenceDwmApiPort(v6);
          v25 = v4;
          if ( !v4 )
            v9 = -1073741823;
        }
        goto LABEL_29;
      }
    }
    v9 = -1073741811;
    goto LABEL_26;
  }
LABEL_29:
  if ( v9 >= 0 )
  {
    if ( CheckOrAcquireDwmStateLock(v6, v5, v7, v8) )
    {
      v22 = 1;
    }
    else
    {
      v22 = 0;
      v9 = -1073741823;
    }
    if ( v9 >= 0 )
    {
      v10 = (struct _KPROCESS *)ReferenceDwmProcess();
      PROCESS = v10;
      if ( !v10 )
        v9 = -1073741823;
      if ( v9 >= 0 && v11 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          v27 = (__int64 *)*((_QWORD *)&v24 + v14);
          v15 = *v27;
          if ( *v27 )
          {
            CurrentProcess = PsGetCurrentProcess(v6, v12, v13);
            LOBYTE(v21) = 1;
            v9 = ObDuplicateObject(CurrentProcess, v15, PROCESS, v27, 0, 0, 6, v21);
            if ( v9 < 0 )
              break;
          }
          if ( ++v14 >= v11 )
          {
            v10 = PROCESS;
            goto LABEL_48;
          }
        }
        memset(&ApcState, 0, sizeof(ApcState));
        v10 = PROCESS;
        KeStackAttachProcess(PROCESS, &ApcState);
        while ( v14 > 0 )
        {
          --v14;
          ObCloseHandle(**((HANDLE **)&v24 + v14), 1);
        }
        KeUnstackDetachProcess(&ApcState);
      }
    }
  }
LABEL_48:
  if ( v10 )
    UserDereferenceDwmProcess(v10);
  if ( v22 )
    GreUnlockDwmState(v6);
  if ( v9 >= 0 )
  {
    v26 = Size + 40;
    LOWORD(v30[0]) = Size;
    HIWORD(v30[0]) = Size + 40;
    LOWORD(v30[1]) = 0x8000;
    v17 = LpcSendWaitReceivePort(v4, 0x20000LL, v30, v30, &v26, 0LL);
    v9 = v17;
    if ( v17 == 192 || v17 == 258 )
      v9 = -1073741823;
    if ( v9 >= 0 )
    {
      if ( v11 )
      {
        for ( i = 0LL; i < v11; ++i )
          **((_QWORD **)&v24 + i) = 0LL;
      }
      v19 = v28;
      if ( (unsigned __int64)v28 + Size > MmUserProbeAddress || (char *)v28 + Size <= v28 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v19, &v30[10], Size);
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)v9;
}

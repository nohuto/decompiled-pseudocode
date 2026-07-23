/*
 * XREFs of sub_140A51CA4 @ 0x140A51CA4
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwFlushKey @ 0x14041D540 (ZwFlushKey.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     sub_140A51F50 @ 0x140A51F50 (sub_140A51F50.c)
 */

void __fastcall sub_140A51CA4(int a1)
{
  char v2; // al
  char v3; // di
  char v4; // al
  char v5; // al
  int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 **v9; // rax
  __int64 **v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rdx
  __int64 v13; // r9
  _QWORD *v14; // rcx
  __int64 v15; // r9
  _QWORD *v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  _QWORD *StartContext; // [rsp+80h] [rbp-9h] BYREF
  __int64 *p_StartContext; // [rsp+88h] [rbp-1h]
  _QWORD v26[4]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+27h]
  HANDLE KeyHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE ThreadHandle; // [rsp+100h] [rbp+77h] BYREF

  ThreadHandle = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  sub_140256CA0(&stru_14000F970);
  v27 = 0LL;
  p_StartContext = (__int64 *)&StartContext;
  StartContext = &StartContext;
  memset(v26, 0, sizeof(v26));
  KeInitializeEvent((PRKEVENT)&v26[1], NotificationEvent, 0);
  if ( a1 == 6 )
  {
    v2 = 2;
  }
  else
  {
    v2 = dword_140D06CF4;
    if ( byte_140C22C00 )
      v2 = 3;
  }
  v3 = v2 | 0x10;
  if ( a1 != 5 )
    v3 = v2;
  v4 = v27;
  if ( (v3 & 4) != 0 )
    v4 = 1;
  LOBYTE(v27) = v4;
  v5 = BYTE1(v27);
  if ( (v3 & 8) != 0 )
    v5 = 1;
  BYTE1(v27) = v5;
  if ( (v3 & 1) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ZwFlushKey(KeyHandle);
      ZwClose(KeyHandle);
    }
  }
  v6 = 0;
  ExAcquireFastMutex(&stru_140C23160);
  v7 = (__int64 *)qword_140C231A0;
  while ( v7 != &qword_140C231A0 )
  {
    v11 = *(v7 - 6);
    v12 = v7;
    v7 = (__int64 *)*v7;
    v13 = *(_QWORD *)(v11 + 56);
    if ( (*(_BYTE *)(v13 + 4) & 1) != 0 && (*(_DWORD *)(v11 + 52) & 0x10006) == 0 )
    {
      v8 = *(_QWORD *)(v13 + 16);
      if ( !v8 || (*(_DWORD *)(v8 + 52) & 4) == 0 )
      {
        if ( (__int64 *)v7[1] != v12
          || (v9 = (__int64 **)v12[1], *v9 != v12)
          || (*v9 = v7,
              v7[1] = (__int64)v9,
              v10 = (__int64 **)p_StartContext,
              (_QWORD **)*p_StartContext != &StartContext) )
        {
LABEL_34:
          __fastfail(3u);
        }
        v12[1] = (__int64)p_StartContext;
        *v12 = (__int64)&StartContext;
        ++v6;
        *v10 = v12;
        p_StartContext = v12;
      }
    }
  }
  if ( (v3 & 2) == 0 )
  {
    v14 = StartContext;
    while ( v14 != &StartContext )
    {
      v15 = *(v14 - 6);
      v16 = v14;
      v14 = (_QWORD *)*v14;
      if ( (*(_DWORD *)(v15 + 52) & 1) == 0 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v15 + 56) + 16LL);
        if ( !v17 || (*(_DWORD *)(v17 + 52) & 1) == 0 )
        {
          if ( (v3 & 0x10) == 0
            || ((v18 = *(_DWORD *)(v15 + 48), (v18 & 0x200000) == 0) || (v18 & 0x100) != 0)
            && (!v17 || (v19 = *(_DWORD *)(v17 + 48), (v19 & 0x200000) == 0) || (v19 & 0x100) != 0) )
          {
            if ( (_QWORD *)v14[1] != v16 )
              goto LABEL_34;
            v20 = (_QWORD *)v16[1];
            if ( (_QWORD *)*v20 != v16 )
              goto LABEL_34;
            *v20 = v14;
            v14[1] = v20;
            v21 = (_QWORD *)qword_140C231A8;
            if ( *(__int64 **)qword_140C231A8 != &qword_140C231A0 )
              goto LABEL_34;
            *v16 = &qword_140C231A0;
            --v6;
            v16[1] = v21;
            *v21 = v16;
            qword_140C231A8 = (__int64)v16;
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex(&stru_140C23160);
  if ( v6 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    if ( v6 > 8 )
      v6 = 8;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(v26[0]) = v6;
    while ( --v6 > 0 )
    {
      if ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, &ObjectAttributes, 0LL, 0LL, sub_140A51F50, &StartContext) < 0 )
      {
        ExAcquireFastMutex(&stru_140C23160);
        LODWORD(v26[0]) -= v6;
        KeReleaseGuardedMutex(&stru_140C23160);
        break;
      }
      ZwClose(ThreadHandle);
    }
    sub_140A51F50(&StartContext);
    KeWaitForSingleObject(&v26[1], Executive, 0, 0, 0LL);
  }
  sub_140256CA0(&stru_14000F960);
}

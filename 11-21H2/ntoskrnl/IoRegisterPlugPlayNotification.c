/*
 * XREFs of IoRegisterPlugPlayNotification @ 0x140768390
 * Callers:
 *     sub_14081E450 @ 0x14081E450 (sub_14081E450.c)
 *     sub_140858D04 @ 0x140858D04 (sub_140858D04.c)
 *     sub_14098B980 @ 0x14098B980 (sub_14098B980.c)
 *     sub_1409D64F8 @ 0x1409D64F8 (sub_1409D64F8.c)
 *     sub_140B2D9E4 @ 0x140B2D9E4 (sub_140B2D9E4.c)
 *     sub_140B55A38 @ 0x140B55A38 (sub_140B55A38.c)
 * Callees:
 *     KeAcquireGuardedMutex @ 0x14029ECC0 (KeAcquireGuardedMutex.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1402A48C0 (ObReferenceObjectByPointerWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402D2E74 @ 0x1402D2E74 (sub_1402D2E74.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140748F48 @ 0x140748F48 (sub_140748F48.c)
 *     sub_140768798 @ 0x140768798 (sub_140768798.c)
 *     sub_140768894 @ 0x140768894 (sub_140768894.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_14078D3DC @ 0x14078D3DC (sub_14078D3DC.c)
 *     sub_1408648F8 @ 0x1408648F8 (sub_1408648F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterPlugPlayNotification(
        IO_NOTIFICATION_EVENT_CATEGORY EventCategory,
        ULONG EventCategoryFlags,
        PVOID EventCategoryData,
        PDRIVER_OBJECT DriverObject,
        PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Context,
        PVOID *NotificationEntry)
{
  char v9; // r13
  NTSTATUS result; // eax
  __int32 v12; // ebx
  __int32 v13; // ebx
  __int32 v14; // ebx
  NTSTATUS v15; // ebx
  _QWORD *Pool2; // rdi
  _QWORD *v17; // r14
  PVOID *v18; // rdx
  struct _FAST_MUTEX *v19; // rcx
  _DWORD *v20; // r14
  char *v21; // rax
  char **v22; // rdx
  __int128 v23; // xmm1
  PVOID v24; // r14
  const WCHAR *i; // rsi
  __int64 CurrentServerSilo; // rax
  int v27; // eax
  __int64 v28; // rax
  _QWORD *v29; // rax
  ULONG v30; // edx
  void *v31; // rcx
  PVOID P; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  int v34; // [rsp+48h] [rbp-38h] BYREF
  __int128 v35; // [rsp+4Ch] [rbp-34h]
  __int128 v36; // [rsp+5Ch] [rbp-24h]
  _BYTE v37[12]; // [rsp+6Ch] [rbp-14h] BYREF

  v9 = EventCategoryFlags;
  *NotificationEntry = 0LL;
  result = ObReferenceObjectByPointerWithTag(DriverObject, 0, IoDriverObjectType, 0, 0x4E706E50u);
  if ( result >= 0 )
  {
    v12 = EventCategory - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            v15 = sub_1408648F8(DriverObject, CallbackRoutine, Context, NotificationEntry);
            if ( v15 >= 0 )
              return v15;
          }
          else
          {
            v15 = -1073741585;
          }
          goto LABEL_35;
        }
        P = 0LL;
        v15 = sub_1402D2E74((PFILE_OBJECT)EventCategoryData, &P);
        if ( v15 < 0 )
          goto LABEL_35;
        Pool2 = (_QWORD *)ExAllocatePool2(256LL, 112LL, 1131441744LL);
        if ( Pool2 )
        {
          v15 = sub_140768894(
                  (_DWORD)Pool2,
                  3,
                  (_DWORD)CallbackRoutine,
                  (_DWORD)Context,
                  (__int64)DriverObject,
                  (__int64)&stru_140C469C0);
          if ( v15 < 0 )
          {
            ExFreePoolWithTag(Pool2, 0x43706E50u);
            v31 = (void *)*((_QWORD *)P + 4);
          }
          else
          {
            v17 = P;
            Pool2[10] = EventCategoryData;
            Pool2[11] = v17[4];
            v15 = sub_140768798(Pool2);
            if ( v15 >= 0 )
            {
              KeAcquireGuardedMutex(&stru_140C469C0);
              v18 = (PVOID *)v17[60];
              if ( *v18 == v17 + 59 )
              {
                *Pool2 = v17 + 59;
                v19 = &stru_140C469C0;
                Pool2[1] = v18;
                *v18 = Pool2;
                v17[60] = Pool2;
LABEL_11:
                KeReleaseGuardedMutex(v19);
LABEL_12:
                *NotificationEntry = Pool2;
                return v15;
              }
              goto LABEL_47;
            }
            ExFreePoolWithTag(Pool2, 0x43706E50u);
            v31 = (void *)v17[4];
          }
          ObfDereferenceObject(v31);
LABEL_35:
          ObfDereferenceObjectWithTag(DriverObject, 0x4E706E50u);
          return v15;
        }
        ObfDereferenceObject(*((PVOID *)P + 4));
LABEL_39:
        v15 = -1073741670;
        goto LABEL_35;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 96LL, 1148218960LL);
      if ( !Pool2 )
        goto LABEL_39;
      v15 = sub_140768894(
              (_DWORD)Pool2,
              2,
              (_DWORD)CallbackRoutine,
              (_DWORD)Context,
              (__int64)DriverObject,
              (__int64)&stru_140C46A00);
      if ( v15 < 0 )
        goto LABEL_35;
      v20 = Pool2 + 10;
      *((_OWORD *)Pool2 + 5) = *(_OWORD *)EventCategoryData;
      v15 = sub_140768798(Pool2);
      if ( v15 >= 0 )
      {
        KeAcquireGuardedMutex(&stru_140C46A00);
        v21 = (char *)&unk_140D3D650
            + 16 * ((*v20 + *((_DWORD *)Pool2 + 21) + *((_DWORD *)Pool2 + 22) + *((_DWORD *)Pool2 + 23)) % 0xDu);
        v22 = (char **)*((_QWORD *)v21 + 1);
        if ( *v22 != v21 )
          goto LABEL_47;
        *Pool2 = v21;
        Pool2[1] = v22;
        *v22 = (char *)Pool2;
        *((_QWORD *)v21 + 1) = Pool2;
        KeReleaseGuardedMutex(&stru_140C46A00);
        if ( (v9 & 1) == 0 )
          goto LABEL_12;
        v23 = *(_OWORD *)v20;
        P = 0LL;
        DestinationString = 0LL;
        memset(v37, 0, sizeof(v37));
        v35 = xmmword_1400108F8;
        v34 = 3145729;
        v36 = v23;
        v15 = sub_1407879A8((int)Pool2 + 80, 0, 0, 0, (__int64)&P, 0LL);
        if ( v15 >= 0 )
        {
          v24 = P;
          for ( i = (const WCHAR *)P; *i; i += ((unsigned __int64)DestinationString.Length >> 1) + 1 )
          {
            LODWORD(P) = 0;
            RtlInitUnicodeString(&DestinationString, i);
            *(_QWORD *)&v37[4] = &DestinationString;
            CurrentServerSilo = PsGetCurrentServerSilo();
            if ( *((_DWORD *)Pool2 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
            {
              v27 = sub_140748F48();
              if ( v27 != -1 && *((_DWORD *)Pool2 + 5) != v27 )
                continue;
            }
            sub_14078D3DC(Pool2, &v34, &P);
          }
          ExFreePoolWithTag(v24, 0);
          goto LABEL_12;
        }
        goto LABEL_35;
      }
      v30 = 1148218960;
    }
    else
    {
      v28 = ExAllocatePool2(256LL, 80LL, 963669584LL);
      Pool2 = (_QWORD *)v28;
      if ( !v28 )
        goto LABEL_39;
      v15 = sub_140768894(
              v28,
              1,
              (_DWORD)CallbackRoutine,
              (_DWORD)Context,
              (__int64)DriverObject,
              (__int64)&stru_140C46980);
      if ( v15 < 0 )
        goto LABEL_35;
      v15 = sub_140768798(Pool2);
      if ( v15 >= 0 )
      {
        KeAcquireGuardedMutex(&stru_140C46980);
        v29 = (_QWORD *)qword_140D3CEC0;
        if ( *(PVOID **)qword_140D3CEC0 == &qword_140D3CEB8 )
        {
          *Pool2 = &qword_140D3CEB8;
          v19 = &stru_140C46980;
          Pool2[1] = v29;
          *v29 = Pool2;
          qword_140D3CEC0 = (__int64)Pool2;
          goto LABEL_11;
        }
LABEL_47:
        __fastfail(3u);
      }
      v30 = 963669584;
    }
    ExFreePoolWithTag(Pool2, v30);
    goto LABEL_35;
  }
  return result;
}

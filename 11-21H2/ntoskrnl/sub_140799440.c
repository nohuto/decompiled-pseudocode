/*
 * XREFs of sub_140799440 @ 0x140799440
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_1402E1D48 @ 0x1402E1D48 (sub_1402E1D48.c)
 *     sub_1402E2BF8 @ 0x1402E2BF8 (sub_1402E2BF8.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 *     sub_1406D1E4C @ 0x1406D1E4C (sub_1406D1E4C.c)
 *     PsTerminateSystemThread @ 0x1406E5A70 (PsTerminateSystemThread.c)
 *     sub_1406EA4C0 @ 0x1406EA4C0 (sub_1406EA4C0.c)
 *     sub_1406EDB48 @ 0x1406EDB48 (sub_1406EDB48.c)
 *     sub_1406EDD54 @ 0x1406EDD54 (sub_1406EDD54.c)
 *     sub_1406F0614 @ 0x1406F0614 (sub_1406F0614.c)
 *     sub_1406F1AC4 @ 0x1406F1AC4 (sub_1406F1AC4.c)
 *     sub_1407987F0 @ 0x1407987F0 (sub_1407987F0.c)
 *     sub_14079885C @ 0x14079885C (sub_14079885C.c)
 *     sub_14079A870 @ 0x14079A870 (sub_14079A870.c)
 *     sub_14079A984 @ 0x14079A984 (sub_14079A984.c)
 *     sub_14079AADC @ 0x14079AADC (sub_14079AADC.c)
 *     sub_1409E08A8 @ 0x1409E08A8 (sub_1409E08A8.c)
 *     sub_1409E0AEC @ 0x1409E0AEC (sub_1409E0AEC.c)
 *     sub_1409E0CE8 @ 0x1409E0CE8 (sub_1409E0CE8.c)
 */

NTSTATUS __fastcall sub_140799440(__int64 *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  int v3; // r14d
  int v4; // r15d
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  NTSTATUS v9; // edi
  bool v11; // si
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // ebp
  int v16; // ecx
  int v17; // r8d
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  PKWAIT_BLOCK WaitBlockArray; // [rsp+38h] [rbp-40h]
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]
  __int64 v23; // [rsp+80h] [rbp+8h]

  v1 = a1[1];
  *(_QWORD *)(v1 + 32) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*a1);
  v23 = v2;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 0xFu);
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  v22 = v1 + 504;
  Object = (PVOID)(v1 + 480);
  if ( *(_DWORD *)(v1 + 320) )
  {
    while ( 1 )
    {
      v3 = 0;
      if ( KeWaitForMultipleObjects((*(_DWORD *)(v1 + 208) != 0) + 1, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
      {
        if ( (*(_DWORD *)(v1 + 824) & 0x400) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v1 + 824), 0xAu);
        KeResetEvent((PRKEVENT)(v1 + 480));
        v3 = 1;
      }
      if ( (unsigned __int8)byte_140C15F70 > 3u )
        _InterlockedOr((volatile signed __int32 *)(v1 + 816), 4u);
      sub_1407987F0(v1);
      v4 = *(_DWORD *)(v1 + 824) & 4;
      if ( v4 )
      {
        if ( *(_DWORD *)(v1 + 208) )
          sub_1402E2BF8(v1, 1);
        v3 = 1;
      }
      if ( (*(_DWORD *)(v1 + 816) & 4) != 0 )
        break;
      sub_14079885C((unsigned int *)v1, v3);
LABEL_30:
      if ( !*(_DWORD *)(v1 + 320) )
      {
        v2 = v23;
        goto LABEL_32;
      }
    }
    if ( (*(_DWORD *)(v1 + 824) & 0x80u) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFF7F);
      if ( *(_QWORD *)(v1 + 800) )
        sub_1406F1AC4(v1, 1);
    }
    if ( (*(_DWORD *)(v1 + 12) & 0x100) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v1 + 816), 8u);
    else
      _InterlockedAnd((volatile signed __int32 *)(v1 + 816), 0xFFFFFFF7);
    if ( (*(_DWORD *)(v1 + 816) & 8) != 0 )
    {
      v5 = sub_14079AADC(v1);
      if ( v5 < 0 && (*(_DWORD *)(v1 + 12) & 0x40) == 0 )
      {
LABEL_58:
        if ( EtwEventEnabled(qword_140C15FA8, &stru_1400396D0) )
        {
          LODWORD(WaitBlockArray) = *(_DWORD *)(v1 + 44);
          sub_1409E0CE8(v1 + 152, v13, v14, v1 + 136, v1 + 152, v5, *(_DWORD *)(v1 + 12), WaitBlockArray, Object, v22);
        }
        *(_DWORD *)(v1 + 40) = v5;
        sub_1406EDB48(v1);
        goto LABEL_30;
      }
      sub_14079A984(v1);
      sub_14079A870(v1);
      if ( *(_DWORD *)(v1 + 344) && *(_DWORD *)(v1 + 424) )
        sub_1402E1D48(v1, 0);
    }
    if ( (*(_DWORD *)(v1 + 824) & 0x40) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFBF);
      sub_1406EDD54(v1);
    }
    if ( (*(_DWORD *)(v1 + 824) & 8) != 0 )
    {
      sub_1406D1E4C(v1);
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFF7);
      *(_DWORD *)(v1 + 40) = 0;
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
    }
    if ( (*(_DWORD *)(v1 + 824) & 3) == 0 )
      goto LABEL_29;
    v11 = 1;
    if ( (*(_DWORD *)(v1 + 824) & 2) != 0 )
      v11 = *(_QWORD *)(v1 + 800) == 0LL;
    v12 = sub_1406F0614((CEnumMediaTypes *)v1, 1, 0LL);
    *(_DWORD *)(v1 + 40) = v12;
    v5 = v12;
    if ( v12 < 0 )
    {
      v15 = *(_DWORD *)(v1 + 12);
      if ( (v15 & 8) != 0 )
      {
        if ( EtwEventEnabled(qword_140C15FA8, &stru_1400393A8) )
          sub_1409E08A8(v16, (unsigned int)&stru_1400393A8, v17, v1 + 136, v1 + 152, v5, v15);
      }
    }
    KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
    if ( v5 >= 0 || !v11 )
    {
LABEL_29:
      v6 = sub_14079885C((unsigned int *)v1, v3);
      v7 = v6;
      if ( (*(_DWORD *)(v1 + 824) & 1) != 0 && v6 >= 0 && !v3 )
        v7 = sub_14079885C((unsigned int *)v1, 1);
      if ( (*(_DWORD *)(v1 + 824) & 0x1000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFEFFF);
        if ( *(_QWORD *)(v1 + 800) )
        {
          v18 = sub_1406F1AC4(v1, 0);
          v7 = v18;
          if ( v18 >= 0 )
          {
            ZwClose(*(HANDLE *)(v1 + 800));
            *(_QWORD *)(v1 + 800) = 0LL;
          }
          else
          {
            *(_DWORD *)(v1 + 40) = v18;
          }
        }
      }
      v5 = 0;
      if ( (*(_DWORD *)(v1 + 12) & 0x40) == 0 )
        v5 = v7;
      if ( v4 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFFB);
        *(_DWORD *)(v1 + 40) = v5;
        KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
      }
      if ( v5 >= 0 )
        goto LABEL_30;
    }
    goto LABEL_58;
  }
LABEL_32:
  while ( 1 )
  {
    v8 = sub_14079885C((unsigned int *)v1, 1);
    v9 = v8;
    if ( v8 < 0 )
      break;
    if ( v8 == 259 )
    {
      if ( (*(_DWORD *)(v1 + 816) & 8) == 0 || (v9 = 0, *(_QWORD *)(v1 + 360)) )
        v9 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 232) <= 0 || *(_DWORD *)(v1 + 232) <= *(_DWORD *)(v1 + 228) )
      break;
    KeWaitForSingleObject((PVOID)(v1 + 480), Executive, 0, 0, (PLARGE_INTEGER)&stru_140041DA8);
  }
  if ( *(_QWORD *)(v1 + 800) )
  {
    sub_1406F1AC4(v1, 0);
    ZwClose(*(HANDLE *)(v1 + 800));
    *(_QWORD *)(v1 + 800) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 360) )
  {
    sub_1406EA4C0(v1);
    ZwClose(*(HANDLE *)(v1 + 360));
    *(_QWORD *)(v1 + 360) = 0LL;
  }
  *(_DWORD *)(v1 + 40) = v9;
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  if ( v9 < 0 && EtwEventEnabled(qword_140C15FA8, &stru_14000EED0) )
    sub_1409E0AEC(v19, &stru_14000EED0, v1);
  sub_1406D1830((char *)v1);
  PsDetachSiloFromCurrentThread(v2);
  return PsTerminateSystemThread(v9);
}

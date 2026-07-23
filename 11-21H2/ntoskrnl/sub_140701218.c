/*
 * XREFs of sub_140701218 @ 0x140701218
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     DnsPrint_RpcZoneInfo_0 @ 0x140701B64 (DnsPrint_RpcZoneInfo_0.c)
 *     sub_1409B25E0 @ 0x1409B25E0 (sub_1409B25E0.c)
 * Callees:
 *     sub_140229FF0 @ 0x140229FF0 (sub_140229FF0.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_140293184 @ 0x140293184 (sub_140293184.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402ECD10 @ 0x1402ECD10 (sub_1402ECD10.c)
 *     sub_1402EE3D8 @ 0x1402EE3D8 (sub_1402EE3D8.c)
 *     sub_1402EF5FC @ 0x1402EF5FC (sub_1402EF5FC.c)
 *     KeQueryMaximumGroupCount @ 0x1402F5110 (KeQueryMaximumGroupCount.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeRaiseUserException @ 0x14056E010 (KeRaiseUserException.c)
 *     sub_140673B4C @ 0x140673B4C (sub_140673B4C.c)
 *     sub_140687754 @ 0x140687754 (sub_140687754.c)
 *     sub_1406E2E48 @ 0x1406E2E48 (sub_1406E2E48.c)
 *     sub_1406E616C @ 0x1406E616C (sub_1406E616C.c)
 *     sub_1406E90B4 @ 0x1406E90B4 (sub_1406E90B4.c)
 *     sub_1406EB2C4 @ 0x1406EB2C4 (sub_1406EB2C4.c)
 *     sub_1406F653C @ 0x1406F653C (sub_1406F653C.c)
 *     sub_1406F80E4 @ 0x1406F80E4 (sub_1406F80E4.c)
 *     sub_1406F8640 @ 0x1406F8640 (sub_1406F8640.c)
 *     sub_140701A98 @ 0x140701A98 (sub_140701A98.c)
 *     sub_140701B0C @ 0x140701B0C (sub_140701B0C.c)
 *     sub_14070AC28 @ 0x14070AC28 (sub_14070AC28.c)
 *     SeCreateAccessStateEx @ 0x14071F190 (SeCreateAccessStateEx.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_14079EE84 @ 0x14079EE84 (sub_14079EE84.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409AF550 @ 0x1409AF550 (sub_1409AF550.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140701218(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        _QWORD *a3,
        _DWORD *a4,
        int a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        PACCESS_STATE AccessState,
        PVOID *a10,
        _OWORD *a11)
{
  unsigned int v13; // edi
  __int64 Pool2; // r12
  __int64 v15; // rbx
  __int64 v16; // rdx
  int v17; // ecx
  unsigned int v18; // ecx
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  signed int v24; // r12d
  int v25; // ecx
  volatile signed __int64 *v26; // rax
  int v27; // ebx
  PACCESS_STATE v28; // rbx
  __int64 v29; // rdx
  __int64 result; // rax
  USHORT MaximumGroupCount; // ax
  USHORT v32; // ax
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  KPROCESSOR_MODE v37; // dl
  unsigned int v38; // [rsp+44h] [rbp-84h]
  int v39; // [rsp+44h] [rbp-84h]
  _QWORD *v40; // [rsp+48h] [rbp-80h]
  __int64 v41; // [rsp+50h] [rbp-78h]
  unsigned int *v42; // [rsp+58h] [rbp-70h]
  __int64 v43; // [rsp+68h] [rbp-60h]

  v13 = 0;
  v43 = *((_QWORD *)KeGetCurrentThread() + 23);
  v41 = *(_QWORD *)(BugCheckParameter2 + 240);
  v42 = 0LL;
  Pool2 = 0LL;
  v15 = 0LL;
  if ( (*a4 & 0x20) == 0 )
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
  v16 = a7;
  if ( !a7 )
  {
    v40 = 0LL;
    goto LABEL_6;
  }
  v40 = *(_QWORD **)(a7 + 24);
  if ( (*(_DWORD *)(a7 + 4) & 0x1000) != 0 )
  {
    MaximumGroupCount = KeQueryMaximumGroupCount();
    Pool2 = ExAllocatePool2(64LL, 8LL * MaximumGroupCount + 8, 538997584LL);
    if ( !Pool2 )
    {
      v38 = -1073741670;
      goto LABEL_89;
    }
    v32 = KeQueryMaximumGroupCount();
    *(_WORD *)Pool2 = 1;
    *(_WORD *)(Pool2 + 2) = v32;
    *(_DWORD *)(Pool2 + 4) = 0;
    memset((void *)(Pool2 + 8), 0, 8LL * v32);
    v16 = a7;
    v33 = *(_QWORD *)(a7 + 320);
    v34 = *(unsigned __int16 *)(a7 + 328);
    if ( *(_WORD *)Pool2 <= (unsigned __int16)v34 )
    {
      if ( *(_WORD *)(Pool2 + 2) <= (unsigned __int16)v34 )
      {
LABEL_84:
        if ( *(_WORD *)(BugCheckParameter1 + 1040) != *(_WORD *)(a7 + 328) )
          _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 632), 0xCu);
        goto LABEL_5;
      }
      *(_WORD *)Pool2 = v34 + 1;
    }
    *(_QWORD *)(Pool2 + 8 * v34 + 8) |= v33;
    goto LABEL_84;
  }
LABEL_5:
  v42 = (unsigned int *)((v16 + 252) & -(__int64)((*(_DWORD *)(v16 + 4) & 0x4000) != 0));
LABEL_6:
  v15 = *(_QWORD *)(BugCheckParameter1 + 1296);
  if ( v15 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) == 0 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v15 + 56), 1u);
      v13 = 1;
      if ( Pool2 )
      {
        if ( (int)sub_1406EB2C4(v15, Pool2) < 0 )
          v13 = 5;
      }
    }
  }
  if ( v13 >= 4
    || (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x4000008) != 0x4000000
    || (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000000) != 0
    && (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) == 0
    && (*(_BYTE *)a4 & 2) == 0 )
  {
    v17 = -1073741823;
  }
  else
  {
    v17 = 0;
  }
  v38 = v17;
  if ( v17 >= 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter1 + 992) & 1) != 0 )
    {
      v17 = sub_1409AF550((PVOID)BugCheckParameter2);
      v38 = v17;
    }
    if ( v17 >= 0 )
    {
      sub_140292350(BugCheckParameter2, (_WORD *)Pool2, v42);
      if ( (v13 & 1) != 0 )
      {
        ExReleaseResourceLite((PERESOURCE)(v15 + 56));
        v13 &= ~1u;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000000) != 0 && (*a4 & 2) != 0 )
        *(_DWORD *)(BugCheckParameter2 + 1380) |= 0x40u;
      if ( Pool2 )
        ExFreePoolWithTag((PVOID)Pool2, 0);
      v18 = (((*(_DWORD *)(BugCheckParameter1 + 1124) >> 27) & 7) << 9) | *(_DWORD *)(BugCheckParameter2 + 1376) & 0xFFFFF1FF;
      *(_DWORD *)(BugCheckParameter2 + 1376) = v18;
      *(_DWORD *)(BugCheckParameter2 + 1376) = v18 ^ (*(_DWORD *)(BugCheckParameter1 + 1120) ^ v18) & 0x7000;
      if ( ++*(_DWORD *)(BugCheckParameter1 + 1520) > *(_DWORD *)(BugCheckParameter1 + 2136) )
        *(_DWORD *)(BugCheckParameter1 + 2136) = *(_DWORD *)(BugCheckParameter1 + 1520);
      if ( *(_DWORD *)(BugCheckParameter1 + 1520) == 1 )
      {
        v13 |= 2u;
      }
      else if ( *(_DWORD *)(BugCheckParameter1 + 1520) == 2 && (*(_DWORD *)(BugCheckParameter1 + 1120) & 0x8000) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1120), 0xFu);
      }
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 2144, 0LL);
      v19 = (_QWORD *)(BugCheckParameter2 + 1336);
      v20 = *(_QWORD **)(BugCheckParameter1 + 1512);
      if ( *v20 != BugCheckParameter1 + 1504 )
        __fastfail(3u);
      *v19 = BugCheckParameter1 + 1504;
      *(_QWORD *)(BugCheckParameter2 + 1344) = v20;
      *v20 = v19;
      *(_QWORD *)(BugCheckParameter1 + 1512) = v19;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 2144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter1 + 2144);
      sub_1402AFC00(BugCheckParameter1 + 2144);
      if ( *(_QWORD *)(BugCheckParameter1 + 984) )
        _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x19u);
      if ( *(_QWORD *)(BugCheckParameter1 + 2896) )
        _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x1Du);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter1 + 1080);
      sub_1402AFC00(BugCheckParameter1 + 1080);
      if ( (*a4 & 0x40) != 0 )
        sub_140687754((char *)BugCheckParameter1, v21, v22, v23);
      sub_140229FF0(BugCheckParameter2, 2);
      *(_DWORD *)(BugCheckParameter2 + 1452) = 1;
      if ( (*a4 & 1) != 0 )
      {
        sub_1402EE3D8(BugCheckParameter2);
        if ( (*(_DWORD *)(BugCheckParameter2 + 1376) & 1) != 0 )
          sub_1402EF5FC(BugCheckParameter2);
      }
      v24 = sub_140701B0C(BugCheckParameter1, BugCheckParameter2);
      v39 = 0;
      if ( !BYTE4(AccessState[2].SecurityDescriptor) || (*a4 & 0x10) != 0 )
      {
        v25 = BugCheckParameter1;
        v39 = 1;
      }
      else
      {
        v25 = v43;
      }
      if ( v24 < 0
        || (v24 = SeCreateAccessStateEx(
                    0,
                    v25,
                    (_DWORD)AccessState,
                    (int)AccessState + 160,
                    a5,
                    (__int64)PsThreadType + 76),
            v24 < 0) )
      {
        ObfDereferenceObject((PVOID)BugCheckParameter2);
      }
      else
      {
        v24 = sub_140729C30((PVOID)BugCheckParameter2, AccessState, v39, 0LL, 0LL);
        if ( v24 >= 0 )
        {
          ObfDereferenceObject((PVOID)BugCheckParameter2);
          if ( v40 )
            *v40 = v41;
          if ( a11 )
            *a11 = *(_OWORD *)(BugCheckParameter2 + 1224);
        }
        if ( v24 < 0 )
        {
          sub_1403478A0((__int64)AccessState);
          SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
        }
      }
      v26 = (volatile signed __int64 *)(BugCheckParameter2 + 1360);
      if ( v24 < 0 )
      {
        if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(BugCheckParameter2 + 1360);
          v26 = (volatile signed __int64 *)(BugCheckParameter2 + 1360);
        }
        sub_1402AFC00((ULONG_PTR)v26);
        v36 = (__int64)a4;
        if ( (*a4 & 1) != 0 )
          sub_1402EF5FC(BugCheckParameter2);
        if ( a6 && *a6 )
          sub_1406E616C(BugCheckParameter1, v36, a3, a6);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 1376), 2u);
        if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(BugCheckParameter2 + 1360);
          v26 = (volatile signed __int64 *)(BugCheckParameter2 + 1360);
        }
        sub_1402AFC00((ULONG_PTR)v26);
      }
      v27 = 0;
      if ( (v13 & 2) != 0 )
      {
        if ( (xmmword_140D06900[0] & 1) != 0 )
          sub_14070AC28(BugCheckParameter1);
        if ( *(_QWORD *)(BugCheckParameter1 + 2280) )
          sub_140673B4C((struct _EX_RUNDOWN_REF *)BugCheckParameter1);
        if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 2240) )
          v27 = sub_1406F80E4((struct _EX_RUNDOWN_REF *)BugCheckParameter1, a7, 1);
      }
      if ( (xmmword_140D06900[0] & 2) != 0 )
        sub_1406F653C(BugCheckParameter2, (__int64)a3, 1);
      if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 2240) )
        sub_1406F8640((_QWORD *)BugCheckParameter2, 1, 0);
      if ( v24 < 0 )
        goto LABEL_69;
      if ( v27 < 0 )
      {
        v24 = v27;
        v28 = AccessState;
      }
      else
      {
        v28 = AccessState;
        v24 = sub_140701A98(BugCheckParameter2, AccessState, PsThreadType);
      }
      sub_1403478A0((__int64)v28);
      SeReleaseSubjectContext(&v28->SubjectSecurityContext);
      if ( v24 >= 0 )
      {
        if ( a7 )
        {
          v29 = *(_QWORD *)(a7 + 376);
          if ( v29 )
            v24 = sub_1406E2E48(BugCheckParameter1, v29, *(unsigned int *)(a7 + 388));
        }
        if ( v24 >= 0 )
        {
          *a10 = v28[2].AuxData;
LABEL_69:
          sub_140293184(BugCheckParameter2);
          return (unsigned int)v24;
        }
        if ( ((__int64)v28[2].SecurityDescriptor & 0x200) != 0 || (v37 = 1, (*(_DWORD *)(v43 + 2172) & 0x1000) != 0) )
          v37 = 0;
        ObCloseHandle(v28[2].AuxData, v37);
        if ( a6 && (*a6 & 1) != 0 )
          KeRaiseUserException(v24);
      }
      if ( !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 1376), 0) )
        v13 |= 8u;
      if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) != 0 )
      {
        if ( (*a4 & 1) != 0 )
          sub_1402EF5FC(BugCheckParameter2);
      }
      else
      {
        if ( v13 >= 8 )
          *(_DWORD *)(BugCheckParameter2 + 1432) = v24;
        sub_1402ECD10(BugCheckParameter2);
      }
      goto LABEL_69;
    }
  }
LABEL_89:
  if ( (v13 & 1) != 0 )
    ExReleaseResourceLite((PERESOURCE)(v15 + 56));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter1 + 1080);
  sub_1402AFC00(BugCheckParameter1 + 1080);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 1360), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2 + 1360);
  sub_1402AFC00(BugCheckParameter2 + 1360);
  sub_1406E90B4(BugCheckParameter2);
  if ( a6 )
  {
    if ( v41 )
      sub_14079EE84(BugCheckParameter1, v41);
    if ( *a6 )
      sub_1406E616C(BugCheckParameter1, v35, a3, a6);
  }
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  result = v38;
  if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
    return 3221225738LL;
  return result;
}

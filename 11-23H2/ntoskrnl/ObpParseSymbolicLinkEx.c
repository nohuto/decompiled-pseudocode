/*
 * XREFs of ObpParseSymbolicLinkEx @ 0x1406C70F0
 * Callers:
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     ObReferenceObjectByPointer @ 0x14022AA90 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ObQueryNameStringMode @ 0x14075B9E4 (ObQueryNameStringMode.c)
 *     ObpGetIntegrityLevel @ 0x1407F39C4 (ObpGetIntegrityLevel.c)
 *     RtlIsSandboxedToken @ 0x1407F3A60 (RtlIsSandboxedToken.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ObpParseSymbolicLinkEx(
        unsigned __int16 *Object,
        POBJECT_TYPE ObjectType,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        int a9,
        __int64 a10,
        unsigned __int16 **a11)
{
  __int64 v12; // rcx
  bool v14; // si
  int v15; // eax
  unsigned int v17; // edi
  unsigned __int16 *v18; // r13
  size_t v19; // r12
  unsigned int v20; // edi
  char *v21; // rsi
  char *v22; // rcx
  unsigned __int16 *v23; // rcx
  unsigned __int16 **v24; // rax
  NTSTATUS v26; // eax
  int IntegrityLevel; // r12d
  char IsSandboxedToken; // al
  void *v29; // r12
  __int64 Pool2; // rax
  unsigned __int16 *v31; // r9
  KPROCESSOR_MODE v32; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v33; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v34; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h]
  unsigned int v36; // [rsp+40h] [rbp-C0h]
  _QWORD v37[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int16 **v40; // [rsp+60h] [rbp-A0h]
  PVOID Objecta; // [rsp+68h] [rbp-98h] BYREF
  __int128 v42; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  _DWORD v47[2]; // [rsp+B8h] [rbp-48h] BYREF
  int *v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  int *v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  unsigned __int16 *v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  _QWORD *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]

  v12 = a10;
  v14 = 0;
  v40 = a11;
  v15 = *((_DWORD *)Object + 7);
  v32 = a4;
  v35 = a10;
  v36 = 0;
  Objecta = 0LL;
  v42 = 0LL;
  if ( (v15 & 2) != 0 )
  {
    IsSandboxedToken = RtlIsSandboxedToken(a3 + 1);
    a4 = v32;
    v12 = v35;
    v14 = IsSandboxedToken == 0;
  }
  if ( *((_DWORD *)Object + 9) < 0x4000u || v14 )
  {
    IntegrityLevel = ObpGetIntegrityLevel(a3 + 1);
    if ( IntegrityLevel < 0 )
      goto LABEL_30;
    a4 = v32;
    v17 = v36;
    v12 = v35;
  }
  else
  {
    v17 = 0;
  }
  if ( *((_DWORD *)Object + 9) < v17 || v14 )
  {
    _m_prefetchw(Object + 14);
    if ( _InterlockedOr((volatile signed __int32 *)Object + 7, 0x80000000) >= 0 )
    {
      v34 = 0;
      v29 = 0LL;
      v37[1] = L"UNKNOWN";
      v37[0] = 1048590LL;
      if ( (unsigned int)ObQueryNameStringMode((_DWORD)Object, 0, 0, (unsigned int)&v34, 0) == -1073741820 )
      {
        Pool2 = ExAllocatePool2(256LL, v34, 1833853519LL);
        v29 = (void *)Pool2;
        if ( Pool2 )
          ObQueryNameStringMode((_DWORD)Object, Pool2, v34, (unsigned int)&v34, 0);
      }
      if ( (unsigned int)dword_140C02FD0 > 5 && tlgKeywordOn((__int64)&dword_140C02FD0, 0x400000000000LL) )
      {
        v45 = 2LL;
        v47[1] = 0;
        v44 = v47;
        v46 = *((_QWORD *)v31 + 1);
        v47[0] = *v31;
        v38 = *((_DWORD *)Object + 9);
        v48 = &v38;
        v50 = (int *)&v39;
        v52 = &v33;
        v54 = v37;
        v49 = 4LL;
        v39 = v17;
        v51 = 4LL;
        LOBYTE(v33) = v14;
        v53 = 1LL;
        v37[0] = 0x1000000LL;
        v55 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02FD0,
          (unsigned __int8 *)byte_14002D9CD,
          0LL,
          0LL,
          8u,
          &v43);
      }
      if ( v29 )
        ExFreePoolWithTag(v29, 0);
      a4 = v32;
    }
    if ( v14 )
    {
      IntegrityLevel = -1073741772;
      goto LABEL_30;
    }
    v12 = v35;
  }
  if ( *a7 )
  {
    if ( **((_WORD **)a7 + 1) != 92 )
    {
      IntegrityLevel = -1073741788;
      goto LABEL_30;
    }
    goto LABEL_10;
  }
  if ( ObjectType == ObpSymbolicLinkObjectType )
  {
    if ( (*((_DWORD *)Object + 7) & 1) != 0 )
    {
      if ( PsIsCurrentThreadInServerSilo() )
      {
LABEL_58:
        v12 = v35;
        goto LABEL_10;
      }
      a4 = v32;
    }
    v26 = ObReferenceObjectByPointer(Object, 0, ObjectType, a4);
    IntegrityLevel = v26;
    if ( v26 >= 0 )
    {
      *v40 = Object;
      goto LABEL_30;
    }
    if ( v26 != -1073741788 )
      goto LABEL_30;
    goto LABEL_58;
  }
LABEL_10:
  if ( (*((_DWORD *)Object + 7) & 8) != 0 )
    *(_DWORD *)(v12 + 4) &= *((_DWORD *)Object + 8);
  if ( (*((_DWORD *)Object + 7) & 4) != 0 )
    *(_QWORD *)(v35 + 8) = PdcCreateWatchdogAroundClientCall();
  v18 = Object + 4;
  if ( (*((_DWORD *)Object + 7) & 0x10) != 0 )
  {
    IntegrityLevel = (*(__int64 (__fastcall **)(unsigned __int16 *, _QWORD, __int128 *, PVOID *))v18)(
                       Object,
                       *((_QWORD *)Object + 2),
                       &v42,
                       &Objecta);
    if ( IntegrityLevel < 0 )
      goto LABEL_30;
    v18 = (unsigned __int16 *)&v42;
  }
  v19 = *v18;
  if ( *v18
    && *(_WORD *)(*((_QWORD *)v18 + 1) + 2 * ((unsigned __int64)*v18 >> 1) - 2) == 92
    && *a7
    && **((_WORD **)a7 + 1) == 92 )
  {
    v19 = (unsigned int)(v19 - 2);
  }
  v20 = v19 + *a7;
  if ( v20 > 0xFFF0 )
  {
    IntegrityLevel = -1073741562;
  }
  else
  {
    v33 = *(_WORD *)(a6 + 2);
    if ( v33 > (unsigned __int16)v20 )
    {
      v21 = *(char **)(a6 + 8);
LABEL_20:
      if ( *a7 )
        memmove(&v21[v19], *((const void **)a7 + 1), *a7);
      memmove(v21, *((const void **)v18 + 1), v19);
      *(_WORD *)&v21[2 * ((unsigned __int64)(unsigned __int16)v20 >> 1)] = 0;
      v22 = *(char **)(a6 + 8);
      if ( v21 != v22 && v22 )
        ExFreePoolWithTag(v22, 0);
      v23 = (unsigned __int16 *)Objecta;
      *(_WORD *)(a6 + 2) = v33;
      v24 = v40;
      *(_QWORD *)(a6 + 8) = v21;
      *(_WORD *)a6 = v20;
      if ( v23 )
      {
        *v24 = v23;
        return 280LL;
      }
      else
      {
        *v24 = Object;
        if ( (*((_DWORD *)Object + 7) & 1) != 0 )
          return 872LL;
        else
          return 260LL;
      }
    }
    v33 = v20 + 2;
    v21 = (char *)ExAllocatePool2(256LL, (unsigned __int16)(v20 + 2), 1833853519LL);
    if ( v21 )
      goto LABEL_20;
    IntegrityLevel = -1073741670;
  }
LABEL_30:
  if ( Objecta )
    ObfDereferenceObject(Objecta);
  return (unsigned int)IntegrityLevel;
}

/*
 * XREFs of ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0013AF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002F5B4 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002F638 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 */

__int64 __fastcall ndisNsiGetCompartmentInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v1; // rdi
  int v2; // r14d
  struct _NM_REQUEST_GET_PARAMETER *v3; // r15
  struct _KTHREAD *CurrentThread; // r12
  unsigned int *v5; // rax
  unsigned int v6; // r13d
  int *ThreadProperty; // rax
  __int64 v8; // rcx
  PACCESS_TOKEN v9; // rax
  void *v10; // rsi
  NTSTATUS v11; // ebx
  unsigned int ThreadSessionId; // esi
  int v13; // ebx
  unsigned int v14; // esi
  KIRQL v15; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rdx
  KIRQL v17; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rax
  KIRQL v19; // al
  int v20; // ecx
  KIRQL v21; // r11
  struct _NDIS_IF_COMPARTMENT_BLOCK *v22; // rax
  unsigned int v23; // ebx
  int v24; // r12d
  char v25; // r13
  char *v26; // r15
  int v27; // esi
  unsigned int v28; // eax
  unsigned int v29; // ebx
  KIRQL v30; // bl
  unsigned int CurrentProcessSessionId; // eax
  int v33; // ecx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v34; // rax
  KIRQL v35; // r8
  __int64 v36; // rcx
  struct _KEVENT *v37; // rcx
  char v38; // [rsp+48h] [rbp-19h]
  BOOLEAN EffectiveOnly; // [rsp+49h] [rbp-18h] BYREF
  BOOLEAN CopyOnOpen[2]; // [rsp+4Ah] [rbp-17h] BYREF
  int v41; // [rsp+4Ch] [rbp-15h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+50h] [rbp-11h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-9h] BYREF
  struct _NM_REQUEST_GET_PARAMETER *v44; // [rsp+68h] [rbp+7h]
  _BYTE v45[24]; // [rsp+70h] [rbp+Fh] BYREF

  v44 = a1;
  v1 = 0LL;
  v41 = 0;
  v2 = 0;
  v38 = 0;
  v3 = a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x15u,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids,
      a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v3 + 6) != 4 || !*((_DWORD *)v3 + 12) || !*((_QWORD *)v3 + 5) )
  {
    v2 = -1073741808;
    goto LABEL_50;
  }
  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned int *)*((_QWORD *)v3 + 2);
  memset(v45, 0, sizeof(v45));
  v6 = *v5;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( !ThreadProperty
    || (v13 = *ThreadProperty,
        *(_DWORD *)v45 = ThreadProperty[1],
        *(_DWORD *)&v45[4] = v13,
        ObfDereferenceObject(ThreadProperty),
        (v14 = v13) == 0) )
  {
    CopyOnOpen[0] = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    }
    else
    {
      v9 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v10 = v9;
      if ( v9 )
      {
        v11 = SeQueryInformationToken(v9, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v10);
        if ( v11 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
LABEL_11:
          if ( ThreadSessionId == -1 )
            ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
          if ( ThreadSessionId < dword_1C00F7620 )
          {
            v13 = 0;
            v35 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5D78);
            if ( ThreadSessionId < dword_1C00F7620 )
              v13 = *((_DWORD *)qword_1C00F7628 + 6 * ThreadSessionId);
            KeReleaseSpinLock(&qword_1C00F5D78, v35);
            if ( !v13 )
              v13 = 1;
          }
          else
          {
            v13 = 1;
          }
          *(_DWORD *)&v45[4] = v13;
          v14 = v13;
          goto LABEL_16;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
    goto LABEL_11;
  }
LABEL_16:
  v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v16 = 0LL;
  v17 = v15;
  for ( i = qword_1C00F5DA0;
        i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0;
        i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
  {
    if ( *((_DWORD *)i + 4) == v14 )
    {
      v16 = i;
      break;
    }
    if ( *((_DWORD *)i + 4) > v14 )
      break;
  }
  *(_OWORD *)&v45[8] = *(_OWORD *)((char *)v16 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v17);
  v19 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v20 = *((_DWORD *)v3 + 14);
  v21 = v19;
  if ( v20 )
  {
    v33 = v20 - 1;
    if ( v33 )
    {
      if ( v33 == 1 )
        goto LABEL_63;
      v2 = -1073741808;
      v41 = -1073741808;
    }
    else
    {
      v6 = 0;
      while ( 1 )
      {
LABEL_63:
        v34 = qword_1C00F5DA0;
        v1 = 0LL;
        if ( qword_1C00F5DA0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0 )
        {
          while ( *((_DWORD *)v34 + 4) <= v6 )
          {
            v34 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v34;
            if ( v34 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0 )
              goto LABEL_27;
          }
          v1 = v34;
        }
        if ( !v1 )
          break;
        v6 = *((_DWORD *)v1 + 4);
        if ( ndisIsCompartmentAccessibleByClient(v1, (const struct _NDIS_NSI_CLIENT_INFO *)v45, 1u) )
          goto LABEL_26;
      }
    }
  }
  else
  {
    v22 = qword_1C00F5DA0;
    if ( qword_1C00F5DA0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0 )
    {
      while ( *((_DWORD *)v22 + 4) != v6 )
      {
        if ( *((_DWORD *)v22 + 4) > v6 )
          goto LABEL_24;
        v22 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v22;
        if ( v22 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0 )
          goto LABEL_27;
      }
      v1 = v22;
    }
LABEL_24:
    if ( v1 )
    {
      if ( v13 == *((_DWORD *)v1 + 4) )
        goto LABEL_26;
      v36 = *(_QWORD *)&v45[8] - *(_QWORD *)((char *)v1 + 1684);
      if ( *(_QWORD *)&v45[8] == *(_QWORD *)((char *)v1 + 1684) )
        v36 = *(_QWORD *)&v45[16] - *(_QWORD *)((char *)v1 + 1692);
      if ( !v36 || (*((_DWORD *)v1 + 420) & 2) == 0 && v13 == 1 )
      {
LABEL_26:
        _InterlockedAdd((volatile signed __int32 *)v1 + 11, 1u);
        v38 = 1;
        **((_DWORD **)v3 + 2) = *((_DWORD *)v1 + 4);
      }
      else
      {
        v1 = 0LL;
      }
    }
  }
LABEL_27:
  KeReleaseSpinLock(&ndisIfListLock, v21);
  if ( v2 >= 0 )
  {
    if ( v1 )
    {
      if ( *((_DWORD *)v3 + 8) )
      {
        v2 = -1073741808;
      }
      else
      {
        v23 = *((_DWORD *)v3 + 13);
        v24 = *((_DWORD *)v3 + 12);
        if ( *((_QWORD *)v3 + 5) )
        {
          v25 = 0;
          if ( v24 > 0 )
          {
            v26 = (char *)*((_QWORD *)v3 + 5);
            while ( 1 )
            {
              if ( v25 )
              {
LABEL_44:
                v2 = v41;
                v3 = v44;
                break;
              }
              if ( v23 <= 0x234 )
              {
                if ( v23 == 564 )
                {
                  v28 = 516;
                  v27 = 1080;
                }
                else if ( v23 )
                {
                  switch ( v23 )
                  {
                    case 8u:
                      v28 = 8;
                      v27 = 16;
                      break;
                    case 0x10u:
                      v27 = 32;
                      goto LABEL_40;
                    case 0x20u:
                      v27 = 48;
LABEL_40:
                      v28 = 16;
                      break;
                    case 0x30u:
                      v28 = 516;
                      v27 = 564;
                      break;
                    default:
LABEL_104:
                      v25 = 1;
                      goto LABEL_43;
                  }
                }
                else
                {
                  v28 = 4;
                  v27 = 8;
                }
              }
              else
              {
                switch ( v23 )
                {
                  case 0x438u:
                    v27 = 1096;
                    goto LABEL_40;
                  case 0x448u:
                    v28 = 516;
                    v27 = 1616;
                    break;
                  case 0x650u:
                    v28 = 4;
                    v27 = 1620;
                    break;
                  case 0x654u:
                    v27 = 1636;
                    v25 = 1;
                    goto LABEL_40;
                  default:
                    goto LABEL_104;
                }
              }
              if ( v24 < v28 )
                goto LABEL_104;
              memmove(v26, (char *)v1 + v23 + 64, v28);
              v26 += v27 - v23;
              v24 += v23 - v27;
              v23 = v27;
LABEL_43:
              if ( v24 <= 0 )
                goto LABEL_44;
            }
          }
          v29 = v23 - *((_DWORD *)v3 + 13);
          *((_DWORD *)v3 + 12) = v29;
          if ( !v29 )
            v2 = -1073741811;
        }
        else
        {
          *((_DWORD *)v3 + 12) = 0;
        }
      }
    }
    else
    {
      v2 = *((_DWORD *)v3 + 14) != 0 ? -2147483622 : -1073741772;
    }
  }
  if ( v38 )
  {
    v30 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 11, 0xFFFFFFFF) == 1 )
    {
      v37 = (struct _KEVENT *)*((_QWORD *)v1 + 214);
      if ( v37 )
        KeSetEvent(v37, 0, 0);
    }
    KeReleaseSpinLock(&ndisIfListLock, v30);
  }
LABEL_50:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x16u,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids,
      (char)v3,
      v2);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}

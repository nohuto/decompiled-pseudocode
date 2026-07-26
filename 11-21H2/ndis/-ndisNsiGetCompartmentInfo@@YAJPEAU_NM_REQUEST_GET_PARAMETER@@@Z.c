/*
 * XREFs of ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0012E80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002BA64 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002BB04 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 */

__int64 __fastcall ndisNsiGetCompartmentInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v1; // rdi
  int v2; // r15d
  struct _NM_REQUEST_GET_PARAMETER *v3; // r14
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v5; // r13d
  int *ThreadProperty; // rax
  __int64 v7; // rcx
  PACCESS_TOKEN v8; // rax
  void *v9; // rsi
  NTSTATUS v10; // ebx
  unsigned int ThreadSessionId; // esi
  int v12; // ebx
  unsigned int v13; // esi
  KIRQL v14; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v15; // rdx
  KIRQL v16; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rax
  KIRQL v18; // al
  int v19; // ecx
  KIRQL v20; // r11
  struct _NDIS_IF_COMPARTMENT_BLOCK *v21; // rax
  unsigned int v22; // ebx
  int v23; // r12d
  char v24; // r13
  char *v25; // r14
  int v26; // esi
  unsigned int v27; // eax
  unsigned int v28; // ebx
  KIRQL v29; // bl
  unsigned int CurrentProcessSessionId; // eax
  int v32; // ecx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v33; // rax
  KIRQL v34; // r8
  __int64 v35; // rcx
  struct _KEVENT *v36; // rcx
  char v37; // [rsp+48h] [rbp-19h]
  BOOLEAN EffectiveOnly; // [rsp+49h] [rbp-18h] BYREF
  BOOLEAN CopyOnOpen[2]; // [rsp+4Ah] [rbp-17h] BYREF
  int v40; // [rsp+4Ch] [rbp-15h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+50h] [rbp-11h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-9h] BYREF
  struct _NM_REQUEST_GET_PARAMETER *v43; // [rsp+68h] [rbp+7h]
  int v44; // [rsp+70h] [rbp+Fh] BYREF
  int v45; // [rsp+74h] [rbp+13h]
  __int128 v46; // [rsp+78h] [rbp+17h]

  v43 = a1;
  v1 = 0LL;
  v40 = 0;
  v2 = 0;
  v37 = 0;
  v3 = a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x15u,
      (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids,
      a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v3 + 6) != 4 || !*((_DWORD *)v3 + 12) || !*((_QWORD *)v3 + 5) )
  {
    v2 = -1073741808;
    goto LABEL_51;
  }
  CurrentThread = KeGetCurrentThread();
  v5 = **((_DWORD **)v3 + 2);
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v12 = *ThreadProperty;
    v44 = ThreadProperty[1];
    v45 = v12;
    ObfDereferenceObject(ThreadProperty);
    v13 = v12;
    if ( v12 )
      goto LABEL_17;
  }
  else
  {
    v44 = 0;
  }
  CopyOnOpen[0] = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    goto LABEL_55;
  }
  v8 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v9 = v8;
  if ( !v8
    || (v10 = SeQueryInformationToken(v8, TokenSessionId, &TokenInformation),
        PsDereferenceImpersonationToken(v9),
        v10 < 0) )
  {
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
LABEL_55:
    ThreadSessionId = CurrentProcessSessionId;
    goto LABEL_12;
  }
  ThreadSessionId = (unsigned int)TokenInformation;
LABEL_12:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < dword_1C00EE550 )
  {
    v12 = 0;
    v34 = KeAcquireSpinLockRaiseToDpc(&qword_1C00ECD98);
    if ( ThreadSessionId < dword_1C00EE550 )
      v12 = *((_DWORD *)qword_1C00EE558 + 6 * ThreadSessionId);
    KeReleaseSpinLock(&qword_1C00ECD98, v34);
    if ( !v12 )
      v12 = 1;
  }
  else
  {
    v12 = 1;
  }
  v45 = v12;
  v13 = v12;
LABEL_17:
  v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v15 = 0LL;
  v16 = v14;
  for ( i = qword_1C00ECDC0;
        i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0;
        i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
  {
    if ( *((_DWORD *)i + 4) == v13 )
    {
      v15 = i;
      break;
    }
    if ( *((_DWORD *)i + 4) > v13 )
      break;
  }
  v46 = *(_OWORD *)((char *)v15 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v16);
  v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v19 = *((_DWORD *)v3 + 14);
  v20 = v18;
  if ( v19 )
  {
    v32 = v19 - 1;
    if ( v32 )
    {
      if ( v32 == 1 )
        goto LABEL_64;
      v2 = -1073741808;
      v40 = -1073741808;
    }
    else
    {
      v5 = 0;
      while ( 1 )
      {
LABEL_64:
        v33 = qword_1C00ECDC0;
        v1 = 0LL;
        if ( qword_1C00ECDC0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
        {
          while ( *((_DWORD *)v33 + 4) <= v5 )
          {
            v33 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v33;
            if ( v33 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
              goto LABEL_28;
          }
          v1 = v33;
        }
        if ( !v1 )
          break;
        v5 = *((_DWORD *)v1 + 4);
        if ( ndisIsCompartmentAccessibleByClient(v1, (const struct _NDIS_NSI_CLIENT_INFO *)&v44, 1u) )
          goto LABEL_27;
      }
    }
  }
  else
  {
    v21 = qword_1C00ECDC0;
    if ( qword_1C00ECDC0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
    {
      while ( *((_DWORD *)v21 + 4) != v5 )
      {
        if ( *((_DWORD *)v21 + 4) > v5 )
          goto LABEL_25;
        v21 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v21;
        if ( v21 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
          goto LABEL_28;
      }
      v1 = v21;
    }
LABEL_25:
    if ( v1 )
    {
      if ( v12 == *((_DWORD *)v1 + 4) )
        goto LABEL_27;
      v35 = v46 - *(_QWORD *)((char *)v1 + 1684);
      if ( (_QWORD)v46 == *(_QWORD *)((char *)v1 + 1684) )
        v35 = *((_QWORD *)&v46 + 1) - *(_QWORD *)((char *)v1 + 1692);
      if ( !v35 || (*((_DWORD *)v1 + 420) & 2) == 0 && v12 == 1 )
      {
LABEL_27:
        _InterlockedAdd((volatile signed __int32 *)v1 + 11, 1u);
        v37 = 1;
        **((_DWORD **)v3 + 2) = *((_DWORD *)v1 + 4);
      }
      else
      {
        v1 = 0LL;
      }
    }
  }
LABEL_28:
  KeReleaseSpinLock(&ndisIfListLock, v20);
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
        v22 = *((_DWORD *)v3 + 13);
        v23 = *((_DWORD *)v3 + 12);
        if ( *((_QWORD *)v3 + 5) )
        {
          v24 = 0;
          if ( v23 > 0 )
          {
            v25 = (char *)*((_QWORD *)v3 + 5);
            while ( 1 )
            {
              if ( v24 )
              {
LABEL_45:
                v3 = v43;
                v2 = v40;
                break;
              }
              if ( v22 <= 0x234 )
              {
                if ( v22 == 564 )
                {
                  v27 = 516;
                  v26 = 1080;
                }
                else if ( v22 )
                {
                  switch ( v22 )
                  {
                    case 8u:
                      v27 = 8;
                      v26 = 16;
                      break;
                    case 0x10u:
                      v26 = 32;
                      goto LABEL_41;
                    case 0x20u:
                      v26 = 48;
LABEL_41:
                      v27 = 16;
                      break;
                    case 0x30u:
                      v27 = 516;
                      v26 = 564;
                      break;
                    default:
LABEL_105:
                      v24 = 1;
                      goto LABEL_44;
                  }
                }
                else
                {
                  v27 = 4;
                  v26 = 8;
                }
              }
              else
              {
                switch ( v22 )
                {
                  case 0x438u:
                    v26 = 1096;
                    goto LABEL_41;
                  case 0x448u:
                    v27 = 516;
                    v26 = 1616;
                    break;
                  case 0x650u:
                    v27 = 4;
                    v26 = 1620;
                    break;
                  case 0x654u:
                    v26 = 1636;
                    v24 = 1;
                    goto LABEL_41;
                  default:
                    goto LABEL_105;
                }
              }
              if ( v23 < v27 )
                goto LABEL_105;
              memmove(v25, (char *)v1 + v22 + 64, v27);
              v25 += v26 - v22;
              v23 += v22 - v26;
              v22 = v26;
LABEL_44:
              if ( v23 <= 0 )
                goto LABEL_45;
            }
          }
          v28 = v22 - *((_DWORD *)v3 + 13);
          *((_DWORD *)v3 + 12) = v28;
          if ( !v28 )
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
  if ( v37 )
  {
    v29 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 11, 0xFFFFFFFF) == 1 )
    {
      v36 = (struct _KEVENT *)*((_QWORD *)v1 + 214);
      if ( v36 )
        KeSetEvent(v36, 0, 0);
    }
    KeReleaseSpinLock(&ndisIfListLock, v29);
  }
LABEL_51:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x16u,
      (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids,
      (char)v3,
      v2);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}

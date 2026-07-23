/*
 * XREFs of sub_14072ACC0 @ 0x14072ACC0
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     sub_1402A70F0 @ 0x1402A70F0 (sub_1402A70F0.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403884CC @ 0x1403884CC (sub_1403884CC.c)
 *     sub_1403D506C @ 0x1403D506C (sub_1403D506C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406BC1E4 @ 0x1406BC1E4 (sub_1406BC1E4.c)
 *     sub_1406DFA80 @ 0x1406DFA80 (sub_1406DFA80.c)
 *     sub_1406EA034 @ 0x1406EA034 (sub_1406EA034.c)
 *     sub_140711614 @ 0x140711614 (sub_140711614.c)
 *     sub_1407240A0 @ 0x1407240A0 (sub_1407240A0.c)
 *     sub_140739F40 @ 0x140739F40 (sub_140739F40.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1407DB830 @ 0x1407DB830 (sub_1407DB830.c)
 *     sub_1407F89C0 @ 0x1407F89C0 (sub_1407F89C0.c)
 *     sub_140805D98 @ 0x140805D98 (sub_140805D98.c)
 *     sub_1409876B8 @ 0x1409876B8 (sub_1409876B8.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_14072ACC0(__int64 a1, __int128 *a2, int a3, unsigned __int8 a4, _DWORD *a5)
{
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // ecx
  LUID v10; // rbx
  __int64 v11; // r15
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v13; // r13
  _QWORD *ClientToken; // rsi
  _QWORD *v15; // rax
  _QWORD *PrimaryToken; // r14
  __int64 v17; // rcx
  char v18; // bl
  _QWORD *v19; // rax
  void *v20; // rdi
  __int64 v23; // rcx
  _QWORD *v24; // rdi
  PSE_EXPORTS v25; // r15
  struct _KTHREAD *v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rcx
  __int64 v29; // rcx
  __int128 v30; // [rsp+48h] [rbp-F0h] BYREF
  volatile void *Address[2]; // [rsp+58h] [rbp-E0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-D0h] BYREF
  __int128 v33; // [rsp+88h] [rbp-B0h]
  __int64 v34; // [rsp+98h] [rbp-A0h]
  volatile void *v35; // [rsp+A0h] [rbp-98h]
  __int128 v36; // [rsp+B0h] [rbp-88h]
  __int64 v37; // [rsp+C0h] [rbp-78h]
  int v38; // [rsp+C8h] [rbp-70h]
  int v39[2]; // [rsp+D0h] [rbp-68h] BYREF
  LUID v40; // [rsp+D8h] [rbp-60h] BYREF
  int v41; // [rsp+E0h] [rbp-58h]
  __int128 v42; // [rsp+E8h] [rbp-50h] BYREF
  __int128 v43; // [rsp+F8h] [rbp-40h]

  v6 = a5;
  v34 = (__int64)a5;
  DWORD1(v33) = 0;
  v42 = 0LL;
  v43 = 0LL;
  v35 = 0LL;
  if ( a3 != 32 )
    return (unsigned int)-1073741820;
  v7 = 0;
  v30 = *a2;
  *(_OWORD *)Address = a2[1];
  if ( (_QWORD)v30 != 0x6B7568430000002DLL )
    return (unsigned int)-1073741811;
  v8 = DWORD2(v30);
  if ( DWORD2(v30) > 0x1C || (v9 = 268501248, !_bittest(&v9, DWORD2(v30))) )
  {
    v10 = stru_140D3CA90;
    *(_QWORD *)&SubjectContext.ImpersonationLevel = 0LL;
    v11 = *((_QWORD *)KeGetCurrentThread() + 23);
    CurrentThread = KeGetCurrentThread();
    SubjectContext.ProcessAuditId = *(PVOID *)(v11 + 1088);
    if ( CurrentThread )
    {
      if ( (*((_DWORD *)CurrentThread + 344) & 8) != 0 )
      {
        v13 = KeGetCurrentThread();
        --*((_WORD *)v13 + 242);
        ExAcquirePushLockSharedEx((ULONG_PTR)CurrentThread + 1360, 0LL);
        if ( (*((_DWORD *)CurrentThread + 344) & 8) != 0 )
        {
          ClientToken = (_QWORD *)(*((_QWORD *)CurrentThread + 159) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObjectWithTag(ClientToken, 0x75536553u);
          SubjectContext.ImpersonationLevel = *((_DWORD *)CurrentThread + 318) & 3;
        }
        else
        {
          ClientToken = 0LL;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)CurrentThread + 170, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)CurrentThread + 170);
        sub_1402AFC00((ULONG_PTR)CurrentThread + 1360);
        sub_1402AC800((__int64)v13);
      }
      else
      {
        ClientToken = 0LL;
      }
      SubjectContext.ClientToken = ClientToken;
    }
    else
    {
      ClientToken = 0LL;
      SubjectContext.ClientToken = 0LL;
    }
    v15 = (_QWORD *)sub_140347920(v11, 0x75536553u);
    PrimaryToken = v15;
    SubjectContext.PrimaryToken = v15;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v15[143] + 284LL));
        PrimaryToken = SubjectContext.PrimaryToken;
        if ( SubjectContext.PrimaryToken == (PACCESS_TOKEN)qword_140D04940 )
          __debugbreak();
        ClientToken = SubjectContext.ClientToken;
      }
      if ( ClientToken )
      {
        _InterlockedIncrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
        ClientToken = SubjectContext.ClientToken;
        if ( SubjectContext.ClientToken == (PACCESS_TOKEN)qword_140D04940 )
          __debugbreak();
        PrimaryToken = SubjectContext.PrimaryToken;
      }
    }
    v39[0] = 1;
    v39[1] = 1;
    v40 = v10;
    v41 = 0;
    if ( a4 )
    {
      if ( !ClientToken )
      {
        v17 = (__int64)PrimaryToken;
        goto LABEL_18;
      }
      if ( SubjectContext.ImpersonationLevel >= SecurityImpersonation )
      {
        v17 = (__int64)ClientToken;
LABEL_18:
        v18 = sub_1402A70F0(v17, (__int64)&v40, 1u, 1, a4);
        goto LABEL_19;
      }
      v18 = 0;
    }
    else
    {
      v18 = 1;
    }
LABEL_19:
    if ( a4 )
    {
      v19 = ClientToken ? ClientToken : PrimaryToken;
      v20 = *(void **)v19[19];
      if ( !RtlEqualSid(Group, v20) )
      {
        if ( (v25 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v20))
          && !RtlEqualSid(v25->SeLocalServiceSid, v20)
          || sub_1406BC1E4(1, (unsigned int *)v39) )
        {
          sub_1407240A0(
            (int)&SubjectContext,
            &qword_140001B08,
            0LL,
            (__int64)ClientToken,
            (__int64)PrimaryToken,
            v39,
            v18);
        }
      }
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( !v18 )
      return (unsigned int)-1073741790;
    v8 = DWORD2(v30);
    v7 = 0;
    v6 = (_DWORD *)v34;
  }
  if ( v8 == 6 )
  {
    return (unsigned int)sub_140739F40(&v30, a4, v6);
  }
  else
  {
    switch ( v8 )
    {
      case 1:
        return (unsigned int)sub_1407DB830(Address[0], LODWORD(Address[1]), a4, v6);
      case 2:
        if ( LODWORD(Address[1]) != 28 )
          goto LABEL_92;
        v26 = KeGetCurrentThread();
        --*((_WORD *)v26 + 242);
        ExAcquirePushLockSharedEx((ULONG_PTR)qword_140C544F8, 0LL);
        v36 = xmmword_140C54344;
        v37 = qword_140C54354;
        v38 = dword_140C5435C;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140C544F8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)qword_140C544F8);
        sub_1402AFC00((ULONG_PTR)qword_140C544F8);
        KeLeaveCriticalRegion();
        if ( a4 )
        {
          v27 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v27 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v27 = *(_BYTE *)v27;
          *(_BYTE *)(v27 + 27) = *(_BYTE *)(v27 + 27);
        }
        v28 = Address[0];
        *(_OWORD *)Address[0] = v36;
        v28[2] = v37;
        *((_DWORD *)v28 + 6) = v38;
        *v6 = 28;
        v7 = 0;
        break;
      case 8:
        return (unsigned int)sub_140711614((__int64)&v30, a4, v6);
      case 9:
        if ( LODWORD(Address[1]) != 4 )
          goto LABEL_92;
        if ( a4 )
        {
          v29 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v29 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v29 = *(_BYTE *)v29;
          *(_BYTE *)(v29 + 3) = *(_BYTE *)(v29 + 3);
          v7 = 0;
        }
        *(_DWORD *)Address[0] = dword_140CF5E50;
        *v6 = 4;
        break;
      case 12:
        return (unsigned int)sub_140805D98(&v30, a4, v6);
      case 16:
        return (unsigned int)sub_1403884CC((__int64)&v30, a4, v6);
      case 17:
        return (unsigned int)sub_1403D506C((__int64)&v30, a4, v6);
      case 20:
        if ( LODWORD(Address[1]) != 16 )
          goto LABEL_92;
        *(_QWORD *)&v33 = 0LL;
        if ( a4 )
        {
          v23 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v23 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v23 = *(_BYTE *)v23;
          *(_BYTE *)(v23 + 15) = *(_BYTE *)(v23 + 15);
          v7 = 0;
        }
        v33 = *(_OWORD *)Address[0];
        if ( (_DWORD)v33 == 1 )
        {
          *((_QWORD *)&v33 + 1) = qword_140C54670;
          *(_OWORD *)Address[0] = v33;
          *v6 = 16;
        }
        else
        {
          v7 = -1073741735;
        }
        break;
      case 23:
        return (unsigned int)sub_1407F89C0(&v30, a4, v6);
      case 24:
        if ( LODWORD(Address[1]) == 16 )
        {
          sub_1406EA034(0LL, 0LL, &v42);
          v24 = Address[0];
          if ( a4 )
            ProbeForWrite(Address[0], 0x10uLL, 4u);
          v35 = Address[0];
          if ( *(_DWORD *)Address[0] == 1 )
          {
            *((_DWORD *)Address[0] + 1) = DWORD1(v42);
            v24[1] = *((_QWORD *)&v43 + 1);
          }
          else
          {
            v7 = -1073741811;
          }
        }
        else
        {
LABEL_92:
          v7 = -1073741306;
        }
        break;
      case 27:
        return (unsigned int)sub_1409876B8(&v30, a4, v6);
      case 28:
        return (unsigned int)sub_1406DFA80((__int64)&v30, a4, v6);
      default:
        v7 = -1073741821;
        break;
    }
  }
  return v7;
}

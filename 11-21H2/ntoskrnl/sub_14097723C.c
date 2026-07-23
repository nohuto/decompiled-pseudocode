/*
 * XREFs of sub_14097723C @ 0x14097723C
 * Callers:
 *     sub_1406C9390 @ 0x1406C9390 (sub_1406C9390.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14097303C @ 0x14097303C (sub_14097303C.c)
 *     sub_1409734B8 @ 0x1409734B8 (sub_1409734B8.c)
 *     sub_140973FF0 @ 0x140973FF0 (sub_140973FF0.c)
 */

__int64 __fastcall sub_14097723C(
        HANDLE Handle,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5,
        KPROCESSOR_MODE AccessMode,
        int a7)
{
  __int64 v7; // r14
  unsigned __int64 k; // rsi
  unsigned int v9; // r15d
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v11; // ebx
  struct _KTHREAD *v12; // rax
  _QWORD *v13; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  _QWORD **v20; // rax
  _QWORD *v21; // r8
  PVOID *v22; // rcx
  PVOID *v23; // r8
  __int64 v24; // rcx
  NTSTATUS v25; // edi
  void *v26; // rax
  BOOLEAN v27; // al
  __int64 v28; // r9
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  unsigned __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // r13d
  _QWORD *v35; // rax
  _QWORD *v36; // rdi
  HANDLE v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r14
  __int64 *v43; // r15
  __int64 *j; // rsi
  _QWORD **v45; // rax
  unsigned __int64 v46; // rcx
  _QWORD *v47; // rcx
  PVOID *m; // rsi
  __int64 v49; // rdx
  __int64 v50; // r8
  _DWORD *v51; // rcx
  __int64 v52; // r14
  _QWORD *v53; // rsi
  bool v54; // zf
  __int64 v56; // [rsp+60h] [rbp-91h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-89h]
  __int64 v58; // [rsp+70h] [rbp-81h] BYREF
  _QWORD *v59; // [rsp+78h] [rbp-79h]
  __int64 v60; // [rsp+80h] [rbp-71h] BYREF
  __int64 v61; // [rsp+88h] [rbp-69h] BYREF
  __int64 v62; // [rsp+90h] [rbp-61h] BYREF
  struct _KTHREAD *v63; // [rsp+98h] [rbp-59h]
  PVOID Object; // [rsp+A0h] [rbp-51h] BYREF
  _QWORD *v65; // [rsp+A8h] [rbp-49h]
  _DWORD *v66; // [rsp+B0h] [rbp-41h]
  __int64 v67; // [rsp+B8h] [rbp-39h]
  HANDLE v68; // [rsp+C0h] [rbp-31h]
  _OWORD v69[3]; // [rsp+C8h] [rbp-29h] BYREF

  v68 = Handle;
  v67 = a4;
  v66 = a3;
  v65 = a2;
  v7 = 40LL;
  v56 = 0LL;
  v69[0] = 0LL;
  if ( a7 != 2 )
    v7 = 48LL;
  BugCheckParameter1 = 0LL;
  v59 = 0LL;
  k = 0LL;
  v9 = 0;
  memset(&v69[1], 0, 32);
  CurrentThread = KeGetCurrentThread();
  v63 = CurrentThread;
  if ( !Handle )
  {
    v11 = 8;
    v12 = sub_1406F5B50();
    v13 = (_QWORD *)qword_140C533B8;
    v63 = v12;
    while ( v13 )
    {
      k = (unsigned __int64)v13;
      v13 = (_QWORD *)*v13;
    }
    i = k;
    v15 = v7;
    if ( k )
    {
      v16 = v7;
      do
      {
        ++v9;
        v17 = 28LL;
        if ( a7 == 2 )
          v17 = 24LL;
        v18 = v16 + v17;
        v19 = i;
        v15 = v18 + *(unsigned __int16 *)(i + 48);
        v20 = *(_QWORD ***)(i + 8);
        if ( v20 )
        {
          v21 = *v20;
          for ( i = *(_QWORD *)(i + 8); v21; v21 = (_QWORD *)*v21 )
            i = (unsigned __int64)v21;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v19 )
              break;
            v19 = i;
          }
        }
        v16 = v15;
      }
      while ( i );
    }
    v22 = (PVOID *)PsLoadedModuleList;
    v23 = &PsLoadedModuleList;
    while ( v22 != v23 )
    {
      if ( sub_140973FF0((__int64)v22) )
      {
        v15 += *(unsigned __int16 *)(v24 + 72) + 24LL;
        ++v9;
        if ( a7 != 2 )
          v15 += 4LL;
      }
      v22 = *(PVOID **)v24;
    }
    goto LABEL_35;
  }
  Object = 0LL;
  v25 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, AccessMode, &Object, 0LL);
  v26 = Object;
  BugCheckParameter1 = (ULONG_PTR)Object;
  if ( v25 < 0 )
    goto LABEL_82;
  v27 = sub_140347810((struct _EX_RUNDOWN_REF *)Object + 139);
  v11 = 2 * (v27 & 1);
  if ( (v27 & 1) != 0 )
  {
    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v69, v28);
    v11 |= 4u;
    v29 = sub_1409734B8(BugCheckParameter1, 0);
    v59 = v29;
    v15 = v7;
    if ( v29 )
    {
      v11 |= 1u;
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v29 + 2), 0LL);
      v15 = v7;
      v30 = (_QWORD *)*v59;
      if ( (_QWORD *)*v59 != v59 )
      {
        v31 = v7;
        do
        {
          v32 = *((unsigned __int16 *)v30 + 20);
          ++v9;
          v30 = (_QWORD *)*v30;
          v33 = 28LL;
          if ( a7 == 2 )
            v33 = 24LL;
          v15 = v31 + v33 + v32;
          v31 = v15;
        }
        while ( v30 != v59 );
      }
    }
LABEL_35:
    if ( a5 >= v15 )
    {
      v34 = v15;
      v35 = sub_1402828F0(256, (unsigned int)v15, 0x71486D4Du);
      v36 = v35;
      if ( !v35 )
      {
        v25 = -1073741670;
        goto LABEL_69;
      }
      v37 = v68;
      v35[1] = v68;
      *(_DWORD *)v35 = a7;
      if ( v9 )
      {
        v38 = (__int64)&v35[(unsigned __int64)v7 / 8];
        v39 = (__int64)&v35[2 * v9 + (unsigned __int64)v7 / 8];
        v61 = (__int64)&v35[(unsigned __int64)v7 / 8];
        v62 = v39;
        v40 = v39 + 8LL * v9;
        if ( a7 == 2 )
        {
          v41 = v39 + 8LL * v9;
          v40 = 0LL;
        }
        else
        {
          v41 = v40 + 4LL * v9;
        }
        v58 = v40;
        v60 = v41;
        v36[3] = v38;
        v36[4] = v39;
        if ( v40 )
          v36[5] = v40;
        v42 = (__int64)v36 - v67;
        if ( v37 )
        {
          v43 = v59;
          for ( j = (__int64 *)*v59; j != v43; j = (__int64 *)*j )
            sub_14097303C(
              (__int64)v36,
              (__int64)(j + 4),
              v39,
              v42,
              (_QWORD **)&v62,
              (UNICODE_STRING **)&v61,
              (wchar_t **)&v60,
              (_DWORD **)&v58,
              j + 4,
              (PCUNICODE_STRING)(j + 5),
              *((_DWORD *)j + 16));
        }
        else
        {
          while ( k )
          {
            v56 = *(_QWORD *)(k + 24);
            sub_14097303C(
              (__int64)v36,
              v38,
              v39,
              v42,
              (_QWORD **)&v62,
              (UNICODE_STRING **)&v61,
              (wchar_t **)&v60,
              (_DWORD **)&v58,
              &v56,
              (PCUNICODE_STRING)(k + 48),
              *(_DWORD *)(k + 40));
            v45 = *(_QWORD ***)(k + 8);
            v46 = k;
            if ( v45 )
            {
              v47 = *v45;
              for ( k = *(_QWORD *)(k + 8); v47; v47 = (_QWORD *)*v47 )
                k = (unsigned __int64)v47;
            }
            else
            {
              while ( 1 )
              {
                k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !k || *(_QWORD *)k == v46 )
                  break;
                v46 = k;
              }
            }
          }
          for ( m = (PVOID *)PsLoadedModuleList; m != &PsLoadedModuleList; m = (PVOID *)*m )
          {
            if ( sub_140973FF0((__int64)m) )
            {
              v51 = m[35];
              LODWORD(v56) = v51[30];
              HIDWORD(v56) = v51[39];
              sub_14097303C(
                (__int64)v36,
                v49,
                v50,
                v42,
                (_QWORD **)&v62,
                (UNICODE_STRING **)&v61,
                (wchar_t **)&v60,
                (_DWORD **)&v58,
                &v56,
                (PCUNICODE_STRING)(m + 9),
                *((_DWORD *)m + 78));
            }
          }
        }
        v36[4] -= v42;
        v36[3] -= v42;
        if ( v58 )
          v36[5] -= v42;
      }
      *v65 = v36;
      *v66 = v34;
    }
    else
    {
      if ( v15 > 0xFFFFFFFF )
      {
        v25 = -1073741675;
        goto LABEL_69;
      }
      *v65 = 0LL;
      *v66 = v15;
    }
    v25 = 0;
    goto LABEL_69;
  }
  v25 = -1073741558;
LABEL_69:
  v52 = (__int64)v63;
  if ( v11 >= 8 )
    sub_1406F5AF0((__int64)v63);
  if ( (v11 & 1) != 0 )
  {
    v53 = v59;
    if ( _InterlockedCompareExchange64(v59 + 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v53 + 2);
    sub_1402AFC00((ULONG_PTR)(v53 + 2));
    v54 = (*(_WORD *)(v52 + 486))++ == 0xFFFF;
    if ( v54 && *(_QWORD *)(v52 + 152) != v52 + 152 )
      KiCheckForKernelApcDelivery();
  }
  if ( (v11 & 4) != 0 )
    sub_1402D0930((__int64)v69, 0LL);
  if ( (v11 & 2) != 0 )
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112));
  v26 = (void *)BugCheckParameter1;
LABEL_82:
  if ( v26 )
    ObfDereferenceObject(v26);
  return (unsigned int)v25;
}

/*
 * XREFs of sub_1407103B0 @ 0x1407103B0
 * Callers:
 *     sub_140696CCC @ 0x140696CCC (sub_140696CCC.c)
 *     sub_1406B9FD4 @ 0x1406B9FD4 (sub_1406B9FD4.c)
 *     sub_1406F6CA4 @ 0x1406F6CA4 (sub_1406F6CA4.c)
 *     sub_14070F3A8 @ 0x14070F3A8 (sub_14070F3A8.c)
 *     ObQueryNameString @ 0x14070F640 (ObQueryNameString.c)
 *     sub_14070F744 @ 0x14070F744 (sub_14070F744.c)
 *     sub_14070FD80 @ 0x14070FD80 (sub_14070FD80.c)
 *     sub_1407112A4 @ 0x1407112A4 (sub_1407112A4.c)
 *     sub_140742C78 @ 0x140742C78 (sub_140742C78.c)
 *     IoRegisterDeviceInterface @ 0x140769AD0 (IoRegisterDeviceInterface.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     sub_140784700 @ 0x140784700 (sub_140784700.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_1407F1CDC @ 0x1407F1CDC (sub_1407F1CDC.c)
 *     sub_14082071C @ 0x14082071C (sub_14082071C.c)
 *     sub_140881A9A @ 0x140881A9A (sub_140881A9A.c)
 *     sub_1409342B0 @ 0x1409342B0 (sub_1409342B0.c)
 *     sub_140934B80 @ 0x140934B80 (sub_140934B80.c)
 *     sub_140966EA8 @ 0x140966EA8 (sub_140966EA8.c)
 *     sub_14096B158 @ 0x14096B158 (sub_14096B158.c)
 *     sub_140984994 @ 0x140984994 (sub_140984994.c)
 *     sub_1409D59E8 @ 0x1409D59E8 (sub_1409D59E8.c)
 *     sub_1409D71F0 @ 0x1409D71F0 (sub_1409D71F0.c)
 *     sub_1409E3B48 @ 0x1409E3B48 (sub_1409E3B48.c)
 * Callees:
 *     sub_1402A0E90 @ 0x1402A0E90 (sub_1402A0E90.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1407103B0(char *a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // r12d
  signed __int64 *v7; // rbx
  unsigned __int64 v8; // rdx
  char *v9; // rdi
  __int64 CurrentSilo; // rax
  char *v12; // rax
  void **v13; // rax
  void *v14; // rdi
  unsigned int v15; // edx
  char *v16; // rcx
  char *v17; // rdi
  char *v18; // rdi
  _WORD *v19; // rcx
  size_t v20; // r8
  char *v21; // rcx
  char *v22; // rdi
  __int64 v23; // r12
  char *v24; // rdi
  size_t v25; // r8
  int v26; // edi
  _WORD *v27; // rdx
  char v28; // [rsp+40h] [rbp-C8h]
  char v29; // [rsp+41h] [rbp-C7h]
  int v30; // [rsp+44h] [rbp-C4h]
  unsigned int v31; // [rsp+48h] [rbp-C0h]
  char *Object; // [rsp+50h] [rbp-B8h]
  unsigned int v33; // [rsp+58h] [rbp-B0h]
  _WORD *v34; // [rsp+60h] [rbp-A8h]
  _WORD *v35; // [rsp+68h] [rbp-A0h]
  char *v36; // [rsp+70h] [rbp-98h]
  char *v37; // [rsp+70h] [rbp-98h]
  char *v38; // [rsp+70h] [rbp-98h]
  signed __int64 *BugCheckParameter2; // [rsp+78h] [rbp-90h]
  signed __int64 *BugCheckParameter2a; // [rsp+78h] [rbp-90h]
  char *v41; // [rsp+80h] [rbp-88h]
  void **v42; // [rsp+88h] [rbp-80h]
  char *v43; // [rsp+90h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *v45; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *v46; // [rsp+C0h] [rbp-48h]
  struct _KTHREAD *v47; // [rsp+C8h] [rbp-40h]

  v4 = a3;
  v28 = 1;
  v29 = 0;
  v33 = 0;
  Object = 0LL;
  v30 = -1073741823;
  v7 = (signed __int64 *)(a1 - 48);
  v8 = (unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  if ( (*(a1 - 22) & 2) != 0 )
    v9 = (char *)v7 - byte_140C25440[*(a1 - 22) & 3];
  else
    v9 = 0LL;
  v42 = (void **)v9;
  if ( *(_QWORD *)(qword_140D07490[v8] + 160) )
  {
    if ( v9 && *((_WORD *)v9 + 4) )
      LOBYTE(v8) = 1;
    else
      v8 = 0LL;
    v30 = sub_14042A5E0(a1, v8);
LABEL_7:
    if ( v30 >= 0 )
LABEL_8:
      *(_DWORD *)(a2 + 4) = 0;
    return (unsigned int)v30;
  }
  CurrentSilo = PsGetCurrentSilo();
  v12 = (char *)sub_1402A0E90(CurrentSilo);
  v41 = v12;
  while ( v9 )
  {
    if ( a1 != v12 && a1 != qword_140C246D0 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v7 + 2), 0LL);
      v13 = v42;
      v14 = *v42;
      v36 = (char *)*v42;
      if ( *v42 )
      {
        ObfReferenceObject(v14);
        Object = (char *)v14;
        v13 = v42;
      }
      v31 = *((unsigned __int16 *)v13 + 4) + 2;
      if ( _InterlockedCompareExchange64(v7 + 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v7 + 2);
      sub_1402AFC00((ULONG_PTR)(v7 + 2));
      KeLeaveCriticalRegion();
      v15 = v31;
      v16 = v36;
      while ( v16 != v41 && v16 != qword_140C246D0 && v16 && (*((_DWORD *)v16 + 84) & 0x20) == 0 )
      {
        v45 = KeGetCurrentThread();
        --*((_WORD *)v45 + 242);
        v17 = v16 - 48;
        BugCheckParameter2 = (signed __int64 *)(v16 - 32);
        ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
        if ( (v17[26] & 2) == 0 || (v18 = &v17[-byte_140C25440[v17[26] & 3]]) == 0LL || !*(_QWORD *)v18 )
        {
          if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(BugCheckParameter2);
          sub_1402AFC00((ULONG_PTR)BugCheckParameter2);
          KeLeaveCriticalRegion();
          v15 = v31 + 8;
          break;
        }
        v31 += 2 + *((unsigned __int16 *)v18 + 4);
        v37 = *(char **)v18;
        ObfReferenceObject(*(PVOID *)v18);
        if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(BugCheckParameter2);
        sub_1402AFC00((ULONG_PTR)BugCheckParameter2);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(Object);
        v16 = v37;
        Object = v37;
        v15 = v31;
        if ( v31 > 0xFFFF )
          goto LABEL_37;
      }
      if ( v15 <= 0xFFFF )
        goto LABEL_31;
LABEL_37:
      v30 = -1073741562;
      goto LABEL_33;
    }
    v15 = 2;
LABEL_31:
    v33 = v15 + 18;
    *a4 = v15 + 18;
    if ( v4 < v15 + 18 )
    {
      v30 = -1073741820;
LABEL_33:
      v28 = 0;
    }
    if ( Object )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
    }
    if ( !v28 )
      goto LABEL_7;
    if ( (*((_BYTE *)v7 + 26) & 2) != 0 )
      v9 = (char *)v7 - byte_140C25440[*((_BYTE *)v7 + 26) & 3];
    else
      v9 = 0LL;
    v42 = (void **)v9;
    if ( v9 )
    {
      v19 = (_WORD *)(a2 + v33 - 2LL);
      *v19 = 0;
      if ( a1 == v41 || a1 == qword_140C246D0 )
      {
LABEL_67:
        *(v19 - 1) = 92;
        v26 = (unsigned __int16)(a2 + v33 - ((_WORD)v19 - 2));
        *(_WORD *)(a2 + 2) = v26;
        *(_WORD *)a2 = a2 + v33 - (_WORD)v19;
        *(_QWORD *)(a2 + 8) = a2 + 16;
        if ( (_WORD *)(a2 + 16) != v19 - 1 )
        {
          memmove((void *)(a2 + 16), v19 - 1, (unsigned __int16)(a2 + v33 - ((_WORD)v19 - 2)));
          *a4 = v26 + 16;
        }
      }
      else
      {
        v20 = *((unsigned __int16 *)v9 + 4);
        v21 = (char *)v19 - v20;
        v34 = v21;
        if ( (unsigned __int64)v21 <= a2 + 16 )
        {
          v29 = 1;
        }
        else
        {
          memmove(v21, *((const void **)v9 + 2), v20);
          v46 = KeGetCurrentThread();
          --*((_WORD *)v46 + 242);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v7 + 2), 0LL);
          v22 = *(char **)v9;
          v38 = v22;
          if ( v22 )
          {
            ObfReferenceObject(v22);
            Object = v22;
          }
          if ( _InterlockedCompareExchange64(v7 + 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v7 + 2);
          sub_1402AFC00((ULONG_PTR)(v7 + 2));
          KeLeaveCriticalRegion();
          while ( 1 )
          {
            if ( v38 == v41 || v38 == qword_140C246D0 || !v38 || (*((_DWORD *)v38 + 84) & 0x20) != 0 )
            {
              v19 = v34;
LABEL_66:
              v4 = a3;
              goto LABEL_67;
            }
            v35 = v34 - 1;
            *(v34 - 1) = 92;
            v43 = v38 - 48;
            if ( (*(v38 - 22) & 2) != 0 )
              v23 = (__int64)&v38[-byte_140C25440[*(v38 - 22) & 3] - 48];
            else
              v23 = 0LL;
            v47 = KeGetCurrentThread();
            --*((_WORD *)v47 + 242);
            BugCheckParameter2a = (signed __int64 *)(v43 + 16);
            ExAcquirePushLockSharedEx((ULONG_PTR)(v43 + 16), 0LL);
            if ( !v23 || !*(_QWORD *)v23 )
            {
              if ( _InterlockedCompareExchange64(BugCheckParameter2a, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(BugCheckParameter2a);
              sub_1402AFC00((ULONG_PTR)BugCheckParameter2a);
              KeLeaveCriticalRegion();
              v19 = v34 - 4;
              v27 = v34 - 4;
              if ( (unsigned __int64)(v34 - 4) < a2 + 16 )
              {
                v19 = (_WORD *)(a2 + 16);
                v27 = (_WORD *)(a2 + 16);
              }
              *(_DWORD *)v19 = 3014702;
              v19[2] = 46;
              if ( v27 == (_WORD *)(a2 + 16) )
                v19 = v27 + 1;
              goto LABEL_66;
            }
            ObfDereferenceObject(Object);
            v24 = *(char **)v23;
            v38 = *(char **)v23;
            ObfReferenceObject(*(PVOID *)v23);
            Object = v24;
            v25 = *(unsigned __int16 *)(v23 + 8);
            v34 = (_WORD *)((char *)v35 - v25);
            if ( (unsigned __int64)v35 - v25 <= a2 + 16 )
              break;
            memmove((char *)v35 - v25, *(const void **)(v23 + 16), v25);
            if ( _InterlockedCompareExchange64(BugCheckParameter2a, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(BugCheckParameter2a);
            sub_1402AFC00((ULONG_PTR)BugCheckParameter2a);
            KeLeaveCriticalRegion();
          }
          v29 = 1;
          if ( _InterlockedCompareExchange64(BugCheckParameter2a, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(BugCheckParameter2a);
          sub_1402AFC00((ULONG_PTR)BugCheckParameter2a);
          KeLeaveCriticalRegion();
          v4 = a3;
        }
      }
      if ( Object )
        ObfDereferenceObject(Object);
      if ( !v29 )
        goto LABEL_83;
      if ( (*((_BYTE *)v7 + 26) & 2) != 0 )
        v9 = (char *)v7 - byte_140C25440[*((_BYTE *)v7 + 26) & 3];
      else
        v9 = 0LL;
      v42 = (void **)v9;
      v29 = 0;
    }
    v12 = v41;
  }
  *a4 = 16;
  if ( v4 >= 0x10 )
  {
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
LABEL_83:
    v30 = 0;
    goto LABEL_8;
  }
  return (unsigned int)-1073741820;
}

/*
 * XREFs of sub_1402D4530 @ 0x1402D4530
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020F30C @ 0x14020F30C (sub_14020F30C.c)
 *     sub_140229AD4 @ 0x140229AD4 (sub_140229AD4.c)
 *     sub_1402440B4 @ 0x1402440B4 (sub_1402440B4.c)
 *     sub_1402445C8 @ 0x1402445C8 (sub_1402445C8.c)
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D5324 @ 0x1402D5324 (sub_1402D5324.c)
 *     sub_1402D5484 @ 0x1402D5484 (sub_1402D5484.c)
 *     sub_1402D56F4 @ 0x1402D56F4 (sub_1402D56F4.c)
 *     sub_1402F8420 @ 0x1402F8420 (sub_1402F8420.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14041ACC0 @ 0x14041ACC0 (sub_14041ACC0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_1406A1350 @ 0x1406A1350 (sub_1406A1350.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407CDAC0 @ 0x1407CDAC0 (sub_1407CDAC0.c)
 *     sub_140985970 @ 0x140985970 (sub_140985970.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall sub_1402D4530(HANDLE Handle, int a2, unsigned __int64 a3, unsigned int a4)
{
  KPROCESSOR_MODE v8; // di
  int v9; // r12d
  int v10; // r14d
  NTSTATUS result; // eax
  __int64 v12; // rcx
  int v13; // esi
  PVOID v14; // rcx
  int v15; // eax
  PVOID v16; // r15
  KSPIN_LOCK *v17; // rdi
  KIRQL CurrentIrql; // r10
  __int64 v19; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v21; // rdx
  int v22; // eax
  char *v23; // rdi
  __int64 v24; // rdx
  unsigned int v25; // edx
  int v26; // ecx
  _DWORD *v27; // r12
  unsigned int v28; // eax
  bool v29; // r13
  _DWORD *v30; // r13
  _DWORD *v31; // r14
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  __int64 v35; // r9
  int v36; // eax
  bool v37; // zf
  __int64 v38; // rax
  char v39; // r8
  unsigned int v40; // ecx
  bool v41; // al
  unsigned int v42; // ecx
  unsigned int v43; // edx
  PKSPIN_LOCK *v44; // r15
  unsigned int v45; // eax
  int *v46; // r14
  int v47; // ecx
  unsigned __int64 v48; // rsi
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  __int64 v51; // r9
  int v52; // eax
  __int64 Next; // rax
  struct _KPRCB *v54; // rcx
  __int64 v55; // rdx
  int v56; // eax
  unsigned __int64 v57; // rdi
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  __int64 v60; // r9
  int v61; // eax
  signed __int64 v62; // rdi
  signed __int64 v63; // r12
  bool v64; // cc
  signed __int64 v65; // r12
  __int64 v66; // rax
  bool v67; // [rsp+30h] [rbp-198h]
  char v68; // [rsp+34h] [rbp-194h]
  char v69; // [rsp+35h] [rbp-193h]
  PVOID Object; // [rsp+38h] [rbp-190h] BYREF
  char v71; // [rsp+42h] [rbp-186h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-180h] BYREF
  _DWORD *v73; // [rsp+60h] [rbp-168h]
  _QWORD v74[35]; // [rsp+68h] [rbp-160h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_OWORD *)v74 = 0LL;
  v8 = *((_BYTE *)KeGetCurrentThread() + 562);
  memset(&v74[3], 0, 0x100uLL);
  v9 = a2 - 2;
  switch ( a2 )
  {
    case 2:
      v10 = 8;
      goto LABEL_9;
    case 3:
    case 4:
    case 5:
    case 8:
    case 9:
    case 11:
    case 12:
    case 13:
    case 14:
      v10 = 4;
      goto LABEL_9;
    case 6:
      return -1073741822;
    case 10:
      v10 = 16;
      goto LABEL_9;
    case 15:
      if ( a4 >= 0x100 )
        v10 = 256;
      else
        v10 = a4 + (a4 & 7);
LABEL_9:
      if ( a4 != v10 )
        return -1073741820;
      switch ( a2 )
      {
        case 2:
          if ( v8 && (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v74[3] = *(_QWORD *)a3;
          break;
        case 3:
        case 4:
        case 5:
          if ( v8 )
          {
            v12 = 0x7FFFFFFF0000LL;
            if ( a3 < 0x7FFFFFFF0000LL )
              v12 = a3;
            LODWORD(v74[3]) = *(_DWORD *)v12;
          }
          else
          {
            LODWORD(v74[3]) = *(_DWORD *)a3;
          }
          break;
        default:
          __fastfail(0x25u);
      }
      v13 = 0;
      Object = 0LL;
      result = ObReferenceObjectByHandle(Handle, 4u, qword_140D051A0, v8, &Object, 0LL);
      if ( result < 0 )
        return result;
      if ( a2 == 8 )
      {
        v14 = Object;
        v15 = v74[3];
        if ( !LODWORD(v74[3]) )
        {
          v15 = dword_140D06884;
          v14 = Object;
        }
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v15;
        ObfDereferenceObjectWithTag(v14, 0x746C6644u);
        return 0;
      }
      v69 = 0;
      v67 = 0;
      v71 = 0;
      v68 = 1;
      v16 = Object;
      v17 = (KSPIN_LOCK *)*((_QWORD *)Object + 2);
      LockHandle.LockQueue.Lock = v17;
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v19 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      LockHandle.OldIrql = CurrentIrql;
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v21 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v22 = *(_DWORD *)(v21 + 24);
          *(_DWORD *)(v21 + 24) = v22 + 1;
          if ( v22 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        sub_14045A10C(&LockHandle, v17);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)v17, (__int64)&LockHandle) )
      {
        sub_140311C70(&LockHandle);
      }
      switch ( v9 )
      {
        case 0:
          if ( (unsigned int)sub_14041ACC0() && *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
          {
            v13 = 128;
            v23 = (char *)Object;
          }
          else if ( v74[3] >= 0LL )
          {
            v13 = -1073741811;
            v23 = (char *)Object;
          }
          else
          {
            v24 = -10000000LL;
            if ( v74[3] <= -10000000LL )
            {
              v24 = v74[3];
              if ( v74[3] < -6000000000LL )
                v24 = -6000000000LL;
            }
            v74[3] = v24;
            v23 = (char *)Object;
            *((_QWORD *)Object + 14) = v24;
            v74[1] = -1LL;
            KeSetTimer2(v23 + 424, v24, -v24, v74);
          }
          goto LABEL_96;
        case 1:
          v23 = (char *)Object;
          v25 = *((_DWORD *)Object + 101);
          if ( SLODWORD(v74[3]) < 0 )
          {
            if ( v25 <= -LODWORD(v74[3]) )
            {
              *((_DWORD *)Object + 101) = 0;
              v26 = 0;
            }
            else
            {
              v26 = v25 + LODWORD(v74[3]);
              *((_DWORD *)Object + 101) = v25 + LODWORD(v74[3]);
            }
          }
          else
          {
            v26 = -1;
            if ( v25 < v25 + LODWORD(v74[3]) )
              v26 = v25 + LODWORD(v74[3]);
            *((_DWORD *)Object + 101) = v26;
          }
          if ( v25 )
          {
            if ( !v26 && (*((_DWORD *)v23 + 102) & 0x200) != 0 )
              sub_1402D56F4(v23);
          }
          else if ( v26 && (unsigned __int8)sub_1402D5324(v23) )
          {
            sub_1402F8420(v23, &LockHandle);
            v68 = 0;
          }
          goto LABEL_96;
        case 2:
          v23 = (char *)Object;
          if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
          {
            v13 = 128;
            goto LABEL_96;
          }
          v27 = (char *)Object + 376;
          v28 = v74[3];
          v29 = LODWORD(v74[3]) > *((_DWORD *)Object + 94);
          v67 = v29;
          *((_DWORD *)Object + 94) = v74[3];
          if ( *((_DWORD *)v23 + 95) < v28 )
            *((_DWORD *)v23 + 95) = v28;
          if ( !v29 )
            goto LABEL_96;
          v67 = 0;
          if ( (*((_DWORD *)v23 + 102) & 0x200) != 0 )
            sub_1402D56F4(v23);
          v30 = v23 + 392;
          v73 = v23 + 384;
          if ( (unsigned int)(*((_DWORD *)v23 + 98) + *((_DWORD *)v23 + 96)) >= *v27 )
            goto LABEL_96;
          v31 = v23 + 400;
          break;
        case 3:
          v38 = *((_QWORD *)v16 + 2);
          v23 = (char *)Object;
          if ( *(_BYTE *)(v38 + 33) )
          {
            v13 = 128;
            goto LABEL_96;
          }
          v39 = 1;
          v69 = 1;
          v40 = v74[3];
          v41 = LODWORD(v74[3])
             && (!*((_DWORD *)Object + 95) && *(_DWORD *)(v38 + 24) || *(int *)(*(_QWORD *)(v38 + 8) + 4LL) > 0);
          *((_DWORD *)Object + 95) = v74[3];
          if ( v40 < *((_DWORD *)v23 + 94) )
            *((_DWORD *)v23 + 94) = v40;
          goto LABEL_97;
        default:
          __fastfail(0x25u);
      }
      while ( 1 )
      {
        ++*v31;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v33 = KeGetCurrentIrql();
            if ( v33 <= 0xFu && LockHandle.OldIrql <= 0xFu && v33 >= 2u )
            {
              v34 = KeGetCurrentPrcb();
              v35 = *((_QWORD *)v34 + 4375);
              v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v37 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
              *(_DWORD *)(v35 + 20) &= v36;
              if ( v37 )
                sub_140418E4C(v34);
              v23 = (char *)Object;
            }
          }
        }
        __writecr8(OldIrql);
        v13 = sub_1402D5484(v23);
        KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v16 + 2), &LockHandle);
        if ( v13 < 0 )
          break;
        if ( (unsigned int)(*v30 + *v73) >= *v27 )
          goto LABEL_96;
      }
      --*v31;
LABEL_96:
      v41 = v67;
      v39 = 0;
LABEL_97:
      if ( v41 )
      {
        v42 = *((_DWORD *)v23 + 96);
        v43 = v42 + *((_DWORD *)v23 + 98);
        v44 = (PKSPIN_LOCK *)(v23 + 16);
        if ( *(_BYTE *)(*((_QWORD *)v23 + 2) + 33LL) )
        {
          v13 = 128;
        }
        else
        {
          v45 = *((_DWORD *)v23 + 95);
          if ( v42 < v45 )
          {
            v46 = (int *)(v23 + 400);
            v47 = *((_DWORD *)v23 + 100);
            if ( v47 || v43 >= v45 )
              goto LABEL_117;
            if ( (*((_DWORD *)v23 + 102) & 0x200) != 0 )
            {
              sub_1402D56F4(v23);
              v47 = *v46;
            }
            *v46 = v47 + 1;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v48 = LockHandle.OldIrql;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v49 = KeGetCurrentIrql();
                if ( v49 <= 0xFu && LockHandle.OldIrql <= 0xFu && v49 >= 2u )
                {
                  v50 = KeGetCurrentPrcb();
                  v51 = *((_QWORD *)v50 + 4375);
                  v52 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v37 = (v52 & *(_DWORD *)(v51 + 20)) == 0;
                  *(_DWORD *)(v51 + 20) &= v52;
                  if ( v37 )
                    sub_140418E4C(v50);
                  v23 = (char *)Object;
                }
              }
            }
            __writecr8(v48);
            v68 = 0;
            v13 = sub_1402D5484(v23);
            if ( v13 < 0 )
            {
              v68 = 1;
              KeAcquireInStackQueuedSpinLock(*v44, &LockHandle);
              --*v46;
              if ( v69 )
LABEL_117:
                v13 = 0;
            }
          }
          else if ( !v39 )
          {
            v13 = -1073741527;
          }
        }
      }
      if ( !v68 )
        goto LABEL_137;
      if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      {
        sub_14056E6FC(&LockHandle, retaddr);
        goto LABEL_125;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
        goto LABEL_124;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) != &LockHandle )
      {
        Next = sub_140282C20((__int64 *)&LockHandle);
LABEL_124:
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      }
LABEL_125:
      v54 = KeGetCurrentPrcb();
      v55 = *((_QWORD *)v54 + 4375);
      if ( v55 )
      {
        if ( *((_BYTE *)v54 + 32) <= 1u )
        {
          v56 = *(_DWORD *)(v55 + 24) - 1;
          *(_DWORD *)(v55 + 24) = v56;
          if ( !v56 )
            sub_140418E4C(v54);
        }
      }
      v57 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v58 = KeGetCurrentIrql();
          if ( v58 <= 0xFu && LockHandle.OldIrql <= 0xFu && v58 >= 2u )
          {
            v59 = KeGetCurrentPrcb();
            v60 = *((_QWORD *)v59 + 4375);
            v61 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v37 = (v61 & *(_DWORD *)(v60 + 20)) == 0;
            *(_DWORD *)(v60 + 20) &= v61;
            if ( v37 )
              sub_140418E4C(v59);
          }
        }
      }
      __writecr8(v57);
      v23 = (char *)Object;
LABEL_137:
      v62 = (signed __int64)(v23 - 48);
      if ( dword_140D05010 )
        sub_1405C5EC8(v62);
      v63 = _InterlockedExchangeAdd64((volatile signed __int64 *)v62, 0xFFFFFFFFFFFFFFFFuLL);
      v64 = v63 <= 1;
      v65 = v63 - 1;
      if ( !v64 )
        return v13;
      if ( *(_QWORD *)(v62 + 8) )
        KeBugCheckEx(
          0x18u,
          qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v62 + 24) ^ (unsigned __int64)BYTE1(v62)],
          (ULONG_PTR)Object,
          1uLL,
          *(_QWORD *)(v62 + 8));
      if ( v65 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v65);
      if ( KeAreAllApcsDisabled() )
      {
        sub_1402440B4(v62);
        return v13;
      }
      v66 = sub_140229AD4(v62);
      if ( v66 )
        sub_1406A1350(v66);
      if ( dword_140D05010 )
        sub_140985970(v62);
      sub_1407CDAC0(v62, 0LL);
      return v13;
    default:
      return -1073741821;
  }
}

/*
 * XREFs of sub_1409D8588 @ 0x1409D8588
 * Callers:
 *     sub_1409D4FF8 @ 0x1409D4FF8 (sub_1409D4FF8.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     sub_140260C2C @ 0x140260C2C (sub_140260C2C.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1409D4A38 @ 0x1409D4A38 (sub_1409D4A38.c)
 *     sub_1409D7C2C @ 0x1409D7C2C (sub_1409D7C2C.c)
 *     sub_1409D843C @ 0x1409D843C (sub_1409D843C.c)
 *     sub_1409D847C @ 0x1409D847C (sub_1409D847C.c)
 */

__int64 __fastcall sub_1409D8588(__int64 a1, _DWORD *a2)
{
  _PRIVILEGE_SET *v3; // rsi
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // edi
  __int64 v8; // rax
  ULONG *v9; // r13
  unsigned __int64 v10; // r12
  bool v11; // zf
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v13; // r14
  struct _EX_RUNDOWN_REF *v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rdi
  _PRIVILEGE_SET *v16; // rcx
  _DWORD *Count; // rdx
  _PRIVILEGE_SET *v18; // r8
  ULONG PrivilegeCount; // eax
  struct _KTHREAD *v20; // rax
  _DWORD *v21; // rdx
  _PRIVILEGE_SET *v22; // rcx
  _PRIVILEGE_SET *v23; // r8
  ULONG v24; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-30h] BYREF
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  int v30; // [rsp+A8h] [rbp+48h]
  struct _EX_RUNDOWN_REF *v31; // [rsp+B0h] [rbp+50h]

  v30 = 0;
  v3 = 0LL;
  v4 = a2[1];
  v28 = 0LL;
  v27 = 0LL;
  BitMapHeader = 0LL;
  v5 = sub_1409D7C2C(a1, v4);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)-1073741672;
  v8 = *(unsigned int *)(v5 + 8);
  v9 = a2 + 4;
  if ( a2[4] > (unsigned int)v8 )
  {
    v7 = -1073741811;
    goto LABEL_31;
  }
  v10 = (unsigned __int64)(v8 + 31) >> 5;
  v3 = (_PRIVILEGE_SET *)sub_140260C2C((unsigned int)(4 * v10), 0x72436D73u);
  if ( v3 )
  {
    v11 = (*a2 & 0x100) == 0;
    BitMapHeader.SizeOfBitMap = *(_DWORD *)(v6 + 8);
    BitMapHeader.Buffer = &v3->PrivilegeCount;
    if ( v11 )
    {
      RtlClearAllBits(&BitMapHeader);
    }
    else
    {
      RtlSetAllBits(&BitMapHeader);
      v28 = 0LL;
      DWORD1(v27) |= 4u;
      *((_QWORD *)&v27 + 1) = v3;
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v13 = (volatile signed __int64 *)(v6 + 160);
    ExAcquirePushLockExclusiveEx(v6 + 160, 0LL);
    v14 = (struct _EX_RUNDOWN_REF *)sub_1409D843C(v6, a2[2], a2[3]);
    v31 = v14;
    if ( v14 )
    {
      v30 = sub_140347810(v14 + 2);
      if ( (*a2 & 0x100) != 0 )
      {
        v7 = sub_1409D847C(v6, *v9, (__int64)&v27);
        if ( v7 < 0 )
          goto LABEL_26;
        v15 = v31;
        v16 = v3;
        Count = (_DWORD *)v31[1].Count;
        v18 = (_PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v10);
        if ( v3 < v18 )
        {
          do
          {
            PrivilegeCount = v16->PrivilegeCount;
            v16 = (_PRIVILEGE_SET *)((char *)v16 + 4);
            *Count++ |= PrivilegeCount;
          }
          while ( v16 < v18 );
        }
      }
      else
      {
        v15 = v31;
      }
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13);
      sub_1402AFC00((ULONG_PTR)v13);
      KeLeaveCriticalRegion();
      sub_1409D4A38(a2[3], a2[2], (unsigned int)&BitMapHeader, (_DWORD)a2 + 16, (*a2 >> 8) & 1);
      if ( (*a2 & 0x100) != 0 || !*v9 )
      {
        v7 = 0;
LABEL_29:
        if ( v30 )
          sub_1402AD030(v31 + 2);
        goto LABEL_31;
      }
      v20 = KeGetCurrentThread();
      --*((_WORD *)v20 + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v13, 0LL);
      v21 = (_DWORD *)v15[1].Count;
      v22 = v3;
      v23 = (_PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v10);
      if ( v3 < v23 )
      {
        do
        {
          v24 = v22->PrivilegeCount;
          v22 = (_PRIVILEGE_SET *)((char *)v22 + 4);
          *v21++ ^= v24;
        }
        while ( v22 < v23 );
      }
      v7 = 0;
    }
    else
    {
      v7 = -1073741672;
    }
LABEL_26:
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    sub_1402AFC00((ULONG_PTR)v13);
    KeLeaveCriticalRegion();
    goto LABEL_29;
  }
  v7 = -1073741670;
LABEL_31:
  sub_1402AD030((struct _EX_RUNDOWN_REF *)(32LL * (a2[1] & 0xF) + a1 + 8));
  if ( v3 )
    SeFreePrivileges(v3);
  return (unsigned int)v7;
}

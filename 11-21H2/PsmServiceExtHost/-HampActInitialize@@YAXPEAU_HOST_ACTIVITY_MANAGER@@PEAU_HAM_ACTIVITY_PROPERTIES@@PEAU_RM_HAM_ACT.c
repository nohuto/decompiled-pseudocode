/*
 * XREFs of ?HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@_KPEAU_HAM_ACTIVITY@@@Z @ 0x180024640
 * Callers:
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800026DC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180022910 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E214 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall HampActInitialize(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_ACTIVITY_PROPERTIES *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        __int64 a4,
        struct _HAM_ACTIVITY *a5)
{
  signed __int64 v9; // rax
  _QWORD *v10; // rcx
  struct _HAM_ACTIVITY_PROPERTIES *v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  DWORD v14; // esi
  _QWORD *Value; // rdi
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rcx
  DWORD v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // rdx

  memset_0((char *)a5 + 40, 0, 0x210uLL);
  *(_QWORD *)a5 = 0LL;
  *((_QWORD *)a5 + 1) = 0LL;
  *((_QWORD *)a5 + 4) = (char *)a1 + 216;
  *((_QWORD *)a5 + 3) = 1LL;
  *((_QWORD *)a5 + 2) = -1LL;
  v9 = _InterlockedIncrement64(&qword_1800DD488);
  if ( (v9 & 0xFE00000000000000uLL) != 0 )
    __fastfail(0xC0000095);
  *((_WORD *)a5 + 281) = 1536;
  *((_QWORD *)a5 + 5) = v9 | 0x1A00000000000000LL;
  v10 = (_QWORD *)((char *)a5 + 112);
  v11 = a2;
  v12 = 3LL;
  do
  {
    v10 += 16;
    v13 = *(_OWORD *)v11;
    v11 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v11 + 128);
    *((_OWORD *)v10 - 8) = v13;
    *((_OWORD *)v10 - 7) = *((_OWORD *)v11 - 7);
    *((_OWORD *)v10 - 6) = *((_OWORD *)v11 - 6);
    *((_OWORD *)v10 - 5) = *((_OWORD *)v11 - 5);
    *((_OWORD *)v10 - 4) = *((_OWORD *)v11 - 4);
    *((_OWORD *)v10 - 3) = *((_OWORD *)v11 - 3);
    *((_OWORD *)v10 - 2) = *((_OWORD *)v11 - 2);
    *((_OWORD *)v10 - 1) = *((_OWORD *)v11 - 1);
    --v12;
  }
  while ( v12 );
  v14 = HampLockTrackerId;
  *v10 = *(_QWORD *)v11;
  if ( v14 != -1 )
  {
    Value = TlsGetValue(v14);
    if ( *(_QWORD *)TlsGetValue(v14) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DD4E8 = GetCurrentThreadId();
  v16 = *((_QWORD *)a3 + 75);
  if ( !v16 )
    __int2c();
  if ( *((int *)a3 - 10) >= 0 )
    *((_QWORD *)a3 + 75) = v16 + 1;
  *((_QWORD *)a5 + 10) = a3;
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v17 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v18 = *v17;
    if ( (*v17 & 1) == 0 )
      __int2c();
    if ( v17[1]-- == 1 )
      *v17 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  *((_QWORD *)a5 + 64) = 0LL;
  if ( !a4 && (*(_DWORD *)a2 & 0x40000) != 0 )
  {
    HampHostAcquireLockSharedEx(*((struct _RM_HAM_ACTIVITY_HOST **)a5 + 10), 0);
    v20 = HampLockTrackerId;
    *((_QWORD *)a5 + 65) = *((_QWORD *)a3 + 102);
    v21 = *((_QWORD *)a5 + 10);
    CempLockTrackerMarkReleased(v20, v22, 1u);
    RtlReleaseSRWLockShared(v21);
  }
  else
  {
    *((_QWORD *)a5 + 65) = a4;
  }
}

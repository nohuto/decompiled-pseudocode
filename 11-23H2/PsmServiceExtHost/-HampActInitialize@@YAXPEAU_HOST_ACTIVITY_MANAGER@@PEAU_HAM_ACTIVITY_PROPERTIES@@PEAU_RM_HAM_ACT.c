/*
 * XREFs of ?HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@_KPEAU_HAM_ACTIVITY@@@Z @ 0x180015AD4
 * Callers:
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800147B4 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180015A28 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180017754 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall HampActInitialize(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_ACTIVITY_PROPERTIES *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        __int64 a4,
        struct _HAM_ACTIVITY *a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  struct _HAM_ACTIVITY_PROPERTIES *v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx

  memset_0((char *)a5 + 40, 0, 0x210uLL);
  *(_QWORD *)a5 = 0LL;
  *((_QWORD *)a5 + 1) = 0LL;
  *((_QWORD *)a5 + 2) = -1LL;
  *((_QWORD *)a5 + 4) = (char *)a1 + 440;
  *((_QWORD *)a5 + 3) = 1LL;
  v9 = HamObjectIdGenerate(5);
  v10 = 3LL;
  *((_QWORD *)a5 + 5) = v9;
  *((_WORD *)a5 + 281) = 1536;
  v11 = (_OWORD *)((char *)a5 + 112);
  v12 = a2;
  do
  {
    *v11 = *(_OWORD *)v12;
    v11[1] = *((_OWORD *)v12 + 1);
    v11[2] = *((_OWORD *)v12 + 2);
    v11[3] = *((_OWORD *)v12 + 3);
    v11[4] = *((_OWORD *)v12 + 4);
    v11[5] = *((_OWORD *)v12 + 5);
    v11[6] = *((_OWORD *)v12 + 6);
    v11 += 8;
    v13 = *((_OWORD *)v12 + 7);
    v12 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v12 + 128);
    *(v11 - 1) = v13;
    --v10;
  }
  while ( v10 );
  *(_QWORD *)v11 = *(_QWORD *)v12;
  RmpAcquireGlobalLock();
  *((_QWORD *)a5 + 10) = RmHamHostReference(a3);
  RmpReleaseGlobalLock();
  *((_QWORD *)a5 + 64) = 0LL;
  if ( a4 || (*(_DWORD *)a2 & 0x40000) == 0 )
  {
    *((_QWORD *)a5 + 65) = a4;
  }
  else
  {
    HampHostAcquireLockSharedEx(*((struct _RM_HAM_ACTIVITY_HOST **)a5 + 10), 0);
    v14 = HampLockTrackerId;
    v15 = *((_QWORD *)a5 + 10);
    *((_QWORD *)a5 + 65) = *((_QWORD *)a3 + 102);
    CempLockTrackerMarkReleased(v14, v16, 1LL);
    RtlReleaseSRWLockShared(v15);
  }
}

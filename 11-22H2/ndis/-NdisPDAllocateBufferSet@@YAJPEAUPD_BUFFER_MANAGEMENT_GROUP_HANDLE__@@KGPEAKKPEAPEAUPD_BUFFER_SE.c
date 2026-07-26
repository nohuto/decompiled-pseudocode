/*
 * XREFs of ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C01308C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qdddD @ 0x1C007D928 (WPP_RECORDER_SF_qdddD.c)
 *     WPP_RECORDER_SF_qdqd @ 0x1C007DD58 (WPP_RECORDER_SF_qdqd_ea_1C007DD58.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C007E2B0 (WPP_RECORDER_SF_qqqd_ea_1C007E2B0.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C01305E0 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisPDInitializePDBuffers@@YAXPEAPEAU_PD_BUFFER@@KT_LARGE_INTEGER@@PEAEKKG@Z @ 0x1C0134B14 (-ndisPDInitializePDBuffers@@YAXPEAPEAU_PD_BUFFER@@KT_LARGE_INTEGER@@PEAEKKG@Z.c)
 */

__int64 __fastcall NdisPDAllocateBufferSet(
        struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int *a4,
        unsigned int a5,
        struct PD_BUFFER_SET_HANDLE__ **a6)
{
  unsigned int v6; // r14d
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // r12d
  __int64 v14; // r13
  __int64 v16; // rcx
  int v17; // edi
  char *PoolWithTag; // rax
  char *v20; // rbx
  __int64 Pool2; // rax
  unsigned __int8 *v22; // r9
  union _LARGE_INTEGER v23; // r8
  struct _PD_BUFFER **v24; // rcx
  int v25; // edx
  struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **v26; // rcx
  NDIS_PD_MEM_BLOCK *i; // rcx
  unsigned int v28; // [rsp+20h] [rbp-98h]
  __int64 v29; // [rsp+40h] [rbp-78h]
  char v30[8]; // [rsp+50h] [rbp-68h] BYREF
  KLockHolder v31; // [rsp+58h] [rbp-60h] BYREF
  char *v32; // [rsp+C0h] [rbp+8h]
  unsigned int v33; // [rsp+C8h] [rbp+10h]
  unsigned __int16 v34; // [rsp+D0h] [rbp+18h]
  struct PD_BUFFER_SET_HANDLE__ **v36; // [rsp+E8h] [rbp+30h]

  v6 = *a4;
  HIDWORD(v12) = 0;
  v33 = (a2 + 63) & 0xFFFFFFC0;
  v10 = 0LL;
  *(_QWORD *)v30 = 0LL;
  v34 = (a3 + 63) & 0xFFC0;
  v11 = v34 + v33 + 128;
  LODWORD(v12) = 0x200000 % (unsigned int)v11;
  v13 = 0;
  v14 = 0x200000 / (unsigned int)v11;
  v32 = v30;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdddD(*((_QWORD *)WPP_GLOBAL_Control + 8), v12, v11, (__int64)a4, v28);
  *a6 = 0LL;
  v16 = *((_QWORD *)a1 + 3);
  if ( (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v16 == (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 24) )
  {
    v17 = -1073741808;
  }
  else
  {
    v36 = *(struct PD_BUFFER_SET_HANDLE__ ***)(*(_QWORD *)(*(_QWORD *)(v16 + 32) + 5480LL) + 72LL);
    if ( a2 > 0x7FFFFFFF || !v6 || a3 > 0xFFC0u )
    {
      v17 = -1073741811;
      goto LABEL_24;
    }
    while ( 1 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6D41444Eu);
      v20 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_21;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      *((_DWORD *)PoolWithTag + 6) = 0;
      *((_QWORD *)PoolWithTag + 5) = 0LL;
      *((_DWORD *)PoolWithTag + 12) = 0;
      *((_DWORD *)PoolWithTag + 13) = 0;
      *((_QWORD *)PoolWithTag + 7) = 0LL;
      *((_QWORD *)PoolWithTag + 8) = 0LL;
      *((_QWORD *)PoolWithTag + 1) = 0LL;
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_DWORD *)PoolWithTag + 18) = 0x80000000;
      Pool2 = ExAllocatePool2(64LL, 8 * v14, 1832993870);
      *((_QWORD *)v20 + 7) = Pool2;
      if ( !Pool2 )
      {
        NDIS_PD_MEM_BLOCK::`scalar deleting destructor'((NDIS_PD_MEM_BLOCK *)v20);
LABEL_21:
        v17 = -1073741670;
        goto LABEL_24;
      }
      *((_DWORD *)v20 + 12) = v14;
      v28 = (_DWORD)v20 + 32;
      v17 = ((__int64 (__fastcall *)(struct PD_BUFFER_SET_HANDLE__ *, _QWORD, _QWORD, __int64))v36[11])(
              v36[4],
              0LL,
              a5,
              0x200000LL);
      if ( v17 < 0 )
        break;
      v22 = (unsigned __int8 *)*((_QWORD *)v20 + 5);
      v23 = *(union _LARGE_INTEGER *)(v20 + 32);
      v24 = (struct _PD_BUFFER **)*((_QWORD *)v20 + 7);
      *((_QWORD *)v20 + 2) = v36;
      *((_DWORD *)v20 + 18) = a5;
      *((_DWORD *)v20 + 6) = 0x200000;
      ndisPDInitializePDBuffers(v24, v14, v23, v22, v28, v33, v34);
      v13 += v14;
      *(_QWORD *)v32 = v20;
      v32 = v20 + 64;
      v10 = *(_QWORD *)v30;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = v14;
        WPP_RECORDER_SF_qqqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v25,
          0x1Du,
          0x50u,
          (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
          (char)a1,
          v30[0],
          (char)v20,
          v29);
      }
      if ( v13 >= v6 )
      {
        v17 = 0;
        v31.m_State = Unlocked;
        v31.m_Lock = *(KPushLockBase **)&qword_1C00F5708;
        v31.m_Region.m_Entered = 0;
        *a4 = v13;
        *a6 = (struct PD_BUFFER_SET_HANDLE__ *)v10;
        KLockHolder::AcquireExclusive(&v31);
        v26 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)*((_QWORD *)a1 + 6);
        if ( *v26 != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 40) )
          __fastfail(3u);
        *(_QWORD *)(v10 + 8) = v26;
        *(_QWORD *)v10 = (char *)a1 + 40;
        *v26 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v10;
        *((_QWORD *)a1 + 6) = v10;
        KLockHolder::~KLockHolder(&v31);
        goto LABEL_5;
      }
    }
    for ( i = (NDIS_PD_MEM_BLOCK *)v20; ; *((_QWORD *)i + 8) = 0LL )
    {
      NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(i);
LABEL_24:
      if ( !v10 )
        break;
      i = (NDIS_PD_MEM_BLOCK *)v10;
      v10 = *(_QWORD *)(v10 + 64);
    }
  }
LABEL_5:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v12, v11, (__int64)a4, v28);
  return (unsigned int)v17;
}

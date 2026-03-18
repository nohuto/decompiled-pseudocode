/*
 * XREFs of NtDCompositionGetStatistics @ 0x1C0080E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?QueryStats@CConnection@DirectComposition@@QEAA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOSITION_TARGET_ID@@PEAI@Z @ 0x1C0081180 (-QueryStats@CConnection@DirectComposition@@QEAA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPO.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionGetStatistics(
        unsigned __int64 *a1,
        ULONG64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned __int64 v6; // r15
  unsigned int v7; // edi
  __int64 v8; // r9
  int v9; // esi
  unsigned __int64 v10; // r13
  struct tagCOMPOSITION_TARGET_ID *v11; // rbx
  DirectComposition::CConnection *DefaultConnection; // r14
  unsigned int v13; // edx
  __int64 v14; // r9
  ULONG64 v15; // r8
  ULONG64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v20; // [rsp+30h] [rbp-128h] BYREF
  struct tagCOMPOSITION_TARGET_ID *v21; // [rsp+38h] [rbp-120h]
  unsigned int v22; // [rsp+48h] [rbp-110h]
  DirectComposition::CConnection *v23; // [rsp+50h] [rbp-108h]
  unsigned __int64 v24; // [rsp+58h] [rbp-100h]
  __int64 v25; // [rsp+60h] [rbp-F8h]
  ULONG64 v26; // [rsp+68h] [rbp-F0h]
  __int64 v27; // [rsp+70h] [rbp-E8h]
  __int64 v28; // [rsp+78h] [rbp-E0h]
  __int128 v29; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+90h] [rbp-C8h]
  _BYTE v31[112]; // [rsp+A0h] [rbp-B8h] BYREF

  v25 = a4;
  v6 = a2;
  v26 = a2;
  v7 = a3;
  v20 = a3;
  v8 = (unsigned int)a3;
  v27 = v25;
  v28 = v25;
  v23 = (DirectComposition::CConnection *)a5;
  v9 = 0;
  v10 = 0LL;
  v24 = 0LL;
  v11 = 0LL;
  v21 = 0LL;
  if ( a1 && a2 && (a4 || !(_DWORD)a3) )
  {
    a2 = (ULONG64)(a1 + 1);
    if ( a1 + 1 < a1 || a2 > MmUserProbeAddress )
      a1 = (unsigned __int64 *)MmUserProbeAddress;
    v10 = *a1;
    v24 = *a1;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 )
  {
    if ( (_DWORD)a3 )
    {
      v7 = 256;
      if ( (unsigned int)a3 <= 0x100 )
        v7 = a3;
      if ( v7 <= 4 )
      {
        v11 = (struct tagCOMPOSITION_TARGET_ID *)v31;
      }
      else
      {
        v11 = (struct tagCOMPOSITION_TARGET_ID *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                                   (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                                                   260LL,
                                                   28LL * v7,
                                                   1633960772);
        if ( !v11 )
          v9 = -1073741801;
      }
      v21 = v11;
    }
    if ( v9 >= 0 )
    {
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)a1, a2, a3, v8);
      v23 = DefaultConnection;
      if ( DefaultConnection )
      {
        v29 = 0LL;
        v30 = 0LL;
        v20 = 0;
        if ( DirectComposition::CConnection::QueryStats(
               DefaultConnection,
               v10,
               (struct tagCOMPOSITION_FRAME_STATS *)&v29,
               v7,
               v11,
               &v20) )
        {
          if ( v6 + 24 < v6 || v6 + 24 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *(_OWORD *)v6 = v29;
          *(_QWORD *)(v6 + 16) = v30;
          if ( v25 )
          {
            v13 = 0;
            v14 = v28;
            while ( 1 )
            {
              v22 = v13;
              if ( v13 >= v7 )
                break;
              v15 = v14 + 28LL * v13;
              v16 = v15 + 28;
              if ( v13 < v20 )
              {
                if ( v16 < v15 || v16 > MmUserProbeAddress )
                  *(_BYTE *)MmUserProbeAddress = 0;
                v18 = 28LL * v13;
                *(_OWORD *)v15 = *(_OWORD *)((char *)v11 + v18);
                *(_QWORD *)(v15 + 16) = *(_QWORD *)((char *)v11 + v18 + 16);
                v17 = *(_DWORD *)((char *)v11 + v18 + 24);
              }
              else
              {
                if ( v16 < v15 || v16 > MmUserProbeAddress )
                  *(_BYTE *)MmUserProbeAddress = 0;
                *(_OWORD *)v15 = xmmword_1C0250080;
                *(_QWORD *)(v15 + 16) = 0LL;
                v17 = 0;
              }
              *(_DWORD *)(v15 + 24) = v17;
              ++v13;
            }
          }
          if ( a5 )
          {
            if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            *a5 = v20;
          }
        }
        else
        {
          v9 = -1073741275;
        }
        DirectComposition::CConnection::Release(DefaultConnection, v13);
      }
      else
      {
        v9 = -1073741790;
      }
    }
  }
  if ( v11 && v11 != (struct tagCOMPOSITION_TARGET_ID *)v31 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v11);
  return (unsigned int)v9;
}

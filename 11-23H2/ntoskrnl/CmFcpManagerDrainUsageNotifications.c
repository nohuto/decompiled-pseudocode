/*
 * XREFs of CmFcpManagerDrainUsageNotifications @ 0x14080E2D8
 * Callers:
 *     CmFcpManagerSoftwareHiveReady @ 0x14080DE90 (CmFcpManagerSoftwareHiveReady.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140A27010 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcpManagerDrainUsageNotificationsWorker @ 0x140A27E50 (CmFcpManagerDrainUsageNotificationsWorker.c)
 *     CmFcpManagerRetryUsageNotificationsWorker @ 0x140A280F0 (CmFcpManagerRetryUsageNotificationsWorker.c)
 * Callees:
 *     RtlFindNextForwardRunSet @ 0x140295054 (RtlFindNextForwardRunSet.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x14035D3A8 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x14035D43C (RtlpFcBufferManagerReferenceBuffers.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x140617774 (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     RtlUpdateSwapReference @ 0x14080E3A8 (RtlUpdateSwapReference.c)
 *     RtlpFcSendFeatureUsageNotifications @ 0x1409C8A1C (RtlpFcSendFeatureUsageNotifications.c)
 */

__int64 __fastcall CmFcpManagerDrainUsageNotifications(__int64 a1, char a2)
{
  __int64 v2; // r13
  _QWORD *v3; // rcx
  __int64 v4; // rbx
  _DWORD *v5; // rsi
  int v6; // r12d
  int NextForwardRunSet; // eax
  __int64 result; // rax
  unsigned int v9; // edi
  unsigned int v10; // r15d
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+28h] [rbp-20h]
  _QWORD v17[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+60h] BYREF

  v21 = 0LL;
  v2 = a1;
  v3 = (_QWORD *)(a1 + 304);
  v4 = *v3 & 1LL;
  RtlUpdateSwapReference(v3, ((_BYTE)v4 - 1) & 1);
  RtlpFcBufferManagerReferenceBuffers(v2 + 112, (__int64)&v20, &v21);
  v5 = *(_DWORD **)(v2 + 8 * v4 + 344);
  v20 = 0;
  v6 = 0;
  v17[0] = 64LL;
  v16 = *(_QWORD *)(v21 + 56);
  v15 = *(_QWORD *)(v21 + 64);
  v17[1] = v5 + 2;
  NextForwardRunSet = RtlFindNextForwardRunSet((__int64)v17, 0, &v20);
  if ( NextForwardRunSet )
  {
    do
    {
      v9 = v20;
      v10 = v20 + NextForwardRunSet;
      if ( v20 < v20 + NextForwardRunSet )
      {
        v11 = v20;
        v12 = 3LL * v20;
        do
        {
          if ( !v5[v12 + 4] || a2 )
          {
            v13 = RtlpFcSendFeatureUsageNotifications(&v5[v12 + 5], v16, v15);
            v14 = v5[v12 + 4] + 1;
            v5[v12 + 4] = v14;
            if ( v13 >= 0 || v13 == -1073741275 || v14 < 5 )
            {
              *(_QWORD *)&v5[v12 + 4] = 0LL;
              v5[v12 + 6] = 0;
              *((_BYTE *)v5 + (v11 >> 3) + 8) &= ~(1 << (v9 & 7));
              --*v5;
            }
            else
            {
              ++v6;
            }
          }
          ++v9;
          ++v11;
          v12 += 3LL;
        }
        while ( v9 < v10 );
      }
      NextForwardRunSet = RtlFindNextForwardRunSet((__int64)v17, v10, &v20);
    }
    while ( NextForwardRunSet );
    v2 = a1;
  }
  result = RtlpFcBufferManagerDereferenceBuffers(v2 + 112, v21);
  if ( v6 )
    return CmFcpManagerArmFeatureUsageRetryTimer(v2);
  return result;
}

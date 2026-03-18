/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0050DC0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetParent @ 0x1C000A040 (AMLIGetParent.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000E14C (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000EB80 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase4(__int64 a1)
{
  _QWORD *v1; // rbx
  const char *v2; // rax
  int v3; // esi
  unsigned int v4; // edi
  char v6; // r8
  const char *v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rbx
  __int64 *v10; // r14
  __int64 *v11; // rbx
  __int64 result; // rax
  __int128 v13; // [rsp+50h] [rbp-48h] BYREF
  __int128 v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+70h] [rbp-28h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (const char *)&unk_1C006FB8B;
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v6 = 0;
  v7 = (const char *)&unk_1C006FB8B;
  if ( v1 )
  {
    v8 = v1[1];
    v6 = (char)v1;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[76];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x56u,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a1,
      v6,
      v2,
      v7);
  *(_DWORD *)(a1 + 212) = 7;
  v15 = 0LL;
  v13 = 0LL;
  WORD1(v13) = 1;
  v14 = 0LL;
  v9 = (__int64 *)AMLIGetParent(v1[95]);
  v10 = AMLIGetNamedChild(v9, 1598640991);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v9);
  if ( v10 )
  {
    v11 = AMLIGetNamedChild(v10, 1414746975);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v10);
    if ( v11 )
    {
      if ( v3 == 1 )
      {
        *(_QWORD *)&v14 = 1LL;
      }
      else
      {
        if ( v3 > 1 )
        {
          if ( v3 <= 4 )
          {
            *(_QWORD *)&v14 = 3LL;
            goto LABEL_17;
          }
          if ( v3 == 5 )
          {
            *(_QWORD *)&v14 = 4LL;
            goto LABEL_17;
          }
        }
        *(_QWORD *)&v14 = 0LL;
      }
LABEL_17:
      v4 = AMLIAsyncEvalObject(v11, 0LL, 1u, &v13, ACPIDeviceCompleteGenericPhase, a1);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v11);
      result = 259LL;
      if ( v4 == 259 )
        return result;
    }
  }
  ACPIDeviceCompleteGenericPhase(0LL, v4, 0LL, a1);
  return 0LL;
}

/*
 * XREFs of HvpGenerateLogEntry @ 0x140705968
 * Callers:
 *     HvStoreModifiedData @ 0x140707744 (HvStoreModifiedData.c)
 * Callees:
 *     HvpGenerateLogEntryHeader @ 0x14029159C (HvpGenerateLogEntryHeader.c)
 *     HvpGenerateLogEntryMetadata @ 0x140291720 (HvpGenerateLogEntryMetadata.c)
 *     HvpAllocateLogBuffers @ 0x140291790 (HvpAllocateLogBuffers.c)
 *     RtlNumberOfSetBits @ 0x140293800 (RtlNumberOfSetBits.c)
 *     HvpGenerateLogEntryDirtyData @ 0x1402952F0 (HvpGenerateLogEntryDirtyData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpLogDirtyVectorUse @ 0x1406BBF58 (CmpLogDirtyVectorUse.c)
 *     HvpGenerateLogEntryChecksums @ 0x140705888 (HvpGenerateLogEntryChecksums.c)
 *     HvpGenerateLogMetadata @ 0x140707290 (HvpGenerateLogMetadata.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall HvpGenerateLogEntry(ULONG_PTR a1, __int64 *a2, _DWORD *a3, unsigned int *a4)
{
  int v4; // edi
  char v6; // r13
  ULONG v7; // eax
  unsigned int v8; // edi
  void *Pool2; // r12
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r14
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r8
  unsigned int v17; // eax
  PVOID *v18; // rdi
  PVOID *v20; // rbx
  __int64 v21; // [rsp+28h] [rbp-40h]
  unsigned int v22; // [rsp+40h] [rbp-28h] BYREF
  int v23; // [rsp+44h] [rbp-24h]
  unsigned int v24; // [rsp+48h] [rbp-20h] BYREF
  PVOID *v25; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+48h] BYREF
  __int64 *v27; // [rsp+B8h] [rbp+50h]
  _DWORD *v28; // [rsp+C0h] [rbp+58h]
  unsigned int *v29; // [rsp+C8h] [rbp+60h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v4 = *(_DWORD *)(a1 + 180);
  v25 = 0LL;
  v22 = 0;
  v6 = v4 == 0;
  v23 = 0;
  v24 = 0;
  v26 = 0;
  HvpGenerateLogMetadata((PRTL_BITMAP)(a1 + 88));
  v7 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 88));
  CmpLogDirtyVectorUse(a1, 1, 0, v7);
  v8 = ((v4 != 0 ? 4135 : 4647) + (*(_DWORD *)(a1 + 104) << 9)) & 0xFFFFF000;
  Pool2 = (void *)ExAllocatePool2(264LL, 0LL, 1867074883LL);
  if ( Pool2 )
  {
    v10 = HvpAllocateLogBuffers((__int64 *)&v25, &v24, v8);
    v12 = v24;
    v13 = v10;
    if ( v10 < 0 )
    {
      v18 = v25;
    }
    else
    {
      v14 = (__int64)v25;
      HvpGenerateLogEntryHeader(a1, (__int64)v25, v11, (__int64)&v26, &v22, v8, 0, v6);
      HvpGenerateLogEntryMetadata(a1, v14, v15, (__int64)&v26, (__int64)&v22, (__int64)Pool2, v23);
      HvpGenerateLogEntryDirtyData(a1, v14, v16, &v26, &v22, v21);
      v17 = *(_DWORD *)(v14 + 24LL * v26 + 16);
      if ( v22 < v17 )
        memset((void *)(*(_QWORD *)(v14 + 24LL * v26 + 8) + v22), 0, v17 - v22);
      HvpGenerateLogEntryChecksums(v14, v12, v6);
      *v27 = v14;
      *v28 = v12;
      *v29 = v8;
      v18 = 0LL;
      v13 = 0;
    }
    ExFreePoolWithTag(Pool2, 0);
    if ( v18 )
    {
      if ( (_DWORD)v12 )
      {
        v20 = v18 + 1;
        do
        {
          if ( *v20 )
          {
            ExFreePoolWithTag(*v20, 0);
            *v20 = 0LL;
          }
          v20 += 3;
          --v12;
        }
        while ( v12 );
      }
      ExFreePoolWithTag(v18, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v13;
}

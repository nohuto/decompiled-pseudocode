/*
 * XREFs of sub_1406C86A0 @ 0x1406C86A0
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_1407F2DBC @ 0x1407F2DBC (sub_1407F2DBC.c)
 * Callees:
 *     sub_140248BC8 @ 0x140248BC8 (sub_140248BC8.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066A374 @ 0x14066A374 (sub_14066A374.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     sub_1406C8888 @ 0x1406C8888 (sub_1406C8888.c)
 *     sub_1406C89B8 @ 0x1406C89B8 (sub_1406C89B8.c)
 *     sub_1406C8B40 @ 0x1406C8B40 (sub_1406C8B40.c)
 *     sub_140724E14 @ 0x140724E14 (sub_140724E14.c)
 *     sub_14085DE38 @ 0x14085DE38 (sub_14085DE38.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406C86A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned __int8 v6; // r12
  _BYTE *v7; // r14
  ULONG v8; // esi
  volatile signed __int32 *v9; // rbx
  int v10; // edi
  struct _KTHREAD *CurrentThread; // rdi
  int *v12; // r15
  volatile signed __int64 *v13; // rsi
  volatile signed __int32 *PoolWithTag; // rax
  __int64 v16; // rdi
  ULONG DestinationSidLength; // [rsp+20h] [rbp-59h] BYREF
  int v18; // [rsp+24h] [rbp-55h]
  __int64 v19; // [rsp+28h] [rbp-51h]
  _BYTE SourceSid[80]; // [rsp+30h] [rbp-49h] BYREF
  char v21; // [rsp+80h] [rbp+7h] BYREF

  v18 = 0;
  DestinationSidLength = 0;
  v5 = a1;
  v19 = a1;
  memset(SourceSid, 0, 0x44uLL);
  v6 = 0;
  v7 = 0LL;
  sub_14066A374(a3, SourceSid, 0x44u, &DestinationSidLength);
  if ( v5 && (*(_DWORD *)(v5 + 80) & 0x10) != 0 )
  {
    v8 = 0;
    v6 = 1;
    DestinationSidLength = 0;
  }
  else
  {
    v8 = DestinationSidLength;
    v7 = SourceSid;
  }
  v9 = (volatile signed __int32 *)sub_1406C8888(v7, v8, v6, 0LL);
  if ( !v9 )
  {
    if ( v5 )
    {
      v12 = 0LL;
    }
    else
    {
      v10 = sub_1406C89B8(SourceSid);
      if ( v10 < 0 )
        return (unsigned int)v10;
      if ( v18 )
      {
        CurrentThread = KeGetCurrentThread();
        v12 = dword_140D3CD18;
        v13 = (volatile signed __int64 *)qword_140D3CBC8;
        v7 = 0LL;
        DestinationSidLength = 0;
        v6 = 1;
        --*((_WORD *)CurrentThread + 242);
        ExAcquirePushLockSharedEx((ULONG_PTR)v13, 0LL);
        v9 = (volatile signed __int32 *)qword_140D3CCF8;
        if ( qword_140D3CCF8 && (unsigned int)sub_1406C8B40(qword_140D3CCF8) )
        {
          sub_140248BC8((__int64)CurrentThread, v13);
          _InterlockedIncrement(v9 + 129);
          goto LABEL_10;
        }
        sub_140248BC8((__int64)CurrentThread, v13);
        v8 = DestinationSidLength;
      }
      else
      {
        v12 = (int *)&v21;
      }
      v5 = v19;
    }
    PoolWithTag = (volatile signed __int32 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v8 + 576LL, 0x62517350u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v10 = sub_14085DE38(v5, v12, PoolWithTag);
    if ( v10 < 0 )
    {
LABEL_28:
      _InterlockedAdd(v9 + 129, 0xFFFFFFFF);
      sub_140724E14((PVOID)v9);
      return (unsigned int)v10;
    }
    if ( v7 )
      RtlCopySid(v8, (PSID)(v9 + 144), SourceSid);
    v16 = sub_1406C8888(v7, v8, v6, v9);
    if ( v16 )
    {
      _InterlockedAdd(v9 + 129, 0xFFFFFFFF);
      sub_140724E14((PVOID)v9);
      v9 = (volatile signed __int32 *)v16;
    }
  }
LABEL_10:
  if ( !*(_QWORD *)(a2 + 1384) )
  {
    *(_QWORD *)(a2 + 1384) = v9;
    return 0LL;
  }
  if ( (_UNKNOWN *)_InterlockedCompareExchange64(
                     (volatile signed __int64 *)(a2 + 1384),
                     (signed __int64)v9,
                     (signed __int64)&unk_140C5A340) == &unk_140C5A340 )
    return 0LL;
  v10 = -1073741823;
  if ( v9 )
    goto LABEL_28;
  return (unsigned int)v10;
}

/*
 * XREFs of ObpChargeQuotaForObject @ 0x14075C234
 * Callers:
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x1402F8900 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     PsReturnSharedPoolQuota @ 0x14069ECA8 (PsReturnSharedPoolQuota.c)
 *     SeComputeQuotaInformationSize @ 0x140728D80 (SeComputeQuotaInformationSize.c)
 *     PsChargeSharedPoolQuota @ 0x14075C334 (PsChargeSharedPoolQuota.c)
 */

__int64 __fastcall ObpChargeQuotaForObject(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rbx
  unsigned __int64 v6; // r8
  char v7; // al
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // rcx
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v16 = 0;
  v5 = OBJECT_HEADER_TO_QUOTA_INFO(a1);
  v7 = *(_BYTE *)(a1 + 27);
  if ( (v7 & 1) == 0 )
    return 0LL;
  *(_BYTE *)(a1 + 27) = v7 & 0xFE;
  if ( v5 )
  {
    v8 = *(_DWORD *)v5;
    v9 = *(_DWORD *)(v5 + 4);
    if ( v6 || (v10 = *(_QWORD *)(a1 + 40)) != 0 && (v6 = v10 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      result = SeComputeQuotaInformationSize(v6, &v16);
      if ( (int)result < 0 )
        return result;
      v2 = v16;
      if ( v16 )
      {
        v12 = PsChargeSharedPoolQuota(a2, v16, 0LL);
        *(_QWORD *)(v5 + 16) = v12;
        if ( !v12 )
          return 3221225540LL;
      }
      *(_DWORD *)(v5 + 8) = v2;
    }
  }
  else
  {
    v14 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
    v8 = *(_DWORD *)(v14 + 104);
    v9 = *(_DWORD *)(v14 + 108);
  }
  v13 = PsChargeSharedPoolQuota(a2, v8, v9);
  *(_QWORD *)(a1 + 32) = v13;
  if ( !v13 )
  {
    if ( v5 )
    {
      v15 = *(char **)(v5 + 16);
      if ( v15 )
        PsReturnSharedPoolQuota(v15, v2, 0LL);
    }
    return 3221225540LL;
  }
  return 0LL;
}

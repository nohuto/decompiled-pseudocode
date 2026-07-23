/*
 * XREFs of AlpcpDestroyBlob @ 0x14071EB74
 * Callers:
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6E00 (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDestroyBlob(__int64 a1, int a2)
{
  _BYTE *v2; // rsi
  __int64 v5; // rdi

  v2 = (_BYTE *)(a1 - 48);
  v5 = AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 48 + 17)];
  (*(void (**)(void))(v5 + 24))();
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
    KeAbPostRelease(a1 - 16);
  }
  if ( (*(int (__fastcall **)(__int64))(v5 + 40))(a1) >= 0 )
  {
    if ( (v2[16] & 2) != 0 )
    {
      ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v5 + 8), v2);
    }
    else if ( *(_QWORD *)(v5 + 48) )
    {
      (*((void (__fastcall **)(_BYTE *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v5 + 8) + 7))(v2);
    }
    else
    {
      ExFreePoolWithTag(v2, *(_DWORD *)(v5 + 4));
    }
  }
}

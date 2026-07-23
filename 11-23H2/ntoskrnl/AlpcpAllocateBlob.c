/*
 * XREFs of AlpcpAllocateBlob @ 0x140739E30
 * Callers:
 *     AlpcpAllocateMessage @ 0x140716AA4 (AlpcpAllocateMessage.c)
 *     AlpcpCreateClientPort @ 0x140717944 (AlpcpCreateClientPort.c)
 *     AlpcpCreateView @ 0x14071C524 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14071CBC8 (AlpcpCreateSecurityContext.c)
 *     AlpcpSendMessage @ 0x140739290 (AlpcpSendMessage.c)
 *     AlpcpCreateSection @ 0x14076C5B8 (AlpcpCreateSection.c)
 *     AlpcpCreateRegion @ 0x1407BA0A0 (AlpcpCreateRegion.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1407BD1B8 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateConnectionPort @ 0x1407CC5E8 (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateReserve @ 0x1407D0144 (AlpcpCreateReserve.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6DC0 (ExAllocateFromNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

char *__fastcall AlpcpAllocateBlob(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdx
  char *result; // rax
  char v6; // dl
  char v7; // cl

  v3 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 48) < v3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      result = (char *)(*((__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))&AlpcpLookasides
                        + 16 * (unsigned __int64)*(unsigned int *)(a1 + 8)
                        + 6))(
                         1LL,
                         v3,
                         *(unsigned int *)(a1 + 4));
    else
      result = (char *)ExAllocatePool2(256LL, v3, *(unsigned int *)(a1 + 4));
    v6 = 0;
  }
  else
  {
    result = (char *)ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(a1 + 8));
    v6 = 2;
  }
  if ( result )
  {
    *(_QWORD *)result = 0LL;
    *((_QWORD *)result + 1) = 0LL;
    *((_QWORD *)result + 2) = 0LL;
    *((_QWORD *)result + 3) = 0LL;
    *((_QWORD *)result + 5) = 0LL;
    *((_QWORD *)result + 4) = 0LL;
    result[17] = *(_BYTE *)a1;
    v7 = result[16];
    *((_QWORD *)result + 1) = result;
    *(_QWORD *)result = result;
    result[16] = v6 | v7 & 0xFD;
    *((_QWORD *)result + 3) = 1LL;
    result += 48;
  }
  return result;
}

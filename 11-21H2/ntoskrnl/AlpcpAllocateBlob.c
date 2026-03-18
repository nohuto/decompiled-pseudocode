/*
 * XREFs of AlpcpAllocateBlob @ 0x1407A73B0
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x140663D08 (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateClientPort @ 0x140667114 (AlpcpCreateClientPort.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x14066AD78 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateSection @ 0x14066BC7C (AlpcpCreateSection.c)
 *     AlpcpCreateRegion @ 0x14066C6AC (AlpcpCreateRegion.c)
 *     AlpcpCreateReserve @ 0x1406CBB84 (AlpcpCreateReserve.c)
 *     AlpcpAllocateMessage @ 0x1407A49B4 (AlpcpAllocateMessage.c)
 *     AlpcpCreateView @ 0x1407A66CC (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x1407A74A4 (AlpcpCreateSecurityContext.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202234 (ExAllocateFromNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpAllocateBlob(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  char v6; // dl
  __int64 v7; // rcx
  char v8; // al

  v3 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 48) < v3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      result = (*((__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))&AlpcpLookasides
                + 16 * (unsigned __int64)*(unsigned int *)(a1 + 8)
                + 6))(
                 1LL,
                 v3,
                 *(unsigned int *)(a1 + 4));
    else
      result = ExAllocatePool2(256LL, v3, *(unsigned int *)(a1 + 4));
    v6 = 0;
  }
  else
  {
    result = (__int64)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(a1 + 8));
    v6 = 2;
  }
  v7 = result;
  if ( result )
  {
    *(_OWORD *)result = 0LL;
    *(_OWORD *)(result + 16) = 0LL;
    *(_OWORD *)(result + 32) = 0LL;
    *(_BYTE *)(result + 17) = *(_BYTE *)a1;
    v8 = *(_BYTE *)(result + 16) & 0xFD;
    *(_QWORD *)(v7 + 8) = v7;
    *(_QWORD *)v7 = v7;
    *(_BYTE *)(v7 + 16) = v6 | v8;
    result = v7 + 48;
    *(_QWORD *)(v7 + 24) = 1LL;
  }
  return result;
}

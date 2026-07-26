/*
 * XREFs of ndisFindRootDevice @ 0x1C014A7C8
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C00962E0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x1C013EAC0 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x1C0010680 (-ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1C00107A4 (WPP_RECORDER_SF_Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001D894 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zqq @ 0x1C001F888 (WPP_RECORDER_SF_Zqq.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 */

wchar_t *__fastcall ndisFindRootDevice(
        unsigned __int16 *a1,
        char a2,
        _UNICODE_STRING **a3,
        const struct _UNICODE_STRING **a4,
        struct _NDIS_MINIPORT_BLOCK **a5,
        enum _NDIS_MP_REFTAG a6)
{
  const struct _UNICODE_STRING *v6; // r14
  char v7; // r15
  const struct _UNICODE_STRING **v8; // rbx
  _UNICODE_STRING **v9; // r12
  UNICODE_STRING *v10; // r13
  __int64 v12; // rdx
  wchar_t *result; // rax
  _UNICODE_STRING *p_DestinationString; // rbp
  KIRQL v15; // al
  struct _NDIS_M_DRIVER_BLOCK *v16; // rsi
  const struct _UNICODE_STRING *i; // rbx
  int v18; // edx
  wchar_t *Buffer; // rax
  unsigned int v20; // r15d
  const struct _UNICODE_STRING *v21; // r12
  char v22; // [rsp+40h] [rbp-68h]
  unsigned int v23; // [rsp+44h] [rbp-64h]
  wchar_t *P; // [rsp+48h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-58h] BYREF
  KIRQL v30; // [rsp+D0h] [rbp+28h]

  v23 = 1;
  v22 = 0;
  v6 = 0LL;
  v7 = 0;
  DestinationString = 0LL;
  v8 = a4;
  v9 = a3;
  v10 = (UNICODE_STRING *)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x15u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      a1);
  DestinationString.Length = v10->Length;
  v12 = (unsigned __int16)(DestinationString.Length + 2);
  DestinationString.MaximumLength = DestinationString.Length + 2;
  *v9 = 0LL;
  *v8 = 0LL;
  *a5 = 0LL;
  result = (wchar_t *)ExAllocatePool2(66LL, v12, 1953711182);
  P = result;
  DestinationString.Buffer = result;
  if ( result )
  {
    RtlUpcaseUnicodeString(&DestinationString, v10, 0);
    p_DestinationString = &DestinationString;
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    v15 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v16 = ndisMiniDriverList;
    v30 = v15;
    if ( ndisMiniDriverList )
    {
      do
      {
        KeAcquireSpinLockAtDpcLevel(&v16->Ref.SpinLock);
        for ( i = (const struct _UNICODE_STRING *)v16->MiniportQueue; i; i = (const struct _UNICODE_STRING *)i->Buffer )
        {
          if ( a2 )
          {
            if ( ndisEqualUnicodeStringDispatchLevel(p_DestinationString, i + 238) )
            {
              v6 = i + 238;
              *a5 = (struct _NDIS_MINIPORT_BLOCK *)i;
              v7 = 1;
              p_DestinationString = (_UNICODE_STRING *)&i[238];
              v22 = 1;
              break;
            }
          }
          else
          {
            Buffer = i[235].Buffer;
            v20 = *(_DWORD *)Buffer;
            if ( *(_DWORD *)Buffer >= v23
              && (v21 = (const struct _UNICODE_STRING *)(Buffer + 4),
                  ndisEqualUnicodeStringDispatchLevel(&DestinationString, (const struct _UNICODE_STRING *)(Buffer + 4))) )
            {
              v23 = v20;
              p_DestinationString = (_UNICODE_STRING *)&i[238];
              v7 = 1;
              *a5 = (struct _NDIS_MINIPORT_BLOCK *)i;
              v22 = 1;
              v6 = v21;
            }
            else
            {
              v7 = v22;
            }
          }
        }
        KeReleaseSpinLockFromDpcLevel(&v16->Ref.SpinLock);
        if ( a2 && v7 )
          break;
        v16 = v16->NextDriver;
      }
      while ( v16 );
      v10 = (UNICODE_STRING *)a1;
      v8 = a4;
      v9 = a3;
      v15 = v30;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v15);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
    ExFreePoolWithTag(P, 0);
    if ( v7 && *a5 )
    {
      if ( ndisReferenceMiniportByHandle(*a5, 1, a6) )
      {
        *v9 = p_DestinationString;
        *v8 = v6;
      }
      else
      {
        *a5 = 0LL;
      }
    }
    result = (wchar_t *)&WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      return (wchar_t *)WPP_RECORDER_SF_Zqq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v18,
                          0xDu,
                          0x16u,
                          (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
                          &v10->Length,
                          (char)p_DestinationString,
                          v6);
  }
  return result;
}

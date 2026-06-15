/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180034488
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036FCC (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x18003B5A4 (-Delete@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18003C8A4 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ?CopyChars@?$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z @ 0x180034024 (-CopyChars@-$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800376E4 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, unsigned int a2)
{
  const void *v2; // r15
  _QWORD *v5; // rbx
  int v6; // esi
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, __int64); // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // r9d
  const void *v11; // rdi
  signed __int32 v12; // eax
  bool v13; // cc
  __int64 result; // rax

  v2 = *a1;
  v5 = (char *)*a1 - 24;
  v6 = *((_DWORD *)v5 + 2);
  v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5);
  v8 = (**v7)(v7, a2, 2LL);
  v9 = v8;
  if ( !v8 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  if ( v6 < (int)a2 )
    a2 = v6;
  v10 = a2 + 1;
  v11 = (const void *)(v8 + 24);
  ATL::CSimpleStringT<unsigned short,0>::CopyChars((void *)(v8 + 24), v10, v2, v10);
  *(_DWORD *)(v9 + 8) = v6;
  v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 4, 0xFFFFFFFF);
  v13 = v12 <= 1;
  result = (unsigned int)(v12 - 1);
  if ( v13 )
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v5 + 8LL))(*v5, v5);
  *a1 = v11;
  return result;
}

/*
 * XREFs of ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x18000B600
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18000B540 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800194A4 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioEndpointId::Copy(CAudioEndpointId *this, const struct CAudioEndpointId *a2)
{
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rbx
  __int64 v5; // r14

  v3 = *(_QWORD *)a2;
  v4 = (volatile signed __int32 *)(*(_QWORD *)this - 24LL);
  if ( (volatile signed __int32 *)(v3 - 24) != v4 )
  {
    if ( *((int *)v4 + 4) >= 0 && *(_QWORD *)(v3 - 24) == *(_QWORD *)v4 )
    {
      v5 = ATL::CSimpleStringT<unsigned short,0>::CloneData();
      if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4, v4);
      *(_QWORD *)this = v5 + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(this, v3, *(unsigned int *)(v3 - 16));
    }
  }
  return 0LL;
}

/*
 * XREFs of ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x1400259D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14004D78C (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CComObjectCached<ATL::CComClassFactory>::Release(volatile signed __int32 *a1)
{
  __int64 v1; // r8
  unsigned int v2; // ebx

  do
    v1 = *((unsigned int *)a1 + 2);
  while ( (_DWORD)v1 != 0x7FFFFFFF && (_DWORD)v1 != _InterlockedCompareExchange(a1 + 2, v1 - 1, v1) );
  v2 = v1 - 1;
  if ( (_DWORD)v1 == 1 )
  {
    if ( a1 )
      ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'((void *)a1);
  }
  else if ( (_DWORD)v1 == 2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *, _QWORD, __int64, __int64))(*(_QWORD *)ATL::_pAtlModule + 16LL))(
      ATL::_pAtlModule,
      *(_QWORD *)ATL::_pAtlModule,
      v1,
      0x7FFFFFFFLL);
  }
  return v2;
}

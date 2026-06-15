/*
 * XREFs of ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180042A68
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x1800423A0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180017782 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180017838 (memset_0.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800400FC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     memcpy_0 @ 0x180048B1C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

volatile signed __int32 *__fastcall ATL::CSimpleStringT<unsigned short,0>::CloneData(volatile signed __int32 *a1)
{
  __int64 (__fastcall ***v2)(_QWORD, _QWORD, __int64); // rax
  volatile signed __int32 *v3; // rdi
  __int64 v4; // rax
  void *v5; // rcx
  size_t v6; // r8

  v2 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 32LL))(*(_QWORD *)a1);
  if ( *((int *)a1 + 4) >= 0 && v2 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))a1 )
  {
    v3 = a1;
    _InterlockedIncrement(a1 + 4);
  }
  else
  {
    v4 = (**v2)(v2, *((unsigned int *)a1 + 2), 2LL);
    v3 = (volatile signed __int32 *)v4;
    if ( !v4 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    *(_DWORD *)(v4 + 8) = *((_DWORD *)a1 + 2);
    v5 = (void *)(v4 + 24);
    v6 = 2LL * (*((_DWORD *)a1 + 2) + 1);
    if ( v6 )
    {
      if ( v4 != -24 )
      {
        if ( a1 != (volatile signed __int32 *)-24LL )
        {
          memcpy_0(v5, (const void *)(a1 + 6), v6);
          return v3;
        }
        memset_0(v5, 0, v6);
      }
      *(_DWORD *)_o__errno(v5) = 22;
      invalid_parameter_noinfo();
    }
  }
  return v3;
}

/*
 * XREFs of ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003E600
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003E4C4 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18003EC6C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Reallocate(__int64 *a1, unsigned int a2)
{
  __int64 v2; // r8
  _DWORD *v4; // rdx
  __int64 v5; // rax
  __int64 result; // rax

  v2 = a2;
  v4 = (_DWORD *)(*a1 - 24);
  if ( v4[3] >= (int)v2
    || (int)v2 <= 0
    || (v5 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, __int64))(**(_QWORD **)v4 + 16LL))(
               *(_QWORD *)v4,
               v4,
               v2,
               2LL)) == 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  }
  result = v5 + 24;
  *a1 = result;
  return result;
}

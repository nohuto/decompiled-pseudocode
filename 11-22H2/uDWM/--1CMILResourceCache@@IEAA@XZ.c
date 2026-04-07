/*
 * XREFs of ??1CMILResourceCache@@IEAA@XZ @ 0x18004ED60
 * Callers:
 *     ??1CBitmap@@UEAA@XZ @ 0x18004ED9C (--1CBitmap@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMILResourceCache::~CMILResourceCache(CMILResourceCache *this)
{
  int i; // eax
  unsigned int v3; // eax
  __int64 v4; // rcx

  *(_QWORD *)this = &CMILResourceCache::`vftable';
  for ( i = *((_DWORD *)this + 8); i; i = *((_DWORD *)this + 8) )
  {
    v3 = i - 1;
    *((_DWORD *)this + 8) = v3;
    v4 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v3);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 1);
}

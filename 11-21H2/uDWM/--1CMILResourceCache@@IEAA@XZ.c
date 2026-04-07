/*
 * XREFs of ??1CMILResourceCache@@IEAA@XZ @ 0x180059DE0
 * Callers:
 *     ??1CBitmap@@UEAA@XZ @ 0x180059D00 (--1CBitmap@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMILResourceCache::~CMILResourceCache(CMILResourceCache *this)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx

  LODWORD(v1) = *((_DWORD *)this + 8);
  *(_QWORD *)this = &CMILResourceCache::`vftable';
  while ( (_DWORD)v1 )
  {
    v3 = *((_QWORD *)this + 1);
    v1 = (unsigned int)(v1 - 1);
    *((_DWORD *)this + 8) = v1;
    v4 = *(_QWORD *)(v3 + 8 * v1);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
      LODWORD(v1) = *((_DWORD *)this + 8);
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 1);
}

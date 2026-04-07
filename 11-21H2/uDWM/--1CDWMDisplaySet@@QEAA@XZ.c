/*
 * XREFs of ??1CDWMDisplaySet@@QEAA@XZ @ 0x18003DCA4
 * Callers:
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18003DC54 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18003DE08 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDWMDisplaySet::~CDWMDisplaySet(CDWMDisplaySet *this)
{
  int v2; // eax
  __int64 v3; // rbx
  _QWORD *i; // rsi
  CDWMDisplay *v5; // rcx
  __int64 v6; // rcx

  v2 = *((_DWORD *)this + 16) - 1;
  v3 = v2;
  for ( i = (_QWORD *)((char *)this + 40); v3 >= 0; --v3 )
  {
    v5 = *(CDWMDisplay **)(*i + 8 * v3);
    if ( v5 )
    {
      CDWMDisplay::Release(v5);
      *(_QWORD *)(*i + 8 * v3) = 0LL;
    }
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  DynArrayImpl<0>::~DynArrayImpl<0>(i);
}

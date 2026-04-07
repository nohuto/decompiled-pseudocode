/*
 * XREFs of ?Initialize@CStoryboard@@MEAAJXZ @ 0x18000FD30
 * Callers:
 *     <none>
 * Callees:
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000FBF0 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStoryboard::Initialize(CStoryboard *this, __int64 a2)
{
  __int64 v3; // rbx
  _DWORD *i; // rsi

  CStoryboard::_LogStoryboardEvent(this, a2);
  v3 = 0LL;
  *((_DWORD *)this + 18) = *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  if ( *((int *)this + 16) < 0 )
  {
    *((_DWORD *)this + 16) = -1;
    for ( i = dword_180120980;
          *i != *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
          i += 2 )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= 0x27 )
        return 0LL;
    }
    *((_DWORD *)this + 16) = dword_180120980[2 * v3 + 1];
  }
  return 0LL;
}

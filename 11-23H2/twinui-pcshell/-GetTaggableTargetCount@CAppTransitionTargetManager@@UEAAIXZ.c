/*
 * XREFs of ?GetTaggableTargetCount@CAppTransitionTargetManager@@UEAAIXZ @ 0x18059A850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionTargetManager::GetTaggableTargetCount(CAppTransitionTargetManager *this)
{
  unsigned int v1; // ebx
  unsigned __int64 v3; // rsi
  unsigned __int64 i; // rbp
  __int64 v5; // rcx

  v1 = 0;
  if ( *((_BYTE *)this + 104) )
  {
    v3 = *((_QWORD *)this + 6);
    for ( i = 0LL; i < v3; ++i )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
      v1 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
    }
  }
  return v1;
}

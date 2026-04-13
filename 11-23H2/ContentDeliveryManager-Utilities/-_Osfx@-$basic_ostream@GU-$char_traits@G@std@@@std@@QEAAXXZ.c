/*
 * XREFs of ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x1800622D8
 * Callers:
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180053790 (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18006525C (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::basic_ostream<unsigned short>::_Osfx(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  result = *a1;
  v3 = *(int *)(*a1 + 4);
  if ( !*(_DWORD *)((char *)a1 + v3 + 16) && (*((_BYTE *)a1 + v3 + 24) & 2) != 0 )
  {
    v4 = *(__int64 *)((char *)a1 + v3 + 72);
    try
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4);
      if ( (_DWORD)result == -1 )
        result = std::basic_ios<unsigned short>::setstate((char *)a1 + *(int *)(*a1 + 4), 4LL);
    }
    catch ( ... )
    {
    }
  }
  return result;
}

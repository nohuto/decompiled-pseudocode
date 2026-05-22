/*
 * XREFs of ?Clear@?$NtList@USectionListEntry@SipcPort@@@@QEAAXXZ @ 0x18011930C
 * Callers:
 *     ??1SipcPort@@UEAA@XZ @ 0x1801188E8 (--1SipcPort@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall NtList<SipcPort::SectionListEntry>::Clear(_QWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  while ( 1 )
  {
    v2 = (_QWORD *)*a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (result = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = result;
    *(_QWORD *)(result + 8) = a1;
    if ( v2 == a1 )
      break;
    v4 = (void (__fastcall ***)(_QWORD, __int64))((unsigned __int64)(v2 - 1) & -(__int64)(v2 != 0LL));
    if ( v4 )
      (**v4)(v4, 1LL);
    --a1[2];
  }
  return result;
}

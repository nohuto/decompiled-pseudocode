/*
 * XREFs of ?PopFront@?$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ @ 0x18011AE2C
 * Callers:
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1801195E0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x18011A340 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtList<AlpcPort::AlpcSectionListEntry>::PopFront(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx

  v1 = (_QWORD *)*a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v2 = *v1, *(_QWORD **)(*v1 + 8LL) != v1) )
    __fastfail(3u);
  *a1 = v2;
  *(_QWORD *)(v2 + 8) = a1;
  if ( v1 == a1 )
    return 0LL;
  --a1[2];
  return (unsigned __int64)(v1 - 1) & -(__int64)(v1 != 0LL);
}

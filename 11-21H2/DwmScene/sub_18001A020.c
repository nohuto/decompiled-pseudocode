/*
 * XREFs of sub_18001A020 @ 0x18001A020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001A020(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != -636936801 || a2[1] != 1166441884 || a2[2] != -99189841 )
      return (unsigned int)-2147467262;
    v4 = 2021869286;
  }
  else
  {
    if ( a2[1] || a2[2] != 192 )
      return (unsigned int)-2147467262;
    v4 = 1174405120;
  }
  if ( a2[3] != v4 )
    return (unsigned int)-2147467262;
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}

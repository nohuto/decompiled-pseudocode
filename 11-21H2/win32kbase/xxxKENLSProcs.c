/*
 * XREFs of xxxKENLSProcs @ 0x1C00B20B0
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxKENLSProcs(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v6; // r10
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = 0;
  if ( !gpKbdNlsTbl )
    return 1LL;
  v6 = *(_QWORD *)(gpKbdNlsTbl + 8);
  if ( !v6 )
    return 1LL;
  v7 = *(_DWORD *)(gpKbdNlsTbl + 4);
  if ( !v7 )
    return 1LL;
  while ( *(_BYTE *)(132LL * --v7 + v6) != *(_BYTE *)(a1 + 2) )
  {
    if ( !v7 )
      return 1LL;
  }
  v8 = v6 + 132LL * v7;
  v9 = *(unsigned __int8 *)(v8 + 1);
  if ( (unsigned __int8)v9 < 3u )
    return ((unsigned int (__fastcall *)(__int64, __int64, __int64))(&aNLSVKFProc)[v9])(v8, a1, a2);
  return v2;
}

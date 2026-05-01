/*
 * XREFs of sub_180009CB0 @ 0x180009CB0
 * Callers:
 *     sub_180002AD0 @ 0x180002AD0 (sub_180002AD0.c)
 *     sub_180002C70 @ 0x180002C70 (sub_180002C70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180009CB0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  *a3 = 0LL;
  v3 = *a1;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  else
    return 0LL;
}

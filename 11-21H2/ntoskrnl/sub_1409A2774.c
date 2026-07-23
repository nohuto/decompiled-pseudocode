/*
 * XREFs of sub_1409A2774 @ 0x1409A2774
 * Callers:
 *     sub_1409A1BAC @ 0x1409A1BAC (sub_1409A1BAC.c)
 *     sub_1409A200C @ 0x1409A200C (sub_1409A200C.c)
 *     sub_1409A25D0 @ 0x1409A25D0 (sub_1409A25D0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1409A2774(__int64 a1, int a2, _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 **v4; // rcx
  __int64 *i; // rax

  v3 = 0LL;
  v4 = (__int64 **)(a1 + 96);
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) == a2 )
    {
      v3 = i;
      break;
    }
  }
  if ( a3 )
    *a3 = v3;
  return v3 != 0LL;
}

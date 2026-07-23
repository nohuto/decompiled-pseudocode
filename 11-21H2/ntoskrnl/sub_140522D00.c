/*
 * XREFs of sub_140522D00 @ 0x140522D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140522F50 @ 0x140522F50 (sub_140522F50.c)
 */

__int64 __fastcall sub_140522D00(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax

  if ( (*a1)-- == 1LL )
  {
    v3 = a1[1];
    if ( v3 )
      *a1 = v3;
    else
      sub_140522F50();
  }
  else
  {
    LOBYTE(a1) = 1;
    sub_14042A5E0(a1, a2);
  }
  return sub_14042A5E0(0LL, 12LL);
}

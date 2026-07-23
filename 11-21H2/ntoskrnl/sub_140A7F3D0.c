/*
 * XREFs of sub_140A7F3D0 @ 0x140A7F3D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140601534 @ 0x140601534 (sub_140601534.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140A7F3D0(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // al

  if ( (dword_140C29FC0 & 2) != 0 && (dword_140C29FC0 & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 1u )
      sub_140A8C924(0xC4u, 0x11BuLL, CurrentIrql, 0LL, 0LL);
  }
  if ( (dword_140C29FC0 & 2) != 0 && *((__int16 *)KeGetCurrentThread() + 242) > 0 )
    sub_140A8C924(0xC4u, 0x3EuLL, 0LL, 0LL, 0LL);
  if ( (qword_140D01450 & 0x400000) == 0 || (dword_140C1AA88 & 0x21) != 0 )
    sub_140601534();
  return sub_14042A5E0(a1, a2);
}

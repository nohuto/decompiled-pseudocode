/*
 * XREFs of sub_140A915C0 @ 0x140A915C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A91A50 @ 0x140A91A50 (sub_140A91A50.c)
 */

__int64 __fastcall sub_140A915C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, _QWORD *a7)
{
  int v7; // ebx

  v7 = sub_14042A5E0(a1, a2);
  if ( v7 >= 0 && (dword_140C29FC0 & 0x10) != 0 )
    sub_140A91A50(*a7);
  return (unsigned int)v7;
}

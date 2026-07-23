/*
 * XREFs of sub_140B4D270 @ 0x140B4D270
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403DB0A0 @ 0x1403DB0A0 (sub_1403DB0A0.c)
 */

__int64 __fastcall sub_140B4D270(unsigned int a1, _DWORD *a2, _DWORD *a3, PVOID **a4)
{
  PVOID *v6; // rax

  if ( byte_140C4A119 )
  {
    *a2 = dword_140C4A11C;
    *a3 = dword_140C4A120;
    v6 = sub_1403DB0A0(a1);
    *a4 = v6;
    return v6 == 0LL ? 0xC000009A : 0;
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
    *a4 = 0LL;
    return 3221225659LL;
  }
}

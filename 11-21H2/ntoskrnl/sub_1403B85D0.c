/*
 * XREFs of sub_1403B85D0 @ 0x1403B85D0
 * Callers:
 *     sub_140AF82A8 @ 0x140AF82A8 (sub_140AF82A8.c)
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     sub_1403B8644 @ 0x1403B8644 (sub_1403B8644.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_1403B85D0(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // eax

  v3 = 0;
  v4 = sub_140213A40(a1, 1128878145, 0, 0);
  if ( v4 && (v5 = sub_1403B8644(v4, a2), v3 = v5, v5 < 0) )
  {
    sub_14051E038(0, 1, v5, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 271);
  }
  else
  {
    if ( !dword_140C54A94 )
      dword_140C54A94 = 1;
    if ( a2 == 1 )
    {
      byte_140C4E218 = 1;
      *(_WORD *)(qword_140C4E210 + 12) = 257;
    }
  }
  return v3;
}

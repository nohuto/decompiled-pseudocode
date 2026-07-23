/*
 * XREFs of sub_140766834 @ 0x140766834
 * Callers:
 *     sub_14076651C @ 0x14076651C (sub_14076651C.c)
 * Callees:
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402D2848 @ 0x1402D2848 (sub_1402D2848.c)
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14081059C @ 0x14081059C (sub_14081059C.c)
 *     sub_1409473F0 @ 0x1409473F0 (sub_1409473F0.c)
 *     sub_140947628 @ 0x140947628 (sub_140947628.c)
 */

__int64 __fastcall sub_140766834(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // edi
  int v10; // edx
  int v11; // edx

  v6 = 0;
  if ( a2 )
  {
    v10 = a2 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          sub_1402D2848(*(_QWORD *)(BugCheckParameter2 + 32));
          *(_DWORD *)(BugCheckParameter2 + 704) |= 8u;
          sub_14081059C(BugCheckParameter2);
        }
      }
      else
      {
        sub_1402D2848(*(_QWORD *)(BugCheckParameter2 + 32));
        *(_DWORD *)(BugCheckParameter2 + 704) |= 0x10u;
        sub_1402DDAE4(BugCheckParameter2, a3, a4);
      }
    }
    else
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 4) == 0 )
        KeBugCheckEx(0xCAu, 0xDuLL, BugCheckParameter2, 4uLL, 0LL);
      sub_1402D25CC(*(_QWORD *)(BugCheckParameter2 + 32));
      *(_DWORD *)(BugCheckParameter2 + 704) &= ~4u;
      sub_1409473F0(BugCheckParameter2);
    }
  }
  else
  {
    sub_1402D2848(*(_QWORD *)(BugCheckParameter2 + 32));
    *(_DWORD *)(BugCheckParameter2 + 704) |= 4u;
    return (unsigned int)sub_140947628(BugCheckParameter2, a5, a6);
  }
  return v6;
}

/*
 * XREFs of sub_14071B640 @ 0x14071B640
 * Callers:
 *     sub_14065E1EC @ 0x14065E1EC (sub_14065E1EC.c)
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14071B4A0 @ 0x14071B4A0 (sub_14071B4A0.c)
 *     sub_14085BE8C @ 0x14085BE8C (sub_14085BE8C.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 *     sub_140923C08 @ 0x140923C08 (sub_140923C08.c)
 * Callees:
 *     sub_140346D80 @ 0x140346D80 (sub_140346D80.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140AB4464 @ 0x140AB4464 (sub_140AB4464.c)
 *     sub_140AB4484 @ 0x140AB4484 (sub_140AB4484.c)
 */

char __fastcall sub_14071B640(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int64 a3, char a4, char a5)
{
  ULONG_PTR v6; // r14
  char v9; // di
  __int64 v10; // rsi
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0;
  v6 = (unsigned int)BugCheckParameter4;
  v9 = 1;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter3 + 32);
    if ( !a4 )
      sub_140AB4464(*(_QWORD *)(BugCheckParameter3 + 32));
    if ( sub_140346D80(v10, v6, &v12) )
    {
      if ( !a3 )
        *(_QWORD *)(BugCheckParameter3 + 88) = *(_QWORD *)(*(_QWORD *)(v10 + 1888) + 16LL * v12 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v6);
      v9 = 0;
    }
    if ( !a4 )
      sub_140AB4484(v10);
  }
  return v9;
}

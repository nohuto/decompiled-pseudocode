/*
 * XREFs of sub_14091AAA0 @ 0x14091AAA0
 * Callers:
 *     sub_14091A9EC @ 0x14091A9EC (sub_14091A9EC.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407C9904 @ 0x1407C9904 (sub_1407C9904.c)
 *     sub_1409221DC @ 0x1409221DC (sub_1409221DC.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_14091AAA0(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v9; // edi
  int v10; // r9d
  _QWORD *v11; // rax
  unsigned int v12; // r8d
  _QWORD *v13; // rsi
  void *v14; // rax
  __int16 v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  result = sub_140AB4534(&v15);
  v9 = 0;
  if ( v10 )
  {
    do
    {
      v11 = (_QWORD *)sub_140AB44C0(BugCheckParameter2, v9 + a2);
      v13 = v11;
      if ( !v11 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v12, 0xC41uLL);
      v14 = (void *)sub_1407C9904(BugCheckParameter2, v11, (__int64)&v15);
      memmove(v14, (const void *)(a3 + v9), 0x1000uLL);
      result = sub_1409221DC(BugCheckParameter2, v13, &v15);
      v9 += 4096;
    }
    while ( v9 < a4 );
  }
  return result;
}

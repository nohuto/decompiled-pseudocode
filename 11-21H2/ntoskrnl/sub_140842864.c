/*
 * XREFs of sub_140842864 @ 0x140842864
 * Callers:
 *     sub_1407ED53C @ 0x1407ED53C (sub_1407ED53C.c)
 * Callees:
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140842904 @ 0x140842904 (sub_140842904.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 */

__int64 __fastcall sub_140842864(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // eax

  v4 = a2;
  v6 = -1073741823;
  if ( (_DWORD)a2 )
  {
    v7 = sub_140792CCC(a1, a2, 24577);
    if ( v7 )
    {
      v8 = sub_140842A24(a1, v7);
      if ( v8 )
      {
        *(_QWORD *)a3 = v8;
        v9 = sub_140792CCC(a1, v4, 20485);
        if ( v9 )
        {
          *(_DWORD *)(a3 + 8) = 11;
          *(_QWORD *)(a3 + 32) = sub_140842904(a1, v9, 0LL);
          v6 = 0;
          *(_QWORD *)(a3 + 16) = a3 + 32;
          *(_DWORD *)(a3 + 12) = 8;
        }
      }
    }
  }
  return v6;
}

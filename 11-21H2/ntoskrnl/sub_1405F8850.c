/*
 * XREFs of sub_1405F8850 @ 0x1405F8850
 * Callers:
 *     sub_1405F8978 @ 0x1405F8978 (sub_1405F8978.c)
 * Callees:
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_1405FD08C @ 0x1405FD08C (sub_1405FD08C.c)
 */

void __fastcall sub_1405F8850(__int64 a1, int a2, unsigned int a3)
{
  _DWORD *v3; // rbx
  unsigned int v4; // r11d
  unsigned int v7; // ecx
  int v8; // ecx
  unsigned __int64 v9; // rax
  bool v10; // zf
  int v11; // ecx
  unsigned int v12; // eax

  v3 = *(_DWORD **)(a1 + 1816);
  v4 = a3;
  if ( v3
    && a3 + 1073741549 > 1
    && a3 != -1073741670
    && a3 != -1073741691
    && a3 != -1073741801
    && a3 != -1073741058
    && ((*(_DWORD *)(a1 + 776) & 0x2000) == 0 || a3 != -2147483626) )
  {
    if ( a2 )
    {
      v9 = (unsigned __int64)sub_1402F5718() >> 23;
      v10 = *v3 == v3[4];
      v3[4] = *v3;
      if ( !v10 || (v11 = v3[3]) == 0 )
      {
        v3[3] = v9;
        return;
      }
      v12 = v9 - v11;
      v8 = 4;
      if ( v12 <= 7 )
        return;
    }
    else
    {
      if ( (++v3[1] & 0xF) != 0 )
        return;
      v7 = (*v3 - v3[2]) & 0xFFFFFFE0;
      v3[2] = *v3;
      if ( v7 > 0x200 )
        return;
      v8 = 3;
    }
    if ( (int)sub_1405FD08C(&unk_140D31A00, *(_QWORD *)(a1 + 800), v8 != 3, v4) < 0 && !a2 )
      --v3[1];
  }
}

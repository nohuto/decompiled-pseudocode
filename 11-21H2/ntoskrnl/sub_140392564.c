/*
 * XREFs of sub_140392564 @ 0x140392564
 * Callers:
 *     sub_1403923A4 @ 0x1403923A4 (sub_1403923A4.c)
 * Callees:
 *     sub_1403925F8 @ 0x1403925F8 (sub_1403925F8.c)
 */

__int64 __fastcall sub_140392564(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v5; // rdi
  int v6; // r10d
  unsigned __int64 v7; // r11
  __int64 v9; // rdx
  __int64 v10; // rax

  v2 = *(_DWORD *)(a2 + 24);
  v3 = 0LL;
  if ( v2 )
  {
    v5 = *(_QWORD *)a2 + 16LL * (unsigned int)(v2 - 1);
    *(_QWORD *)(v5 + 8) += 8LL;
    v6 = **(_DWORD **)v5;
    v7 = *(_QWORD *)v5 + 8 * ((unsigned __int16)v6 + 2LL);
    if ( *(_QWORD *)(v5 + 8) >= v7 )
    {
      v9 = *(_QWORD *)v5 + 16LL;
      if ( (_WORD)v6 )
        v9 = v7 - 8;
      *(_QWORD *)(v5 + 8) = v9;
      v10 = sub_1403925F8(a1, a2);
      if ( v10 )
      {
        v3 = -1LL;
        if ( v10 != -1 )
        {
          v3 = v10 + 16;
          *(_QWORD *)(v5 + 8) = v10 + 16;
        }
      }
    }
    else
    {
      return *(_QWORD *)(v5 + 8);
    }
  }
  return v3;
}

/*
 * XREFs of sub_1403C49DC @ 0x1403C49DC
 * Callers:
 *     sub_1403C48E0 @ 0x1403C48E0 (sub_1403C48E0.c)
 *     sub_140596DF0 @ 0x140596DF0 (sub_140596DF0.c)
 * Callees:
 *     sub_140269FA8 @ 0x140269FA8 (sub_140269FA8.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_140274D80 @ 0x140274D80 (sub_140274D80.c)
 *     sub_1403171A0 @ 0x1403171A0 (sub_1403171A0.c)
 *     sub_140332A80 @ 0x140332A80 (sub_140332A80.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 */

void __fastcall sub_1403C49DC(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, char a6)
{
  int v10; // r10d
  int v11; // esi
  __int64 v12; // rbx

  v10 = (unsigned __int8)sub_140274D80(a1, a3);
  if ( v10 == 7 && (unsigned int)sub_140273234(a4) < dword_140C52B6C )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( (unsigned int)(v10 - 1) <= 5 )
      sub_1403171A0(a1, a3, 1u, 0);
  }
  v12 = 0LL;
  if ( (a6 & 4) == 0 )
    v12 = *(_QWORD *)(a5 + 8);
  if ( (unsigned int)sub_140332A80(a1, a4, a2, v12, *(_DWORD *)a5, (a6 & 4) != 0) )
  {
    if ( v11 && (a6 & 4) == 0 && *(_DWORD *)a5 )
    {
      if ( !v12 )
      {
        sub_140333040(a1, a2);
        return;
      }
    }
    else if ( !v12 )
    {
      return;
    }
    sub_140269FA8(v12, 0);
  }
}

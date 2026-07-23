/*
 * XREFs of sub_140840CD8 @ 0x140840CD8
 * Callers:
 *     sub_14083FE80 @ 0x14083FE80 (sub_14083FE80.c)
 * Callees:
 *     sub_140840904 @ 0x140840904 (sub_140840904.c)
 *     sub_140840DE0 @ 0x140840DE0 (sub_140840DE0.c)
 */

__int64 __fastcall sub_140840CD8(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r8

  v1 = 0;
  if ( a1 )
  {
    v3 = 0LL;
    if ( dword_140C16E40 )
    {
      while ( 1 )
      {
        v4 = qword_140C16C40[v3];
        v5 = (unsigned int)v3;
        v6 = *(_QWORD *)v4 - *(_QWORD *)a1;
        if ( *(_QWORD *)v4 == *(_QWORD *)a1 )
          v6 = *(_QWORD *)(v4 + 8) - *(_QWORD *)(a1 + 8);
        if ( !v6 && *(_WORD *)(v4 + 16) == *(_WORD *)(a1 + 16) )
          break;
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= dword_140C16E40 )
          goto LABEL_7;
      }
      v1 = sub_140840DE0(a1, qword_140C16C40[v3]);
      if ( v1 >= 0 )
      {
        qword_140C16C40[v5] = a1;
        sub_140840904(v4);
      }
    }
    else
    {
LABEL_7:
      if ( (unsigned int)dword_140C16E40 >= 0x40 )
        return (unsigned int)-1073741823;
      else
        qword_140C16C40[dword_140C16E40++] = a1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}

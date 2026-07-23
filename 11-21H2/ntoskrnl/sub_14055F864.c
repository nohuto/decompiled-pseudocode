/*
 * XREFs of sub_14055F864 @ 0x14055F864
 * Callers:
 *     sub_140942A64 @ 0x140942A64 (sub_140942A64.c)
 *     sub_140942DE4 @ 0x140942DE4 (sub_140942DE4.c)
 * Callees:
 *     sub_14055F904 @ 0x14055F904 (sub_14055F904.c)
 *     sub_14076BD4C @ 0x14076BD4C (sub_14076BD4C.c)
 *     sub_140942760 @ 0x140942760 (sub_140942760.c)
 *     sub_140942948 @ 0x140942948 (sub_140942948.c)
 */

__int64 __fastcall sub_14055F864(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rdx
  _QWORD *v7; // rax
  unsigned int v8; // ebx
  _QWORD *v9; // rcx
  __int64 v10; // r11
  __int64 v11; // rax

  v5 = (_QWORD *)(a1 + 16);
  v7 = *(_QWORD **)(a1 + 16);
  v8 = 0;
  while ( v7 != v5 )
  {
    v9 = v7;
    v7 = (_QWORD *)*v7;
    if ( v9[4] == a2 )
    {
      sub_140942760(v9, a3);
      return v8;
    }
  }
  if ( (unsigned __int8)sub_140942948(a1, a2) )
  {
    v11 = sub_14055F904(a1, v10, a3);
    if ( v11 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v11 + 32) + 48LL) )
        sub_14076BD4C(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 48LL));
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}

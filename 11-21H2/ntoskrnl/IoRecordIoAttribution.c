/*
 * XREFs of IoRecordIoAttribution @ 0x140365D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140365DD0 @ 0x140365DD0 (sub_140365DD0.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     sub_140366864 @ 0x140366864 (sub_140366864.c)
 */

__int64 __fastcall IoRecordIoAttribution(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  int v6; // eax
  int v7; // ebx

  if ( *a2 == 1 )
  {
    v3 = sub_140365DD0();
    v4 = v3;
    if ( v3 )
    {
      v5 = v3;
      while ( 1 )
      {
        v6 = a2[1];
        if ( (v6 & 0x800) == 0 || (v6 & 0x200) != 0 || *(_QWORD *)(v5 + 176) )
        {
          v7 = sub_140366864(v5, a2, 0LL);
          if ( v7 < 0 )
            break;
        }
        v5 = *(_QWORD *)(v5 + 176);
        if ( !v5 )
        {
          v7 = 0;
          break;
        }
      }
      sub_140366814(v4);
    }
    else
    {
      return (unsigned int)-1073741816;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return (unsigned int)v7;
}

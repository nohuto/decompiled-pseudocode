/*
 * XREFs of sub_14098EE60 @ 0x14098EE60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_14069DDE8 @ 0x14069DDE8 (sub_14069DDE8.c)
 *     sub_140848BE8 @ 0x140848BE8 (sub_140848BE8.c)
 */

void __fastcall sub_14098EE60(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r10
  char v4; // cl
  unsigned int v5; // r11d
  unsigned int v6; // r8d
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rax

  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  if ( a1[2] )
  {
    v2 = qword_140D06970;
    v3 = 0LL;
    v4 = 0;
    while ( (__int64 *)v2 != &qword_140D06970 )
    {
      v5 = *(_DWORD *)(v2 + 296);
      v6 = 0;
      v3 = v2;
      if ( v5 )
      {
        v7 = *(_QWORD *)(v2 + 312);
        while ( 1 )
        {
          v8 = 136LL * v6;
          if ( *(_DWORD *)(v8 + v7 + 16) )
          {
            if ( *(_DWORD *)(v8 + v7 + 20) == a1[1] )
              break;
          }
          if ( ++v6 >= v5 )
            goto LABEL_8;
        }
        v4 = 1;
        break;
      }
LABEL_8:
      v2 = *(_QWORD *)v2;
    }
    v9 = v3 & -(__int64)(v4 != 0);
  }
  else
  {
    v9 = *(_QWORD *)(sub_140348800(a1[1]) + 33968);
  }
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 444) == *a1 )
    {
      sub_140224C00(&qword_140C22FE0);
    }
    else
    {
      *(_DWORD *)(v9 + 444) = *a1;
      sub_14069DDE8(1);
    }
    if ( (unsigned int)dword_140D06A5C > 1 )
    {
      sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
      sub_140848BE8(1);
    }
  }
}

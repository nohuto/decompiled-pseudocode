/*
 * XREFs of sub_1405CF580 @ 0x1405CF580
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405CF580(int a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r11
  unsigned int v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // r10d
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax

  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  v4 = 0;
  if ( byte_140D069E0 )
  {
    if ( a1 )
    {
      v5 = *((_QWORD *)KeGetCurrentPrcb() + 4246);
      v6 = *(_DWORD *)(v5 + 444);
      v7 = *(_DWORD *)(v5 + 452);
      if ( *(_BYTE *)(v5 + 541) )
        v8 = *(_DWORD *)(v5 + 452);
      else
        v8 = *(_DWORD *)(v5 + 448);
      v9 = *(_DWORD *)(v5 + 528);
      if ( v8 > v9 )
        v9 = v8;
      if ( *(_BYTE *)(v5 + 542) )
        v10 = *(_DWORD *)(v5 + 444);
      else
        v10 = 100;
      v11 = *(_DWORD *)(v5 + 520);
      if ( v11 < 0x64 && v10 >= v11 )
        v10 = *(_DWORD *)(v5 + 520);
      v12 = *(_DWORD *)(v5 + 524);
      if ( v10 < v12 )
        v12 = v10;
      v13 = (unsigned int)((*(_DWORD *)(v5 + 440) >> 1) + 100 * a1) / *(_DWORD *)(v5 + 440);
      v14 = v13;
      if ( v12 < v13 )
        v13 = v12;
      v15 = v14;
      if ( v9 < (unsigned int)v14 )
        v15 = v9;
      if ( v15 <= v13 )
      {
        v16 = v13;
      }
      else
      {
        v16 = v14;
        if ( v9 < (unsigned int)v14 )
          v16 = v9;
      }
      if ( v16 >= v6 )
      {
        v18 = *(_DWORD *)(v5 + 444);
      }
      else
      {
        v17 = v14;
        if ( v9 < (unsigned int)v14 )
          v17 = v9;
        if ( v17 <= v13 )
        {
          v18 = v13;
        }
        else
        {
          v18 = v14;
          if ( v9 < (unsigned int)v14 )
            v18 = v9;
        }
      }
      if ( v18 <= v7 )
      {
        v14 = v7;
      }
      else
      {
        v19 = v14;
        if ( v9 < (unsigned int)v14 )
          v19 = v9;
        if ( v19 <= v13 )
        {
          v20 = v13;
        }
        else
        {
          v20 = v14;
          if ( v9 < (unsigned int)v14 )
            v20 = v9;
        }
        if ( v20 >= v6 )
        {
          v14 = v6;
        }
        else
        {
          v21 = v14;
          if ( v9 < (unsigned int)v14 )
            v21 = v9;
          if ( v21 <= v13 )
          {
            v14 = v13;
          }
          else if ( v9 < (unsigned int)v14 )
          {
            v14 = v9;
          }
        }
      }
      sub_14042A5E0(*(_QWORD *)(*(_QWORD *)(v5 + 312) + 8LL), v14);
    }
    else
    {
      *a2 = 0LL;
    }
  }
  else
  {
    v4 = -1073741637;
  }
  sub_140224C00(&qword_140C22FE0);
  return v4;
}

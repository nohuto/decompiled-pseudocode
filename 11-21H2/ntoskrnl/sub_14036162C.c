/*
 * XREFs of sub_14036162C @ 0x14036162C
 * Callers:
 *     sub_140361540 @ 0x140361540 (sub_140361540.c)
 * Callees:
 *     sub_140649584 @ 0x140649584 (sub_140649584.c)
 *     sub_14064966C @ 0x14064966C (sub_14064966C.c)
 */

_DWORD *__fastcall sub_14036162C(__int64 a1, signed __int32 *a2, int a3)
{
  int v3; // r11d
  _DWORD *v5; // r9
  int v6; // ecx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // ecx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  int v14; // ebx
  unsigned __int32 v15; // eax
  int v16; // edx
  unsigned __int32 v17; // ett

  v3 = 0;
  v5 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !a3 )
    goto LABEL_28;
  if ( a3 == 1 )
  {
LABEL_27:
    sub_140649584(a2, (unsigned int)a3);
    return v5;
  }
  if ( a3 <= 1 )
    goto LABEL_20;
  if ( a3 <= 3 )
  {
LABEL_8:
    v6 = 0;
    v7 = a3 - 2;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 3;
        if ( v9 )
        {
          if ( v9 == 1 )
            v6 = 16;
        }
        else
        {
          v6 = 4;
        }
      }
      else
      {
        v6 = 8;
      }
    }
    else
    {
      v6 = 2;
    }
    v10 = v6 | 1;
    _m_prefetchw(a2);
    v11 = *a2;
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange(a2, v10 | v11, v11);
    }
    while ( v12 != v11 );
    *v5 = (v11 & 1) == 0;
    LOBYTE(v3) = (v11 & v10 & 0xFFFFFFFE) == (v10 & 0xFFFFFFFE);
    v5[4] = v3;
    return v5;
  }
  if ( a3 == 4 )
  {
LABEL_28:
    sub_14064966C(a2, (unsigned int)a3);
    return v5;
  }
  if ( a3 == 5 )
    goto LABEL_27;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_20:
  v14 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v15 = a2[1];
    do
    {
      if ( (v15 & 0x10) == 0 || (v16 = 1, ((v15 >> 5) & 0x3F) != v14) )
        v16 = 0;
      *(_DWORD *)(a1 + 16) = v16;
      v17 = v15;
      v15 = _InterlockedCompareExchange(a2 + 1, (32 * (v14 & 0x3F)) | v15 & 0xFFFFF81F | 0x10, v15);
    }
    while ( v17 != v15 );
  }
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 12) = 0;
  return v5;
}

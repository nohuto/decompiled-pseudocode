/*
 * XREFs of HvCheckBin @ 0x140745960
 * Callers:
 *     HvCheckHive @ 0x14070A2B0 (HvCheckHive.c)
 * Callees:
 *     RtlSetBits @ 0x1402E07C0 (RtlSetBits.c)
 *     SetFailureLocation @ 0x1402F6C80 (SetFailureLocation.c)
 *     HvMoveLayoutStats @ 0x140745BA4 (HvMoveLayoutStats.c)
 *     HvAddToLayoutStats @ 0x140745BC0 (HvAddToLayoutStats.c)
 */

__int64 __fastcall HvCheckBin(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4,
        PRTL_BITMAP BitMapHeader,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r10
  unsigned int v8; // r12d
  unsigned int v10; // r11d
  unsigned int v11; // r15d
  int v12; // ebp
  int *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  int *v17; // rsi
  char v19; // al
  int v20; // [rsp+20h] [rbp-48h]
  unsigned int v21; // [rsp+80h] [rbp+18h]
  _DWORD *v22; // [rsp+88h] [rbp+20h]

  v22 = a4;
  v7 = a7;
  v8 = 0;
  v21 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( a7 )
    *(_QWORD *)(a7 + 328) = a2;
  v13 = a2 + 8;
  v14 = (unsigned int)a2[2];
  if ( v13 >= (_DWORD *)((char *)a2 + v14) )
  {
LABEL_14:
    if ( v11 + v10 + 32LL == (unsigned int)v14 )
    {
      if ( v13 == (_DWORD *)((char *)a2 + (unsigned int)v14) )
      {
        if ( a4 )
          *a4 += v12;
        return v8;
      }
      v20 = 112;
    }
    else
    {
      v20 = 96;
    }
    v8 = -1073741492;
    SetFailureLocation(v7, 0, 17, -1073741492, v20);
    return v8;
  }
  while ( 1 )
  {
    v15 = *v13;
    if ( (int)v15 >= 0 )
      break;
    v16 = (unsigned int)-(int)v15;
    if ( (unsigned int)v16 > (unsigned int)v14
      || (v17 = (int *)((char *)v13 + v16), (char *)v13 + v16 > (char *)a2 + (unsigned int)v14) )
    {
      v8 = -1073741492;
      if ( !a7 )
        return v8;
      SetFailureLocation(a7, 0, 17, -1073741492, 32);
      goto LABEL_39;
    }
    v11 -= v15;
    v12 = v12 - v15 - 4;
    if ( v11 > (unsigned int)v14 )
    {
      v8 = -1073741492;
      if ( !a7 )
        return v8;
      SetFailureLocation(a7, 0, 17, -1073741492, 48);
      goto LABEL_39;
    }
    if ( a6 && (unsigned int)v16 >= 0x54uLL && *((_WORD *)v13 + 2) == 27502 )
    {
      v19 = *((_BYTE *)v13 + 16);
      if ( (v19 & 2) != 0 )
      {
        HvMoveLayoutStats(a6 + 32);
        HvMoveLayoutStats(a6 + 16);
        *(_QWORD *)(a6 + 48) = 0LL;
      }
      else if ( (v19 & 1) != 0 )
      {
        HvAddToLayoutStats(a6 + 32);
        HvMoveLayoutStats(a6 + 16);
        if ( !*(_DWORD *)(a6 + 48) )
          *(_DWORD *)(a6 + 48) = a2[1];
        *(_DWORD *)(a6 + 52) = 0;
      }
      else
      {
        HvAddToLayoutStats(a6 + 16);
        if ( !*(_DWORD *)(a6 + 52) )
          *(_DWORD *)(a6 + 52) = a2[1];
      }
    }
    if ( BitMapHeader )
    {
      RtlSetBits(BitMapHeader, (unsigned int)((_DWORD)v13 + a2[1] - (_DWORD)a2) >> 3, 1u);
      v10 = v21;
    }
LABEL_12:
    v13 = v17;
    LODWORD(v14) = a2[2];
    if ( v17 >= (_DWORD *)((char *)a2 + (unsigned int)v14) )
    {
      a4 = v22;
      v7 = a7;
      goto LABEL_14;
    }
  }
  if ( (unsigned int)v15 <= (unsigned int)v14 && (char *)v13 + v15 <= (char *)a2 + (unsigned int)v14 && (_DWORD)v15 )
  {
    v10 += v15;
    v21 = v10;
    if ( v10 <= (unsigned int)v14 )
    {
      if ( a6 )
      {
        HvAddToLayoutStats(a6);
        ((void (*)(void))HvMoveLayoutStats)();
      }
      v17 = (int *)((char *)v13 + *v13);
      goto LABEL_12;
    }
    v8 = -1073741492;
    if ( a7 )
    {
      SetFailureLocation(a7, 0, 17, -1073741492, 80);
LABEL_39:
      *(_QWORD *)(a7 + 336) = v13;
      return v8;
    }
    return v8;
  }
  if ( a7 )
  {
    SetFailureLocation(a7, 0, 17, -1073741492, 64);
    *(_QWORD *)(a7 + 336) = v13;
  }
  return 60LL;
}

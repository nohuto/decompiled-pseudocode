/*
 * XREFs of ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C001B790
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C016EED0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C001B718 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEqual@ERECTL@@QEBAHAEBV1@@Z @ 0x1C001E974 (-bEqual@ERECTL@@QEBAHAEBV1@@Z.c)
 */

void __fastcall XCLIPOBJ::vSetup(XCLIPOBJ *this, struct REGION *a2, struct ERECTL *a3, int a4)
{
  int *v5; // rsi
  int v6; // r10d
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // eax
  int v13; // r9d
  int *v14; // r8
  int v15; // r14d
  char v16; // r15
  int v17; // r11d
  int v18; // r12d
  int v19; // edx
  int v20; // eax
  __int64 v21; // r10
  int *v22; // r13
  int *v23; // rcx
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  ERECTL *v27; // rcx
  __int128 i; // [rsp+20h] [rbp-48h] BYREF
  int v29; // [rsp+70h] [rbp+8h]
  int v30; // [rsp+78h] [rbp+10h]
  int v31; // [rsp+80h] [rbp+18h]

  *((_QWORD *)this + 7) = a2;
  *((_DWORD *)this + 5) = 0;
  v5 = (int *)((char *)this + 4);
  v6 = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 4) = v6;
  v9 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 3) = v9;
  v10 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 2) = v10;
  v11 = *(_DWORD *)a3;
  *v5 = *(_DWORD *)a3;
  *(_DWORD *)this = *((_DWORD *)a2 + 7);
  if ( *((_DWORD *)a2 + 20) > 0x38u
    || v11 < *((_DWORD *)a2 + 24)
    || v10 < *((_DWORD *)a2 + 25)
    || v9 > *((_DWORD *)a2 + 26)
    || a4 == 1
    || v6 > *((_DWORD *)a2 + 27)
    || v10 >= v6
    || v11 >= v9 )
  {
    if ( v11 <= *((_DWORD *)a2 + 24) )
      v11 = *((_DWORD *)a2 + 24);
    *v5 = v11;
    if ( v10 <= *((_DWORD *)a2 + 25) )
      v10 = *((_DWORD *)a2 + 25);
    *((_DWORD *)this + 2) = v10;
    if ( v9 >= *((_DWORD *)a2 + 26) )
      v9 = *((_DWORD *)a2 + 26);
    *((_DWORD *)this + 3) = v9;
    if ( v6 >= *((_DWORD *)a2 + 27) )
      v6 = *((_DWORD *)a2 + 27);
    *((_DWORD *)this + 4) = v6;
    if ( v11 >= v9 || v10 >= v6 )
    {
      *v5 = v9;
      return;
    }
    if ( a4 != 1 && *((_DWORD *)a2 + 20) <= 0x38u )
    {
      if ( a4 != 2 )
        *((_BYTE *)this + 20) = 1;
      return;
    }
    *((_DWORD *)this + 34) = 0;
    v12 = *((_DWORD *)a2 + 20);
    if ( v12 > 0x70 )
    {
      *((_BYTE *)this + 21) = 3;
    }
    else if ( v12 > 0x38 )
    {
      *((_BYTE *)this + 21) = 2;
    }
    v13 = *((_DWORD *)a2 + 21);
    v14 = (int *)*((_QWORD *)a2 + 11);
    v15 = a4 != 1;
    for ( i = 0LL; v13; --v13 )
    {
      if ( v5[1] < v14[2] )
        break;
      v14 = (int *)((char *)v14 + (unsigned int)(4 * *v14 + 16));
    }
    v16 = 1;
    if ( !v13 )
    {
LABEL_47:
      ERECTL::operator*=(v5, (int *)&i);
      if ( v15 )
      {
        if ( a4 || (unsigned int)ERECTL::bEqual(v27, a3) )
          return;
      }
      else if ( *((_DWORD *)this + 34) != 1 )
      {
        v16 = 3;
      }
      *((_BYTE *)this + 20) = v16;
      return;
    }
    v17 = DWORD2(i);
    v18 = i;
    while ( 1 )
    {
      --v13;
      if ( v14[1] >= v5[3] )
        goto LABEL_47;
      v19 = *v14;
      v20 = 0;
      v21 = 0LL;
      v30 = 0;
      if ( *v14 )
        break;
LABEL_46:
      v15 &= v20;
      v14 = (int *)((char *)v14 + (unsigned int)(4 * v19 + 16));
      if ( !v13 )
        goto LABEL_47;
    }
    while ( 1 )
    {
      v22 = &v14[(unsigned int)(v21 + 1)];
      v31 = *v5;
      if ( v22[3] > *v5 )
        break;
LABEL_44:
      v19 = *v14;
      v21 = (unsigned int)(v21 + 2);
      if ( (_DWORD)v21 == *v14 )
      {
LABEL_45:
        v20 = v30;
        goto LABEL_46;
      }
    }
    v23 = &v14[v21];
    if ( v23[3] >= v5[2] )
      goto LABEL_45;
    if ( ++*((_DWORD *)this + 34) >= 0xAu )
    {
      *((_BYTE *)this + 20) = 3;
      *((_DWORD *)this + 34) = -1;
      return;
    }
    v24 = v23[3];
    v25 = v22[3];
    v29 = v14[1];
    v26 = v14[2];
    if ( v18 == v17 || (v5 = (int *)((char *)this + 4), DWORD1(i) == HIDWORD(i)) )
    {
      v18 = v24;
      DWORD1(i) = v14[1];
      v17 = v25;
      LODWORD(i) = v24;
      DWORD2(i) = v25;
    }
    else
    {
      if ( v24 < v18 )
        v18 = v24;
      LODWORD(i) = v18;
      v5 = (int *)((char *)this + 4);
      if ( v29 < SDWORD1(i) )
      {
        DWORD1(i) = v29;
        v5 = (int *)((char *)this + 4);
      }
      if ( v25 > v17 )
        v17 = v25;
      DWORD2(i) = v17;
      if ( v26 <= SHIDWORD(i) )
        goto LABEL_41;
    }
    HIDWORD(i) = v26;
LABEL_41:
    if ( v31 >= v24 && v5[2] <= v25 )
      v30 = 1;
    goto LABEL_44;
  }
}

/*
 * XREFs of ?vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z @ 0x1C0093CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C001DE00 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 */

void __fastcall EPATHOBJ::vOffset(EPATHOBJ *this, struct _POINTL *a2)
{
  _DWORD *v3; // rax
  int v5; // r8d
  int v6; // r9d
  int v7; // r10d
  int v8; // eax
  int v9; // r11d
  __int64 *i; // r8
  __int64 *j; // rdx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  int *v19; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 1);
  v5 = 16 * a2->y;
  v6 = 16 * a2->x;
  v3[12] += v6;
  v3[14] += v6;
  v3[13] += v5;
  v3[15] += v5;
  v7 = v5 >> 4;
  v8 = *(_DWORD *)this & 4;
  if ( !v8 )
    v7 = v5;
  v9 = v6 >> 4;
  if ( (v8 & 4) == 0 )
    v9 = v6;
  for ( i = *(__int64 **)(*((_QWORD *)this + 1) + 32LL); i; i = (__int64 *)*i )
  {
    for ( j = i + 3; j < &i[*((unsigned int *)i + 5) + 3]; ++j )
    {
      *(_DWORD *)j += v9;
      *((_DWORD *)j + 1) += v7;
    }
  }
  if ( *((_DWORD *)this + 14) )
  {
    v13 = 0;
    do
    {
      v14 = v13++;
      v15 = (_DWORD *)(*((_QWORD *)this + 6) + 16 * v14);
      *v15 += a2->x;
      v15[2] += a2->x;
      v15[1] += a2->y;
      v15[3] += a2->y;
    }
    while ( v13 < *((_DWORD *)this + 14) );
  }
  if ( *((_DWORD *)this + 15) )
  {
    v16 = 0;
    do
    {
      v17 = v16++;
      v18 = (_DWORD *)(*((_QWORD *)this + 8) + 16 * v17);
      *v18 += a2->x;
      v18[2] += a2->x;
      v18[1] += a2->y;
      v18[3] += a2->y;
    }
    while ( v16 < *((_DWORD *)this + 15) );
  }
  v12 = *((_QWORD *)this + 2);
  if ( v12 || *((_QWORD *)this + 3) || *((_QWORD *)this + 4) )
  {
    v19 = (int *)*((_QWORD *)this + 2);
    if ( v12 )
      RGNOBJ::bOffset(&v19, a2);
    v19 = (int *)*((_QWORD *)this + 3);
    if ( v19 )
      RGNOBJ::bOffset(&v19, a2);
    v19 = (int *)*((_QWORD *)this + 4);
    if ( v19 )
      RGNOBJ::bOffset(&v19, a2);
  }
  if ( *((_QWORD *)this + 5) )
  {
    v19 = (int *)*((_QWORD *)this + 5);
    RGNOBJ::bOffset(&v19, a2);
  }
}

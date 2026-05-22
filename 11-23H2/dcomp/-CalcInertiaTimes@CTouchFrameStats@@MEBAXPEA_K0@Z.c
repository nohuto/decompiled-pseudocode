/*
 * XREFs of ?CalcInertiaTimes@CTouchFrameStats@@MEBAXPEA_K0@Z @ 0x1801A8040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTouchFrameStats::CalcInertiaTimes(CTouchFrameStats *this, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int16 v10; // dx
  _QWORD *v11; // rcx

  v5 = 0LL;
  v6 = 0LL;
  if ( *((_DWORD *)this + 78) != 2 && *((_DWORD *)this + 78) != 3 )
  {
    if ( *((_DWORD *)this + 78) == 4 )
      goto LABEL_6;
    if ( *((_DWORD *)this + 78) != 5 )
    {
      if ( *((_DWORD *)this + 78) != 6 )
        goto LABEL_18;
LABEL_6:
      v7 = *((_QWORD *)this + 31);
      v5 = *(_QWORD *)(v7 - 64);
      v6 = *(_QWORD *)(v7 - 56);
      goto LABEL_18;
    }
  }
  v8 = *((_QWORD *)this + 30);
  v9 = *((_QWORD *)this + 31);
  if ( v8 == v9 )
    goto LABEL_18;
  do
  {
    v10 = *(_WORD *)(v8 + 196);
    if ( v5 )
    {
      if ( v10 )
        v6 = *(_QWORD *)(v8 + 16);
    }
    else
    {
      if ( v10 )
        goto LABEL_15;
      v5 = *(_QWORD *)(v8 + 160);
      if ( !v5 )
        goto LABEL_15;
    }
    if ( v6 )
      goto LABEL_18;
LABEL_15:
    v8 += 224LL;
  }
  while ( v8 != v9 );
  if ( v5 )
    v6 = *(_QWORD *)(v9 - 56);
LABEL_18:
  if ( 0x8F5C28F5C28F5C29uLL * ((__int64)(*((_QWORD *)this + 34) - *((_QWORD *)this + 33)) >> 3) )
  {
    v11 = *(_QWORD **)(*((_QWORD *)this + 34) - 192LL);
    if ( v11[1] )
    {
      if ( v11[2] && v6 <= v11[13] )
        v6 = v11[13];
    }
  }
  *a2 = v5;
  *a3 = v6;
}

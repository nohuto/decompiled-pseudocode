/*
 * XREFs of ?CalcInteractionTimes@CTouchFrameStats@@MEBAXPEA_K0@Z @ 0x1801A81D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTouchFrameStats::CalcInteractionTimes(
        CTouchFrameStats *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  __int16 v9; // dx

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
      v5 = *(_QWORD *)(*((_QWORD *)this + 30) + 160LL);
      v6 = *(_QWORD *)(*((_QWORD *)this + 31) - 56LL);
      goto LABEL_18;
    }
  }
  v7 = *((_QWORD *)this + 30);
  v8 = *((_QWORD *)this + 31);
  if ( v7 == v8 )
    goto LABEL_18;
  do
  {
    v9 = *(_WORD *)(v7 + 196);
    if ( v5 )
    {
      if ( !v9 )
        v6 = *(_QWORD *)(v7 + 160);
    }
    else
    {
      if ( !v9 )
        goto LABEL_15;
      v5 = *(_QWORD *)(v7 + 16);
      if ( !v5 )
        goto LABEL_15;
    }
    if ( v6 )
      goto LABEL_18;
LABEL_15:
    v7 += 224LL;
  }
  while ( v7 != v8 );
  if ( v5 )
    v6 = *(_QWORD *)(v8 - 64);
LABEL_18:
  *a2 = v5 & -(__int64)(v5 < v6);
  *a3 = v6 & -(__int64)(v5 < v6);
}

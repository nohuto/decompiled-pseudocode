/*
 * XREFs of ?RemoveAllLights@CVisual@@AEAAXXZ @ 0x1800493B0
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180062408 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveAllLights(CVisual *this)
{
  char *v1; // rsi
  char *v3; // rdi
  __int64 v4; // rbp
  char *v5; // r14
  char *v6; // rdi
  __int64 v7; // rsi

  v1 = (char *)*((_QWORD *)this + 36);
  v3 = (char *)*((_QWORD *)this + 35);
  v4 = (v1 - v3) >> 4;
  if ( v4 )
  {
    if ( v3 != v1 )
    {
      do
      {
        (*(void (__fastcall **)(_QWORD, CVisual *))(**(_QWORD **)v3 + 264LL))(*(_QWORD *)v3, this);
        CPtrArrayBase::Remove((CPtrArrayBase *)(*(_QWORD *)v3 + 24LL), (unsigned __int64)this);
        v3 += 16;
      }
      while ( v3 != v1 );
      v3 = (char *)*((_QWORD *)this + 35);
    }
    *((_QWORD *)this + 36) = v3;
  }
  v5 = (char *)*((_QWORD *)this + 39);
  v6 = (char *)*((_QWORD *)this + 38);
  v7 = (v5 - v6) >> 4;
  if ( v7 )
  {
    if ( v6 != v5 )
    {
      do
      {
        (*(void (__fastcall **)(_QWORD, CVisual *))(**(_QWORD **)v6 + 264LL))(*(_QWORD *)v6, this);
        v6 += 16;
      }
      while ( v6 != v5 );
      v6 = (char *)*((_QWORD *)this + 38);
    }
    *((_QWORD *)this + 39) = v6;
  }
  if ( v7 + v4 )
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 72LL))(this, 1LL);
}

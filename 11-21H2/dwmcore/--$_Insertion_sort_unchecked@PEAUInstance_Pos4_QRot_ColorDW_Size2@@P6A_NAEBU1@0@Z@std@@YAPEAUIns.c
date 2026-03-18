/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAPEAUInstance_Pos4_QRot_ColorDW_Size2@@QEAU1@0P6A_NAEBU1@1@Z@Z @ 0x1801EFBC4
 * Callers:
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x1801F04D4 (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char *__fastcall std::_Insertion_sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        char *Src,
        char *a2,
        unsigned __int8 (__fastcall *a3)(__int128 *, char *))
{
  char *i; // rbx
  char *v7; // rbp
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  char *j; // r14
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h]

  if ( Src != a2 )
  {
    for ( i = Src + 48; i != a2; i += 48 )
    {
      v7 = i;
      v8 = *((_OWORD *)i + 1);
      v15 = *(_OWORD *)i;
      v17 = *((_OWORD *)i + 2);
      v16 = v8;
      if ( a3(&v15, Src) )
      {
        memmove_0(Src + 48, Src, i - Src);
        v9 = v16;
        *(_OWORD *)Src = v15;
        v10 = v17;
        *((_OWORD *)Src + 1) = v9;
        *((_OWORD *)Src + 2) = v10;
      }
      else
      {
        for ( j = i; ; v7 = j )
        {
          j -= 48;
          if ( !a3(&v15, j) )
            break;
          *(_OWORD *)v7 = *(_OWORD *)j;
          *((_OWORD *)v7 + 1) = *((_OWORD *)j + 1);
          *((_OWORD *)v7 + 2) = *((_OWORD *)j + 2);
        }
        v12 = v16;
        *(_OWORD *)v7 = v15;
        v13 = v17;
        *((_OWORD *)v7 + 1) = v12;
        *((_OWORD *)v7 + 2) = v13;
      }
    }
  }
  return a2;
}

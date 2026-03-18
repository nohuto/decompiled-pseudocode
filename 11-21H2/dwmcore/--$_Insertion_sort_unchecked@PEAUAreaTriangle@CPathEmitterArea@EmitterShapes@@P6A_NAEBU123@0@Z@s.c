/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@QEAU123@0P6A_NAEBU123@1@Z@Z @ 0x18025821C
 * Callers:
 *     ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x180258AC8 (--$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char *__fastcall std::_Insertion_sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        char *Src,
        char *a2,
        unsigned __int8 (__fastcall *a3)(__int128 *, char *))
{
  char *i; // rbx
  char *v7; // rbp
  int v8; // eax
  __int64 v9; // xmm1_8
  int v10; // eax
  __int64 v11; // xmm1_8
  char *j; // r14
  int v13; // eax
  __int64 v14; // xmm1_8
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h]
  int v18; // [rsp+38h] [rbp-40h]

  if ( Src != a2 )
  {
    for ( i = Src + 28; i != a2; i += 28 )
    {
      v7 = i;
      v8 = *((_DWORD *)i + 6);
      v9 = *((_QWORD *)i + 2);
      v16 = *(_OWORD *)i;
      v18 = v8;
      v17 = v9;
      if ( a3(&v16, Src) )
      {
        memmove_0(Src + 28, Src, i - Src);
        v10 = v18;
        v11 = v17;
        *(_OWORD *)Src = v16;
        *((_QWORD *)Src + 2) = v11;
        *((_DWORD *)Src + 6) = v10;
      }
      else
      {
        for ( j = i; ; v7 = j )
        {
          j -= 28;
          if ( !a3(&v16, j) )
            break;
          *(_OWORD *)v7 = *(_OWORD *)j;
          *((_QWORD *)v7 + 2) = *((_QWORD *)j + 2);
          *((_DWORD *)v7 + 6) = *((_DWORD *)j + 6);
        }
        v13 = v18;
        v14 = v17;
        *(_OWORD *)v7 = v16;
        *((_QWORD *)v7 + 2) = v14;
        *((_DWORD *)v7 + 6) = v13;
      }
    }
  }
  return a2;
}

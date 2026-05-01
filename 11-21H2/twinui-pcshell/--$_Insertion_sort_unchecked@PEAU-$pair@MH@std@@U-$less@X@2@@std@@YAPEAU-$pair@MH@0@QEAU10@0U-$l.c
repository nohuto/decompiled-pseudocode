/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAPEAU?$pair@MH@0@QEAU10@0U?$less@X@0@@Z @ 0x18055F8EC
 * Callers:
 *     ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x18055FE5C (--$_Sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Insertion_sort_unchecked<std::pair<float,int> *,std::less<void>>(__int64 a1, _QWORD *a2)
{
  _QWORD *i; // r8
  _QWORD *v5; // rdx
  float v6; // xmm0_4
  _QWORD *j; // rcx
  float v8; // xmm1_4
  _DWORD *v9; // rdx
  __int64 v11; // [rsp+8h] [rbp+8h]

  if ( (_QWORD *)a1 != a2 )
  {
    for ( i = (_QWORD *)(a1 + 8); i != a2; ++i )
    {
      v5 = i;
      v11 = *i;
      LODWORD(v6) = *i;
      if ( *(float *)a1 > v6 || v6 <= *(float *)a1 && (int)HIDWORD(*i) < *(_DWORD *)(a1 + 4) )
      {
        if ( i != (_QWORD *)a1 )
        {
          v9 = (_DWORD *)i + 1;
          do
          {
            v9 -= 2;
            v9[1] = *(v9 - 1);
            v9[2] = *v9;
          }
          while ( v9 - 1 != (_DWORD *)a1 );
        }
        *(_DWORD *)(a1 + 4) = HIDWORD(v11);
        *(float *)a1 = v6;
      }
      else
      {
        for ( j = i; ; v5 = j )
        {
          v8 = *(float *)--j;
          if ( *(float *)j <= v6 && (v6 > v8 || SHIDWORD(v11) >= *((_DWORD *)j + 1)) )
            break;
          *(float *)v5 = v8;
          *((_DWORD *)v5 + 1) = *((_DWORD *)j + 1);
        }
        *(float *)v5 = v6;
        *((_DWORD *)v5 + 1) = HIDWORD(v11);
      }
    }
  }
  return a2;
}

/*
 * XREFs of sub_1409DAB80 @ 0x1409DAB80
 * Callers:
 *     sub_1409DA90C @ 0x1409DA90C (sub_1409DA90C.c)
 * Callees:
 *     sub_14081538C @ 0x14081538C (sub_14081538C.c)
 *     sub_1409DAA5C @ 0x1409DAA5C (sub_1409DAA5C.c)
 */

__int64 __fastcall sub_1409DAB80(_QWORD *a1, __int16 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  PSLIST_ENTRY v11; // rax
  _SLIST_ENTRY v12; // xmm0

  v4 = 0;
  if ( a1 && a3 && a4 )
  {
    v9 = sub_1409DAA5C(a1, a2, a3);
    v10 = v9;
    if ( v9 )
    {
      ++*(_DWORD *)(v9 + 20);
    }
    else
    {
      if ( a3[250] >= 0x7Du )
        return (unsigned int)-1073741823;
      v11 = sub_14081538C(5, 0x18u);
      v10 = (__int64)v11;
      if ( !v11 )
        return (unsigned int)-1073741670;
      *v11 = 0LL;
      v11[1].Next = 0LL;
      v12 = *(_SLIST_ENTRY *)a1;
      LOWORD(v11[1].Next) = a2;
      HIDWORD(v11[1].Next) = 1;
      *v11 = v12;
      *(_QWORD *)&a3[2 * a3[250]++] = v11;
    }
    if ( !*(_QWORD *)a4 || *(_DWORD *)(v10 + 20) > *(_DWORD *)(*(_QWORD *)a4 + 20LL) )
      *(_QWORD *)a4 = v10;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}

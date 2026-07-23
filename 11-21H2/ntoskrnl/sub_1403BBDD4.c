/*
 * XREFs of sub_1403BBDD4 @ 0x1403BBDD4
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 *     sub_1403BC620 @ 0x1403BC620 (sub_1403BC620.c)
 *     sub_1403BCA0C @ 0x1403BCA0C (sub_1403BCA0C.c)
 */

__int64 __fastcall sub_1403BBDD4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  ULONG_PTR *v6; // rax
  ULONG_PTR *v7; // rbx
  unsigned int v8; // eax
  bool v9; // zf
  unsigned __int64 v10; // rcx

  LODWORD(dword_140C4E4FC) = 0;
  qword_140C4E418 = a1;
  qword_140C4E4E8 = (__int64)&qword_140C4E4E0;
  qword_140C4E4E0 = (ULONG_PTR)&qword_140C4E4E0;
  v5 = sub_1403BCA0C(0LL, a2, a3, a4);
  if ( v5 < 0 )
  {
    dword_140C4E844 = 14;
  }
  else if ( (_DWORD)dword_140C4E4FC && (v6 = sub_1403ACEFC(0, 2, 0, 0, 1), (v7 = v6) != 0LL) )
  {
    qword_140C4E390 = (ULONG_PTR)v6;
    qword_140C4E4C0 = (__int64)v6;
    v5 = sub_1403BC620(v6);
    if ( v5 >= 0 )
    {
      v8 = v7[23] & 0xFFFFFFFB;
      v9 = v7[24] == 0;
      *((_DWORD *)v7 + 46) = v8;
      if ( v9 )
      {
        *((_DWORD *)v7 + 46) = v8 | 8;
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2496LL);
        v7[24] = v10;
        if ( v10 < 0x3E8 )
        {
          *((_DWORD *)v7 + 64) = 0;
          dword_140C4E844 = 40;
          *((_DWORD *)v7 + 63) = 40;
          v7[33] = (ULONG_PTR)"minkernel\\hals\\lib\\timers\\common\\timer.c";
          v7[24] = 15625000LL;
          *((_DWORD *)v7 + 68) = 1186;
        }
      }
      else
      {
        byte_140C4E4D8 = 1;
      }
    }
  }
  else
  {
    v5 = -1073741823;
    dword_140C4E844 = 21;
  }
  return (unsigned int)v5;
}

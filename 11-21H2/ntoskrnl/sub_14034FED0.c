/*
 * XREFs of sub_14034FED0 @ 0x14034FED0
 * Callers:
 *     sub_140213318 @ 0x140213318 (sub_140213318.c)
 *     sub_140214694 @ 0x140214694 (sub_140214694.c)
 *     sub_14024007C @ 0x14024007C (sub_14024007C.c)
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_140371274 @ 0x140371274 (sub_140371274.c)
 *     sub_1403714E0 @ 0x1403714E0 (sub_1403714E0.c)
 *     sub_140641F58 @ 0x140641F58 (sub_140641F58.c)
 * Callees:
 *     sub_140350070 @ 0x140350070 (sub_140350070.c)
 *     sub_1403507F0 @ 0x1403507F0 (sub_1403507F0.c)
 *     sub_140351450 @ 0x140351450 (sub_140351450.c)
 *     sub_1403E0320 @ 0x1403E0320 (sub_1403E0320.c)
 *     sub_1405F31C0 @ 0x1405F31C0 (sub_1405F31C0.c)
 */

__int64 __fastcall sub_14034FED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r8
  unsigned int v8; // r13d
  __int64 result; // rax
  __int64 v10; // rbx
  int v11; // ebp
  int v12; // r12d
  unsigned int v13; // eax
  __int64 v14; // rbx

  v5 = (unsigned __int64)(a4 + 4095) >> 12;
  v6 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = v6 + 1;
  if ( (a5 & 4) == 0 )
    v8 = v6;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0LL;
  result = sub_140350070(a1, v8, a5);
  v10 = result;
  if ( result )
  {
    v11 = *(unsigned __int8 *)(result + 31);
    v12 = (unsigned __int16)~*(_WORD *)(result + 28);
    if ( !(_DWORD)v5 )
      goto LABEL_9;
    v13 = a5 & 0xFFFFFFFD;
    if ( !v12 )
      v13 = a5;
    if ( (int)sub_1403507F0(a1, v13, 0LL) < 0 )
    {
      sub_1405F31C0(a1, v10, a5);
      return 0LL;
    }
    else
    {
LABEL_9:
      if ( (a5 & 4) != 0 )
        sub_1403507F0(a1, 0, 0LL);
      *(_DWORD *)(v10 + 4) = (v11 << *(_BYTE *)(a1 + 8)) - a2;
      v14 = (v10 & *(_QWORD *)a1) + ((v10 - (v10 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
      if ( (a5 & 2) != 0
        && (v12
         || BYTE1(*(_QWORD *)(a1 + 40)) >= 2u
         || (*(_BYTE *)(a1 + 13) & 7) != 0 && (int)sub_140351450(a1, v14, (unsigned int)a2) <= 2) )
      {
        sub_1403E0320(v14, (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      return v14;
    }
  }
  return result;
}

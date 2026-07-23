/*
 * XREFs of sub_140A374B0 @ 0x140A374B0
 * Callers:
 *     sub_140659E70 @ 0x140659E70 (sub_140659E70.c)
 * Callees:
 *     sub_1403FF93C @ 0x1403FF93C (sub_1403FF93C.c)
 *     sub_1404000C8 @ 0x1404000C8 (sub_1404000C8.c)
 *     sub_140400108 @ 0x140400108 (sub_140400108.c)
 *     sub_1404001EC @ 0x1404001EC (sub_1404001EC.c)
 *     sub_140400318 @ 0x140400318 (sub_140400318.c)
 *     sub_140401470 @ 0x140401470 (sub_140401470.c)
 */

__int64 __fastcall sub_140A374B0(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  int v7; // edi
  __int64 v8; // rbp
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 *v13; // rcx
  volatile signed __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi

  v7 = 0;
  v8 = a3;
  v11 = a1 - 11777;
  if ( v11 )
  {
    if ( v11 != 1 )
      return (unsigned int)-1073740760;
    v13 = qword_1400143D0;
    v14 = (volatile signed __int64 *)&unk_140D04DB8;
  }
  else
  {
    v13 = qword_1400142D0;
    v14 = (volatile signed __int64 *)&unk_140D04DC0;
  }
  if ( !*v14 )
  {
    v15 = sub_1403FF93C(v13);
    if ( !v15 )
      return (unsigned int)-1073741801;
    if ( _InterlockedCompareExchange64(v14, v15, 0LL) )
      sub_1404000C8(v15);
  }
  v16 = sub_140400108(*v14);
  v17 = v16;
  if ( !v16 )
    return (unsigned int)-1073741801;
  if ( (unsigned int)sub_140400318(0LL, 0LL, a2, v8, 2u, 2, 0, v16) )
  {
    v12 = -1073740760;
  }
  else
  {
    if ( (unsigned int)sub_140401470(v17, a4, a5, a6, a7, 2, 0) )
      v7 = -1073740760;
    v12 = v7;
  }
  sub_1404001EC(v17);
  return v12;
}

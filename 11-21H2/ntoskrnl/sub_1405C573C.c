/*
 * XREFs of sub_1405C573C @ 0x1405C573C
 * Callers:
 *     sub_1405AC670 @ 0x1405AC670 (sub_1405AC670.c)
 *     sub_1405AF6F0 @ 0x1405AF6F0 (sub_1405AF6F0.c)
 *     sub_1405C4FB8 @ 0x1405C4FB8 (sub_1405C4FB8.c)
 *     sub_1405C5550 @ 0x1405C5550 (sub_1405C5550.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140424FF0 @ 0x140424FF0 (sub_140424FF0.c)
 *     sub_1405EFB90 @ 0x1405EFB90 (sub_1405EFB90.c)
 */

__int64 __fastcall sub_1405C573C(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 *v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // rbx
  int v12; // r15d
  __int64 v13; // rbx
  unsigned int v14; // r15d
  BOOL v15; // esi

  if ( a3 )
  {
    v8 = a3;
    v9 = 0LL;
    goto LABEL_12;
  }
  v8 = sub_1402C6260(a1 + 18, 3u, 1LL, 0);
  v9 = (unsigned __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = sub_14026C61C(4, a2);
  v11 = sub_1402CBD10((unsigned __int64)v9, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4), v10 | 0xA0000000);
  v12 = 0;
  if ( sub_140317A80((unsigned __int64)v9) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v12 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_8:
        if ( (v11 & 1) != 0 )
          v11 |= 0x8000000000000000uLL;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      goto LABEL_8;
    }
  }
  *v9 = v11;
  if ( v12 )
    sub_1402294F0((__int64)v9, v11);
LABEL_12:
  if ( (a4 & 1) != 0 )
  {
    v13 = a1[25];
    sub_140424FF0(v13, v8);
  }
  else
  {
    v13 = 0LL;
  }
  v14 = sub_1405EFB90((PVOID)v8);
  if ( v13 )
    sub_140424FF0(v8, v13);
  if ( !a3 )
  {
    v15 = 0;
    if ( sub_140317A80((unsigned __int64)v9) )
      v15 = sub_140229550() != 0;
    *v9 = 0LL;
    if ( v15 )
      sub_1402294F0((__int64)v9, 0LL);
  }
  ++a1[26];
  return v14;
}

/*
 * XREFs of sub_1406FD4A0 @ 0x1406FD4A0
 * Callers:
 *     sub_1402D9E3C @ 0x1402D9E3C (sub_1402D9E3C.c)
 *     sub_14066BFB8 @ 0x14066BFB8 (sub_14066BFB8.c)
 *     sub_14066D4BC @ 0x14066D4BC (sub_14066D4BC.c)
 *     sub_1406B8C3C @ 0x1406B8C3C (sub_1406B8C3C.c)
 *     sub_1406FD140 @ 0x1406FD140 (sub_1406FD140.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406A377C @ 0x1406A377C (sub_1406A377C.c)
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 *     sub_1406FD6C0 @ 0x1406FD6C0 (sub_1406FD6C0.c)
 *     sub_1406FD9F0 @ 0x1406FD9F0 (sub_1406FD9F0.c)
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 *     sub_14096C0AC @ 0x14096C0AC (sub_14096C0AC.c)
 */

__int64 __fastcall sub_1406FD4A0(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        char a11,
        int a12,
        __int64 a13)
{
  int v17; // ebx
  int v18; // edi
  int v19; // eax
  __int64 v20; // rbx
  _QWORD *v21; // rsi
  unsigned __int64 v22; // rax
  LARGE_INTEGER v23; // rdx
  int v25; // ebx
  LARGE_INTEGER v26[2]; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v27[26]; // [rsp+80h] [rbp-F8h] BYREF

  v17 = 0;
  memset(v27, 0, 0xC8uLL);
  v18 = sub_1406FD6C0((unsigned int)v27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  if ( v18 >= 0 )
  {
    while ( 1 )
    {
      LODWORD(v27[0]) |= v17;
      if ( !v27[5] && !v27[6] )
        break;
      v19 = sub_1406FDCD0(v27);
      v18 = v19;
      if ( v19 != -1073741740 && v19 != -1073740682 )
        goto LABEL_5;
      if ( v27[22] )
        sub_1403606C4(v27[22]);
      v25 = LODWORD(v27[0]) >> 26;
      memset(v27, 0, 0xC8uLL);
      v18 = sub_1406FD6C0((unsigned int)v27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
      v17 = (v25 & 1) << 26;
      if ( v18 < 0 )
        goto LABEL_12;
    }
    v18 = sub_1406F3A44((__int64)v27);
LABEL_5:
    if ( v18 >= 0 )
    {
      v18 = sub_1406FD9F0(v27);
      if ( v18 >= 0 )
      {
        v20 = v27[8];
        v21 = (_QWORD *)v27[18];
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v27[8] + 24LL), -1LL, -1LL);
        if ( ((v27[0] & 9) == 0 && (*(_DWORD *)(v20 + 56) & 0x8000) != 0 || v21[6] > v22)
          && (v23 = (LARGE_INTEGER)v21[6],
              v21[6] = v22,
              v26[0] = v23,
              v18 = sub_1406A377C((__int64)v21, v26, v27[0] & 1),
              v18 < 0) )
        {
          ObfDereferenceObject(v21);
        }
        else
        {
          *a1 = v21;
          if ( (DWORD1(xmmword_140D06900[0]) & 0x400001) != 0 && !*(_QWORD *)(v20 + 64) )
            sub_14096C0AC(v21, 1LL);
        }
      }
    }
  }
LABEL_12:
  if ( v27[22] )
    sub_1403606C4(v27[22]);
  return (unsigned int)v18;
}

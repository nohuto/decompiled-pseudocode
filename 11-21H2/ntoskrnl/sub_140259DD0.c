/*
 * XREFs of sub_140259DD0 @ 0x140259DD0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_140259DD0()
{
  ULONG_PTR v0; // rdi
  __int64 v1; // rbx
  __int64 result; // rax
  ULONG_PTR v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  signed __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r11
  signed __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  signed __int32 v19[8]; // [rsp+0h] [rbp-38h] BYREF

  KeQueryPerformanceCounter(0LL);
  v0 = qword_140C4E500;
  if ( qword_140C4E500 )
  {
    if ( *(_DWORD *)(qword_140C4E500 + 220) == 64 )
    {
      v4 = sub_140303720(qword_140C4E500);
      v6 = sub_14042A5E0(v4, v5);
      v7 = *(_QWORD *)(v0 + 208);
      v8 = v6;
    }
    else
    {
      do
      {
        v7 = *(_QWORD *)(v0 + 208);
        do
        {
          v9 = *(_QWORD *)(v0 + 200);
          v10 = sub_140303720(v0);
          v12 = sub_14042A5E0(v10, v11);
          _InterlockedOr(v19, 0);
          v13 = *(_QWORD *)(v0 + 200);
        }
        while ( v9 != v13 );
      }
      while ( v7 != *(_QWORD *)(v0 + 208) );
      v14 = *(_DWORD *)(v0 + 220);
      if ( ((v9 ^ v12) & (1LL << ((unsigned __int8)v14 - 1))) != 0 )
      {
        if ( v14 == 64 )
          v15 = -1LL;
        else
          v15 = (1LL << v14) - 1;
        v16 = 0LL;
        if ( v14 != 64 )
          v16 = 1LL << v14;
        v17 = v9 & v15;
        v8 = v12 | v9 ^ v17;
        if ( v12 < v17 )
          v8 += v16;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v0 + 200), v8, v13);
      }
      else
      {
        if ( v14 == 64 )
          v18 = -1LL;
        else
          v18 = (1LL << v14) - 1;
        v8 = v12 | v9 & ~v18;
      }
    }
    if ( v7 + v8 < qword_140C4C7E8 )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0x27uLL, v7 + v8, qword_140C4C7E8);
    qword_140C4C7E8 = v7 + v8;
  }
  v1 = MEMORY[0xFFFFF78000000014];
  result = MEMORY[0xFFFFF78000000014] - qword_140C4C7F8;
  if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - qword_140C4C7F8) >= 0x47868C00 )
  {
    result = qword_140D088C0[0];
    v3 = _InterlockedExchange64((volatile __int64 *)(qword_140D088C0[0] + 224), 0LL);
    if ( v3 )
      result = sub_140345190(v3, 0);
    qword_140C4C7F8 = v1;
  }
  return result;
}

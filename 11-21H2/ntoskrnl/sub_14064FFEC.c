/*
 * XREFs of sub_14064FFEC @ 0x14064FFEC
 * Callers:
 *     sub_140651540 @ 0x140651540 (sub_140651540.c)
 * Callees:
 *     sub_14064FD74 @ 0x14064FD74 (sub_14064FD74.c)
 *     sub_1406503B0 @ 0x1406503B0 (sub_1406503B0.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 */

__int64 __fastcall sub_14064FFEC(__int64 *a1, int a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  if ( a2 )
  {
    v7 = sub_14064FD74(a1, &v12);
    v8 = v12;
    v6 = v7;
    if ( v7 >= 0 )
    {
      v9 = (unsigned int)(a2 - 1);
      if ( (unsigned int)v9 < *(_DWORD *)(v12 + 4) )
      {
        v10 = 18 * v9;
        *(_OWORD *)(v12 + 8 * v10 + 80) = *(_OWORD *)(a3 + 8);
        *(_OWORD *)(v8 + 8 * v10 + 96) = *(_OWORD *)(a3 + 24);
        *(_QWORD *)(v8 + 8 * v10 + 112) = *(_QWORD *)(a3 + 40);
        *(_OWORD *)(v8 + 8 * v10 + 120) = *(_OWORD *)(a3 + 48);
        *(_OWORD *)(v8 + 8 * v10 + 136) = *(_OWORD *)(a3 + 64);
        *(_OWORD *)(v8 + 8 * v10 + 152) = *(_OWORD *)(a3 + 80);
        *(_OWORD *)(v8 + 8 * v10 + 168) = *(_OWORD *)(a3 + 96);
        *(_QWORD *)(v8 + 8 * v10 + 184) = *(_QWORD *)(a3 + 112);
        v6 = sub_1406503B0(a1, v8, 0LL);
      }
      else
      {
        v6 = -1073741811;
      }
    }
    if ( v8 )
      sub_1406D9550(v8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}

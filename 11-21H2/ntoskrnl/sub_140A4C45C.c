/*
 * XREFs of sub_140A4C45C @ 0x140A4C45C
 * Callers:
 *     sub_140A4C0E8 @ 0x140A4C0E8 (sub_140A4C0E8.c)
 *     sub_140A4C204 @ 0x140A4C204 (sub_140A4C204.c)
 * Callees:
 *     sub_14038CFA0 @ 0x14038CFA0 (sub_14038CFA0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

const void *__fastcall sub_140A4C45C(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        const void *a4,
        char a5,
        int a6,
        __int64 a7)
{
  unsigned int v7; // esi
  _DWORD *v9; // r15
  unsigned int v11; // edi
  _BYTE *v13; // rbp
  unsigned __int64 v14; // rbx
  int v15; // ecx
  unsigned __int64 v16; // rax
  const void *result; // rax
  unsigned int v18; // r9d
  __int64 v19; // r8
  int v20; // r10d
  unsigned int v21; // edx
  __int64 v22; // [rsp+20h] [rbp-58h]
  unsigned int v23; // [rsp+88h] [rbp+10h] BYREF

  v7 = 0;
  v23 = 0;
  v9 = *(_DWORD **)(a2 + 24);
  v11 = a6 << 12;
  if ( v9 )
  {
    if ( a5 )
    {
      v13 = *(_BYTE **)a2;
      memmove(*(void **)a2, a4, v11);
    }
    else
    {
      v13 = a4;
      v18 = *(_DWORD *)(a2 + 120);
      v19 = *((_QWORD *)qword_140C22C58 + 5) - *((_QWORD *)qword_140C22C58 + 7);
      if ( v18 && (v20 = *(_DWORD *)(a2 + 124), (int)(100 * v20 / v18) <= dword_140C22C04) )
      {
        v21 = *((_DWORD *)qword_140C22C58 + 2);
        if ( v19 >= (__int64)((unsigned __int64)v21 >> 1) )
        {
          *(_DWORD *)(a2 + 124) = v20 + 1;
          LOBYTE(v7) = v19 >= (__int64)((unsigned __int64)(3 * v21) >> 2);
          v7 += 2;
        }
      }
      else
      {
        LOBYTE(v7) = v19 >= (__int64)((unsigned __int64)*((unsigned int *)qword_140C22C58 + 2) >> 1);
      }
      *(_DWORD *)(a2 + 120) = v18 + 1;
    }
    v14 = __rdtsc();
    v15 = sub_14038CFA0(*((_WORD *)&qword_1400243A0 + v7), v13, v11, v9, v22, &v23, *(_QWORD *)(a2 + 16), a7, a1);
    v16 = __rdtsc();
    *(_QWORD *)(a2 + 40) += (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - v14;
    if ( v15 < 0 || v23 >= (7 * v11) >> 3 )
    {
      a4 = v13;
    }
    else
    {
      v11 = v23;
      a4 = v9;
    }
  }
  result = a4;
  *a3 = (v7 << 30) | ((v11 << 8) | (unsigned __int8)*a3) & 0x3FFFFFFF;
  return result;
}

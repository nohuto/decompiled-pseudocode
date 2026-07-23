/*
 * XREFs of sub_14068CFE4 @ 0x14068CFE4
 * Callers:
 *     sub_14068CF68 @ 0x14068CF68 (sub_14068CF68.c)
 * Callees:
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14068CFE4(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int *v3; // r14
  unsigned int v4; // ebx
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned int v10; // eax
  void *v12; // rax
  void *v13; // rbp
  const void *v14; // r15

  v3 = (unsigned int *)(a3 + 8);
  v4 = a2 >> 12;
  v6 = 256;
  v7 = ((a2 >> 12) + 7) >> 3;
  if ( v7 )
    v8 = (v7 + 255) & 0xFFFFFF00;
  else
    v8 = 256;
  v9 = *v3;
  if ( (_DWORD)v9 )
  {
    v10 = (unsigned int)(v9 + 7) >> 3;
    if ( v10 )
      v6 = (v10 + 255) & 0xFFFFFF00;
  }
  else
  {
    v6 = 0;
  }
  if ( v8 <= *(_DWORD *)a3 )
  {
    *v3 = v4;
    if ( (unsigned int)v9 < v4 )
      RtlClearBits((PRTL_BITMAP)(a3 + 8), v9, v4 - v9);
    return 0LL;
  }
  LOBYTE(v9) = 1;
  v12 = (void *)sub_14042A5E0(v8, v9);
  v13 = v12;
  if ( v12 )
  {
    *(_DWORD *)a3 = v8;
    v14 = (const void *)*((_QWORD *)v3 + 1);
    memset(v12, 0, v8);
    *v3 = v4;
    *((_QWORD *)v3 + 1) = v13;
    if ( v14 )
    {
      memmove(v13, v14, v6);
      sub_14042A5E0(v14, v6);
    }
    return 0LL;
  }
  return 3221225626LL;
}

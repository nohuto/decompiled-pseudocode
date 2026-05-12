/*
 * XREFs of sub_1C0080F70 @ 0x1C0080F70
 * Callers:
 *     sub_1C0080EE8 @ 0x1C0080EE8 (sub_1C0080EE8.c)
 * Callees:
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 */

__int64 __fastcall sub_1C0080F70(__int64 a1, const void *a2, unsigned int a3, char a4)
{
  size_t v5; // rsi
  __int64 v6; // rcx
  unsigned int v8; // edi
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 i; // rdx
  __int64 v13; // rcx

  v5 = a3;
  v6 = *(unsigned int *)(a1 + 12);
  v8 = 0;
  v10 = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)v6 + a3 + 4 <= v10 )
  {
    *(_BYTE *)(v6 + *(_QWORD *)a1) = -30;
    if ( a4 )
      *(_BYTE *)(*(unsigned int *)(a1 + 12) + *(_QWORD *)a1) |= 1u;
    v11 = ++*(_DWORD *)(a1 + 12);
    for ( i = v11 + 2; (unsigned int)i >= v11; i = (unsigned int)(i - 1) )
    {
      *(_BYTE *)(i + *(_QWORD *)a1) = a3;
      v11 = *(_DWORD *)(a1 + 12);
      a3 >>= 8;
    }
    v13 = v11 + 3;
    *(_DWORD *)(a1 + 12) = v13;
    memmove((void *)(*(_QWORD *)a1 + v13), a2, v5);
    *(_DWORD *)(a1 + 12) += v5;
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0xEu, (__int64)&unk_1C008B738, v10, v6 + a3 + 4);
    return (unsigned int)-1073741789;
  }
  return v8;
}

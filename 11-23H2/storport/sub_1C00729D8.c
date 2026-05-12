/*
 * XREFs of sub_1C00729D8 @ 0x1C00729D8
 * Callers:
 *     sub_1C006E67C @ 0x1C006E67C (sub_1C006E67C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C00219F8 @ 0x1C00219F8 (sub_1C00219F8.c)
 *     sub_1C006B18C @ 0x1C006B18C (sub_1C006B18C.c)
 */

void __fastcall sub_1C00729D8(__int64 a1, int a2, unsigned int a3)
{
  ULONG v3; // edi
  unsigned int *v7; // rax
  unsigned int *v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rdi
  const wchar_t *v11; // rbx

  v3 = a3 + 48;
  v7 = (unsigned int *)sub_1C0007CF4(256LL, a3 + 48, 1700028754LL, *(_QWORD *)(a1 + 8));
  v8 = v7;
  if ( v7 )
  {
    if ( sub_1C00219F8(a1, a2, a3, v7, v3) >= 0 )
    {
      v9 = v8[7];
      if ( v9 <= a3 && (byte_1C0093A04 & 8) != 0 )
      {
        v10 = *(_QWORD *)(a1 + 24);
        v11 = (const wchar_t *)&unk_1C0082788;
        if ( *(_QWORD *)(v10 + 5016) )
          v11 = *(const wchar_t **)(v10 + 5016);
        sub_1C006B18C(
          a1 + 186,
          a1 + 169,
          a1 + 160,
          *(_DWORD *)(v10 + 56),
          *(_BYTE *)(a1 + 96),
          *(_BYTE *)(a1 + 97),
          *(_BYTE *)(a1 + 98),
          a1 + 2024,
          v10 + 5000,
          *(const wchar_t **)(v10 + 4656),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v11,
          (const char *)(*(_QWORD *)(a1 + 152) + 90LL),
          *(_BYTE *)(a1 + 450) & 1,
          a2,
          v9,
          (__int64)v8 + v8[6] + 8);
      }
    }
    ExFreePoolWithTag(v8, 0x65546152u);
  }
}

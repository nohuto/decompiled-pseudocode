/*
 * XREFs of sub_1409EC6F0 @ 0x1409EC6F0
 * Callers:
 *     sub_140865108 @ 0x140865108 (sub_140865108.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409EC6F0(__int64 a1)
{
  __int64 Pool2; // rax
  UNICODE_STRING *v3; // rbx
  unsigned int v4; // edi
  const WCHAR *v5; // rdx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 Length; // rcx
  ULONGLONG v11; // rcx

  if ( !a1 || !*(_QWORD *)(a1 + 16) )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(256LL, 1252LL, 1350005829LL);
  v3 = (UNICODE_STRING *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 44) = 0x20000;
    *(_DWORD *)(Pool2 + 64) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(Pool2 + 40) = *(_DWORD *)(a1 + 52);
    *(_OWORD *)(Pool2 + 24) = *(_OWORD *)(a1 + 32);
    RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 144), *(PCWSTR *)(a1 + 16));
    v5 = *(const WCHAR **)(a1 + 24);
    if ( v5 )
      RtlInitUnicodeString(v3 + 8, v5);
    *(_DWORD *)&v3[3].Length = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(&v3[3].MaximumLength + 1) = *(_DWORD *)(a1 + 60);
    v6 = *(_DWORD *)(a1 + 64);
    *(_DWORD *)&v3[7].Length |= 0x80000002;
    LODWORD(v3[3].Buffer) = v6;
    LODWORD(v3[4].Buffer) = 0x80000000;
    LOWORD(v3[4].Buffer) = 176;
    BYTE2(v3[4].Buffer) = -1;
    *(_DWORD *)&v3[11].Length = 1;
    v7 = *(_DWORD *)(a1 + 80);
    if ( v7 > 0x20 )
      v7 = 32;
    v8 = v7 >> 2;
    if ( *(_QWORD *)(a1 + 72) && v8 )
    {
      *(&v3[11].MaximumLength + 2) = 1;
      *(&v3[11].MaximumLength + 1) = v8 + 1;
      v3[11].Length += v8 + 1;
      memmove(&v3[11].Buffer, *(const void **)(a1 + 72), 4LL * v8);
      ++v3[11].MaximumLength;
    }
    v9 = *(_DWORD *)(a1 + 96) >> 2;
    if ( v9 > 0x100 )
      v9 = 256;
    if ( *(_QWORD *)(a1 + 88) )
    {
      if ( v9 )
      {
        Length = v3[11].Length;
        *(&v3[11].MaximumLength + 2 * Length) = 3;
        *(&v3[11].Length + 2 * Length) = v9 + 1;
        v3[11].Length += v9 + 1;
        memmove(&v3[11].MaximumLength + 2 * Length + 1, *(const void **)(a1 + 88), 4LL * v9);
        ++v3[11].MaximumLength;
      }
    }
    v11 = qword_140D05008;
    *(_DWORD *)&v3->Length = 4 * v3[11].Length + 176;
    v4 = sub_1406EE2AC(v11, (__int64)v3);
    ExFreePoolWithTag(v3, 0x50777445u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}

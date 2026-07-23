/*
 * XREFs of sub_140B252DC @ 0x140B252DC
 * Callers:
 *     sub_140B05E40 @ 0x140B05E40 (sub_140B05E40.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1403D6DF4 @ 0x1403D6DF4 (sub_1403D6DF4.c)
 *     sub_14075F23C @ 0x14075F23C (sub_14075F23C.c)
 *     sub_14080C778 @ 0x14080C778 (sub_14080C778.c)
 */

void __fastcall sub_140B252DC(_QWORD *a1, int a2)
{
  int v2; // ebp
  PIMAGE_NT_HEADERS v4; // rax
  int v5; // r14d
  __int64 v6; // r9
  int NumberOfSections; // esi
  _DWORD *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // r15
  unsigned int v11; // r8d
  unsigned int v12; // r13d

  v2 = a2;
  if ( dword_140D05218 != 2 )
  {
    v4 = RtlImageNtHeader(a1);
    v5 = 0;
    v6 = 0x7FFFFFFFF8LL;
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v8 = (_DWORD *)((char *)&v4->OptionalHeader.Magic + v4->FileHeader.SizeOfOptionalHeader);
    if ( v4->FileHeader.NumberOfSections )
    {
      do
      {
        if ( sub_1403D6DF4((__int64)v8) )
        {
          v9 = v8[4];
          v10 = (unsigned int)v8[3];
          if ( v9 < v8[2] )
            v9 = v8[2];
          ++v5;
          v11 = (v9 + 4095) & 0xFFFFF000;
          v12 = v11 - 1;
          if ( v5 != 1 || dword_140D05218 != 1 )
          {
            if ( (dword_140D06880 & 0x4000) != 0 )
            {
              sub_14080C778(0LL, (__int64)a1 + v10, v11 >> 12, 2u);
              v6 = 0x7FFFFFFFF8LL;
            }
            sub_14075F23C(
              a1,
              (v6 & (((unsigned __int64)a1 + v10) >> 9)) - 0x98000000000LL,
              (v6 & (((unsigned __int64)a1 + (unsigned int)v10 + v12) >> 9)) - 0x98000000000LL,
              1);
            v6 = 0x7FFFFFFFF8LL;
          }
        }
        v8 += 10;
        --NumberOfSections;
      }
      while ( NumberOfSections );
      v2 = a2;
    }
    if ( (dword_140D06880 & 4) != 0 && (*(_QWORD *)&v2 & 0x1FFFFFLL) != 0 )
      sub_14075F23C(
        a1,
        (v6 & (((unsigned __int64)a1 + (unsigned int)(v2 - (_DWORD)a1)) >> 9)) - 0x98000000000LL,
        (v6 & (((unsigned __int64)a1 + ((v2 - (_DWORD)a1 + 0x1FFFFF) & 0xFFE00000) - 1) >> 9)) - 0x98000000000LL,
        1);
  }
}

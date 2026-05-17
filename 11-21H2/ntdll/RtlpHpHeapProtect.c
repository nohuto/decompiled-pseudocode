/*
 * XREFs of RtlpHpHeapProtect @ 0x18011F8D8
 * Callers:
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A4A70 (ZwProtectVirtualMemory.c)
 *     RtlpHpLargeAllocationProtect @ 0x18011FD98 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x1801209A4 (RtlpHpSegProtect.c)
 */

__int64 __fastcall RtlpHpHeapProtect(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned __int64 v8; // rbx
  int v10; // eax
  unsigned __int64 v11; // rax
  bool v12; // zf
  char v13; // dl
  unsigned __int64 i; // rax
  unsigned __int64 v15; // rcx

  v2 = a2;
  LODWORD(v4) = ZwQueryVirtualMemory();
  if ( (int)v4 >= 0 )
  {
    v5 = ZwProtectVirtualMemory();
    LODWORD(v4) = v5;
    if ( v5 >= 0 )
    {
      v6 = RtlpHpSegProtect(a1 + 320, (unsigned int)v2, (unsigned int)v5);
      LODWORD(v4) = v6;
      if ( v6 >= 0 )
      {
        v7 = RtlpHpSegProtect(a1 + 512, (unsigned int)v2, (unsigned int)v6);
        v4 = (unsigned int)v7;
        if ( v7 >= 0 )
        {
          v8 = *(_QWORD *)(a1 + 72);
          if ( !v8 )
          {
            LODWORD(v4) = 0;
            return (unsigned int)v4;
          }
          while ( 1 )
          {
LABEL_8:
            v10 = RtlpHpLargeAllocationProtect(v8, v2, v4);
            v4 = (unsigned int)v10;
            if ( v10 < 0 )
              return (unsigned int)v4;
            v11 = *(_QWORD *)v8;
            if ( !*(_QWORD *)v8 )
              break;
            v12 = (*(_BYTE *)(a1 + 80) & 1) == 0;
LABEL_11:
            if ( v12 )
              v8 = v11;
            else
              v8 ^= v11;
          }
          v11 = *(_QWORD *)(v8 + 8);
          v13 = *(_BYTE *)(a1 + 80) & 1;
          if ( v11 )
          {
            v12 = v13 == 0;
            goto LABEL_11;
          }
          for ( i = v8; ; v8 = i )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v13 )
            {
              if ( !i )
                return (unsigned int)v4;
              i ^= v8;
            }
            if ( !i )
              return (unsigned int)v4;
            v15 = *(_QWORD *)(i + 8);
            if ( v13 )
            {
              if ( !v15 )
                continue;
              v15 ^= i;
            }
            if ( v15 && v15 != v8 )
            {
              v8 = v15;
              goto LABEL_8;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}

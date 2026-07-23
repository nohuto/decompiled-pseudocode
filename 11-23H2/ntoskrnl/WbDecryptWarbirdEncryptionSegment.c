/*
 * XREFs of WbDecryptWarbirdEncryptionSegment @ 0x1407D2B10
 * Callers:
 *     WbDecryptEncryptionSegment @ 0x1407D2294 (WbDecryptEncryptionSegment.c)
 * Callees:
 *     sub_140764880 @ 0x140764880 (sub_140764880.c)
 *     sub_140A4E074 @ 0x140A4E074 (sub_140A4E074.c)
 */

__int64 __fastcall WbDecryptWarbirdEncryptionSegment(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v5; // edi
  unsigned int v6; // esi
  int v7; // eax
  int v8; // ebp
  int v9; // eax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 != -1 )
  {
    v4 = v3 + 1;
    *(_QWORD *)(a1 + 64) = v4;
    if ( v4 == 1 )
    {
      if ( *(_DWORD *)(a1 + 48) > 1u )
      {
        return (unsigned int)-1073741811;
      }
      else
      {
        v5 = *(_DWORD *)(a1 + 72);
        v6 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 240LL);
        while ( v5 < v6 )
        {
          v7 = *(_DWORD *)(a1 + 48);
          v8 = v5 >= *(_DWORD *)(a1 + 76);
          if ( v7 == 1 )
          {
            v9 = sub_140A4E074(a1, v5 >= *(_DWORD *)(a1 + 76), 16LL * v5 + *(_QWORD *)(a1 + 56) + 248LL);
          }
          else
          {
            if ( v7 )
              return (unsigned int)-1073741811;
            v9 = sub_140764880(
                   (__int64 *)a1,
                   v5 >= *(_DWORD *)(a1 + 76),
                   (_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * (3LL * v5 + 61)));
          }
          v2 = v9;
          if ( v9 < 0 )
            break;
          ++*(_DWORD *)(a1 + 72);
          *(_DWORD *)(a1 + 76) += v8;
          ++v5;
        }
      }
    }
  }
  return v2;
}

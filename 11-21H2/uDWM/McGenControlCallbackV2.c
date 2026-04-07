/*
 * XREFs of McGenControlCallbackV2 @ 0x180012100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall McGenControlCallbackV2(__int64 a1, int a2, char a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  unsigned int v7; // r9d
  unsigned __int8 v8; // cl
  __int64 v9; // rcx
  bool v10; // r11
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // r8d

  if ( a7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        *(_QWORD *)(a7 + 16) = a4;
        v7 = 0;
        *(_QWORD *)(a7 + 24) = a5;
        *(_BYTE *)(a7 + 40) = a3;
        for ( *(_DWORD *)(a7 + 36) = 1; v7 < *(unsigned __int16 *)(a7 + 42); ++v7 )
        {
          v8 = *(_BYTE *)(a7 + 40);
          v10 = 0;
          if ( *(_BYTE *)(v7 + *(_QWORD *)(a7 + 64)) <= v8 || !v8 )
          {
            v9 = *(_QWORD *)(*(_QWORD *)(a7 + 56) + 8LL * v7);
            if ( !v9 || (v9 & *(_QWORD *)(a7 + 16)) != 0 && (v9 & *(_QWORD *)(a7 + 24)) == *(_QWORD *)(a7 + 24) )
              v10 = 1;
          }
          v11 = *(_QWORD *)(a7 + 48);
          v12 = (unsigned __int64)v7 >> 5;
          v13 = 1 << (v7 & 0x1F);
          if ( v10 )
            *(_DWORD *)(v11 + 4 * v12) |= v13;
          else
            *(_DWORD *)(v11 + 4 * v12) &= ~v13;
        }
      }
    }
    else
    {
      *(_DWORD *)(a7 + 36) = 0;
      *(_BYTE *)(a7 + 40) = 0;
      *(_QWORD *)(a7 + 16) = 0LL;
      *(_QWORD *)(a7 + 24) = 0LL;
      if ( *(_WORD *)(a7 + 42) )
        memset_0(*(void **)(a7 + 48), 0, 4LL * ((*(unsigned __int16 *)(a7 + 42) - 1) / 32 + 1));
    }
  }
}

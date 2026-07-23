/*
 * XREFs of sub_1403B3AE0 @ 0x1403B3AE0
 * Callers:
 *     sub_140A53F54 @ 0x140A53F54 (sub_140A53F54.c)
 * Callees:
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 */

__int64 __fastcall sub_1403B3AE0(char a1, _DWORD *a2)
{
  __int64 v4; // rdi
  ULONG_PTR v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r10d
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // ecx
  _BYTE *v15; // rax
  int v16; // eax
  int v17; // edx
  __int64 i; // rax
  __int128 v19; // xmm0

  v4 = 0LL;
  v5 = 0LL;
  v6 = sub_1403B3BA0();
  v7 = v6;
  if ( (a1 & 1) != 0 )
  {
    v12 = 0;
    if ( v6 )
    {
      v13 = qword_140C4E200;
      do
      {
        v5 = v13;
        if ( !*(_BYTE *)(v13 + 12) )
          break;
        if ( *(_DWORD *)v13 == *a2 )
          v4 = v13;
        ++v12;
        v13 += 64LL;
      }
      while ( v12 < v6 );
    }
  }
  if ( *a2 == -1 )
  {
    if ( (a1 & 1) != 0 )
    {
      return 3221225485LL;
    }
    else
    {
      v14 = 0;
      if ( (_DWORD)dword_140C54A90 )
      {
        v15 = (_BYTE *)(qword_140C4E210 + 56);
        do
        {
          v5 = (ULONG_PTR)(v15 - 56);
          if ( !*(v15 - 44) && !*v15 )
            break;
          ++v14;
          v15 += 64;
        }
        while ( v14 < (unsigned int)dword_140C54A90 );
      }
      if ( v14 != (_DWORD)dword_140C54A90 )
      {
        v16 = *(_DWORD *)v5;
        v10 = 0;
        *(_BYTE *)(v5 + 12) = 1;
        *a2 = v16;
        return v10;
      }
      return 3221226021LL;
    }
  }
  else
  {
    v8 = (unsigned int)dword_140C54A90;
    v9 = 0;
    v10 = -1073741275;
    if ( (_DWORD)dword_140C54A90 )
    {
      while ( 1 )
      {
        v5 = qword_140C4E210 + ((unsigned __int64)v9 << 6);
        if ( *(_DWORD *)v5 == *a2 )
          break;
        if ( ++v9 >= (unsigned int)dword_140C54A90 )
          goto LABEL_9;
      }
      if ( *(_BYTE *)(v5 + 12) )
        return 3221227272LL;
      *(_BYTE *)(v5 + 12) = 1;
      v10 = 0;
    }
LABEL_9:
    if ( (a1 & 2) == 0 )
    {
      if ( v10 == -1073741275 )
      {
        if ( (a1 & 1) == 0 )
          return v10;
        v5 = qword_140C4E210 + (v8 << 6);
        *(_BYTE *)(v5 + 12) = 1;
        *(_DWORD *)v5 = *a2;
        *(_DWORD *)(v5 + 8) = *a2;
        if ( v4 )
          *(_DWORD *)(v5 + 8) = *(_DWORD *)(v4 + 8);
        LODWORD(dword_140C54A90) = v8 + 1;
        v10 = 0;
      }
      else if ( (a1 & 1) == 0 )
      {
        return v10;
      }
      if ( !v4 )
      {
        v17 = 0;
        if ( v7 )
        {
          for ( i = qword_140C4E200; *(_BYTE *)(i + 12); i += 64LL )
          {
            if ( ++v17 >= v7 )
              return v10;
          }
          v19 = *(_OWORD *)v5;
          ++dword_140C4E22C;
          *(_OWORD *)i = v19;
          *(_OWORD *)(i + 16) = *(_OWORD *)(v5 + 16);
          *(_OWORD *)(i + 32) = *(_OWORD *)(v5 + 32);
          *(_OWORD *)(i + 48) = *(_OWORD *)(v5 + 48);
        }
      }
      return v10;
    }
    return 0LL;
  }
}

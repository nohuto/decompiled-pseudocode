/*
 * XREFs of sub_14020B270 @ 0x14020B270
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 * Callees:
 *     sub_14020AF90 @ 0x14020AF90 (sub_14020AF90.c)
 *     sub_14068DCD4 @ 0x14068DCD4 (sub_14068DCD4.c)
 */

void __fastcall sub_14020B270(__int64 a1)
{
  unsigned int *v2; // rsi
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // edx
  struct _KTHREAD *v7; // rcx
  unsigned __int64 v8; // r9
  _DWORD *v9; // rdx
  unsigned int v10; // edi
  _DWORD *v11; // r8
  int v12; // ebx
  unsigned int i; // eax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  unsigned int v16; // r10d
  __int64 v17; // rdx
  _DWORD *v18; // r8
  int v19; // edx
  unsigned int j; // eax
  _DWORD *v21; // r8
  _DWORD *v22; // rdx

  if ( (*(_DWORD *)(a1 + 160) & 0x20000) != 0 )
  {
    v2 = (unsigned int *)(a1 + 1736);
    if ( *(struct _KTHREAD **)(a1 + 4192) == KeGetCurrentThread() )
      sub_14020AF90(a1 + 1736, (unsigned int *)(a1 + 1688));
    v3 = *v2;
    v4 = 0LL;
    if ( *v2 )
    {
      while ( 1 )
      {
        v5 = *((_QWORD *)v2 + 1);
        v6 = *(_DWORD *)(v5 + 4 * v4);
        if ( v3 < 0x20 )
          break;
        *(_DWORD *)(v5 + 4 * v4) = ~v6;
        v4 = (unsigned int)(v4 + 1);
        v3 -= 32;
        if ( !v3 )
          goto LABEL_7;
      }
      *(_DWORD *)(v5 + 4LL * (unsigned int)v4) = v6 ^ ((1 << v3) - 1);
    }
LABEL_7:
    sub_14020AF90((__int64)v2, (unsigned int *)(a1 + 88));
    sub_14020AF90((__int64)v2, (unsigned int *)(a1 + 112));
    v7 = *(struct _KTHREAD **)(a1 + 4192);
    if ( v7 && v7 != KeGetCurrentThread() )
      sub_14020AF90((__int64)v2, (unsigned int *)(a1 + 1688));
    v8 = *v2;
    if ( (_DWORD)v8 )
    {
      v9 = (_DWORD *)*((_QWORD *)v2 + 1);
      v10 = 0;
      v11 = &v9[(unsigned __int64)(unsigned int)(v8 - 1) >> 5];
      if ( v9 != v11 && *v9 == -1 )
      {
        v10 = 32;
        for ( ++v9; v9 < v11 && *v9 == -1; ++v9 )
          v10 += 32;
      }
      for ( ; v10 < (unsigned int)v8; ++v10 )
      {
        if ( !_bittest(*((const signed __int32 **)v2 + 1), v10) )
          break;
      }
      v12 = 0;
      if ( v9 != v11 )
      {
        v8 = v10 & 0x1F;
        if ( (*v9 & ~*((_DWORD *)qword_140015FA0 + v8)) == 0 )
        {
          v12 = 32 - v8;
          if ( (_DWORD)v8 == 33 )
            goto LABEL_25;
          v22 = v9 + 1;
          while ( v22 < v11 && !*v22 )
          {
            ++v22;
            v12 += 32;
            if ( v12 == -1 )
              goto LABEL_25;
          }
        }
      }
      for ( i = v12 + v10; i < *v2; ++v12 )
      {
        if ( _bittest(*((const signed __int32 **)v2 + 1), i) )
          break;
        if ( v12 == -1 )
          break;
        ++i;
      }
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_25:
          if ( !v12 )
            return;
          v14 = ((v10 << 9) + (v12 << 9)) & 0xFFFFF000;
          v15 = ((v10 << 9) + 4095) & 0xFFFFF000;
          if ( (_DWORD)v15 != v14 )
            sub_14068DCD4(a1 + 224, v15, v14 - (unsigned int)v15, v8);
          v16 = *v2;
          v10 += v12;
          if ( *v2 <= v10 )
            return;
          v17 = *((_QWORD *)v2 + 1);
          v8 = v17 + 4 * ((unsigned __int64)(v16 - 1) >> 5);
          v18 = (_DWORD *)(v17 + 4 * ((unsigned __int64)v10 >> 5));
          if ( v18 != (_DWORD *)v8 && (*v18 | *((_DWORD *)qword_140015FA0 + (v10 & 0x1F))) == -1 )
          {
            v10 = v10 - (v10 & 0x1F) + 32;
            for ( ++v18; (unsigned __int64)v18 < v8 && *v18 == -1; ++v18 )
              v10 += 32;
          }
          for ( ; v10 < v16; ++v10 )
          {
            if ( !_bittest(*((const signed __int32 **)v2 + 1), v10) )
              break;
          }
          v12 = 0;
          if ( v18 != (_DWORD *)v8 )
          {
            v19 = v10 & 0x1F;
            if ( (*v18 & ~*((_DWORD *)qword_140015FA0 + (v10 & 0x1F))) == 0 )
              break;
          }
LABEL_42:
          for ( j = v12 + v10; j < *v2; ++v12 )
          {
            if ( _bittest(*((const signed __int32 **)v2 + 1), j) )
              break;
            if ( v12 == -1 )
              break;
            ++j;
          }
        }
        v12 = 32 - v19;
        if ( v19 != 33 )
        {
          v21 = v18 + 1;
          while ( (unsigned __int64)v21 < v8 && !*v21 )
          {
            ++v21;
            v12 += 32;
            if ( v12 == -1 )
              goto LABEL_25;
          }
          goto LABEL_42;
        }
      }
    }
  }
}

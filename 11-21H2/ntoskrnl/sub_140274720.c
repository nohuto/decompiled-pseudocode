/*
 * XREFs of sub_140274720 @ 0x140274720
 * Callers:
 *     sub_140274030 @ 0x140274030 (sub_140274030.c)
 *     sub_1403146E0 @ 0x1403146E0 (sub_1403146E0.c)
 *     sub_1403171A0 @ 0x1403171A0 (sub_1403171A0.c)
 *     sub_1403234A0 @ 0x1403234A0 (sub_1403234A0.c)
 *     sub_14032F750 @ 0x14032F750 (sub_14032F750.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140274720(__int64 a1, unsigned __int64 a2, _OWORD *a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // r9^7

  *a3 = 0LL;
  v3 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  a3[1] = 0LL;
  do
  {
    v4 = *(_QWORD *)v3;
    result = 0xFFFFF6FB7DBED000uLL;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( v3 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
      {
        result = (unsigned __int64)KeGetCurrentThread();
        if ( *(_BYTE *)(*(_QWORD *)(result + 184) + 912LL) != 1 )
        {
          if ( (v4 & 1) == 0 )
            goto LABEL_4;
          if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
          {
            result = (unsigned __int64)KeGetCurrentThread();
            v9 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1928LL);
            if ( v9 )
            {
              result = *(_QWORD *)(v9 + 8 * ((v3 >> 3) & 0x1FF));
              LOBYTE(v9) = v4 | 0x20;
              if ( (result & 0x20) == 0 )
                v9 = *(_QWORD *)v3;
              LOBYTE(v4) = v9;
              if ( (result & 0x42) != 0 )
                LOBYTE(v4) = v9 | 0x42;
            }
          }
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v6 = ((((__int64)(v3 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
      v7 = *(_QWORD *)v6;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL
        && v6 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v7 & 1) != 0
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        v10 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 8 * ((v6 >> 3) & 0x1FF));
          v12 = HIBYTE(*(_QWORD *)v6);
          if ( (v11 & 0x20) == 0 )
            v12 = HIBYTE(v7);
          HIBYTE(v7) = v12;
          if ( (v11 & 0x42) != 0 )
            HIBYTE(v7) = v12;
        }
      }
      v8 = HIBYTE(v7) & 0xF;
      result = (unsigned int)(v8 - 8);
      if ( (unsigned __int8)(v8 - 8) > 2u )
      {
        result = (unsigned __int8)v8;
        ++*((_DWORD *)a3 + (unsigned __int8)v8);
      }
    }
LABEL_4:
    v3 += 8LL;
  }
  while ( (v3 & 0xFFF) != 0 );
  return result;
}

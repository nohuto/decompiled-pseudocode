/*
 * XREFs of sub_1403C62EC @ 0x1403C62EC
 * Callers:
 *     sub_14082FB00 @ 0x14082FB00 (sub_14082FB00.c)
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14082FB84 @ 0x14082FB84 (sub_14082FB84.c)
 *     sub_14082FBD4 @ 0x14082FBD4 (sub_14082FBD4.c)
 *     sub_14082FC44 @ 0x14082FC44 (sub_14082FC44.c)
 *     sub_14083083C @ 0x14083083C (sub_14083083C.c)
 *     sub_140830B1C @ 0x140830B1C (sub_140830B1C.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1403C62EC(ULONG_PTR *a1, _DWORD *a2, _DWORD *a3, int a4, _DWORD *a5, int a6, _DWORD *a7)
{
  int v10; // ebp
  __int64 v11; // rax
  ULONG_PTR v12; // rdi
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // eax
  _WORD *v17; // rcx
  unsigned int v18; // ebx
  PVOID PoolWithTag; // rax
  ULONG_PTR v20; // rsi
  unsigned int NumberOfBytes[14]; // [rsp+20h] [rbp-38h] BYREF

  v10 = 0;
  if ( a1 && a2 && a3 && a5 && a7 )
  {
    v11 = sub_14082FB84();
    v12 = v11;
    if ( v11 )
    {
      v13 = sub_14082FBD4(v11);
      if ( v13 >= 0 )
      {
        v15 = *(_QWORD *)(v12 + 24);
        v16 = *(unsigned __int16 *)(v15 + 6);
        if ( (_WORD)v16 )
        {
          v17 = *(_WORD **)(v15 + 16);
          v14 = v16;
          do
          {
            if ( (*v17 & 0x9020) == 0x20 && (*v17 & 3) != 0 )
              ++v10;
            v17 += 14;
            --v14;
          }
          while ( v14 );
        }
        *a3 = v10;
        *a5 = 0;
        if ( a4 )
        {
          LOBYTE(v14) = 1;
          if ( (int)sub_140830B1C(v12, (unsigned __int16)a4, v14, 0LL) >= 0 )
            *a5 = 1;
        }
        *a7 = 0;
        if ( a6 )
        {
          LOBYTE(v14) = 1;
          if ( (int)sub_140830B1C(v12, (unsigned __int16)a6, v14, 0LL) >= 0 )
            *a7 = 1;
        }
        NumberOfBytes[0] = 0;
        v13 = sub_14083083C(v12, 0LL, NumberOfBytes);
        if ( v13 >= 0 )
        {
          if ( !NumberOfBytes[0] )
            goto LABEL_29;
          v18 = NumberOfBytes[0];
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x72746C6Du);
          v20 = (ULONG_PTR)PoolWithTag;
          if ( PoolWithTag )
            memset(PoolWithTag, 0, v18);
          if ( v20 )
          {
            v13 = sub_14083083C(v12, v20, NumberOfBytes);
            if ( v13 < 0 )
            {
              sub_140348B40(v20);
            }
            else
            {
              *a1 = v20;
              *a2 = NumberOfBytes[0];
            }
          }
          else
          {
LABEL_29:
            v13 = -1073741801;
          }
        }
      }
      sub_14082FC44(v12, 4095LL);
      sub_140348B40(v12);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v13;
}

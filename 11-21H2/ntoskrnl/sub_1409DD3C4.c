/*
 * XREFs of sub_1409DD3C4 @ 0x1409DD3C4
 * Callers:
 *     sub_14075DD3C @ 0x14075DD3C (sub_14075DD3C.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     sub_1402E09E0 @ 0x1402E09E0 (sub_1402E09E0.c)
 *     sub_1402E0A04 @ 0x1402E0A04 (sub_1402E0A04.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_140783CD8 @ 0x140783CD8 (sub_140783CD8.c)
 *     sub_140784160 @ 0x140784160 (sub_140784160.c)
 *     sub_14078CB04 @ 0x14078CB04 (sub_14078CB04.c)
 *     sub_14078CCE4 @ 0x14078CCE4 (sub_14078CCE4.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

int *__fastcall sub_1409DD3C4(unsigned int *Src, unsigned int a2)
{
  ULONG_PTR v4; // rbp
  _QWORD *v5; // rdi
  unsigned int v6; // esi
  ULONG_PTR i; // rcx
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // esi
  int *PoolWithTag; // rax
  int *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // r13
  int *v22; // rax
  _WORD *v23; // rbx
  int v24; // eax
  unsigned int v25; // r14d
  unsigned int v26; // eax
  unsigned int v28; // [rsp+30h] [rbp-58h] BYREF
  int v29; // [rsp+34h] [rbp-54h]
  wchar_t v30[8]; // [rsp+38h] [rbp-50h] BYREF

  v4 = 0LL;
  if ( (Src[11] & 7) != 0 )
  {
    v5 = sub_140783CD8((_QWORD *)Src + 3, 0);
    if ( v5 )
    {
      v6 = Src[1];
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      for ( i = v5[7]; (_QWORD *)i != v5 + 7; i = *(_QWORD *)i )
      {
        if ( *(_DWORD *)(i + 80) == v6 )
        {
          v4 = i;
          sub_140784160(i);
          break;
        }
      }
      KeReleaseMutex(&Object, 0);
      sub_1407838E0((__int64 *)&off_140C037C0, (ULONG_PTR)v5);
      if ( v4 )
      {
        v8 = *(_DWORD *)(v4 + 16);
        if ( (v8 & 3) != 0 )
        {
          v9 = *(_DWORD *)(v4 + 72);
          if ( (Src[11] & 1) != 0 )
          {
            v28 = a2;
            if ( sub_1402E09E0(4, (int *)&v28) )
            {
              v10 = sub_14078CCE4(v4);
              if ( v10 <= -1 - v28 )
              {
                v11 = v10 + v28;
                PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, v10 + v28, 0x70696D57u);
                v13 = PoolWithTag;
                if ( PoolWithTag )
                {
                  memmove(PoolWithTag, Src, *Src);
                  sub_14078CB04(v13, v11, v4);
LABEL_41:
                  sub_1407838E0((__int64 *)&off_140C037A0, v4);
                  return v13;
                }
              }
            }
          }
          else
          {
            v14 = Src[13];
            v29 = v14;
            if ( (unsigned int)v14 < v9 )
            {
              v15 = *(_QWORD *)(v4 + 88);
              if ( (v8 & 2) != 0 )
              {
                v16 = *(_QWORD *)(v15 + 8 * v14);
                v17 = -1LL;
                v18 = -1LL;
                do
                  ++v18;
                while ( *(_WORD *)(v16 + 2 * v18) );
                v19 = 2 * v18 + 4;
              }
              else
              {
                v16 = v15 + 4;
                v17 = -1LL;
                v20 = -1LL;
                do
                  ++v20;
                while ( *(_WORD *)(v16 + 2 * v20) );
                v19 = 2 * v20 + 16;
              }
              v28 = a2;
              if ( sub_1402E09E0(2, (int *)&v28) )
              {
                v21 = v28;
                if ( v19 <= ~v28 )
                {
                  v22 = (int *)ExAllocatePoolWithTag(PagedPool, v19 + v28, 0x70696D57u);
                  v13 = v22;
                  if ( v22 )
                  {
                    memmove(v22, Src, *Src);
                    v13[12] = v21;
                    *v13 = v19 + v21;
                    v23 = (_WORD *)((char *)v13 + v21);
                    v24 = *(_DWORD *)(v4 + 16);
                    v25 = v19 - 2;
                    if ( (v24 & 2) != 0 )
                    {
                      *v23 = v25;
                      sub_1402E0978(v23 + 1, v25, v16);
                    }
                    else
                    {
                      if ( (v24 & 0x20000) != 0 )
                        v13[11] |= 0x10000u;
                      sub_1402E1280(v30, 0xEuLL, L"%d", (unsigned int)(**(_DWORD **)(v4 + 88) + v29));
                      sub_1402E0978(v23 + 1, v25, v16);
                      sub_1402E0A04(v23 + 1, v25, (__int64)v30);
                      do
                        ++v17;
                      while ( v23[v17 + 1] );
                      *v23 = 2 * (v17 + 1);
                    }
                    goto LABEL_41;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v26 = Src[11];
  if ( (v26 & 1) != 0 && a2 >= 0x3C )
  {
    Src[14] = 0;
  }
  else if ( (v26 & 6) != 0 && a2 >= 0x34 )
  {
    Src[12] = 0;
  }
  v13 = (int *)Src;
  if ( v4 )
    goto LABEL_41;
  return v13;
}

/*
 * XREFs of sub_1409DCFD4 @ 0x1409DCFD4
 * Callers:
 *     sub_14075DD3C @ 0x14075DD3C (sub_14075DD3C.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402E09E0 @ 0x1402E09E0 (sub_1402E09E0.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_1407839B4 @ 0x1407839B4 (sub_1407839B4.c)
 *     sub_140784160 @ 0x140784160 (sub_140784160.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char *__fastcall sub_1409DCFD4(__int64 a1)
{
  int v1; // ebp
  char *v2; // rdi
  unsigned int v4; // r13d
  ULONG_PTR i; // rbx
  int v6; // r12d
  int v7; // r12d
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  unsigned int v10; // ecx
  int v11; // r15d
  size_t v12; // rax
  char *PoolWithTag; // rax
  __int64 v14; // rcx
  char *v15; // rcx
  int v16; // r15d
  int v17; // ecx
  __int128 v19[5]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+10h]
  unsigned int v22; // [rsp+A0h] [rbp+18h]
  size_t Size; // [rsp+A8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0LL;
  v4 = 0;
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD *)qword_140C16510; ; i = *(_QWORD *)i )
  {
    if ( i == qword_140C16510 )
    {
      i = 0LL;
      goto LABEL_6;
    }
    if ( *(_DWORD *)(i + 56) == v1 )
      break;
  }
  sub_140784160(i);
LABEL_6:
  KeReleaseMutex(&Object, 0);
  if ( i )
  {
    v6 = *(_DWORD *)(a1 + 44);
    v20 = 64;
    v7 = v6 & 0x80;
    if ( v7 )
    {
      v8 = 0;
      v9 = 0;
    }
    else
    {
      v8 = *(unsigned __int16 *)(a1 + 68) + 2;
      if ( !sub_1402E09E0(2, (int *)&v20) || (v9 = v20, v8 > ~v20) )
      {
LABEL_28:
        sub_1407838E0((__int64 *)&off_140C037E0, i);
        return v2;
      }
      v20 += v8;
    }
    if ( sub_1402E09E0(8, (int *)&v20) )
    {
      v10 = *(_DWORD *)(a1 + 64);
      if ( v10 <= ~v20 )
      {
        v21 = 0;
        v11 = v20 + v10;
        v12 = v20 + v10;
        v22 = v20 + v10;
        while ( 1 )
        {
          Size = v12;
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x70696D57u);
          v2 = PoolWithTag;
          if ( !PoolWithTag )
            break;
          memset(PoolWithTag, 0, Size);
          *(_DWORD *)v2 = v11;
          *((_DWORD *)v2 + 1) = *(_DWORD *)(a1 + 4);
          *(_OWORD *)(v2 + 24) = *(_OWORD *)(a1 + 48);
          v14 = *(unsigned int *)(a1 + 8);
          *((_DWORD *)v2 + 11) = v7 | 2;
          *((_DWORD *)v2 + 14) = v20;
          *((_DWORD *)v2 + 2) = v14;
          if ( v7 )
          {
            *((_DWORD *)v2 + 13) = *(_DWORD *)(a1 + 68);
          }
          else
          {
            v8 -= 2;
            *((_DWORD *)v2 + 12) = v9;
            v15 = &v2[v9];
            *(_WORD *)v15 = v8;
            memmove(v15 + 2, (const void *)(a1 + 70), v8);
          }
          LOBYTE(v14) = 1;
          v16 = sub_1407839B4(v14, *(unsigned int *)(i + 56), (__int64)(v2 + 24), v11, (__int64)v2, v19);
          if ( v16 >= 0 )
          {
            v17 = *((_DWORD *)v2 + 11);
            if ( (v17 & 0x20) == 0 )
            {
              *((_DWORD *)v2 + 11) = v17 | *(_DWORD *)(a1 + 44) & 0xFF000008 | 8;
              goto LABEL_28;
            }
            v4 = *((_DWORD *)v2 + 12);
          }
          ExFreePoolWithTag(v2, 0);
          v2 = 0LL;
          if ( v16 >= 0 && v4 > v22 )
          {
            v11 = v4;
            v12 = v4;
            ++v21;
            v22 = v4;
            if ( v21 < 2 )
              continue;
          }
          goto LABEL_28;
        }
      }
    }
    goto LABEL_28;
  }
  return v2;
}

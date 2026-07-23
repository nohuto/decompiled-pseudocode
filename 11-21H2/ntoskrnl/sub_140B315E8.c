/*
 * XREFs of sub_140B315E8 @ 0x140B315E8
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmLockPagableImageSection @ 0x1406F5E50 (MmLockPagableImageSection.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AA9594 @ 0x140AA9594 (sub_140AA9594.c)
 */

void __fastcall sub_140B315E8(__int64 a1)
{
  char *v2; // rdi
  char *PoolWithTag; // rax
  char *v4; // rbx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  char v9; // cl
  char v10; // al
  char v11; // dl
  int v12; // edx
  PVOID v13; // rax
  PVOID v14; // rax
  PVOID v15; // rax
  ULONG_PTR v16; // rax
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  _DWORD v20[68]; // [rsp+20h] [rbp-128h] BYREF

  v2 = *(char **)(*(_QWORD *)(a1 + 240) + 48LL);
  if ( v2 && (*((_DWORD *)v2 + 2) <= 4u || *v2) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x736C6448u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag + 8, 0, 0x80uLL);
      *(_QWORD *)v4 = 0LL;
      v5 = *((_DWORD *)v4 + 12) ^ (*((_DWORD *)v4 + 12) ^ (*((_DWORD *)v2 + 2) << 9)) & 0xE00;
      *((_DWORD *)v4 + 12) = v5;
      *((_QWORD *)v4 + 8) = *((_QWORD *)v2 + 2);
      *((_DWORD *)v4 + 13) = *((_DWORD *)v2 + 1);
      v6 = ((unsigned __int8)v5 ^ (unsigned __int8)(v2[3] << 7)) & 0x80 ^ v5;
      *((_DWORD *)v4 + 12) = v6;
      v7 = ((unsigned __int16)v6 ^ (unsigned __int16)((unsigned __int8)v2[2] << 8)) & 0x100 ^ v6;
      *((_DWORD *)v4 + 12) = v7;
      v8 = ((unsigned __int8)v7 ^ (unsigned __int8)(8 * *v2)) & 8 ^ v7;
      *((_DWORD *)v4 + 12) = v8;
      v9 = v2[56];
      v4[116] = v9;
      v4[117] = 0;
      v4[84] = v2[57];
      v4[85] = v2[58];
      v4[86] = v2[59];
      v4[87] = v2[60];
      *(_OWORD *)(v4 + 100) = *(_OWORD *)(v2 + 40);
      if ( v9 )
      {
        v8 |= 0x1000u;
        *((_DWORD *)v4 + 12) = v8;
      }
      v4[118] = 1;
      v4[119] = v2[36] & 1;
      *((_WORD *)v4 + 60) = *((_WORD *)v2 + 13);
      *((_WORD *)v4 + 61) = *((_WORD *)v2 + 12);
      *((_WORD *)v4 + 62) = *((_WORD *)v2 + 15);
      v4[126] = v2[28];
      v4[127] = v2[32];
      v4[128] = v2[33];
      if ( (unsigned __int16)(*((_WORD *)v2 + 12) - 1) <= 0xFFFDu
        && (unsigned __int16)(*((_WORD *)v2 + 13) - 1) <= 0xFFFDu )
      {
        *((_DWORD *)v4 + 12) = v8 | 0x1000;
        if ( (*((_DWORD *)v2 + 9) & 1) == 0 )
        {
          memset(v20, 0, sizeof(v20));
          v10 = *v2;
          v11 = v2[33];
          HIWORD(v20[3]) = -1;
          HIBYTE(v20[4]) = v10;
          LOWORD(v20[3]) = *((_WORD *)v2 + 12);
          HIWORD(v20[2]) = *((_WORD *)v2 + 13);
          v20[0] = (unsigned __int8)v2[28];
          LOWORD(v20[2]) = *((_WORD *)v2 + 15);
          v12 = v2[32] & 0x1F | (32 * (v11 & 7));
          LOBYTE(v20[4]) = -1;
          v20[1] = v12;
          sub_14042A5E0(a1, v20);
        }
      }
      v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3800uLL, 0x736C6448u);
      *((_QWORD *)v4 + 2) = v13;
      if ( v13
        && (*((_DWORD *)v4 + 24) = -1,
            v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x736C6448u),
            (*((_QWORD *)v4 + 3) = v14) != 0LL)
        && (v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x736C6448u), (*((_QWORD *)v4 + 4) = v15) != 0LL)
        && (v16 = MmLockPagableImageSection((ULONG_PTR)sub_140AA8ED0), (*((_QWORD *)v4 + 1) = v16) != 0LL) )
      {
        if ( *((_DWORD *)v4 + 13) == 9600 )
        {
          *((_DWORD *)v4 + 19) = -1;
          *((_DWORD *)v4 + 20) = 1301;
          *((_DWORD *)v4 + 18) = -13010;
        }
        qword_140D01468 = (PKSPIN_LOCK)v4;
        sub_140AA9594(1);
      }
      else
      {
        v17 = (void *)*((_QWORD *)v4 + 2);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        v18 = (void *)*((_QWORD *)v4 + 3);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        v19 = (void *)*((_QWORD *)v4 + 4);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        ExFreePoolWithTag(v4, 0);
      }
    }
  }
}

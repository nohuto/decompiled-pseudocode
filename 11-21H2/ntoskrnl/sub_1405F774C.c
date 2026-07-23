/*
 * XREFs of sub_1405F774C @ 0x1405F774C
 * Callers:
 *     sub_1405F7EBC @ 0x1405F7EBC (sub_1405F7EBC.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403792D8 @ 0x1403792D8 (sub_1403792D8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F7B94 @ 0x1405F7B94 (sub_1405F7B94.c)
 */

__int64 __fastcall sub_1405F774C(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  unsigned int v5; // edi
  _QWORD *v6; // r15
  bool v7; // zf
  _QWORD *v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // r12d
  signed __int64 *v11; // r13
  __int64 v12; // r9
  unsigned int v13; // r14d
  unsigned int v14; // r15d
  unsigned int v15; // r10d
  __int64 v16; // rdx
  _DWORD *v17; // r11
  _DWORD *v18; // r8
  int v19; // edx
  int v20; // r10d
  _DWORD *v21; // r8
  unsigned int i; // eax
  unsigned int v23; // r13d
  __int64 v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rbx
  unsigned int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  struct _KTHREAD *v31; // rax
  int v33; // [rsp+20h] [rbp-B9h]
  unsigned int v34; // [rsp+30h] [rbp-A9h]
  _QWORD *v36; // [rsp+40h] [rbp-99h]
  __int64 j; // [rsp+48h] [rbp-91h] BYREF
  _QWORD *v38; // [rsp+50h] [rbp-89h]
  _OWORD v39[3]; // [rsp+58h] [rbp-81h] BYREF
  _DWORD v40[10]; // [rsp+88h] [rbp-51h] BYREF
  _QWORD v41[8]; // [rsp+B0h] [rbp-29h] BYREF

  memset(v39, 0, sizeof(v39));
  memset(v41, 0, sizeof(v41));
  sub_14030D5C0(*(_QWORD *)(a1 + 6584), 0LL, (__int64)v39, v4);
  if ( (*(_BYTE *)(a1 + 6021) & 8) != 0 )
  {
    v5 = 0;
    goto LABEL_61;
  }
  v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 6568), -1LL);
  v38 = v6;
  if ( v6 == (_QWORD *)-1LL )
  {
    v5 = -1073740682;
    goto LABEL_61;
  }
  v5 = 0;
  if ( !v6 || !*v6 || (v7 = a2 == 0, v8 = v6 + 1, !v7) )
    v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  v36 = v8;
  v34 = 0;
  --*((_WORD *)CurrentThread + 243);
  v11 = (signed __int64 *)(a1 + 6024);
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  if ( v8 )
  {
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      v15 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 <= v13 )
      {
LABEL_41:
        v6 = v38;
        v11 = (signed __int64 *)(a1 + 6024);
        v10 = v34;
        break;
      }
      v16 = v8[1];
      v12 = v13;
      v17 = (_DWORD *)(v16 + 4 * ((unsigned __int64)(v15 - 1) >> 5));
      v18 = (_DWORD *)(v16 + 4 * ((unsigned __int64)v13 >> 5));
      if ( v18 != v17 && (*v18 | *((_DWORD *)qword_140015FA0 + (v13 & 0x1F))) == -1 )
      {
        v12 = v13 - (v13 & 0x1F) + 32;
        for ( ++v18; v18 < v17 && *v18 == -1; ++v18 )
          v12 = (unsigned int)(v12 + 32);
      }
      for ( ; (unsigned int)v12 < v15; v12 = (unsigned int)(v12 + 1) )
      {
        if ( !_bittest((const signed __int32 *)v8[1], v12) )
          break;
      }
      v19 = 0;
      if ( v18 != v17 )
      {
        v20 = v12 & 0x1F;
        if ( (*v18 & ~*((_DWORD *)qword_140015FA0 + (v12 & 0x1F))) == 0 )
        {
          v19 = 32 - v20;
          if ( v20 == 33 )
            goto LABEL_32;
          v21 = v18 + 1;
          while ( v21 < v17 && !*v21 )
          {
            ++v21;
            v19 += 32;
            if ( v19 == -1 )
              goto LABEL_32;
          }
        }
      }
      for ( i = v19 + v12; i < *(_DWORD *)v8; ++v19 )
      {
        if ( _bittest((const signed __int32 *)v8[1], i) )
          break;
        if ( v19 == -1 )
          break;
        ++i;
      }
LABEL_32:
      v13 = v12;
      if ( !v19 )
        goto LABEL_41;
      v23 = v19 + v12;
      if ( (unsigned int)v12 < v19 + (int)v12 )
      {
        v24 = 8LL * (unsigned int)v12;
        do
        {
          v25 = *(_QWORD *)(v24 + *(_QWORD *)(a1 + 6216));
          if ( (v25 & 0x7FFFFFFFFFFF0000LL) != 0 && v25 >= 0 )
          {
            v26 = v14;
            v40[v14++] = v13;
            v41[v26] = sub_1403792D8(a1, v13, 0, v12, 4);
            if ( v14 == 8 )
            {
              sub_1405F7B94(a1, (unsigned int)v40, (unsigned int)v41, 8, v33, 0LL);
              v14 = 0;
            }
          }
          ++v13;
          v24 += 8LL;
        }
        while ( v13 < v23 );
        v8 = v36;
        v34 = v14;
      }
    }
  }
  v27 = 0;
  v28 = a2;
  for ( j = a2; v27 < *(_DWORD *)(a1 + 6212); ++v27 )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v27);
    if ( (v29 & 0x7FFFFFFFFFFF0000LL) != 0 && v29 >= 0 && (!v8 || _bittest64((const signed __int64 *)v8[1], v27)) )
    {
      v30 = v10;
      v40[v10++] = v27;
      v41[v30] = sub_1403792D8(a1, v27, 0, v12, 4);
      v28 = a2;
      if ( v10 == 8 )
      {
        sub_1405F7B94(a1, (unsigned int)v40, (unsigned int)v41, 8, v33, (unsigned __int64)&j & -(__int64)(a2 != 0));
        v28 = a2;
        v10 = 0;
        if ( a2 )
        {
          if ( !j )
            goto LABEL_55;
        }
      }
      v8 = v36;
    }
    else
    {
      v28 = a2;
    }
  }
  if ( v10 )
    sub_1405F7B94(a1, (unsigned int)v40, (unsigned int)v41, v10, v33, (unsigned __int64)&j & -(__int64)(v28 != 0));
LABEL_55:
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v11);
  sub_1402AFC00((ULONG_PTR)v11);
  v31 = KeGetCurrentThread();
  v7 = (*((_WORD *)v31 + 243))++ == 0xFFFF;
  if ( v7 && *((struct _KTHREAD **)v31 + 19) != (struct _KTHREAD *)((char *)v31 + 152) )
    KiCheckForKernelApcDelivery();
  _InterlockedExchange64((volatile __int64 *)(a1 + 6568), (__int64)v6);
LABEL_61:
  sub_1402D0930((__int64)v39, 0LL);
  return v5;
}

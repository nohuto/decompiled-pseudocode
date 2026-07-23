/*
 * XREFs of sub_14037EEA8 @ 0x14037EEA8
 * Callers:
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 *     sub_1405F9C9C @ 0x1405F9C9C (sub_1405F9C9C.c)
 *     sub_1405FA610 @ 0x1405FA610 (sub_1405FA610.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     sub_140237F80 @ 0x140237F80 (sub_140237F80.c)
 *     sub_140238A40 @ 0x140238A40 (sub_140238A40.c)
 *     sub_140261818 @ 0x140261818 (sub_140261818.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14037EC9C @ 0x14037EC9C (sub_14037EC9C.c)
 *     sub_14037ED14 @ 0x14037ED14 (sub_14037ED14.c)
 *     sub_140380C38 @ 0x140380C38 (sub_140380C38.c)
 *     sub_140381130 @ 0x140381130 (sub_140381130.c)
 *     sub_1403812B0 @ 0x1403812B0 (sub_1403812B0.c)
 *     sub_140381960 @ 0x140381960 (sub_140381960.c)
 *     sub_1403819D4 @ 0x1403819D4 (sub_1403819D4.c)
 *     sub_140381E98 @ 0x140381E98 (sub_140381E98.c)
 *     sub_1403820C0 @ 0x1403820C0 (sub_1403820C0.c)
 *     sub_14038217C @ 0x14038217C (sub_14038217C.c)
 *     sub_140390A50 @ 0x140390A50 (sub_140390A50.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405F616C @ 0x1405F616C (sub_1405F616C.c)
 *     sub_1405FB4F4 @ 0x1405FB4F4 (sub_1405FB4F4.c)
 *     sub_1405FC72C @ 0x1405FC72C (sub_1405FC72C.c)
 */

__int64 __fastcall sub_14037EEA8(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r13
  __int64 v4; // rdx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // r15d
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r12
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned int v18; // esi
  _DWORD *v19; // r13
  int v20; // r9d
  int v21; // eax
  __int64 v22; // r15
  _QWORD *v23; // r13
  unsigned int v24; // eax
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // r12d
  __int64 v29; // r12
  ULONG_PTR v30; // r12
  struct _KTHREAD *v31; // r15
  unsigned int v32; // ecx
  __int64 v33; // rbx
  unsigned int v34; // edx
  int v35; // r9d
  struct _KTHREAD *v36; // rax
  bool v37; // zf
  _DWORD *v38; // rcx
  __int64 v39; // rsi
  ULONG_PTR v40; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v42; // r8d
  __int64 v43; // rbx
  int v44; // r9d
  struct _KTHREAD *v45; // rax
  unsigned int v46; // [rsp+40h] [rbp-38h]
  unsigned __int64 v47; // [rsp+48h] [rbp-30h]
  ULONGLONG *v48; // [rsp+50h] [rbp-28h]
  _OWORD v49[2]; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v50; // [rsp+C0h] [rbp+48h]
  unsigned int v52; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v53; // [rsp+D8h] [rbp+60h]

  v49[0] = 0LL;
  v48 = sub_140261818(0);
  v3 = (_QWORD *)(a1 + 24);
  v5 = *(_DWORD *)(v4 + 12) + *(_DWORD *)(v4 + 8) - 1;
  v6 = *(_DWORD *)(a1 + 56);
  v53 = v5;
  if ( (v6 & 1) != 0 )
  {
    sub_140237F80((__int64 *)a1, a1 + 24);
    v6 = *(_DWORD *)(a1 + 56);
  }
  *(_DWORD *)(a1 + 56) = v6 & 0xFFFFFFFE;
  v7 = *(_DWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    sub_140237ED8((__int64 *)(a1 + 64), a1 + 88);
    v7 = *(_DWORD *)(a1 + 120);
  }
  v50 = 0;
  v8 = 0;
  *(_DWORD *)(a1 + 120) = v7 & 0xFFFFFFFE;
  v52 = 0;
  while ( 1 )
  {
    v10 = sub_140381130(a1, *(unsigned int *)(a2 + 8), v3);
    if ( v10 == -1073741818 )
      break;
    sub_1403819D4(a1, v49, v3);
    v14 = *(_QWORD *)&v49[0];
    if ( !*(_QWORD *)&v49[0] )
      goto LABEL_29;
    v15 = *((_QWORD *)&v49[0] + 1) + 8LL;
    v16 = (unsigned __int16)**(_DWORD **)&v49[0] + 2LL;
    *((_QWORD *)&v49[0] + 1) = v15;
    if ( v15 < *(_QWORD *)&v49[0] + 8 * v16 )
    {
      v17 = v15;
      goto LABEL_21;
    }
    v13 = a1 + 16;
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)&v49[0] + 8LL);
    }
    else
    {
      v26 = sub_1405F616C(a1, *(_QWORD *)&v49[0]);
      if ( v26 == -1 )
      {
        v17 = -1LL;
        goto LABEL_21;
      }
    }
    if ( v26 )
    {
      v14 = v26;
      *(_QWORD *)&v49[0] = v26;
      *((_QWORD *)&v49[0] + 1) = v26 + 16;
      v17 = v26 + 16;
    }
    else
    {
      v17 = 0LL;
    }
LABEL_21:
    if ( v17 == -1 )
    {
      v10 = -1073741818;
      break;
    }
    if ( !v17 || (v18 = *(_DWORD *)v17, v53 < *(_DWORD *)v17) )
    {
LABEL_29:
      if ( v50 )
      {
        v39 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v39 + 6021) & 4) != 0 )
        {
          v40 = v39 + 6024;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v40);
          CurrentThread = KeGetCurrentThread();
          if ( v40 - qword_140C50630 >= 0x8000000000LL )
            v42 = -1;
          else
            v42 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
          _disable();
          v43 = (__int64)CurrentThread + 1696;
          v13 = 0LL;
          while ( (*(_QWORD *)v43 & 0x7FFFFFFFFFFFFFFCLL) != (v40 & 0x7FFFFFFFFFFFFFFCLL)
               || !*(_BYTE *)(v43 + 18)
               || (*(_DWORD *)v43 & 1) != 0
               || *(_DWORD *)(v43 + 8) != v42 )
          {
            v13 = (unsigned int)(v13 + 1);
            v43 += 96LL;
            if ( (unsigned int)v13 >= 6 )
              goto LABEL_106;
          }
          *(_BYTE *)(v43 + 18) = 0;
          if ( v43 )
          {
            if ( *(__int64 *)v43 < 0 )
            {
              *(_BYTE *)v43 |= 2u;
              _enable();
              sub_14034EE30(v43);
              _disable();
            }
            v44 = *(_DWORD *)(v43 + 88);
            *(_DWORD *)(v43 + 88) = 0;
            *(_BYTE *)(v43 + 17) = 0;
            *(_QWORD *)v43 = 0LL;
            *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v43 + 16);
            _enable();
            if ( v44 )
              sub_14022B568((ULONG_PTR)CurrentThread, v40, v44);
            goto LABEL_109;
          }
LABEL_106:
          if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v40, v42, 0LL);
          _enable();
LABEL_109:
          v45 = KeGetCurrentThread();
          v37 = (*((_WORD *)v45 + 243))++ == 0xFFFF;
          if ( v37 && *((struct _KTHREAD **)v45 + 19) != (struct _KTHREAD *)((char *)v45 + 152) )
            KiCheckForKernelApcDelivery();
        }
        sub_1405FC72C(v13, &v52, v50);
        sub_140238A40(*(_QWORD *)(a1 + 800));
      }
      if ( !*(_BYTE *)(a1 + 776) && (*(_BYTE *)(a1 + 1904) & 3) != 3 )
      {
        v24 = sub_14038217C(a1, 0LL);
        if ( v24 )
          sub_140390A50(a1, v24);
      }
      v10 = 0;
      break;
    }
    v19 = (_DWORD *)sub_1403820C0(a1, v17);
    v47 = (unsigned __int64)v19;
    v46 = *(_DWORD *)(v17 + 4);
    sub_1403812B0(a1, v19);
    if ( v48 )
      sub_1405FB4F4((_DWORD)v48, 1, v17, v20, *v19, a1, 0, 0);
    v21 = *(_DWORD *)(a1 + 48);
    v22 = a1 + 32;
    v23 = (_QWORD *)(a1 + 32);
    if ( v21 != -1 && v21 )
      v23 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * (unsigned int)(v21 - 1));
    if ( *v23 == v14 )
    {
      v23[1] = *((_QWORD *)&v49[0] + 1);
LABEL_8:
      v3 = (_QWORD *)(a1 + 24);
      goto LABEL_9;
    }
    sub_140237F80((__int64 *)a1, a1 + 24);
    if ( *(_DWORD *)(a1 + 48) == -1 )
    {
      *(_OWORD *)v23 = v49[0];
      goto LABEL_8;
    }
    v3 = (_QWORD *)(a1 + 24);
    sub_140381130(a1, *(unsigned int *)(v14 + 16), a1 + 24);
    v27 = *(_DWORD *)(a1 + 48);
    if ( v27 != -1 && v27 )
      v22 = *v3 + 16LL * (unsigned int)(v27 - 1);
    *(_QWORD *)(v22 + 8) = *((_QWORD *)&v49[0] + 1);
LABEL_9:
    sub_140381960(v49, a1);
    v49[0] = 0LL;
    v9 = sub_140381E98(a1, v3);
    v10 = v9;
    if ( v9 < 0 )
    {
      if ( v9 != -1073741818 )
        __int2c();
      break;
    }
    if ( !*(_BYTE *)(a1 + 776) )
    {
      v11 = *(_DWORD *)(v47 + 4);
      if ( !(v11 >> 12) )
        __int2c();
      *(_DWORD *)(v47 + 4) = v11 & 0xFFF | (((v11 >> 12) - 1) << 12);
      if ( ((v11 >> 12) - 1) << 12 )
        continue;
    }
    v10 = sub_140380C38(a1 + 64, v46, a1 + 88);
    if ( v10 < 0 )
    {
      if ( v10 == -1073741818 )
        break;
      if ( v10 != -1073741275 || **(int **)(a1 + 1920) < 2 )
      {
        __int2c();
        if ( v10 != -1073741275 )
          break;
      }
    }
    else
    {
      v10 = sub_14037ED14(a1, v47, a1 + 88);
      if ( v10 < 0 )
        break;
      sub_14037EC9C((_DWORD *)(a1 + 192), v47);
      v12 = a2;
      if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
      {
        v28 = v50;
        if ( v50 && v18 - v8 != v50 )
        {
          v29 = *(_QWORD *)(a1 + 800);
          if ( (*(_BYTE *)(v29 + 6021) & 4) != 0 )
          {
            v30 = v29 + 6024;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v30);
            v31 = KeGetCurrentThread();
            if ( v30 - qword_140C50630 >= 0x8000000000LL )
              v32 = -1;
            else
              v32 = sub_140287F30(*((_QWORD *)v31 + 23));
            _disable();
            v33 = (__int64)v31 + 1696;
            v34 = 0;
            while ( (*(_QWORD *)v33 & 0x7FFFFFFFFFFFFFFCLL) != (v30 & 0x7FFFFFFFFFFFFFFCLL)
                 || !*(_BYTE *)(v33 + 18)
                 || (*(_DWORD *)v33 & 1) != 0
                 || *(_DWORD *)(v33 + 8) != v32 )
            {
              ++v34;
              v33 += 96LL;
              if ( v34 >= 6 )
                goto LABEL_73;
            }
            *(_BYTE *)(v33 + 18) = 0;
            if ( v33 )
            {
              if ( *(__int64 *)v33 < 0 )
              {
                *(_BYTE *)v33 |= 2u;
                _enable();
                sub_14034EE30(v33);
                _disable();
              }
              v35 = *(_DWORD *)(v33 + 88);
              *(_DWORD *)(v33 + 88) = 0;
              *(_BYTE *)(v33 + 17) = 0;
              *(_QWORD *)v33 = 0LL;
              *((_BYTE *)v31 + 792) |= 1 << *(_BYTE *)(v33 + 16);
              _enable();
              if ( v35 )
                sub_14022B568((ULONG_PTR)v31, v30, v35);
              goto LABEL_75;
            }
LABEL_73:
            if ( (*((_DWORD *)v31 + 30) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v31, v30, v32, 0LL);
            _enable();
LABEL_75:
            v36 = KeGetCurrentThread();
            v12 = 1LL;
            v37 = (*((_WORD *)v36 + 243))++ == 0xFFFF;
            if ( v37 && *((struct _KTHREAD **)v36 + 19) != (struct _KTHREAD *)((char *)v36 + 152) )
              KiCheckForKernelApcDelivery();
          }
          sub_1405FC72C(v12, &v52, v50);
          sub_140238A40(*(_QWORD *)(a1 + 800));
          v8 = v52;
          v28 = 0;
          v50 = 0;
        }
        v38 = *(_DWORD **)(a1 + 1920);
        if ( !*v38 || *v38 == 3 && v18 < v38[1] )
        {
          if ( !v28 )
            v8 = v18;
          v50 = v28 + 1;
          v52 = v8;
        }
      }
    }
  }
  sub_140381960(v49, a1);
  return (unsigned int)v10;
}

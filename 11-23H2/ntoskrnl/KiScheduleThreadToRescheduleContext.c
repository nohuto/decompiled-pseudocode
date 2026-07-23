/*
 * XREFs of KiScheduleThreadToRescheduleContext @ 0x140243B10
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x1402B9EE4 (KiInsertDeferredReadyList.c)
 *     KiIsPrcbThread @ 0x140324F90 (KiIsPrcbThread.c)
 */

__int64 __fastcall KiScheduleThreadToRescheduleContext(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  unsigned int v5; // r11d
  __int64 v7; // rdx
  unsigned __int8 v8; // r14
  __int64 v12; // r10
  __int64 v13; // r9
  unsigned int v14; // esi
  __int64 v15; // rcx
  char v16; // bp
  char v17; // cl
  int v18; // eax
  __int64 v19; // r11
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  unsigned __int8 *v23; // r10
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // cl
  bool v28; // al
  int v29; // r11d
  __int64 v30; // r13
  __int64 v31; // rcx
  unsigned __int8 v32; // cl
  int v33; // eax
  __int64 v34; // r13
  unsigned __int8 *v35; // r10
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int8 v39; // cl
  bool v40; // al
  int v41; // r11d
  __int64 v42; // r12
  __int64 v43; // rcx
  unsigned __int8 v44; // al
  char v45; // al
  unsigned __int8 v46; // cl
  unsigned __int8 v47; // al

  v5 = 0;
  v7 = *a1;
  v8 = 0;
  v12 = 0LL;
  v13 = 0LL;
  if ( *a1 )
  {
    while ( *(_QWORD *)&a1[40 * (unsigned int)v13 + 16] != a3 )
    {
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= (unsigned int)v7 )
        goto LABEL_4;
    }
    v12 = (__int64)&a1[40 * (unsigned int)v13 + 16];
  }
LABEL_4:
  v14 = (*(_DWORD *)(a2 + 120) >> 1) & 1;
  if ( v14 < ((*(unsigned __int8 *)(v12 + 32) >> 1) & 1u) )
  {
    if ( (_BYTE)v7 )
    {
      do
      {
        v22 = *(_QWORD *)&a1[40 * v5 + 16];
        v23 = &a1[40 * v5];
        v24 = *((_QWORD *)v23 + 5);
        v25 = v24 - 1;
        if ( v22 == a3 )
        {
          if ( v25 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v24, v7, a3, v13) )
          {
            if ( (v23[49] & 1) != 0 )
              *(_DWORD *)(v26 + 116) |= 2u;
            *(_BYTE *)(v26 + 565) = 1;
            KiInsertDeferredReadyList(a5, v26);
          }
          v27 = v23[48] & 0xFE;
          *((_QWORD *)v23 + 4) = a2;
          v23[48] = v27;
          v28 = (*(_DWORD *)(a2 + 120) & 2) != 0;
          *((_QWORD *)v23 + 5) = a2;
          v23[48] = v27 & 0xC5 | (2 * (v28 | 2));
          v23[49] ^= (v23[49] ^ a4) & 1;
          if ( !(unsigned __int8)KiIsPrcbThread(a2, v7, a3, v13) )
            *(_DWORD *)(a2 + 536) = *(_DWORD *)(v22 + 36);
        }
        else
        {
          v30 = *(_QWORD *)(v22 + 24);
          if ( v25 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v24, v7, a3, v13) )
          {
            if ( (v23[49] & 1) != 0 )
              *(_DWORD *)(v31 + 116) |= 2u;
            *(_BYTE *)(v31 + 565) = 1;
            KiInsertDeferredReadyList(a5, v31);
          }
          v32 = v23[48] | 1;
          *((_QWORD *)v23 + 4) = v30;
          v23[48] = v32;
          v33 = *(_DWORD *)(v30 + 120);
          v23[49] &= ~1u;
          *((_QWORD *)v23 + 5) = v30;
          v23[48] = v32 & 0xC5 | (2 * (((v33 & 2) != 0) | 2));
          if ( !(unsigned __int8)KiIsPrcbThread(v30, v7, a3, v13) )
            *(_DWORD *)(v30 + 536) = *(_DWORD *)(v22 + 36);
        }
        v5 = v29 + 1;
      }
      while ( v5 < *a1 );
    }
    v8 = 1;
  }
  else if ( v14 )
  {
    if ( (_BYTE)v7 )
    {
      do
      {
        v34 = *(_QWORD *)&a1[40 * v5 + 16];
        v35 = &a1[40 * v5];
        v36 = *((_QWORD *)v35 + 5);
        v37 = v36 - 1;
        if ( v34 == a3 )
        {
          if ( v37 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v36, v7, a3, v13) )
          {
            if ( (v35[49] & 1) != 0 )
              *(_DWORD *)(v38 + 116) |= 2u;
            *(_BYTE *)(v38 + 565) = 1;
            KiInsertDeferredReadyList(a5, v38);
          }
          v39 = v35[48] & 0xFE;
          *((_QWORD *)v35 + 4) = a2;
          v35[48] = v39;
          v40 = (*(_DWORD *)(a2 + 120) & 2) != 0;
          *((_QWORD *)v35 + 5) = a2;
          v35[48] = v39 & 0xC5 | (2 * (v40 | 2));
          v35[49] ^= (v35[49] ^ a4) & 1;
          if ( !(unsigned __int8)KiIsPrcbThread(a2, v7, a3, v13) )
            *(_DWORD *)(a2 + 536) = *(_DWORD *)(v34 + 36);
        }
        else
        {
          v42 = *(_QWORD *)(v34 + 34944);
          if ( v37 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v36, v7, a3, v13) )
          {
            if ( (v35[49] & 1) != 0 )
              *(_DWORD *)(v43 + 116) |= 2u;
            *(_BYTE *)(v43 + 565) = 1;
            KiInsertDeferredReadyList(a5, v43);
          }
          v44 = v35[48] & 0xFE;
          *((_QWORD *)v35 + 4) = a2;
          v35[48] = v44;
          v45 = v44 & 0xE5 | (2 * (((*(_DWORD *)(a2 + 120) & 2) != 0) | 2));
          v46 = v45 | 0x20;
          v47 = v45 & 0xDF;
          if ( a2 == v42 )
            v46 = v47;
          v35[48] = v46;
          v35[49] &= ~1u;
          *((_QWORD *)v35 + 5) = v42;
          if ( !(unsigned __int8)KiIsPrcbThread(v42, v7, a3, v13) )
            *(_DWORD *)(v42 + 536) = *(_DWORD *)(v34 + 36);
        }
        v5 = v41 + 1;
      }
      while ( v5 < *a1 );
    }
  }
  else
  {
    v15 = *(_QWORD *)(v12 + 24);
    if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v15, v7, a3, v13) )
    {
      if ( (*(_BYTE *)(v12 + 33) & 1) != 0 )
        *(_DWORD *)(v21 + 116) |= 2u;
      *(_BYTE *)(v21 + 565) = 1;
      KiInsertDeferredReadyList(a5, v21);
    }
    *(_BYTE *)(v12 + 32) &= ~1u;
    v16 = *(_BYTE *)(v12 + 33) ^ a4;
    v17 = *(_BYTE *)(v12 + 32) & 0xC5;
    *(_QWORD *)(v12 + 16) = a2;
    v18 = *(_DWORD *)(a2 + 120);
    *(_BYTE *)(v12 + 33) ^= v16 & 1;
    *(_QWORD *)(v12 + 24) = a2;
    *(_BYTE *)(v12 + 32) = v17 | (2 * (((v18 & 2) != 0) | 2));
    if ( !(unsigned __int8)KiIsPrcbThread(a2, v7, a3, v13) )
      *(_DWORD *)(a2 + 536) = *(_DWORD *)(v19 + 36);
  }
  result = v8;
  *((_DWORD *)a1 + 1) = v14;
  return result;
}

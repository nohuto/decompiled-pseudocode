/*
 * XREFs of sub_1407A8B00 @ 0x1407A8B00
 * Callers:
 *     sub_1407A7850 @ 0x1407A7850 (sub_1407A7850.c)
 *     sub_1407AC930 @ 0x1407AC930 (sub_1407AC930.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F5DDC @ 0x1402F5DDC (sub_1402F5DDC.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14065912C @ 0x14065912C (sub_14065912C.c)
 *     sub_1407A69D4 @ 0x1407A69D4 (sub_1407A69D4.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 *     sub_1407A9178 @ 0x1407A9178 (sub_1407A9178.c)
 *     sub_1407A91A0 @ 0x1407A91A0 (sub_1407A91A0.c)
 *     sub_140966390 @ 0x140966390 (sub_140966390.c)
 *     sub_140966DA0 @ 0x140966DA0 (sub_140966DA0.c)
 *     sub_140966DC0 @ 0x140966DC0 (sub_140966DC0.c)
 *     sub_140966DFC @ 0x140966DFC (sub_140966DFC.c)
 *     sub_140967B4C @ 0x140967B4C (sub_140967B4C.c)
 *     sub_140967C94 @ 0x140967C94 (sub_140967C94.c)
 */

__int64 __fastcall sub_1407A8B00(__int64 *a1, KPROCESSOR_MODE a2, LARGE_INTEGER *a3, ULONG_PTR *a4, int a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rdi
  int v8; // ebp
  int v9; // eax
  ULONG_PTR v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rax
  volatile signed __int64 *v14; // rsi
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // ebp
  __int64 v19; // r8
  __int64 result; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  unsigned int v26; // edx
  int v27; // ecx
  int v28; // eax

  CurrentThread = KeGetCurrentThread();
  v7 = *a1;
LABEL_2:
  while ( 2 )
  {
    ExAcquirePushLockSharedEx(v7 + 352, 0LL);
    v8 = 0;
    while ( 1 )
    {
      v9 = *(_DWORD *)(v7 + 416);
      if ( (v9 & 0x40) != 0 )
      {
        v22 = -1073740032;
        goto LABEL_94;
      }
      if ( (v9 & 0x10) != 0 )
      {
        v22 = -1073741759;
        goto LABEL_94;
      }
      ExAcquirePushLockExclusiveEx(v7 + 136, 0LL);
      v10 = sub_1407A9178(v7);
      if ( v10 )
        break;
      v10 = *(_QWORD *)(v7 + 144);
      if ( v10 != v7 + 144 )
      {
        if ( v10 )
          break;
      }
      v11 = sub_14065912C(v7);
      v12 = v11;
      if ( v11 )
      {
        if ( (unsigned __int8)sub_1407A91A0((ULONG_PTR)v11) )
        {
          *((_DWORD *)v12 + 10) &= ~0x10000u;
          *(_QWORD *)v12[11] = v12[10];
          *(_QWORD *)(v12[10] + 8LL) = v12[11];
          --*(_DWORD *)(v7 + 464);
          sub_140966DC0(v7);
          if ( v8 )
            sub_140966DFC(v7);
          else
            sub_140966390(v7);
          --*((_WORD *)v12 - 15);
          *a4 = (ULONG_PTR)v12;
          return 0LL;
        }
LABEL_10:
        sub_140966DC0(v7);
        if ( v8 )
          sub_140966DFC(v7);
        else
          sub_140966390(v7);
        sub_140966DA0(v7);
        v8 = 1;
      }
      else
      {
        v13 = *(_QWORD *)(v7 + 360);
        if ( v13 && (*(_QWORD *)(*(_QWORD *)(v13 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
        {
          sub_140966DC0(v7);
          v22 = 1073741872;
LABEL_94:
          if ( v8 )
            sub_140966DFC(v7);
          else
            sub_140966390(v7);
          return v22;
        }
        sub_140966DC0(v7);
        if ( *(_QWORD *)(v7 + 32) )
          goto LABEL_72;
        if ( (*(_DWORD *)(v7 + 416) & 0x200) != 0 )
        {
          if ( (*(_DWORD *)(v7 + 256) & 0x1000) == 0 )
          {
LABEL_72:
            v22 = -1073741823;
            goto LABEL_94;
          }
          if ( v8 )
            sub_140966DFC(v7);
          else
            sub_140966390(v7);
          if ( byte_140D01161 )
            sub_140967C94(v7);
          result = sub_1407A69D4((__int64)a1, *(void **)(v7 + 248), v19, a2, a3);
          if ( (_DWORD)result )
            return result;
          goto LABEL_2;
        }
        if ( *(_QWORD *)(v7 + 368) )
        {
          v22 = 258;
          goto LABEL_94;
        }
        if ( (*((_DWORD *)CurrentThread + 345) & 0x20) != 0 )
          goto LABEL_72;
        if ( v8 )
        {
          v14 = (volatile signed __int64 *)(v7 + 224);
          *((_DWORD *)CurrentThread + 352) = a5;
          ExAcquirePushLockExclusiveEx(v7 + 224, 0LL);
          v15 = *(_QWORD **)(v7 + 240);
          v16 = (_QWORD *)((char *)CurrentThread + 1416);
          if ( *v15 != v7 + 232 )
            goto LABEL_70;
          *v16 = v7 + 232;
          *((_QWORD *)CurrentThread + 178) = v15;
          *v15 = v16;
          *(_QWORD *)(v7 + 240) = v16;
          if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v7 + 224);
          sub_1402AFC00(v7 + 224);
          sub_140966DFC(v7);
          if ( byte_140D01161 )
            sub_140967C94(v7);
          v18 = sub_1407A69D4((__int64)a1, (char *)CurrentThread + 1240, v17, a2, a3);
          if ( v18 )
          {
            ExAcquirePushLockExclusiveEx(v7 + 224, 0LL);
            v23 = (_QWORD *)((char *)CurrentThread + 1416);
            v24 = *((_QWORD *)CurrentThread + 177);
            if ( v24 )
            {
              *((_QWORD *)CurrentThread + 176) = 0LL;
              v25 = (_QWORD *)*((_QWORD *)CurrentThread + 178);
              if ( *(_QWORD **)(v24 + 8) != v23 || (_QWORD *)*v25 != v23 )
LABEL_70:
                __fastfail(3u);
              *v25 = v24;
              *(_QWORD *)(v24 + 8) = v25;
              *v23 = 0LL;
              if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v7 + 224);
              sub_1402AFC00(v7 + 224);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v7 + 224);
              sub_1402AFC00(v7 + 224);
              sub_1402F5DDC((char *)CurrentThread + 1240, WrLpcReceive, 0, 0, 0LL);
              v10 = *((_QWORD *)CurrentThread + 176);
              *((_QWORD *)CurrentThread + 176) = 0LL;
              if ( v10 )
              {
LABEL_69:
                sub_1407A6A34(v10);
                --*(_WORD *)(v10 - 30);
                *(_DWORD *)(v10 + 40) &= ~0x2000u;
                goto LABEL_89;
              }
            }
            return v18;
          }
          v10 = *((_QWORD *)CurrentThread + 176);
          *((_QWORD *)CurrentThread + 176) = 0LL;
          if ( v10 )
            goto LABEL_69;
          goto LABEL_2;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 352), 1LL, 17LL) != 17 )
        {
          sub_140966390(v7);
          sub_140966DA0(v7);
        }
        v8 = 1;
      }
    }
    if ( (unsigned __int8)sub_1407A91A0(v10) )
      goto LABEL_73;
    if ( *(_QWORD *)(v10 + 96) )
      goto LABEL_10;
    sub_1407A7F84(v10);
    sub_140966DC0(v7);
    if ( v8 )
      sub_140966DFC(v7);
    else
      sub_140966390(v7);
    sub_1407A6A34(v10);
    --*(_WORD *)(v10 - 30);
    ExAcquirePushLockSharedEx(v7 + 352, 0LL);
    v8 = 0;
    if ( (*(_DWORD *)(v7 + 416) & 0x50) != 0 )
    {
LABEL_53:
      sub_140966390(v7);
      sub_1407A7628(v10);
      continue;
    }
    break;
  }
  ExAcquirePushLockExclusiveEx(v7 + 136, 0LL);
  if ( sub_1407A9178(v7) )
    goto LABEL_51;
  v21 = *(_QWORD *)(v7 + 144);
  if ( v21 == v7 + 144 || !v21 )
    v21 = 0LL;
  if ( v10 != v21 )
  {
LABEL_51:
    if ( v10 != sub_1407A9178(v7) )
    {
      sub_140966DC0(v7);
      goto LABEL_53;
    }
  }
LABEL_73:
  if ( (*(_DWORD *)(v10 + 40) & 7) == 1 )
    --*(_DWORD *)(v7 + 448);
  else
    --*(_DWORD *)(v7 + 452);
  *(_DWORD *)(v10 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(v10 + 16) = 0LL;
  **(_QWORD **)(v10 + 8) = *(_QWORD *)v10;
  *(_QWORD *)(*(_QWORD *)v10 + 8LL) = *(_QWORD *)(v10 + 8);
  if ( (*(_DWORD *)(v10 + 40) & 0x200) == 0 )
    goto LABEL_83;
  v26 = (*(_QWORD *)(v10 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
  if ( !*(_QWORD *)(v10 + 144) )
    v26 = *(_QWORD *)(v10 + 136) != 0LL ? 0x80000000 : 0;
  v27 = v26 | 0x10000000;
  if ( !*(_QWORD *)(v10 + 152) )
    v27 = v26;
  if ( (v27 & a5) != 0 )
  {
LABEL_83:
    *(_WORD *)(v10 + 244) |= 0x2000u;
    ExAcquirePushLockExclusiveEx(v7 + 176, 0LL);
    v28 = *(_DWORD *)(v10 + 40);
    *(_QWORD *)(v10 + 16) = v7;
    *(_DWORD *)(v10 + 40) = v28 & 0xFFFFFF83 | (4 * (*(_DWORD *)(v7 + 416) & 6)) | 3;
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(v7 + 192);
    *(_QWORD *)v10 = v7 + 184;
    **(_QWORD **)(v7 + 192) = v10;
    ++*(_DWORD *)(v7 + 456);
    *(_QWORD *)(v7 + 192) = v10;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7 + 176);
    sub_1402AFC00(v7 + 176);
  }
  else
  {
    *(_WORD *)(v10 + 244) &= ~0x2000u;
    --*(_WORD *)(v10 - 30);
  }
  sub_140966DC0(v7);
  if ( v8 )
    sub_140966DFC(v7);
  else
    sub_140966390(v7);
LABEL_89:
  if ( byte_140D01161 )
    sub_140967B4C(v10);
  *a4 = v10;
  return 0LL;
}

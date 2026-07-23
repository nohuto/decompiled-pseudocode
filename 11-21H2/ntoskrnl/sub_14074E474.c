/*
 * XREFs of sub_14074E474 @ 0x14074E474
 * Callers:
 *     sub_14074E130 @ 0x14074E130 (sub_14074E130.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_140663348 @ 0x140663348 (sub_140663348.c)
 *     sub_1406633A8 @ 0x1406633A8 (sub_1406633A8.c)
 *     PsReleaseProcessWakeCounter @ 0x140668680 (PsReleaseProcessWakeCounter.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407A7064 @ 0x1407A7064 (sub_1407A7064.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 *     sub_1407A91A0 @ 0x1407A91A0 (sub_1407A91A0.c)
 */

__int64 __fastcall sub_14074E474(__int64 a1, __int64 a2, ULONG_PTR *a3, unsigned int a4, __int64 a5)
{
  int v5; // r10d
  __int64 v6; // rsi
  bool v10; // zf
  __int64 v11; // rax
  ULONG_PTR v12; // rdi
  unsigned int v13; // r12d
  volatile signed __int64 *v14; // rdi
  __int64 v16; // r9
  int v17; // esi
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  volatile signed __int64 *v23; // rsi
  __int64 v24; // rax
  ULONG_PTR *i; // rax
  ULONG_PTR v27; // [rsp+80h] [rbp+18h]
  int v28; // [rsp+88h] [rbp+20h]

  v5 = *(_DWORD *)(a2 + 416) & 6;
  v6 = a1;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
    v10 = v5 == 4;
  else
    v10 = v5 == 2;
  if ( !v10 && a4 == 3 )
  {
    v28 = 1;
LABEL_16:
    v11 = 176LL;
    goto LABEL_7;
  }
  v28 = 0;
  if ( a4 <= 2 )
  {
    v11 = 136LL;
    goto LABEL_7;
  }
  if ( a4 == 3 )
    goto LABEL_16;
  v11 = 200LL;
LABEL_7:
  ExAcquirePushLockExclusiveEx(v11 + a2, 0LL);
  v12 = *a3;
  v13 = 0;
  while ( (ULONG_PTR *)v12 != a3 )
  {
    v27 = v12;
    if ( *(_QWORD *)(v12 + 24) == v6 || (*(_DWORD *)(v12 + 40) & 0x8000) != 0 )
    {
      sub_1407A7F84(v12);
      if ( !(unsigned __int8)sub_1407A91A0(v12) )
      {
        if ( a4 <= 2 )
        {
          v23 = (volatile signed __int64 *)(a2 + 136);
        }
        else if ( a4 == 3 )
        {
          v23 = (volatile signed __int64 *)(a2 + 176);
        }
        else
        {
          v23 = (volatile signed __int64 *)(a2 + 200);
        }
        if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v23);
        sub_1402AFC00((ULONG_PTR)v23);
        v13 = 1;
        sub_1407A6A34(v12);
        if ( a4 <= 2 )
        {
          v24 = 136LL;
        }
        else
        {
          v24 = 176LL;
          if ( a4 != 3 )
            v24 = 200LL;
        }
        ExAcquirePushLockExclusiveEx(v24 + a2, 0LL);
        v6 = a1;
        if ( *(_QWORD *)(v12 + 24) == a1 )
        {
          for ( i = (ULONG_PTR *)*a3; i != a3; i = (ULONG_PTR *)*i )
          {
            if ( i == (ULONG_PTR *)v12 )
            {
              v17 = 1;
              goto LABEL_29;
            }
          }
        }
        --*(_WORD *)(v12 - 30);
        sub_1407A7628(v12);
        v12 = *a3;
        continue;
      }
      if ( *(_QWORD *)(v12 + 24) == v6 )
      {
        v17 = 0;
LABEL_29:
        if ( *(_QWORD *)(v12 + 64) )
          goto LABEL_34;
        v18 = *(_DWORD *)(v12 + 40);
        if ( (v18 & 0x80u) != 0 )
          goto LABEL_34;
        v19 = *(_QWORD *)(v12 + 32);
        v20 = v18 | 0x80;
        *(_BYTE *)(v12 + 244) = 0;
        *(_WORD *)(v12 + 244) |= 0xCu;
        *(_DWORD *)(v12 + 40) = v20;
        *(_DWORD *)(v12 + 240) = 2621440;
        if ( v19 )
        {
          if ( _InterlockedExchange64((volatile __int64 *)(v19 + 1400), 0LL) == v12 )
          {
            sub_14035AD70((volatile signed __int32 *)(*(_QWORD *)(v12 + 32) + 1240LL), 1LL, 1LL, v16, 2);
            *(_QWORD *)(v12 + 32) = 0LL;
            *(_WORD *)(v12 - 30) -= 3;
            goto LABEL_34;
          }
        }
        else if ( (v20 & 0x200) == 0 )
        {
          *(_QWORD *)(v12 + 88) = *(_QWORD *)(a5 + 8);
          *(_QWORD *)(v12 + 80) = a5;
          **(_QWORD **)(a5 + 8) = v12 + 80;
          *(_QWORD *)(a5 + 8) = v12 + 80;
LABEL_34:
          sub_1406633A8(v12, v28);
          *(_DWORD *)(v12 + 40) |= 0x200u;
          *(_WORD *)(v12 + 244) &= ~0x2000u;
          sub_1407A7064(v12);
          sub_140663348(v12);
          v21 = *(_QWORD *)(v12 + 208);
          if ( v21 )
          {
            PsReleaseProcessWakeCounter(v21);
            *(_QWORD *)(v12 + 208) = 0LL;
          }
          v22 = *(_QWORD *)(v12 + 216);
          if ( v22 )
          {
            PsReleaseProcessWakeCounter(v22);
            *(_QWORD *)(v12 + 216) = 0LL;
          }
          if ( v17 )
            v12 = *a3;
          else
            v12 = *(_QWORD *)v12;
          sub_1407A7628(v27);
          v6 = a1;
          continue;
        }
        --*(_WORD *)(v12 - 30);
        goto LABEL_34;
      }
      --*(_WORD *)(v12 - 30);
      sub_1407A7628(v12);
    }
    v12 = *(_QWORD *)v12;
  }
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
      v14 = (volatile signed __int64 *)(a2 + 176);
    else
      v14 = (volatile signed __int64 *)(a2 + 200);
  }
  else
  {
    v14 = (volatile signed __int64 *)(a2 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v14);
  sub_1402AFC00((ULONG_PTR)v14);
  return v13;
}

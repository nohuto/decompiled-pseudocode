/*
 * XREFs of sub_1405A5990 @ 0x1405A5990
 * Callers:
 *     KeUserModeCallback @ 0x1407A3EC0 (KeUserModeCallback.c)
 *     sub_140961464 @ 0x140961464 (sub_140961464.c)
 * Callees:
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     FirstEntrySList @ 0x140429870 (FirstEntrySList.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_1405A511C @ 0x1405A511C (sub_1405A511C.c)
 *     sub_1405A5894 @ 0x1405A5894 (sub_1405A5894.c)
 *     sub_140931514 @ 0x140931514 (sub_140931514.c)
 */

__int64 __fastcall sub_1405A5990(unsigned __int64 a1, int a2, __int64 a3, unsigned int a4, _QWORD *a5, __int64 *a6)
{
  unsigned int v7; // r12d
  ULONG_PTR v8; // r15
  _SLIST_HEADER *v10; // rsi
  struct _KPRCB *v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  PSLIST_ENTRY v15; // rbp
  unsigned __int64 v16; // rcx
  unsigned int v17; // ebx
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // rbp
  unsigned __int64 v20; // r8
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v22; // rdx
  bool v23; // zf
  signed __int32 v24; // eax
  int v25; // edx
  unsigned __int64 v26; // r8
  struct _KPRCB *v27; // r11
  __int64 v28; // rdx
  signed __int32 v29; // eax
  int v30; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  __int64 v33; // [rsp+80h] [rbp+8h] BYREF

  v7 = a3;
  v8 = a2;
  if ( a1 )
    v10 = *(_SLIST_HEADER **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 1838LL));
  else
    v10 = (_SLIST_HEADER *)&StartContext;
  if ( a2 > 2 )
  {
LABEL_20:
    if ( !(unsigned int)sub_14032A4B0((__int64)v10, 1uLL, (v7 >> 1) & 1) )
      return (unsigned int)-1073741523;
    if ( !(unsigned int)sub_1402821F4(&v10->Alignment, 1uLL, 0LL) )
    {
      v17 = -1073741670;
      goto LABEL_38;
    }
    v18 = sub_1403095B0((__int64)&unk_140C52FF0, 3u);
    v19 = v18;
    if ( !v18 )
    {
LABEL_27:
      v20 = 1LL;
      v17 = -1073741670;
      if ( v10 == (_SLIST_HEADER *)&StartContext )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = *((int *)CurrentPrcb + 8615);
        if ( (_DWORD)v22 != -1 )
        {
          if ( (unsigned __int64)(v22 + 1) <= 0x100 )
          {
            do
            {
              v24 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v22 + 1, v22);
              v23 = (_DWORD)v22 == v24;
              LODWORD(v22) = v24;
              if ( v23 )
                goto LABEL_38;
            }
            while ( v24 != -1 && (unsigned __int64)(v24 + 1LL) <= 0x100 );
          }
          if ( (int)v22 > 192
            && (_DWORD)v22 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v22) )
          {
            v20 = (int)v22 - 192 + 1LL;
          }
        }
      }
      if ( v20 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)&v10[1060], v20);
LABEL_38:
      sub_14028CE10((__int64)v10, 1LL);
      return v17;
    }
    if ( !(unsigned int)sub_14033B770((__int64)v10, v18 + 8, 1LL, a1, a4, v7, &v33) )
    {
      sub_1402BB6D0((__int64)&unk_140C52FF0, (_QWORD *)v19, 3u);
      goto LABEL_27;
    }
    if ( !sub_140277C50(48 * v33 - 0x220000000000LL) )
    {
LABEL_51:
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v10[1097], 1uLL);
      if ( (_BYTE)byte_140E01841 )
      {
        v30 = sub_140931514((__int64)(v19 << 25) >> 16, v25, v8, (unsigned int)&v33, BugCheckParameter4, (__int64)a6);
        v17 = v30;
        if ( v30 >= 0 )
        {
          *a5 = (__int64)((v19 << 25) + 805306368) >> 16;
          return 0;
        }
        if ( v30 == -1073741800 || v30 == -1073741811 || v30 == -1073741790 || v30 == -1073741757 )
          KeBugCheckEx(0x1Au, 0x3500uLL, v19, v8, v30);
      }
      else
      {
        v17 = -1073741637;
      }
      sub_1405A511C((_QWORD *)v19, v25, 0LL);
      return v17;
    }
    v26 = 1LL;
    if ( v10 != (_SLIST_HEADER *)&StartContext )
      goto LABEL_49;
    v27 = KeGetCurrentPrcb();
    v28 = *((int *)v27 + 8615);
    if ( (_DWORD)v28 == -1 )
      goto LABEL_49;
    if ( (unsigned __int64)(v28 + 1) <= 0x100 )
    {
      do
      {
        v29 = _InterlockedCompareExchange((volatile signed __int32 *)v27 + 8615, v28 + 1, v28);
        v23 = (_DWORD)v28 == v29;
        LODWORD(v28) = v29;
        if ( v23 )
          goto LABEL_50;
      }
      while ( v29 != -1 && (unsigned __int64)(v29 + 1LL) <= 0x100 );
    }
    if ( (int)v28 <= 192
      || (_DWORD)v28 != _InterlockedCompareExchange((volatile signed __int32 *)v27 + 8615, 192, v28)
      || (v26 = (int)v28 - 192 + 1LL, (_DWORD)v28 != 191LL) )
    {
LABEL_49:
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v10[1060], v26);
    }
LABEL_50:
    sub_14028CE10((__int64)v10, 1LL);
    goto LABEL_51;
  }
  if ( (a3 & 0x10) == 0
    || a2 != 2
    || (v11 = KeGetCurrentPrcb(), *(unsigned __int16 *)(*((_QWORD *)v11 + 24) + 138LL) != a4)
    || !*((_QWORD *)v11 + 4823)
    || v10 != (_SLIST_HEADER *)&StartContext
    || (v12 = a6, v13 = _InterlockedExchange64((volatile __int64 *)v11 + 4823, 0LL), (*v12 = v13) == 0) )
  {
    v14 = v10[1].Alignment + 24512LL * a4 + 32 * (v8 + 721);
    if ( FirstEntrySList((PSLIST_HEADER)v14) )
    {
      v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v14);
      if ( v15 )
      {
        if ( !FirstEntrySList((PSLIST_HEADER)v14) && !*(_BYTE *)(v14 + 28) )
          *(_BYTE *)(v14 + 28) = 1;
        *a6 = (__int64)v15[1].Next;
        ExpInterlockedPushEntrySList(v10 + 28, v15);
        goto LABEL_17;
      }
    }
    ++*(_DWORD *)(v14 + 20);
    goto LABEL_20;
  }
LABEL_17:
  v16 = (*a6 & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
  *a5 = v16;
  sub_1405A5894(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000018LL, (__int64)v11, a3, a1);
  return 0;
}

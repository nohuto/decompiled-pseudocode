/*
 * XREFs of sub_1407CD000 @ 0x1407CD000
 * Callers:
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     sub_1407CCD80 @ 0x1407CCD80 (sub_1407CCD80.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407CD000(char a1, unsigned __int64 a2, __int64 a3, int a4)
{
  const void *v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // di
  size_t v9; // r14
  unsigned int v10; // r15d
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v12; // rdi
  _DWORD *Pool2; // rbx
  __int64 v14; // rdi
  unsigned int v16; // [rsp+24h] [rbp-64h]
  unsigned __int16 v17; // [rsp+2Ch] [rbp-5Ch]
  int Src; // [rsp+48h] [rbp-40h]
  const void *Src_8; // [rsp+50h] [rbp-38h]

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)a3 = 0;
  v16 = 0;
  if ( a1 && *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    if ( a2 >= 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    Src = *(_DWORD *)a2;
    v5 = *(const void **)(a2 + 8);
    Src_8 = v5;
    if ( (unsigned __int16)*(_DWORD *)a2 )
    {
      if ( ((unsigned __int8)v5 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = (unsigned __int64)v5 + (unsigned __int16)*(_DWORD *)a2;
      if ( v6 > 0x7FFFFFFF0000LL || v6 < (unsigned __int64)v5 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v7 = Src;
  }
  else
  {
    v5 = *(const void **)(a2 + 8);
    Src_8 = v5;
    v7 = *(_WORD *)a2;
  }
  if ( v7 )
  {
    v8 = v7;
    v17 = v7;
    if ( (v7 & 1) != 0 || v7 == 65534 )
    {
      return (unsigned int)-1073741773;
    }
    else
    {
      if ( (unsigned int)v7 + 2 < v7 )
        return (unsigned int)-1073741670;
      v9 = v7;
      v10 = v7 + 2;
      if ( a4 && v10 <= 0xF8 )
      {
        LOWORD(v10) = 248;
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 266);
        ++*(_DWORD *)(v12 + 20);
        Pool2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v12);
        if ( !Pool2 )
        {
          ++*(_DWORD *)(v12 + 24);
          v14 = *((_QWORD *)CurrentPrcb + 267);
          ++*(_DWORD *)(v14 + 20);
          Pool2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v14);
          if ( !Pool2 )
          {
            ++*(_DWORD *)(v14 + 24);
            Pool2 = (_DWORD *)sub_14042A5E0(*(unsigned int *)(v14 + 36), *(unsigned int *)(v14 + 44));
          }
        }
        if ( Pool2 )
          *Pool2 = *((_DWORD *)CurrentPrcb + 9);
        v5 = Src_8;
        v8 = v17;
      }
      else
      {
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, v10, 1833853519LL);
      }
      *(_WORD *)a3 = v8;
      *(_WORD *)(a3 + 2) = v10;
      *(_QWORD *)(a3 + 8) = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v5, v9);
        *((_WORD *)Pool2 + (v9 >> 1)) = 0;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v16;
}

/*
 * XREFs of sub_1405A5DF0 @ 0x1405A5DF0
 * Callers:
 *     sub_1406E90B4 @ 0x1406E90B4 (sub_1406E90B4.c)
 *     KeUserModeCallback @ 0x1407A3EC0 (KeUserModeCallback.c)
 *     sub_140961490 @ 0x140961490 (sub_140961490.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_1405A511C @ 0x1405A511C (sub_1405A511C.c)
 *     sub_1405A5628 @ 0x1405A5628 (sub_1405A5628.c)
 *     sub_140932ACC @ 0x140932ACC (sub_140932ACC.c)
 */

char sub_1405A5DF0(unsigned __int64 a1, int a2, char a3, ...)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  int v6; // r15d
  struct _KPRCB *CurrentPrcb; // r8
  signed __int64 v8; // rax
  int *v9; // rbx
  PSLIST_ENTRY v10; // rsi
  int v11; // eax
  _SLIST_HEADER *v13; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+38h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp+48h] BYREF
  va_list va; // [rsp+78h] [rbp+48h]
  va_list va1; // [rsp+80h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  BugCheckParameter4 = va_arg(va1, _QWORD);
  v14 = 0;
  v13 = 0LL;
  v4 = a2;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 > 2 )
    goto LABEL_15;
  v6 = sub_1405A5628(
         ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL,
         ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL + 8,
         (__int64)&v13,
         &v14);
  if ( (a3 & 4) != 0 && (_DWORD)v4 == 2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    a2 = *(unsigned __int16 *)(*((_QWORD *)CurrentPrcb + 24) + 138LL);
    if ( a2 == v14 && !*((_QWORD *)CurrentPrcb + 4823) && v13 == (_SLIST_HEADER *)&StartContext )
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)CurrentPrcb + 4823, BugCheckParameter4, 0LL);
      if ( !v8 )
        return v8;
    }
  }
  v9 = (int *)(v13[1].Alignment + 32 * (v4 + 766LL * v14 + 721));
  if ( *(unsigned __int16 *)v9 >= v9[4] || (v10 = ExpInterlockedPopEntrySList(v13 + 28)) == 0LL )
  {
LABEL_15:
    LOBYTE(v8) = sub_1405A511C((_QWORD *)(v5 - 24), a2, BugCheckParameter4);
    return v8;
  }
  if ( (_DWORD)v4 != 2 )
  {
    v11 = sub_140932ACC((unsigned int)v4, (ULONG_PTR *)va);
    if ( v11 < 0 )
      KeBugCheckEx(0x1Au, 0x3502uLL, v5 - 24, v11, BugCheckParameter4);
  }
  v10[1].Next = (_SLIST_ENTRY *)BugCheckParameter4;
  LOBYTE(v8) = (unsigned __int8)ExpInterlockedPushEntrySList((PSLIST_HEADER)v9, v10);
  if ( v6 )
    *((_BYTE *)v9 + 29) = 1;
  return v8;
}

/*
 * XREFs of sub_1405BBB54 @ 0x1405BBB54
 * Callers:
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_1405BAFB0 @ 0x1405BAFB0 (sub_1405BAFB0.c)
 *     sub_1405BBC9C @ 0x1405BBC9C (sub_1405BBC9C.c)
 */

__int64 __fastcall sub_1405BBB54(
        __int64 a1,
        volatile signed __int64 *a2,
        char a3,
        _QWORD *a4,
        volatile signed __int64 **a5)
{
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v9; // rax
  __int64 v10; // r8
  int v11; // ebp
  __int64 v12; // rbx

  CurrentThread = KeGetCurrentThread();
  *a5 = 0LL;
  v9 = sub_140234F14(*((_QWORD *)CurrentThread + 23), (unsigned __int64)a2);
  if ( v9 )
  {
    v11 = 0;
    v12 = *(_QWORD *)(v9[7] + 24LL);
    if ( *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v10 + 174)) != v12 )
    {
      if ( (a3 & 1) != 0 )
      {
        if ( !(unsigned int)sub_14032A4B0(v12, 1uLL, 0) )
          return 0LL;
        v11 = 1;
      }
      if ( !(unsigned int)sub_1405BAFB0(v12) )
      {
        if ( v11 )
          sub_14028CE10(v12, 1LL);
        return 0LL;
      }
      if ( _InterlockedIncrement64(a2 + 1) != 1 )
        sub_1405BBC9C(v12);
    }
    _InterlockedAdd64(a2 + 3, 1uLL);
    if ( (a3 & 1) != 0 )
    {
      if ( (_InterlockedIncrement64(a2 + 2) & 0x7FFFFFFFFFFFFFFLL) == 1 )
      {
        if ( v11 )
          ++*a4;
        else
          ++a4[1];
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 17528), 1uLL);
      }
      else
      {
        ++*a4;
        if ( v11 )
          sub_14028CE10(v12, 1LL);
      }
      *a5 = a2;
    }
  }
  return 1LL;
}

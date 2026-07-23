/*
 * XREFs of sub_1402E5B0C @ 0x1402E5B0C
 * Callers:
 *     sub_1402B7320 @ 0x1402B7320 (sub_1402B7320.c)
 *     sub_1402E599C @ 0x1402E599C (sub_1402E599C.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_140395864 @ 0x140395864 (sub_140395864.c)
 *     sub_140584A30 @ 0x140584A30 (sub_140584A30.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402E5D08 @ 0x1402E5D08 (sub_1402E5D08.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_1402E5B0C(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v2; // rbp
  int v4; // esi
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v12; // rdx
  bool v13; // zf
  signed __int32 v14; // eax
  int v15; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( a2 == 2 )
  {
    v4 = 3;
    if ( !(unsigned int)sub_1402E5D08() )
      goto LABEL_37;
  }
  else
  {
    v4 = a2 != 0 ? 1 : 4;
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_37:
    KeBugCheckEx(
      0x1Au,
      0x41791uLL,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL,
      *(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v5 = 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *(_QWORD *)(BugCheckParameter2 + 40);
    v15 = 0;
    v8 = v7 & 0xFFFFFFFFFFLL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v15);
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
    v9 = *(_QWORD *)(BugCheckParameter2 + 24) ^ ((*(_QWORD *)(BugCheckParameter2 + 24) - 0x10000LL) ^ *(_QWORD *)(BugCheckParameter2 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(BugCheckParameter2 + 24) = v9;
    v10 = v9 & 0x3FFFFFFFFFFFFFFFLL;
    if ( v10 >= 0x10000 )
      break;
    if ( !v2 )
      v2 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
    ++v5;
    if ( !v10 && (unsigned int)sub_1402BF640(BugCheckParameter2, 0LL) != 3 )
      ++v6;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v4 )
      goto LABEL_8;
    BugCheckParameter2 = 48 * v8 - 0x220000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_8:
  if ( v5 )
  {
    if ( (ULONG_PTR *)v2 != &StartContext )
      goto LABEL_27;
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v12 == -1 )
      goto LABEL_27;
    if ( v5 + v12 <= 0x100 )
    {
      do
      {
        if ( v5 >= 0x80000 )
          break;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v12 + v5, v12);
        v13 = (_DWORD)v12 == v14;
        LODWORD(v12) = v14;
        if ( v13 )
          goto LABEL_9;
      }
      while ( v14 != -1 && v5 + v14 <= 0x100 );
    }
    if ( (int)v12 > 192
      && (_DWORD)v12 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v12) )
    {
      v5 += (int)v12 - 192;
    }
    if ( v5 )
LABEL_27:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 16960), v5);
  }
LABEL_9:
  if ( v6 )
    sub_14028CE10(v2, v6);
}

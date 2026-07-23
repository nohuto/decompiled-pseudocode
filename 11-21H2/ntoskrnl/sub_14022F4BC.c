/*
 * XREFs of sub_14022F4BC @ 0x14022F4BC
 * Callers:
 *     sub_14022F104 @ 0x14022F104 (sub_14022F104.c)
 *     sub_14022F2FC @ 0x14022F2FC (sub_14022F2FC.c)
 *     sub_14022F3E8 @ 0x14022F3E8 (sub_14022F3E8.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     sub_14045B5B2 @ 0x14045B5B2 (sub_14045B5B2.c)
 * Callees:
 *     sub_14022F440 @ 0x14022F440 (sub_14022F440.c)
 *     sub_14022F670 @ 0x14022F670 (sub_14022F670.c)
 *     sub_14022F6A4 @ 0x14022F6A4 (sub_14022F6A4.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 */

__int64 sub_14022F4BC()
{
  unsigned __int64 Min; // rax
  unsigned int v1; // esi
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // r11d
  unsigned __int64 v5; // rbx
  unsigned int v6; // r10d
  __int64 v7; // r14
  unsigned int v8; // r8d
  __int64 v9; // rdx
  char v10; // bp
  unsigned int v11; // ebx
  __int16 v13; // [rsp+30h] [rbp-8h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  if ( ((__int64)Tree.Min & 1) != 0 )
  {
    if ( Tree.Min == (PRTL_BALANCED_NODE)1 )
      Min = 0LL;
    else
      Min = (unsigned __int64)Tree.Min ^ ((unsigned __int64)&Tree.Root + 1);
  }
  else
  {
    Min = (unsigned __int64)Tree.Min;
  }
  v1 = *(_DWORD *)(Min + 28);
  _disable();
  v2 = KeQueryInterruptTimePrecise(&v14);
  v4 = -1;
  v5 = v2;
  v6 = -1;
  if ( qword_140C2B7F8 )
    v6 = sub_14022F670(qword_140C2B7F8, v2);
  v7 = qword_140C2B7E8;
  if ( qword_140C2B7E8 > v5 || dword_140C2B7E4 == 2 && !qword_140C2B7E8 )
  {
    v8 = dword_140D06984;
    v9 = qword_140C4E948;
    if ( qword_140C4E948 + (unsigned __int64)(unsigned int)dword_140D06984 > qword_140C4E940
                                                                           + (unsigned __int64)(unsigned int)dword_140D069B8 )
    {
      v9 = qword_140C4E940;
      v8 = dword_140D069B8;
    }
    v7 = v5 + v8 - (v5 - v9) % v8;
    v4 = sub_14022F670(v7, v5);
  }
  LOBYTE(v3) = 0;
  v10 = 0;
  if ( v6 > v1 || v6 > v4 )
  {
    if ( v4 >= v1 )
    {
      v6 = v1;
      qword_140C2B7E8 = v5;
    }
    else
    {
      LOBYTE(v3) = 1;
      qword_140C2B7E8 = v7;
      v10 = 1;
      v6 = v4;
    }
  }
  else
  {
    qword_140C2B7E8 = 0LL;
    LOBYTE(v3) = 1;
  }
  if ( dword_140C2B7E4 != 2 && (v6 == dword_140C2B1C8 || v6 == dword_140D06938) )
    v11 = dword_140D06938;
  else
    v11 = sub_14022F6A4(v6, v3);
  if ( v10 )
    sub_14022F440(v11, 1129271880, 1);
  if ( (v13 & 0x200) != 0 )
    _enable();
  return v11;
}

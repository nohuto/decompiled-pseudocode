/*
 * XREFs of sub_14060F8E0 @ 0x14060F8E0
 * Callers:
 *     <none>
 * Callees:
 *     IoInitializeRemoveLockEx @ 0x14025A9C0 (IoInitializeRemoveLockEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

void __fastcall sub_14060F8E0(
        PIO_REMOVE_LOCK Lock,
        ULONG AllocateTag,
        ULONG MaxLockedMinutes,
        ULONG HighWatermark,
        ULONG RemlockSize)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rax
  __int64 *i; // rbx
  __int64 v17; // rdx
  _QWORD **v18; // rdi
  _QWORD *j; // rbx
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+78h] [rbp+28h]

  v20 = 0LL;
  v21 = 0LL;
  v11 = sub_140604844(178);
  if ( !v11 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v10 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v11 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v14 = *((_DWORD *)v11 + 3);
  if ( (v14 & 0x18) == 0 )
  {
    if ( (v14 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v15 = sub_140628C98(v10, v9, v12, v13);
    goto LABEL_12;
  }
  v15 = retaddr;
LABEL_12:
  *(_QWORD *)&v20 = v15;
LABEL_13:
  *((_QWORD *)&v20 + 1) = __PAIR64__(HighWatermark, RemlockSize);
  *((_QWORD *)&v21 + 1) = Lock;
  *(_QWORD *)&v21 = __PAIR64__(AllocateTag, MaxLockedMinutes);
  for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v20, v9);
  }
LABEL_18:
  IoInitializeRemoveLockEx(Lock, AllocateTag, MaxLockedMinutes, HighWatermark, RemlockSize);
  if ( v11 )
  {
    v18 = (_QWORD **)(v11 + 6);
    for ( j = *v18; j != v18; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        sub_14042A5E0(&v20, v17);
    }
  }
}

/*
 * XREFs of sub_140AAD1C4 @ 0x140AAD1C4
 * Callers:
 *     sub_140AAD188 @ 0x140AAD188 (sub_140AAD188.c)
 *     sub_140AAE9F4 @ 0x140AAE9F4 (sub_140AAE9F4.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     sub_1403A7CAC @ 0x1403A7CAC (sub_1403A7CAC.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_140AAB478 @ 0x140AAB478 (sub_140AAB478.c)
 *     sub_140AABA70 @ 0x140AABA70 (sub_140AABA70.c)
 *     sub_140AABB44 @ 0x140AABB44 (sub_140AABB44.c)
 *     sub_140AACFEC @ 0x140AACFEC (sub_140AACFEC.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 */

__int64 __fastcall sub_140AAD1C4(char a1)
{
  bool v1; // al
  unsigned __int16 i; // ax
  _QWORD *v4; // rdi
  __int64 v5; // rax

  if ( !a1 && !byte_140CE1AE0 )
    return 0LL;
  v1 = 0;
  if ( (dword_140C0DF90 & 0x100000) != 0 )
    v1 = (dword_140C0DF90 & 0x1000) != 0;
  if ( !a1 )
  {
    if ( (dword_140C0DF90 & 0xC00) != 0xC00 && !v1 )
      sub_140AABA70(3072LL);
    word_140C09770 = -7989;
    sub_1403A7CAC(qword_140C0E050, 57547LL, 0, 0LL, 0LL);
    v4 = off_140C04450;
    v5 = *(_QWORD *)off_140C04450;
    if ( *((_UNKNOWN ***)off_140C04450 + 1) != &off_140C04450 )
LABEL_26:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_QWORD **)(v5 + 8) != v4 )
        goto LABEL_26;
      off_140C04450 = (_UNKNOWN *)v5;
      *(_QWORD *)(v5 + 8) = &off_140C04450;
      if ( v4 == &off_140C04450 )
        break;
      sub_140AAD3E0(v4[6]);
      sub_1403A8CB4((__int64)v4);
      v4 = off_140C04450;
      if ( *((_UNKNOWN ***)off_140C04450 + 1) != &off_140C04450 )
        goto LABEL_26;
      v5 = *(_QWORD *)off_140C04450;
    }
    dword_140C04460 = 0;
    if ( byte_140C0DE54 )
      sub_140AABB44();
    return 0LL;
  }
  if ( byte_140CE1AE0 )
  {
    if ( v1 )
      goto LABEL_7;
    return 3221225659LL;
  }
  else if ( qword_140C0E050 )
  {
    if ( (dword_140C0DF90 & 0x40000) == 0 )
    {
      byte_140CE1AE0 = 1;
      if ( !v1 )
      {
        word_140C09770 = word_140C0C678;
        sub_140AACFEC(1, 2, 0LL);
        for ( i = word_140C09770; i <= (unsigned __int16)word_140C0C67C; i = ++word_140C09770 )
          sub_1403A7CAC(qword_140C0E050, i, 1, 0LL, 0LL);
        word_140C09770 = -7989;
        sub_1403A7CAC(qword_140C0E050, 57547LL, 0, 0LL, 0LL);
        qword_140C54908 = sub_140AACFEC(0, 2, 0LL).QuadPart;
        KeInitializeTimerEx(&stru_140CF7400, NotificationTimer);
        KeInitializeDpc(&stru_140CF73C0, (PKDEFERRED_ROUTINE)sub_140AACEA0, 0LL);
        KeSetCoalescableTimer(&stru_140CF7400, 0LL, 0x1Eu, 0, &stru_140CF73C0);
        return 0LL;
      }
      qword_140C54908 = 0LL;
      word_140C09770 = word_140C0C678 - 1;
LABEL_7:
      sub_140AAB478();
      return 0LL;
    }
    return 3221225473LL;
  }
  else
  {
    return 3221225626LL;
  }
}

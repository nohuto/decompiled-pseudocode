/*
 * XREFs of sub_14021E5E4 @ 0x14021E5E4
 * Callers:
 *     FsRtlPrivateLock @ 0x14021E2B0 (FsRtlPrivateLock.c)
 *     sub_14021F280 @ 0x14021F280 (sub_14021F280.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_14021D9D4 @ 0x14021D9D4 (sub_14021D9D4.c)
 *     sub_14021E6C4 @ 0x14021E6C4 (sub_14021E6C4.c)
 */

char __fastcall sub_14021E5E4(_SLIST_ENTRY **a1, __int64 a2, _SLIST_ENTRY *a3)
{
  PSLIST_ENTRY v6; // rax
  _SLIST_ENTRY *v7; // rbp
  _SLIST_ENTRY **v8; // rdi
  __int64 v9; // r8
  PSLIST_ENTRY v11; // rax

  if ( LOBYTE(a3[1].Next) )
  {
    v11 = sub_140202234((__int64)&stru_140CE2800);
    if ( v11 )
    {
      v8 = &v11[1].Next + 1;
      *(PSLIST_ENTRY)((char *)v11 + 24) = *a3;
      *(PSLIST_ENTRY)((char *)v11 + 40) = a3[1];
      *(PSLIST_ENTRY)((char *)v11 + 56) = a3[2];
      sub_14021D9D4((__int64)(a1 + 3), (_RTL_SPLAY_LINKS *)v11);
      goto LABEL_4;
    }
    return 0;
  }
  v6 = sub_140202234((__int64)&stru_140CE2880);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = &v6->Next + 1;
  *(PSLIST_ENTRY)((char *)v6 + 8) = *a3;
  *(PSLIST_ENTRY)((char *)v6 + 24) = a3[1];
  *(PSLIST_ENTRY)((char *)v6 + 40) = a3[2];
  if ( !(unsigned __int8)sub_14021E6C4(a1 + 3, v6) )
  {
    sub_140203D88((__int64)&stru_140CE2880, v7, v9);
    return 0;
  }
LABEL_4:
  *(_QWORD *)(a2 + 120) = v8;
  if ( a3->Next < *a1 )
    *a1 = a3->Next;
  return 1;
}

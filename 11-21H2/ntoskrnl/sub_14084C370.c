/*
 * XREFs of sub_14084C370 @ 0x14084C370
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14084C474 @ 0x14084C474 (sub_14084C474.c)
 */

NTSTATUS __fastcall sub_14084C370(unsigned int a1)
{
  wchar_t *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  wchar_t **v4; // rsi
  struct _IO_STATUS_BLOCK *IoStatusBlock; // rbx
  __int64 v6; // rdx
  bool v7; // zf
  NTSTATUS result; // eax
  UNICODE_STRING v9[2]; // [rsp+50h] [rbp-28h] BYREF
  char v10; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *v11; // [rsp+88h] [rbp+10h] BYREF

  v11 = 0LL;
  v1 = (wchar_t *)a1;
  v2 = 14LL * a1;
  v9[0] = 0LL;
  v10 = 0;
  RtlInitUnicodeString(v9, (&off_140C04850)[v2]);
  v4 = &(&off_140C04850)[v2];
  v4[8] = 0LL;
  v4[10] = (wchar_t *)sub_14084C370;
  v4[11] = v1;
  if ( (*(_DWORD *)(&off_140C04850 + v2 + 5) & 1) != 0 )
  {
    sub_14042A5E0(*(&off_140C04850 + v2 + 3), v3);
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)&(&off_140C04850)[v2 + 6];
    result = ZwNotifyChangeKey(
               (&off_140C04850)[v2 + 2],
               0LL,
               (PIO_APC_ROUTINE)(v4 + 8),
               (PVOID)1,
               IoStatusBlock,
               *((_DWORD *)&off_140C04850 + 2 * v2 + 2),
               1u,
               0LL,
               0,
               1u);
    if ( result >= 0 )
      return result;
  }
  else
  {
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)&(&off_140C04850)[v2 + 6];
  }
  if ( (int)sub_14084C474(v9, &v11, &v10) < 0 )
    goto LABEL_10;
  ZwClose((&off_140C04850)[v2 + 2]);
  v7 = v10 == 1;
  (&off_140C04850)[v2 + 2] = v11;
  if ( v7 )
  {
    *((_DWORD *)&off_140C04850 + 2 * v2 + 10) |= 1u;
    sub_14042A5E0(*(&off_140C04850 + v2 + 3), v6);
  }
  result = ZwNotifyChangeKey(
             (&off_140C04850)[v2 + 2],
             0LL,
             (PIO_APC_ROUTINE)(v4 + 8),
             (PVOID)1,
             IoStatusBlock,
             *((_DWORD *)&off_140C04850 + 2 * v2 + 2),
             1u,
             0LL,
             0,
             1u);
  if ( result < 0 )
  {
LABEL_10:
    result = ZwClose((&off_140C04850)[v2 + 2]);
    *((_DWORD *)&off_140C04850 + 2 * v2 + 2) = 0;
  }
  return result;
}

/*
 * XREFs of RtlpOpenBaseImageFileOptionsKeyEx @ 0x18007C570
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007C3A8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x18007C510 (RtlpOpenBaseImageFileOptionsKey.c)
 * Callees:
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1800A4410 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKeyEx(_QWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp-38h] BYREF
  __int64 v6; // [rsp+48h] [rbp-30h]
  void *v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  __int128 v9; // [rsp+60h] [rbp-18h]
  __int64 v10; // [rsp+98h] [rbp+20h] BYREF

  v5 = 48;
  v6 = 0LL;
  v8 = 576;
  v7 = &unk_18012C710;
  v9 = 0LL;
  if ( a3 )
    result = ZwCreateKey(&v10, a2, &v5, 0LL, 0LL, 0, 0LL);
  else
    result = NtOpenKey(&v10, a2, &v5);
  if ( (int)result >= 0 )
  {
    *a1 = v10;
    return 0LL;
  }
  return result;
}

/*
 * XREFs of sub_140B04910 @ 0x140B04910
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_14026CF08 @ 0x14026CF08 (sub_14026CF08.c)
 *     sub_1403C289C @ 0x1403C289C (sub_1403C289C.c)
 *     sub_140829B50 @ 0x140829B50 (sub_140829B50.c)
 *     sub_140B04AE0 @ 0x140B04AE0 (sub_140B04AE0.c)
 *     sub_140B05B1C @ 0x140B05B1C (sub_140B05B1C.c)
 */

__int64 sub_140B04910()
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG64 v1; // rdx
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = KeGetPcr()[36].Unused[0] + 80;
  v2 = (((v1 - (unsigned int)dword_140D05050) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  sub_140B05B1C(v2, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = ((*((_QWORD *)CurrentThread + 6) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  sub_140B05B1C(v3, ((*((_QWORD *)CurrentThread + 7) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  sub_140829B50(v3 - 8);
  sub_140829B50(v2 - 8);
  v4 = qword_140C540D0;
  byte_140C5304C = (unsigned int)dword_140D05050 >> 12;
  v5 = sub_14026CF08(14);
  if ( !(unsigned int)sub_1403C289C(v5, v4, 0x10000000000uLL) )
    return 0LL;
  if ( !(unsigned int)sub_140B04AE0((unsigned int)&unk_140C52F98, 14, 0, 11, v4, 0x10000000000LL, 1) )
    return 0LL;
  dword_140C52FB0 |= 1u;
  v6 = qword_140C54110;
  qword_140C52FE0 = qword_140C52F30;
  v7 = sub_14026CF08(16);
  if ( !(unsigned int)sub_1403C289C(v7, v6, 0x8000000000uLL)
    || !(unsigned int)sub_140B04AE0((unsigned int)&unk_140C52FF0, 16, 0, 11, v6, 0x8000000000LL, 1) )
  {
    return 0LL;
  }
  result = 1LL;
  dword_140C53008 |= 1u;
  qword_140C53038 = qword_140C52F38;
  return result;
}

/*
 * XREFs of sub_140AFC9DC @ 0x140AFC9DC
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     sub_140250C50 @ 0x140250C50 (sub_140250C50.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_1403D0F2C @ 0x1403D0F2C (sub_1403D0F2C.c)
 *     sub_140416F1C @ 0x140416F1C (sub_140416F1C.c)
 *     sub_1404170F8 @ 0x1404170F8 (sub_1404170F8.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     FsRtlIsMobileOS @ 0x1407FCB50 (FsRtlIsMobileOS.c)
 *     sub_140825358 @ 0x140825358 (sub_140825358.c)
 *     PoRegisterCoalescingCallback @ 0x140832790 (PoRegisterCoalescingCallback.c)
 *     sub_14084D678 @ 0x14084D678 (sub_14084D678.c)
 *     sub_140A57C10 @ 0x140A57C10 (sub_140A57C10.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AD6354 @ 0x140AD6354 (sub_140AD6354.c)
 *     sub_140AF2E9C @ 0x140AF2E9C (sub_140AF2E9C.c)
 *     sub_140B31238 @ 0x140B31238 (sub_140B31238.c)
 */

char __fastcall sub_140AFC9DC(int a1)
{
  char result; // al
  int v3; // esi
  int v4; // eax
  void *v5; // rax
  PVOID PoolWithTag; // rax
  int v12; // ecx
  unsigned int v13; // ebx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // ecx
  int v17; // eax
  bool v18; // zf

  if ( (unsigned int)sub_140416F1C() && a1 == 2 )
  {
    sub_140AF2E9C(2);
    return 1;
  }
  v3 = (unsigned __int8)dword_140D051DC;
  SpinLock = 0LL;
  qword_140C49B08 = 0LL;
  dword_140C49B10 = 2;
  dword_140C49B14 = 100;
  if ( (_BYTE)dword_140D051DC )
  {
    v4 = 500;
  }
  else
  {
    dword_140C49B14 = 50;
    if ( FsRtlIsMobileOS() )
      dword_140C49B14 = 10;
    dword_140C54C90 = v3 + 50;
    if ( !FsRtlIsMobileOS() )
      goto LABEL_12;
    v4 = 9;
  }
  dword_140C54C90 = v4;
  if ( !v3 )
  {
LABEL_12:
    dword_140C49B18 = 4;
    goto LABEL_13;
  }
  dword_140C49B18 = 8;
LABEL_13:
  if ( dword_140C0C698 )
  {
    if ( dword_140C0C698 == 1 )
      byte_140C54C58 = 1;
  }
  else
  {
    byte_140C54C58 = 0;
  }
  sub_140B31238();
  qword_140C49B20 = 0LL;
  dword_140C097B4 = (unsigned __int16)(word_140D05000 - 1) + 1;
  v5 = sub_1403D0F2C();
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x401DDuLL, 0LL, 0LL, 0LL);
  word_140C49B28 = 1;
  *((_QWORD *)qword_140D06C40 + 1) = v5;
  qword_140C54C88 = (__int64)v5 + 992;
  qword_140C54C80 = (__int64)v5 + 1016;
  _mm_lfence();
  sub_140AD6354();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x58637044u);
  if ( PoolWithTag )
  {
    sub_140348B40((ULONG_PTR)PoolWithTag);
    sub_140363220(0);
    _RAX = 2147483656LL;
    __asm { cpuid }
  }
  stru_140C49B60.Count = 1;
  stru_140C49B60.Owner = 0LL;
  stru_140C49B60.Contention = 0;
  LOWORD(stru_140C49B60.Event.Header.Lock) = 1;
  dword_140C49B40 = 0x989680 / DesiredTime;
  qword_140C49B38 = (__int64)&qword_140C49B30;
  qword_140C49B30 = (__int64)&qword_140C49B30;
  stru_140C49B60.Event.Header.WaitListHead.Blink = &stru_140C49B60.Event.Header.WaitListHead;
  stru_140C49B60.Event.Header.WaitListHead.Flink = &stru_140C49B60.Event.Header.WaitListHead;
  qword_140C49BA8 = (__int64)&qword_140C49BA0;
  qword_140C49BA0 = (__int64)&qword_140C49BA0;
  stru_140C49B60.Event.Header.Size = 6;
  stru_140C49B60.Event.Header.SignalState = 0;
  dword_140C49BB0 = 4;
  dword_140C097B0 = v3 != 0 ? 2048 : 256;
  dword_140C54C78 = v3 != 0 ? 5000000 : 10000000;
  if ( (unsigned int)(dword_140D014E0 - 1) <= 0x7FFF )
    dword_140C097B0 = dword_140D014E0;
  v12 = 5;
  dword_140C49BB4 = 0;
  word_140C49BC0 = 1;
  if ( dword_140D014E4 )
    v12 = dword_140D014E4;
  byte_140C49BC2 = 6;
  dword_140C54C74 = v12;
  qword_140C49BD0 = (__int64)&qword_140C49BC8;
  qword_140C49BC8 = (__int64)&qword_140C49BC8;
  dword_140C49BC4 = 0;
  sub_140A57C10((__int64)&unk_140CF8840, 512, 160, 1800889155, v3 != 0 ? 256 : 128, (__int64)&qword_140C11710);
  dword_140C49BD8 = 1;
  v13 = 0;
  for ( dword_140C54C70 = v3 != 0 ? 0x2000000 : 0x100000; v13 < (unsigned int)dword_140D06884; ++v13 )
  {
    if ( (int)sub_140825358(qword_140D088C0[v13]) < 0 )
      KeBugCheckEx(0x34u, 0x273uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  dword_140C49BDC = 0;
  sub_140250C50((__int64)&stru_140CE2340, 0LL, 0LL, 512, 1024, 1833067331, 0, 0);
  dword_140C49BE0 = 0;
  sub_140250C50((__int64)&unk_140CE2240, 0LL, 0LL, 512, 1032, 1817600835, 0, 0);
  sub_140250C50((__int64)&unk_140CE22C0, 0LL, 0LL, 512, 2056, 1817600835, 0, 0);
  qword_140C49C00 = 0LL;
  qword_140C49BF8 = (__int64)&qword_140C49BF0;
  qword_140C49BF0 = (__int64)&qword_140C49BF0;
  if ( dword_140C097AC != -1 )
  {
    if ( (unsigned int)dword_140C097AC < 0x8000
      || (v14 = sub_14084D678((unsigned __int16 **)qword_140D06C40), v15 > v14) )
    {
      dword_140C097AC = 1310720;
    }
  }
  v16 = dword_140C097A8;
  if ( (unsigned int)(dword_140C097A8 - 1) > 0x7F )
    v16 = 8;
  dword_140C097A8 = v16 << 20;
  if ( !dword_140C54C6C || (v17 = dword_140C54C6C << 10, dword_140C54C6C << 10 <= (unsigned int)dword_140C54C6C) )
    v17 = 0;
  dword_140C54C6C = v17;
  if ( (unsigned int)dword_140C54C64 >= 0x65 )
    dword_140C54C64 = 0;
  if ( (unsigned int)dword_140C54C68 >= 0x65 )
    dword_140C54C68 = 0;
  sub_140AF2E9C(1);
  qword_140C49AB0 = 0LL;
  xmmword_140C49AA0 = 0LL;
  if ( (int)PoRegisterCoalescingCallback((__int64)sub_140538900, 1, qword_140CF8810, 0LL) < 0 )
    KeBugCheckEx(0x34u, 0x30BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v18 = (unsigned int)sub_1404170F8() == 0;
  dword_140C54C60 = 1;
  result = 1;
  byte_140C54C59 = !v18;
  return result;
}

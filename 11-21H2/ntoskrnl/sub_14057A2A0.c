/*
 * XREFs of sub_14057A2A0 @ 0x14057A2A0
 * Callers:
 *     sub_14057A0A0 @ 0x14057A0A0 (sub_14057A0A0.c)
 *     sub_14057A1B0 @ 0x14057A1B0 (sub_14057A1B0.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_1402FEC10 @ 0x1402FEC10 (sub_1402FEC10.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140579F48 @ 0x140579F48 (sub_140579F48.c)
 */

__int64 __fastcall sub_14057A2A0(unsigned __int8 a1)
{
  __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  int v3; // edi
  __int64 result; // rax
  struct _KPRCB *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v10; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h]
  _QWORD v12[34]; // [rsp+58h] [rbp-B0h] BYREF

  v1 = a1;
  v11 = 0LL;
  v10 = 0LL;
  memset(v12, 0, 0x108uLL);
  v9 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  while ( dword_140C2B990 )
    _mm_pause();
  LODWORD(v12[0]) = 2097153;
  memset((char *)v12 + 4, 0, 0x104uLL);
  if ( (_BYTE)v1 )
  {
    sub_140300030((__int64)v12, 0x20u, (unsigned __int16 *)dword_140D06E40);
  }
  else
  {
    sub_140300030((__int64)v12, 0x20u, asc_140C0CE40);
    sub_1402FEC10((char *)v12, asc_140C0CD30, v12, WORD1(v12[0]));
  }
  v3 = KeCountSetBitsAffinityEx(v12);
  if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)v12, *((_DWORD *)CurrentPrcb + 9)) )
    dword_140C2B990 = v3 - 1;
  else
    dword_140C2B990 = v3;
  *((_QWORD *)&v10 + 1) = v12[1];
  *(_QWORD *)&v10 = v12;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v9, (unsigned __int16 **)&v10);
    if ( (_DWORD)result )
      break;
    v5 = (struct _KPRCB *)sub_140348800(v9);
    if ( v5 == KeGetCurrentPrcb() )
    {
      LOBYTE(v6) = v1;
      sub_140579F48((__int64)v5, v6, v7, v8);
    }
    else
    {
      sub_140345190((ULONG_PTR)v5 + 34200, v1, 0LL, 0LL, 0);
    }
  }
  return result;
}

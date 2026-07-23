/*
 * XREFs of sub_140235738 @ 0x140235738
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     ntoskrnl_12 @ 0x1406AD260 (ntoskrnl_12.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall sub_140235738(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ecx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  int v6; // r9d
  int v7; // eax
  int v8; // eax

  v2 = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL);
  v3 = *((unsigned __int8 *)KeGetCurrentPrcb() + 208);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = DesiredTime;
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = 0x7FFFFFFEFFFFLL;
  if ( (unsigned __int16)v3 >= (unsigned __int16)dword_140D06E40 )
    v4 = 0LL;
  else
    v4 = qword_140D06E48[v3];
  *(_QWORD *)(a1 + 48) = v4;
  *(_BYTE *)(a1 + 56) = (0x101010101010101LL
                       * ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  v5 = ntoskrnl_12((unsigned __int16)v2);
  v6 = -1;
  v7 = -1;
  if ( v5 <= 0xFFFFFFFF )
    v7 = v5;
  *(_DWORD *)(a1 + 12) = v7;
  v8 = -1;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * v2) + 16704LL) <= 0xFFFFFFFFuLL )
    v8 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * v2) + 16704LL);
  *(_DWORD *)(a1 + 16) = v8;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * v2) + 16712LL) <= 0xFFFFFFFFuLL )
    v6 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * v2) + 16712LL);
  *(_DWORD *)(a1 + 20) = v6;
  return 0LL;
}

/*
 * XREFs of sub_14023559C @ 0x14023559C
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     ntoskrnl_12 @ 0x1406AD260 (ntoskrnl_12.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall sub_14023559C(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rsi
  int v4; // ecx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // r9d
  int v10; // eax
  int v11; // eax

  v2 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1496LL);
  v3 = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL);
  v4 = *((unsigned __int8 *)KeGetCurrentPrcb() + 208);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = DesiredTime;
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  if ( (unsigned __int16)v4 >= (unsigned __int16)dword_140D06E40 )
  {
    LODWORD(v5) = 0;
    v6 = 0LL;
  }
  else
  {
    v5 = qword_140D06E48[v4];
    v6 = v5;
  }
  v7 = (unsigned int)v5 | HIDWORD(v6);
  *(_QWORD *)(a1 + 48) = v7;
  *(_BYTE *)(a1 + 56) = (0x101010101010101LL
                       * ((((v7 - ((v7 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v7 - ((v7 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v7 - ((v7 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v7 - ((v7 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = v2 - 1;
  v8 = ntoskrnl_12((unsigned __int16)v3);
  v9 = -1;
  v10 = -1;
  if ( v8 <= 0xFFFFFFFF )
    v10 = v8;
  *(_DWORD *)(a1 + 12) = v10;
  v11 = -1;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * v3) + 16704LL) <= 0xFFFFFFFFuLL )
    v11 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * v3) + 16704LL);
  *(_DWORD *)(a1 + 16) = v11;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * v3) + 16712LL) <= 0xFFFFFFFFuLL )
    v9 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * v3) + 16712LL);
  *(_DWORD *)(a1 + 20) = v9;
  return 0LL;
}

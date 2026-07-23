/*
 * XREFs of sub_14029E120 @ 0x14029E120
 * Callers:
 *     sub_14029D818 @ 0x14029D818 (sub_14029D818.c)
 *     sub_14029D860 @ 0x14029D860 (sub_14029D860.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14039EB90 (CcAddDirtyPagesToExternalCache.c)
 * Callees:
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     sub_14029E260 @ 0x14029E260 (sub_14029E260.c)
 */

void __fastcall sub_14029E120(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // rdi
  __int64 v7; // r14
  _BYTE *v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx

  if ( byte_140C54C58 == 1 )
  {
    v6 = (_BYTE *)(a6 + 708);
    v7 = a6;
    v8 = (_BYTE *)(a6 + 1172);
  }
  else
  {
    v6 = (_BYTE *)(a5 + 716);
    v7 = a5;
    v8 = (_BYTE *)(a5 + 1228);
  }
  *(_QWORD *)(a5 + 992) += a4;
  if ( a6 )
    *(_QWORD *)(a6 + 992) += a4;
  if ( a2 )
    *(_DWORD *)(a2 + 8) += a4;
  if ( a3 )
    *(_DWORD *)(a3 + 32) += a4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 112) += a4;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 504) + 32LL), a4);
    a3 = *(_QWORD *)(a1 + 504);
    *(_QWORD *)(a3 + 240) += *(_QWORD *)(a3 + 32);
    v9 = *(_QWORD *)(a1 + 504);
    v10 = *(_QWORD *)(a3 + 248);
    if ( v10 <= *(_QWORD *)(v9 + 32) )
      v10 = *(_QWORD *)(v9 + 32);
    ++*(_QWORD *)(a3 + 256);
    *(_QWORD *)(a3 + 248) = v10;
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 240) + 24LL), a4);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) == -1LL )
        *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    }
  }
  if ( *v8 && *(_QWORD *)(v7 + 992) >= 0x2000uLL )
  {
    LOBYTE(a3) = 1;
    sub_140276758((_BYTE *)a5, a6, a3, 0);
  }
  if ( *v6 )
  {
    sub_140276758((_BYTE *)a5, a6, 0LL, 0);
    *v6 = 0;
  }
  if ( byte_140C54C58 != 1 )
    sub_14029E260(a5, 0LL);
}

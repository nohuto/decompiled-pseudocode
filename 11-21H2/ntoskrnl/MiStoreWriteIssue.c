/*
 * XREFs of MiStoreWriteIssue @ 0x14037BB94
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14037B44C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     SmpPageWrite @ 0x14037BC58 (SmpPageWrite.c)
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14037D59C (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 */

__int64 __fastcall MiStoreWriteIssue(
        __int64 a1,
        __int64 a2,
        union _MM_STORE_KEY *a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8)
{
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r11

  *(_DWORD *)(a1 + 72) = 56;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 4096LL;
  *(_WORD *)(a1 + 74) |= 2u;
  v9 = a7;
  *(_QWORD *)(a1 + 112) = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  *(_QWORD *)(a1 + 56) = v9;
  LODWORD(a7) = 0;
  result = SmKeyConvert(a3, (union _SM_PAGE_KEY *)&a7);
  if ( (int)result >= 0 )
    return SmpPageWrite((unsigned int)&a7, a4, a6, (int)v11 + 64, a5, v11 + 16, a8);
  return result;
}

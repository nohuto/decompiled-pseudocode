/*
 * XREFs of sub_1800FC250 @ 0x1800FC250
 * Callers:
 *     sub_1800277C0 @ 0x1800277C0 (sub_1800277C0.c)
 *     sub_180027824 @ 0x180027824 (sub_180027824.c)
 *     sub_180027830 @ 0x180027830 (sub_180027830.c)
 *     sub_180027D00 @ 0x180027D00 (sub_180027D00.c)
 *     sub_18002D7E4 @ 0x18002D7E4 (sub_18002D7E4.c)
 *     sub_180032F04 @ 0x180032F04 (sub_180032F04.c)
 *     sub_180033018 @ 0x180033018 (sub_180033018.c)
 *     sub_180044E0C @ 0x180044E0C (sub_180044E0C.c)
 *     sub_180067BFC @ 0x180067BFC (sub_180067BFC.c)
 *     sub_1800B2670 @ 0x1800B2670 (sub_1800B2670.c)
 *     sub_1800B2B54 @ 0x1800B2B54 (sub_1800B2B54.c)
 *     sub_1800B2CD4 @ 0x1800B2CD4 (sub_1800B2CD4.c)
 *     sub_1800B4CD8 @ 0x1800B4CD8 (sub_1800B4CD8.c)
 *     sub_1800B5130 @ 0x1800B5130 (sub_1800B5130.c)
 *     sub_1800B60F8 @ 0x1800B60F8 (sub_1800B60F8.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

__int64 __fastcall sub_1800FC250(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    _Cnd_destroy_in_situ((_Cnd_t)(v1 + 152));
    _Cnd_destroy_in_situ((_Cnd_t)(v1 + 80));
    _Mtx_destroy_in_situ((_Mtx_t)v1);
    return sub_18000B998((LPVOID)v1);
  }
  return result;
}

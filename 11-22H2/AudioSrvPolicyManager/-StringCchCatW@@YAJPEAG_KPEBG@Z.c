/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18001A3C4
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180018DC4 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18001A768 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x18001A59C (StringCopyWorkerW.c)
 */

HRESULT __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, size_t *a3)
{
  unsigned __int16 *v3; // rax
  __int64 v4; // r9
  HRESULT result; // eax
  size_t v6; // [rsp+20h] [rbp-18h]

  v3 = a1;
  v4 = 260LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
    return StringCopyWorkerW(
             (unsigned __int16 *)((char *)a1 + ((2 * (260 - v4)) & -(__int64)(v4 != 0))),
             ((v4 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) + 260,
             a3,
             (STRSAFE_PCNZWCH)a3,
             v6);
  return result;
}

/*
 * XREFs of ?StringCchCatW@@YAJPEA_W_KPEB_W@Z @ 0x18000F5DC
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEB_W_N_K@Z @ 0x18000D988 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEB_W_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z @ 0x18000F82C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x18000F714 (StringCopyWorkerW.c)
 */

HRESULT __fastcall StringCchCatW(wchar_t *a1, __int64 a2, wchar_t *a3)
{
  wchar_t *v3; // rax
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
             (wchar_t *)((char *)a1 + ((2 * (260 - v4)) & -(__int64)(v4 != 0))),
             ((v4 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) + 260,
             (size_t *)a3,
             a3,
             v6);
  return result;
}

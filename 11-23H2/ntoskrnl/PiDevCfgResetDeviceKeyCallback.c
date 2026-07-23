/*
 * XREFs of PiDevCfgResetDeviceKeyCallback @ 0x140960120
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403D9C30 (_wcsicmp.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14087E554 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E664 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgResetDeviceKeyCallback(__int64 a1, __int64 a2, __int64 a3, void *a4, void *a5)
{
  if ( *(_DWORD *)(a3 + 16) != 16 || wcsicmp(*(const wchar_t **)a3, L"Properties") )
    return PiDevCfgCopyDeviceKeys(a4, a5, a3, 0LL);
  else
    return PiDevCfgCopyDeviceKey(a4, a5, *(_QWORD *)(a2 + 8), 1, 1, 0LL, 0LL);
}

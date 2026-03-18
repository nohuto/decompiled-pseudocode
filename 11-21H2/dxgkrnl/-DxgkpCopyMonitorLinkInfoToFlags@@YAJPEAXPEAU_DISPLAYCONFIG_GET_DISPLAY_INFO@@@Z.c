/*
 * XREFs of ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C01A04AC
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     MonitorGetLinkInfoFromTarget @ 0x1C01A6260 (MonitorGetLinkInfoFromTarget.c)
 */

__int64 __fastcall DxgkpCopyMonitorLinkInfoToFlags(_BYTE *a1, struct _DISPLAYCONFIG_GET_DISPLAY_INFO *a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  int v6; // r8d
  __int16 v7; // r10
  unsigned int v8; // edx
  unsigned int v9; // edx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v10 = 0LL;
  v3 = *((unsigned int *)a2 + 479);
  v11 = 0;
  LODWORD(result) = MonitorGetLinkInfoFromTarget(a1, v3, &v10);
  v6 = *((_DWORD *)a2 + 513);
  if ( (int)result < 0 )
  {
    v9 = v6 & 0xFFFFB61F;
  }
  else
  {
    v7 = WORD2(v10);
    v8 = v6 & 0xFFFFF63F | (4
                          * (WORD2(v10) & 0x200 | (8
                                                 * (BYTE4(v10) & 4 | (2 * (BYTE4(v10) & 1 | (2 * (BYTE4(v10) & 2)))) | 1))));
    *((_DWORD *)a2 + 513) = v8;
    if ( a1[2760] )
      v9 = v8 | 0x4000;
    else
      v9 = ((unsigned __int16)v8 ^ (unsigned __int16)(8 * v7)) & 0x4000 ^ v8;
  }
  *((_DWORD *)a2 + 513) = v9;
  return (unsigned int)result;
}

/*
 * XREFs of ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01710F8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00C3D64 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvFunctionalizeBaseVidMode(const struct _RETRY_MODE *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 (__fastcall *v8)(_QWORD, struct D3DKMT_GETPATHSMODALITY *); // rbx
  int CcdRawmodeFlag; // eax

  v2 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v5 = *((_DWORD *)a1 + 1);
  if ( v5 == -1 )
  {
    if ( *((_DWORD *)a1 + 2) == -1 )
    {
      if ( *((_WORD *)a2 + 10) )
      {
        v6 = *((_QWORD *)a2 + 7);
        do
        {
          ++v2;
          v6 &= 0xFFFFFBFFFE7CFE78uLL;
        }
        while ( v2 < *((unsigned __int16 *)a2 + 10) );
        *((_QWORD *)a2 + 7) = v6;
      }
      goto LABEL_14;
    }
  }
  else if ( !v5 )
  {
    goto LABEL_14;
  }
  if ( *((_DWORD *)a1 + 2) )
  {
    if ( *((_WORD *)a2 + 10) != 1 )
      WdLogSingleEntry0(1LL);
    v7 = *((_QWORD *)a2 + 7) & 0xFFFFFBFFFE7EFF7CuLL;
    *((_BYTE *)a2 + 184) = 0;
    *((_DWORD *)a2 + 47) = 1;
    *((_QWORD *)a2 + 7) = v7 | 0x20304;
    *((_DWORD *)a2 + 34) = 9;
    *((_DWORD *)a2 + 52) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 53) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 38) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 39) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 40) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 41) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 43) = 21;
    *((_DWORD *)a2 + 42) = 0;
    *((_QWORD *)a2 + 22) = 0LL;
  }
LABEL_14:
  v8 = (__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *))qword_1C02966F8;
  CcdRawmodeFlag = GetCcdRawmodeFlag();
  return v8(CcdRawmodeFlag | 0x8000u, a2);
}

/*
 * XREFs of _lambda_a1b7f4c1e370eee7ceb304e65e8c3eda_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800CFFEC
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800D1B34 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall lambda_a1b7f4c1e370eee7ceb304e65e8c3eda_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
        __int64 a1,
        LPCWCH **a2)
{
  char v4; // bl
  int v6; // eax
  LPCWCH *v7; // rdx

  if ( **(_DWORD **)a1 != 4 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 48LL))(**(_QWORD **)(a1 + 16));
    v7 = *a2;
    return *((_DWORD *)*a2 + 4) == v6
        && *((_DWORD *)v7 + 2) == **(_DWORD **)(a1 + 24)
        && *((_DWORD *)v7 + 3) == **(_DWORD **)a1;
  }
  v4 = 1;
  if ( CompareStringOrdinal(**a2, -1, **(LPCWCH **)(a1 + 8), -1, 1) != 2
    || *((_DWORD *)*a2 + 4) != (*(unsigned int (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 48LL))(**(_QWORD **)(a1 + 16)) )
  {
    return 0;
  }
  return v4;
}

/*
 * XREFs of ?GetAppViewInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA?AV?$optional@UAppViewInfo@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAUIApplicationView@@@Z @ 0x1804A39A4
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1802D65F2 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::GetAppViewInfo(
        __int64 **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // rax
  __int128 v7; // [rsp+0h] [rbp-28h]
  __int64 v8; // [rsp+10h] [rbp-18h]

  v3 = *a1;
  v4 = v3;
  v5 = (__int64 *)v3[1];
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( v5[4] >= a3 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  if ( *((_BYTE *)v4 + 25) || a3 < v4[4] || v4 == v3 )
  {
    *(_BYTE *)(a2 + 24) = 0;
  }
  else
  {
    LODWORD(v7) = *((_DWORD *)v4 + 10);
    *((_QWORD *)&v7 + 1) = v4 + 6;
    LODWORD(v8) = *((_DWORD *)v4 + 20);
    *(_OWORD *)a2 = v7;
    *(_BYTE *)(a2 + 24) = 1;
    *(_QWORD *)(a2 + 16) = v8;
  }
  return a2;
}

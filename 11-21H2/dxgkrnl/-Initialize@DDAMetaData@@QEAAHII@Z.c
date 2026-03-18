/*
 * XREFs of ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C0326A44
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0326B70 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall DDAMetaData::Initialize(DDAMetaData *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // rbx

  if ( *((_DWORD *)this + 5) < 0x10u || *((_DWORD *)this + 10) < 4u )
    return 0LL;
  v5 = operator new[](0x10uLL, 0x674D444Fu, 256LL, a4);
  v7 = (_QWORD *)v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 8) = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer((const void **)v5, 0x124u, 0, v6);
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 4) = v7;
  if ( !v7 || !*v7 )
    return 0LL;
  v8 = operator new[](0x10uLL, 0x674D444Fu, 256LL, v6);
  v10 = (_QWORD *)v8;
  if ( v8 )
  {
    *(_QWORD *)v8 = 0LL;
    *(_QWORD *)(v8 + 8) = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer((const void **)v8, 0x60u, 0, v9);
  }
  else
  {
    v10 = 0LL;
  }
  *((_QWORD *)this + 6) = v10;
  if ( !v10 || !*v10 )
    return 0LL;
  if ( !*((_QWORD *)this + 7) )
  {
    WdLogSingleEntry1(2LL, 262LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not get Win32k functions!!",
      262LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
  return 1LL;
}

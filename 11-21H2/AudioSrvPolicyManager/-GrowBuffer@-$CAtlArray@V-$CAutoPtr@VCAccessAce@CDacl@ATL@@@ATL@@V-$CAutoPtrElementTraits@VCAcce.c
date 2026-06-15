/*
 * XREFs of ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18003F5FC
 * Callers:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18003E304 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18003E614 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180003432 (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     memcpy_0 @ 0x180044443 (memcpy_0.c)
 */

char __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
        __int64 a1,
        size_t a2)
{
  size_t v4; // rdx
  void *v5; // rax
  size_t v6; // rcx
  void *v7; // rax
  __int64 v8; // rcx
  void *v9; // rsi
  size_t v11; // r8

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  if ( *(_QWORD *)a1 )
  {
    v6 = *(int *)(a1 + 24);
    if ( !v6 )
    {
      v6 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v6 = a2 - v4;
    }
    if ( a2 < v4 + v6 )
      a2 = v4 + v6;
    v7 = calloc(a2, 8uLL);
    v9 = v7;
    if ( v7 )
    {
      v11 = 8LL * *(_QWORD *)(a1 + 8);
      if ( v11 )
      {
        if ( !*(_QWORD *)a1 )
        {
          *(_DWORD *)_o__errno(v8) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memcpy_0(v7, *(const void **)a1, v11);
      }
      free(*(void **)a1);
      *(_QWORD *)a1 = v9;
      goto LABEL_18;
    }
    return 0;
  }
  if ( *(int *)(a1 + 24) > a2 )
    a2 = *(int *)(a1 + 24);
  v5 = calloc(a2, 8uLL);
  *(_QWORD *)a1 = v5;
  if ( !v5 )
    return 0;
LABEL_18:
  *(_QWORD *)(a1 + 16) = a2;
  return 1;
}

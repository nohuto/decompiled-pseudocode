/*
 * XREFs of ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18003E240
 * Callers:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18003DCEC (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18005F922 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
        __int64 a1,
        size_t a2)
{
  size_t v4; // rdx
  void *v5; // rax
  size_t v7; // rcx
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rsi
  size_t v12; // r8

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  if ( *(_QWORD *)a1 )
  {
    v7 = *(int *)(a1 + 24);
    if ( !v7 )
    {
      v7 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v7 = a2 - v4;
    }
    if ( a2 < v4 + v7 )
      a2 = v4 + v7;
    v8 = calloc(a2, 8uLL);
    v11 = v8;
    if ( v8 )
    {
      v12 = 8LL * *(_QWORD *)(a1 + 8);
      if ( v12 )
      {
        if ( !*(_QWORD *)a1 )
        {
          *(_DWORD *)_o__errno(v10, v9) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memcpy_0(v8, *(const void **)a1, v12);
      }
      free(*(void **)a1);
      *(_QWORD *)a1 = v11;
      goto LABEL_6;
    }
  }
  else
  {
    if ( *(int *)(a1 + 24) > a2 )
      a2 = *(int *)(a1 + 24);
    v5 = calloc(a2, 8uLL);
    *(_QWORD *)a1 = v5;
    if ( v5 )
    {
LABEL_6:
      *(_QWORD *)(a1 + 16) = a2;
      return 1;
    }
  }
  return 0;
}

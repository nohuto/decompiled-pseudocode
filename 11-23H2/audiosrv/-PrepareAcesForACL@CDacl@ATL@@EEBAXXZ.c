/*
 * XREFs of ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x180063200
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z @ 0x1800632F4 (--4-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180063334 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z @ 0x180063374 (-Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CDacl::PrepareAcesForACL(ATL::CDacl *this)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rax
  unsigned __int64 i; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  struct ATL::CDacl::CAccessAce *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 1LL;
  v3 = *((_QWORD *)this + 4);
  v8 = 0LL;
  v4 = 4LL;
  if ( v3 <= 4 )
    goto LABEL_23;
  do
  {
    v2 = v4;
    v4 += 2 * v4 + 1;
  }
  while ( v4 < v3 );
  if ( v2 )
  {
LABEL_23:
    do
    {
      for ( i = v2 - 1; i < v3; ++i )
      {
        if ( i >= *((_QWORD *)this + 4) )
          goto LABEL_20;
        ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(&v8, *((_QWORD *)this + 3) + 8 * i);
        v7 = i;
        if ( i >= v2 )
        {
          while ( 1 )
          {
            v6 = v7 - v2;
            if ( v7 - v2 >= *((_QWORD *)this + 4) )
              break;
            if ( (unsigned int)ATL::CDacl::CAccessAce::Order(
                                 *(const struct ATL::CDacl::CAccessAce **)(*((_QWORD *)this + 3) + 8 * v6),
                                 v8) != -1 )
              goto LABEL_5;
            if ( v6 >= *((_QWORD *)this + 4) || v7 >= *((_QWORD *)this + 4) )
              break;
            ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(
              *((_QWORD *)this + 3) + 8 * v7,
              *((_QWORD *)this + 3) + 8 * v6);
            v7 -= v2;
            if ( v6 < v2 )
              goto LABEL_5;
          }
LABEL_20:
          ATL::AtlThrowImpl(-2147024809);
        }
LABEL_5:
        if ( v7 >= *((_QWORD *)this + 4) )
          goto LABEL_20;
        ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(*((_QWORD *)this + 3) + 8 * v7, &v8);
      }
      v2 /= 3uLL;
    }
    while ( v2 );
  }
  ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(&v8);
}

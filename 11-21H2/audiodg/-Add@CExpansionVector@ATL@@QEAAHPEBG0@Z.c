/*
 * XREFs of ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x140083B50
 * Callers:
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x140083E50 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x14002FC98 (--_U@YAPEAX_K@Z.c)
 *     memcpy_s_0 @ 0x14004F70C (memcpy_s_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Add@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z @ 0x140083A9C (-Add@-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z.c)
 *     ?ocslen@@YAHPEBG@Z @ 0x140087540 (-ocslen@@YAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CExpansionVector::Add(
        ATL::CExpansionVector *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  const unsigned __int16 *v3; // r12
  const unsigned __int16 *v4; // r14
  __int64 v5; // rax
  __int64 v6; // r13
  size_t v7; // rax
  void *v8; // r15
  errno_t v9; // eax
  errno_t v10; // eax
  void *v11; // rdi
  void *v12; // rbx
  void *v14; // [rsp+20h] [rbp-68h] BYREF
  void *v15; // [rsp+28h] [rbp-60h] BYREF
  __int64 v16; // [rsp+30h] [rbp-58h]
  rsize_t DestinationSize; // [rsp+38h] [rbp-50h]
  void *v18; // [rsp+40h] [rbp-48h]
  unsigned int v26; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( a2 && a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    v6 = 2 * v5 + 2;
    v16 = v6;
    v14 = 0LL;
    v7 = 2 * v6;
    if ( !is_mul_ok(v6, 2uLL) )
      v7 = -1LL;
    try
    {
      v8 = operator new[](v7);
      v14 = v8;
    }
    catch ( ... )
    {
      v3 = a3;
      v4 = a2;
      v6 = v16;
      v8 = v14;
    }
    try
    {
      v11 = v8;
      v18 = v8;
      v26 = 1;
      DestinationSize = 2LL * (int)(ocslen(v3) + 1);
      v12 = operator new[](saturated_mul(DestinationSize, 2uLL));
      v15 = v12;
    }
    catch ( ... )
    {
      v26 = 1;
      v3 = a3;
      v4 = a2;
      v6 = v16;
      v8 = v14;
      v11 = v18;
      v12 = v15;
    }
    if ( !v8 || !v12 )
      goto LABEL_24;
    v9 = memcpy_s_0(v8, v6, v4, v6);
    if ( v9 )
    {
      if ( v9 == 12 )
        goto LABEL_21;
      if ( v9 == 22 || v9 == 34 )
        goto LABEL_20;
      if ( v9 != 80 )
        goto LABEL_19;
    }
    v10 = memcpy_s_0(v12, DestinationSize, v3, DestinationSize);
    if ( !v10 )
      goto LABEL_22;
    if ( v10 != 12 )
    {
      if ( v10 != 22 && v10 != 34 )
      {
        if ( v10 != 80 )
LABEL_19:
          ATL::AtlThrowImpl(-2147467259);
LABEL_22:
        if ( (unsigned int)ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::Add(
                             (__int64)this,
                             &v14,
                             &v15) )
        {
          v11 = 0LL;
          v12 = 0LL;
LABEL_25:
          operator delete[](v12);
          operator delete[](v11);
          return v26;
        }
LABEL_24:
        v26 = 0;
        goto LABEL_25;
      }
LABEL_20:
      ATL::AtlThrowImpl(-2147024809);
    }
LABEL_21:
    ATL::AtlThrowImpl(-2147024882);
  }
  return 0LL;
}

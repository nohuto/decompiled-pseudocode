/*
 * XREFs of ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x18000E390
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012AF4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180015228 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CDacl::PrepareAcesForACL(ATL::CDacl *this)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rbx
  unsigned __int64 i; // rax
  unsigned __int64 v6; // rsi
  __int64 *v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // r12
  __int64 *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // r14
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v2 = 1LL;
  v3 = *((_QWORD *)this + 4);
  v4 = 0LL;
  v19 = 0LL;
  if ( v3 > 4 )
  {
    for ( i = 4LL; i < v3; i += 2 * i + 1 )
      v2 = i;
    if ( !v2 )
      goto LABEL_42;
  }
  do
  {
    v6 = v2 - 1;
    if ( v2 - 1 >= v3 )
      goto LABEL_41;
    do
    {
      if ( v6 >= *((_QWORD *)this + 4) )
LABEL_45:
        ATL::AtlThrowImpl(-2147024809);
      v7 = (__int64 *)(*((_QWORD *)this + 3) + 8 * v6);
      if ( v4 != *v7 )
      {
        ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(&v19);
        v4 = *v7;
        v19 = *v7;
LABEL_11:
        *v7 = 0LL;
        goto LABEL_12;
      }
      if ( &v19 != v7 )
        goto LABEL_11;
LABEL_12:
      v8 = v6;
      if ( v6 < v2 )
        goto LABEL_34;
      while ( 1 )
      {
        v9 = v8 - v2;
        if ( v8 - v2 >= *((_QWORD *)this + 4) )
          goto LABEL_45;
        _mm_lfence();
        v10 = *((_QWORD *)this + 3);
        v11 = *(_BYTE **)(v10 + 8 * v9);
        v4 = v19;
        if ( (v11[132] & 0x10) != 0 )
        {
          if ( (*(_BYTE *)(v19 + 132) & 0x10) == 0 )
            goto LABEL_24;
        }
        else if ( (*(_BYTE *)(v19 + 132) & 0x10) != 0 )
        {
          goto LABEL_34;
        }
        if ( !v11[144] )
          break;
        if ( *(_BYTE *)(v19 + 144) )
          goto LABEL_22;
LABEL_24:
        v12 = *((_QWORD *)this + 4);
        if ( v9 >= v12 )
          goto LABEL_45;
        v13 = *((_QWORD *)this + 3);
        v14 = (__int64 *)(v13 + 8 * v9);
        if ( v8 >= v12 )
          goto LABEL_45;
        v15 = (__int64 *)(v13 + 8 * v8);
        if ( *v15 == *v14 )
        {
          if ( v15 != v14 )
            *v14 = 0LL;
        }
        else
        {
          ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(v15);
          v16 = *v14;
          *v14 = 0LL;
          *v15 = v16;
        }
        v8 = v9;
        if ( v9 < v2 )
          goto LABEL_34;
      }
      if ( *(_BYTE *)(v19 + 144) )
        goto LABEL_34;
LABEL_22:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 32LL))(*(_QWORD *)(v10 + 8 * v9))
        && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4) )
      {
        goto LABEL_24;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v11 + 32LL))(v11) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
LABEL_34:
      if ( v8 >= *((_QWORD *)this + 4) )
        goto LABEL_45;
      v17 = *((_QWORD *)this + 3);
      v18 = (__int64 *)(v17 + 8 * v8);
      if ( *v18 != v4 )
      {
        ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(v17 + 8 * v8);
        *v18 = v4;
LABEL_39:
        v4 = 0LL;
        v19 = 0LL;
        goto LABEL_40;
      }
      if ( v18 != &v19 )
        goto LABEL_39;
LABEL_40:
      ++v6;
    }
    while ( v6 < v3 );
LABEL_41:
    v2 /= 3uLL;
  }
  while ( v2 );
LABEL_42:
  if ( v4 )
    (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
}

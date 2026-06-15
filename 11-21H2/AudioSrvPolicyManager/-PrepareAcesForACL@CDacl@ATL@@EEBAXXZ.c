/*
 * XREFs of ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x18003FC90
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CDacl::PrepareAcesForACL(ATL::CDacl *this)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r13
  _BYTE *v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 i; // rbp
  char *v7; // rsi
  _BYTE *v8; // rax
  unsigned __int64 v9; // rsi
  bool j; // cf
  _BYTE *v11; // rdx
  unsigned __int64 v12; // r12
  _BYTE *v13; // r14
  char v14; // al
  char v15; // al
  __int64 v16; // rax
  _QWORD *v17; // r14
  void (__fastcall ****v18)(_QWORD, __int64); // rsi
  void (__fastcall ***v19)(_QWORD, __int64); // rcx
  void (__fastcall ***v20)(_QWORD, __int64); // rax
  char *v21; // rsi
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  _BYTE *v23; // rax
  char v24; // [rsp+68h] [rbp+10h] BYREF

  v2 = 1LL;
  v3 = *((_QWORD *)this + 4);
  v4 = 0LL;
  v5 = 4LL;
  if ( v3 <= 4 )
    goto LABEL_4;
  do
  {
    v2 = v5;
    v5 += 2 * v5 + 1;
  }
  while ( v5 < v3 );
  if ( v2 )
  {
LABEL_4:
    while ( 1 )
    {
      for ( i = v2 - 1; i < v3; ++i )
      {
        if ( i >= *((_QWORD *)this + 4) )
          goto LABEL_52;
        v7 = (char *)(*((_QWORD *)this + 3) + 8 * i);
        v8 = *(_BYTE **)v7;
        if ( v4 != *(_BYTE **)v7 )
        {
          if ( v4 )
          {
            (**(void (__fastcall ***)(_BYTE *, __int64))v4)(v4, 1LL);
            v8 = *(_BYTE **)v7;
          }
          v4 = v8;
LABEL_12:
          *(_QWORD *)v7 = 0LL;
          goto LABEL_13;
        }
        if ( &v24 != v7 )
          goto LABEL_12;
LABEL_13:
        v9 = i;
        for ( j = i < v2; ; j = v12 < v2 )
        {
          v11 = v4;
          if ( j )
            break;
          v12 = v9 - v2;
          if ( v9 - v2 >= *((_QWORD *)this + 4) )
            goto LABEL_52;
          _mm_lfence();
          v13 = *(_BYTE **)(*((_QWORD *)this + 3) + 8 * v12);
          v14 = v4[132] & 0x10;
          if ( (v13[132] & 0x10) != 0 )
          {
            if ( !v14 )
              goto LABEL_26;
          }
          else if ( v14 )
          {
            break;
          }
          v15 = v4[144];
          if ( v13[144] )
          {
            if ( !v15 )
              goto LABEL_26;
          }
          else if ( v15 )
          {
            break;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v13 + 32LL))(v13, v4)
            || (*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 32LL))(v4) )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v13 + 32LL))(v13) )
              (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 32LL))(v4);
            v11 = v4;
            break;
          }
LABEL_26:
          if ( v12 >= *((_QWORD *)this + 4) )
            goto LABEL_52;
          v16 = *((_QWORD *)this + 3);
          v17 = (_QWORD *)(v16 + 8 * v12);
          if ( v9 >= *((_QWORD *)this + 4) )
            goto LABEL_52;
          v18 = (void (__fastcall ****)(_QWORD, __int64))(v16 + 8 * v9);
          v19 = *v18;
          if ( *v18 == (void (__fastcall ***)(_QWORD, __int64))*v17 )
          {
            if ( v18 != v17 )
              *v17 = 0LL;
          }
          else
          {
            if ( v19 )
              (**v19)(v19, 1LL);
            *v18 = 0LL;
            v20 = (void (__fastcall ***)(_QWORD, __int64))*v17;
            *v17 = 0LL;
            *v18 = v20;
          }
          v9 = v12;
        }
        if ( v9 >= *((_QWORD *)this + 4) )
LABEL_52:
          ATL::AtlThrowImpl(-2147024809);
        v21 = (char *)(*((_QWORD *)this + 3) + 8 * v9);
        v22 = *(void (__fastcall ****)(_QWORD, __int64))v21;
        if ( *(_BYTE **)v21 == v4 )
        {
          v4 = 0LL;
          if ( v21 == &v24 )
            v4 = v11;
        }
        else
        {
          if ( v22 )
            (**v22)(v22, 1LL);
          v23 = v4;
          v4 = 0LL;
          *(_QWORD *)v21 = v23;
        }
      }
      v2 /= 3uLL;
      if ( !v2 )
      {
        if ( v4 )
          (**(void (__fastcall ***)(_BYTE *, __int64))v4)(v4, 1LL);
        return;
      }
    }
  }
}

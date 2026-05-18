/*
 * XREFs of sub_18005865C @ 0x18005865C
 * Callers:
 *     sub_180058808 @ 0x180058808 (sub_180058808.c)
 * Callees:
 *     sub_18001FA60 @ 0x18001FA60 (sub_18001FA60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18005865C(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v3; // r14d
  __int64 v4; // rdi
  unsigned int v6; // esi
  char v7; // bp
  __int64 v8; // rcx
  _BYTE *v9; // rax
  unsigned int i; // eax
  __int64 v11; // r8
  char v12; // dl
  unsigned __int64 v13; // rcx
  _BYTE *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)std::istream::_Ipfx(a1, a2) )
  {
    v9 = (_BYTE *)v4;
    if ( *(_QWORD *)(v4 + 24) >= 0x10uLL )
      v9 = *(_BYTE **)v4;
    *(_QWORD *)(v4 + 16) = 0LL;
    *v9 = 0;
    for ( i = std::streambuf::sgetc(*(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72));
          ;
          i = std::streambuf::snextc(*(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72)) )
    {
      v12 = i;
      if ( i == -1 )
        break;
      if ( i == v3 )
      {
        v7 = 1;
        std::streambuf::sbumpc(*(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72), i);
        goto LABEL_19;
      }
      v13 = *(_QWORD *)(v4 + 16);
      if ( v13 >= 0x7FFFFFFFFFFFFFFFLL )
      {
        v6 = 2;
        goto LABEL_19;
      }
      if ( v13 >= *(_QWORD *)(v4 + 24) )
      {
        sub_18001FA60((const void **)v4, i, v11, i);
      }
      else
      {
        *(_QWORD *)(v4 + 16) = v13 + 1;
        v14 = (_BYTE *)v4;
        if ( *(_QWORD *)(v4 + 24) >= 0x10uLL )
          v14 = *(_BYTE **)v4;
        v14[v13] = v12;
        v14[v13 + 1] = 0;
      }
      v7 = 1;
    }
    v6 = 1;
  }
LABEL_19:
  v15 = v6 | 2;
  if ( v7 )
    v15 = v6;
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v15, 0LL);
  v16 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return a1;
}

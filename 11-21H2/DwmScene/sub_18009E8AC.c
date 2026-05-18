/*
 * XREFs of sub_18009E8AC @ 0x18009E8AC
 * Callers:
 *     sub_18009EAC0 @ 0x18009EAC0 (sub_18009EAC0.c)
 * Callees:
 *     sub_18001FA60 @ 0x18001FA60 (sub_18001FA60.c)
 *     sub_1800205DC @ 0x1800205DC (sub_1800205DC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18009E8AC(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  char v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r15
  void (__fastcall ***v9)(_QWORD, __int64); // rax
  _BYTE *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // r8
  bool i; // zf
  char v16; // dl
  unsigned __int64 v17; // rcx
  _BYTE *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _BYTE v22[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+38h] [rbp-20h]

  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( (unsigned __int8)std::istream::_Ipfx(a1, 0LL) )
  {
    v7 = std::ios_base::getloc(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v22);
    v8 = sub_1800205DC(v7);
    if ( v23 )
    {
      v9 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v9 )
        (**v9)(v9, 1LL);
    }
    v10 = (_BYTE *)a2;
    if ( *(_QWORD *)(a2 + 24) >= 0x10uLL )
      v10 = *(_BYTE **)a2;
    *(_QWORD *)(a2 + 16) = 0LL;
    *v10 = 0;
    v11 = *(int *)(*(_QWORD *)a1 + 4LL);
    v12 = *(_QWORD *)(v11 + a1 + 40);
    if ( v12 <= 0 || (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFFFLL )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    v13 = std::streambuf::sgetc(*(_QWORD *)(v11 + a1 + 72));
    for ( i = v12 == 0; !i; i = v12 == 0 )
    {
      if ( v13 == -1 )
      {
        v4 = 1;
        break;
      }
      v16 = v13;
      if ( (*(_BYTE *)(*(_QWORD *)(v8 + 24) + 2LL * (unsigned __int8)v13) & 0x48) != 0 )
        break;
      v17 = *(_QWORD *)(a2 + 16);
      if ( v17 >= *(_QWORD *)(a2 + 24) )
      {
        sub_18001FA60((const void **)a2, (unsigned __int8)v13, v14, v13);
      }
      else
      {
        *(_QWORD *)(a2 + 16) = v17 + 1;
        v18 = (_BYTE *)a2;
        if ( *(_QWORD *)(a2 + 24) >= 0x10uLL )
          v18 = *(_BYTE **)a2;
        v18[v17] = v16;
        v18[v17 + 1] = 0;
      }
      v5 = 1;
      v13 = std::streambuf::snextc(*(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72));
      --v12;
    }
  }
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 40) = 0LL;
  v19 = v4 | 2;
  if ( v5 )
    v19 = v4;
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v19, 0LL);
  v20 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return a1;
}

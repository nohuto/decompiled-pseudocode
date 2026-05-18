/*
 * XREFs of sub_18002FC20 @ 0x18002FC20
 * Callers:
 *     sub_180036CD4 @ 0x180036CD4 (sub_180036CD4.c)
 * Callees:
 *     sub_1800206F8 @ 0x1800206F8 (sub_1800206F8.c)
 *     sub_180032714 @ 0x180032714 (sub_180032714.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18002FC20(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // r15
  unsigned int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  void (__fastcall ***v10)(_QWORD, __int64); // r8
  __int64 v11; // r12
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rbx
  unsigned __int16 v14; // ax
  __int64 v15; // r8
  __int16 v16; // ax
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  char v21; // [rsp+28h] [rbp-30h]
  _BYTE v22[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+38h] [rbp-20h]

  v2 = a2;
  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 40);
  if ( v6 <= 0 || v6 <= v5 )
    v7 = 0LL;
  else
    v7 = v6 - v5;
  sub_180032714(&v20, a1);
  if ( v21 )
  {
    v8 = std::ios_base::getloc(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v22);
    v11 = sub_1800206F8(v8);
    if ( v23 )
    {
      v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v10 = v12;
      if ( v12 )
        (**v12)(v12, 1LL);
    }
    if ( (*(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 24) & 0x1C0) == 0x40 )
    {
LABEL_16:
      while ( v5 > 0 )
      {
        v13 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
        LOBYTE(v9) = *v2;
        v14 = std::ctype<wchar_t>::widen(v11, v9, v10);
        v16 = std::wstreambuf::sputc(v13, v14, v15);
        v17 = v4 | 4;
        if ( v16 != -1 )
          v17 = v4;
        v4 = v17;
        --v5;
        ++v2;
        if ( v17 )
          goto LABEL_25;
      }
      while ( v7 > 0 )
      {
        if ( (unsigned __int16)std::wstreambuf::sputc(
                                 *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72),
                                 *(unsigned __int16 *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 88),
                                 v10) == 0xFFFF )
          goto LABEL_24;
        --v7;
      }
    }
    else
    {
      while ( 1 )
      {
        if ( v7 <= 0 )
          goto LABEL_16;
        if ( (unsigned __int16)std::wstreambuf::sputc(
                                 *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72),
                                 *(unsigned __int16 *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 88),
                                 v10) == 0xFFFF )
          break;
        --v7;
      }
LABEL_24:
      v4 = 4;
    }
LABEL_25:
    *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 40) = 0LL;
  }
  else
  {
    v4 = 4;
  }
  std::wios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v4, 0LL);
  std::wostream::_Osfx(v20);
  v18 = *(_QWORD *)(*(int *)(*(_QWORD *)v20 + 4LL) + v20 + 72);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return a1;
}

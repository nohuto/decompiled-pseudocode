/*
 * XREFs of sub_180031560 @ 0x180031560
 * Callers:
 *     sub_18002FE64 @ 0x18002FE64 (sub_18002FE64.c)
 * Callees:
 *     sub_180032714 @ 0x180032714 (sub_180032714.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180031560(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  bool i; // zf
  bool j; // zf
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+28h] [rbp-20h]

  v6 = 0;
  v7 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 40);
  if ( v7 <= 0 || v7 <= a3 )
    v8 = 0LL;
  else
    v8 = v7 - a3;
  sub_180032714(&v14, a1);
  if ( v15 )
  {
    if ( (*(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 24) & 0x1C0) != 0x40 )
    {
      for ( i = v8 == 0; !i; i = v8 == 0 )
      {
        if ( (unsigned __int16)std::wstreambuf::sputc(
                                 *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72),
                                 *(unsigned __int16 *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 88),
                                 v9) == 0xFFFF )
        {
          v6 = 4;
          goto LABEL_13;
        }
        --v8;
      }
    }
    if ( std::wstreambuf::sputn(*(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72), a2, a3) == a3 )
    {
LABEL_13:
      for ( j = v8 == 0; !j; j = v8 == 0 )
      {
        if ( (unsigned __int16)std::wstreambuf::sputc(
                                 *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72),
                                 *(unsigned __int16 *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 88),
                                 v9) == 0xFFFF )
        {
          v6 |= 4u;
          break;
        }
        --v8;
      }
    }
    else
    {
      v6 = 4;
    }
    *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 40) = 0LL;
  }
  else
  {
    v6 = 4;
  }
  std::wios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v6, 0LL);
  std::wostream::_Osfx(v14);
  v12 = *(_QWORD *)(*(int *)(*(_QWORD *)v14 + 4LL) + v14 + 72);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return a1;
}

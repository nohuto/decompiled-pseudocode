/*
 * XREFs of sub_18001F7C8 @ 0x18001F7C8
 * Callers:
 *     sub_18001F7AC @ 0x18001F7AC (sub_18001F7AC.c)
 * Callees:
 *     sub_18001FC80 @ 0x18001FC80 (sub_18001FC80.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18001F7C8(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  bool i; // zf
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool j; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  char v18; // [rsp+28h] [rbp-10h]

  v6 = 0;
  v7 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 40);
  if ( v7 <= 0 || v7 <= a3 )
    v8 = 0LL;
  else
    v8 = v7 - a3;
  sub_18001FC80(&v17, a1);
  if ( v18 )
  {
    if ( (*(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 24) & 0x1C0) != 0x40 )
    {
      for ( i = v8 == 0; !i; i = v8 == 0 )
      {
        v10 = *(int *)(*(_QWORD *)a1 + 4LL);
        v11 = *(_QWORD *)(v10 + a1 + 72);
        LOBYTE(v10) = *(_BYTE *)(v10 + a1 + 88);
        if ( (unsigned int)std::streambuf::sputc(v11, v10) == -1 )
        {
          v6 = 4;
          goto LABEL_13;
        }
        --v8;
      }
    }
    if ( std::streambuf::sputn(*(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72), a2, a3) == a3 )
    {
LABEL_13:
      for ( j = v8 == 0; !j; j = v8 == 0 )
      {
        v13 = *(int *)(*(_QWORD *)a1 + 4LL);
        v14 = *(_QWORD *)(v13 + a1 + 72);
        LOBYTE(v13) = *(_BYTE *)(v13 + a1 + 88);
        if ( (unsigned int)std::streambuf::sputc(v14, v13) == -1 )
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
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v6, 0LL);
  std::ostream::_Osfx(v17);
  v15 = *(_QWORD *)(*(int *)(*(_QWORD *)v17 + 4LL) + v17 + 72);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return a1;
}

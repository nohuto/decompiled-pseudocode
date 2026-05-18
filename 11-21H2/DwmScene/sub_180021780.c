/*
 * XREFs of sub_180021780 @ 0x180021780
 * Callers:
 *     sub_1800E3618 @ 0x1800E3618 (sub_1800E3618.c)
 *     sub_1800E62C8 @ 0x1800E62C8 (sub_1800E62C8.c)
 *     sub_1800E63A4 @ 0x1800E63A4 (sub_1800E63A4.c)
 * Callees:
 *     sub_18001FC80 @ 0x18001FC80 (sub_18001FC80.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180021780(__int64 *a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(a2 + v5) );
  v6 = *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 40);
  if ( v6 <= 0 || v6 <= v5 )
    v7 = 0LL;
  else
    v7 = v6 - v5;
  sub_18001FC80((__int64)&v14, a1);
  if ( v15 )
  {
    if ( (*(_DWORD *)((_BYTE *)a1 + *(int *)(*a1 + 4) + 24) & 0x1C0) != 0x40 )
    {
      while ( v7 > 0 )
      {
        v8 = *(int *)(*a1 + 4);
        v9 = *(__int64 *)((char *)a1 + v8 + 72);
        LOBYTE(v8) = *((_BYTE *)a1 + v8 + 88);
        if ( (unsigned int)std::streambuf::sputc(v9, v8) == -1 )
          goto LABEL_17;
        --v7;
      }
    }
    if ( std::streambuf::sputn(*(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 72), a2, v5) == v5 )
    {
      while ( v7 > 0 )
      {
        v10 = *(int *)(*a1 + 4);
        v11 = *(__int64 *)((char *)a1 + v10 + 72);
        LOBYTE(v10) = *((_BYTE *)a1 + v10 + 88);
        if ( (unsigned int)std::streambuf::sputc(v11, v10) == -1 )
          goto LABEL_17;
        --v7;
      }
    }
    else
    {
LABEL_17:
      v4 = 4;
    }
    *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 40) = 0LL;
  }
  else
  {
    v4 = 4;
  }
  std::ios::setstate((char *)a1 + *(int *)(*a1 + 4), v4, 0LL);
  std::ostream::_Osfx(v14);
  v12 = *(_QWORD *)(*(int *)(*(_QWORD *)v14 + 4LL) + v14 + 72);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return a1;
}

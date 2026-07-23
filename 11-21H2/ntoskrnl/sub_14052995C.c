/*
 * XREFs of sub_14052995C @ 0x14052995C
 * Callers:
 *     sub_140529654 @ 0x140529654 (sub_140529654.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140268B50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140529428 @ 0x140529428 (sub_140529428.c)
 */

__int64 __fastcall sub_14052995C(int a1, int a2, unsigned int a3, __int64 a4, int a5, __int64 a6, char *a7)
{
  __int64 (__fastcall **v11)(); // rax
  unsigned int v12; // edx
  int v13; // r9d
  const char *v14; // rcx
  unsigned int v15; // eax
  void *v16; // rax
  __int64 v17; // rdi
  int v18; // ebp
  unsigned int v19; // r14d
  _DWORD *v20; // r15
  unsigned int v21; // r13d
  __int64 v22; // r12
  void *v23; // rax

  memset(a7, 0, 0x60uLL);
  if ( a1 )
  {
    if ( a1 == 2 )
    {
      v11 = (__int64 (__fastcall **)())&off_140009C50;
    }
    else
    {
      if ( a1 != 3 )
        return 3221225485LL;
      v11 = off_140009C80;
    }
  }
  else
  {
    v11 = (__int64 (__fastcall **)())&off_140009C68;
  }
  v12 = 0;
  *((_DWORD *)a7 + 7) = 3;
  *((_QWORD *)a7 + 11) = v11;
  *(_DWORD *)a7 = a1;
  *((_DWORD *)a7 + 6) = a3;
  v13 = 12;
  if ( a3 )
  {
    v14 = "\t";
    do
    {
      *(_DWORD *)&v14[a7 - "\t" + 36] = *(_DWORD *)v14;
      v15 = a3 - v12++;
      *(_DWORD *)&a7[4 * v15 + 56] = v13;
      v13 += *(_DWORD *)v14;
      v14 += 4;
    }
    while ( v12 < a3 );
  }
  *((_DWORD *)a7 + 8) = 0;
  v16 = sub_140529428((__int64)a7, 0, a6);
  *((_QWORD *)a7 + 2) = v16;
  v17 = (__int64)v16;
  if ( v16 )
  {
    v18 = 0;
    v19 = a3 - a2;
    if ( a3 == a2 )
    {
LABEL_18:
      *((_QWORD *)a7 + 1) = 0LL;
      return 0LL;
    }
    v20 = a7 + 36;
    while ( 1 )
    {
      v21 = v18 + 1;
      v22 = 1 << *v20 << *((_DWORD *)a7 + 7);
      v23 = sub_140529428((__int64)a7, v18 + 1, a6);
      *(_QWORD *)(v22 + v17) = v23;
      if ( !v23 )
        break;
      MmGetPhysicalAddress(v23);
      sub_14042A5E0(v17, a3 - v18 - 1);
      if ( !byte_140C4BE80 )
        KeInvalidateRangeAllCachesNoIpi(v17, 1 << *((_DWORD *)a7 + 7));
      v17 = *(_QWORD *)(v22 + v17);
      ++v20;
      ++v18;
      if ( v21 >= v19 )
        goto LABEL_18;
    }
  }
  return 3221225626LL;
}

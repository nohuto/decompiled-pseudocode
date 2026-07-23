/*
 * XREFs of sub_1409D3EC0 @ 0x1409D3EC0
 * Callers:
 *     sub_1407FA644 @ 0x1407FA644 (sub_1407FA644.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140260C2C @ 0x140260C2C (sub_140260C2C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1409D4090 @ 0x1409D4090 (sub_1409D4090.c)
 *     sub_1409D5ADC @ 0x1409D5ADC (sub_1409D5ADC.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1409D3EC0(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned int *a4, char a5)
{
  unsigned int v9; // esi
  _PRIVILEGE_SET *v10; // rax
  _PRIVILEGE_SET *v11; // rdi
  int v12; // ebx
  __int64 v13; // rcx

  v9 = 4228;
  v10 = (_PRIVILEGE_SET *)sub_140260C2C(0x1084uLL, 0x524C6D73u);
  v11 = v10;
  if ( v10 )
  {
    memset(v10, 0, 0x1084uLL);
    if ( a3 < 0x84 )
      goto LABEL_4;
    if ( a5 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v13 = a2;
      *(_BYTE *)v13 = *(_BYTE *)v13;
      *(_BYTE *)(v13 + 131) = *(_BYTE *)(v13 + 131);
    }
    *(_OWORD *)&v11->PrivilegeCount = *(_OWORD *)a2;
    *(_OWORD *)&v11->Privilege[0].Attributes = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v11[1].Privilege[0].Luid.HighPart = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v11[2].Privilege[0].Luid.LowPart = *(_OWORD *)(a2 + 48);
    *(_OWORD *)&v11[3].Control = *(_OWORD *)(a2 + 64);
    *(_OWORD *)&v11[4].PrivilegeCount = *(_OWORD *)(a2 + 80);
    *(_OWORD *)&v11[4].Privilege[0].Attributes = *(_OWORD *)(a2 + 96);
    *(_OWORD *)&v11[5].Privilege[0].Luid.HighPart = *(_OWORD *)(a2 + 112);
    v11[6].Privilege[0].Luid.LowPart = *(_DWORD *)(a2 + 128);
    if ( (v11->PrivilegeCount & 0x10000) != 0 )
    {
      if ( a5 )
        ProbeForWrite((volatile void *)a2, 0x1084uLL, 4u);
    }
    else
    {
      v9 = 132;
    }
    if ( a3 == v9 )
    {
      if ( __PAIR16__(BYTE1(v11->PrivilegeCount), v11->PrivilegeCount) == 2 && v11->PrivilegeCount < 0x20000 )
      {
        v12 = sub_1409D5ADC(a1, v11);
        if ( v12 >= 0 )
        {
          if ( (v11->PrivilegeCount & 0x10000) == 0 || (v12 = sub_1409D4090(a1, v11), v12 >= 0) )
          {
            memmove((void *)a2, v11, v9);
            *a4 = v9;
          }
        }
      }
      else
      {
        v12 = -1073741811;
      }
    }
    else
    {
LABEL_4:
      v12 = -1073741306;
    }
  }
  else
  {
    v12 = -1073740716;
  }
  if ( v11 )
    SeFreePrivileges(v11);
  return (unsigned int)v12;
}

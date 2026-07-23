/*
 * XREFs of sub_1405160A0 @ 0x1405160A0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_1403B27B8 @ 0x1403B27B8 (sub_1403B27B8.c)
 *     sub_1403B2A28 @ 0x1403B2A28 (sub_1403B2A28.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140512334 @ 0x140512334 (sub_140512334.c)
 *     sub_140514E28 @ 0x140514E28 (sub_140514E28.c)
 */

__int64 __fastcall sub_1405160A0(__int64 a1, struct _MDL *a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  __int64 *v5; // rsi
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rax
  PMDL v9; // rdi
  __int64 v10; // r15
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  char *MappedSystemVa; // rax
  PMDL MemoryDescriptorList; // [rsp+48h] [rbp-39h] BYREF
  _QWORD *v16; // [rsp+50h] [rbp-31h]
  __int128 v17; // [rsp+58h] [rbp-29h]
  unsigned __int64 v18; // [rsp+68h] [rbp-19h]
  __int128 v19; // [rsp+70h] [rbp-11h] BYREF
  __int128 v20; // [rsp+80h] [rbp-1h]
  __int64 v21; // [rsp+90h] [rbp+Fh]

  v5 = *(__int64 **)(a1 + 504);
  MemoryDescriptorList = a2;
  v16 = a5;
  v21 = 0LL;
  LODWORD(v18) = 0;
  v19 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v6 = sub_140512334((__int64 *)&MemoryDescriptorList, a3, a4, (__int64)&v19);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v7 = sub_1403B2A28((__int64)v5);
    if ( v7 >= 0 )
    {
      v8 = v5[7];
      if ( v8 )
        *(_BYTE *)(v8 + 516) = 1;
      v9 = MemoryDescriptorList;
      v10 = *((_QWORD *)&v20 + 1);
      v11 = *((_QWORD *)&v20 + 1) + MemoryDescriptorList->ByteOffset;
      if ( (_DWORD)v21 )
      {
        if ( (_DWORD)v21 == 1 )
          v12 = 2LL;
        else
          v12 = 3LL;
      }
      else
      {
        v12 = 1LL;
      }
      LODWORD(v17) = 2;
      *((_QWORD *)&v17 + 1) = (char *)MemoryDescriptorList + 8 * (v11 >> 12) + 48;
      v18 = (unsigned __int64)v20 >> 12;
      v7 = sub_14042A5E0(v5[5], v12);
      if ( v7 >= 0 )
      {
        if ( (v9->MdlFlags & 5) != 0 )
          MappedSystemVa = (char *)v9->MappedSystemVa;
        else
          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0);
        v7 = sub_1403B27B8((__int64)v9, (_RTL_BALANCED_NODE *)&MappedSystemVa[v10], (__int64)v5, 0);
        if ( v7 >= 0 )
        {
          *v16 = 0LL;
          return (unsigned int)v7;
        }
        sub_14042A5E0(v5[5], 0LL);
      }
      sub_140514E28(v5);
    }
  }
  else if ( (unsigned int)(v6 + 1073741585) <= 1 )
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}

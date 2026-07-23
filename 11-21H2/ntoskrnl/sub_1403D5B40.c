/*
 * XREFs of sub_1403D5B40 @ 0x1403D5B40
 * Callers:
 *     sub_1403D5A9C @ 0x1403D5A9C (sub_1403D5A9C.c)
 *     sub_140517DCC @ 0x140517DCC (sub_140517DCC.c)
 * Callees:
 *     sub_140252164 @ 0x140252164 (sub_140252164.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B4DA0 (HalGetProcessorIdByNtNumber.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_1403D5B40(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  ULONG_PTR v4; // rbx
  int v6; // ecx
  char v7; // r15
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // r8d
  unsigned int v15; // r8d
  int v17; // ecx
  ULONG v18; // ecx
  NTSTATUS ProcessorIdByNtNumber; // eax
  _DWORD *v20; // rcx
  __int128 v21; // [rsp+30h] [rbp-40h] BYREF
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]

  v4 = qword_140C54A88;
  *a3 = 0LL;
  *a4 = 0LL;
  v6 = *(_DWORD *)a1;
  v7 = 0;
  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v11 = (unsigned int)(v6 - 1);
  if ( !(_DWORD)v11 )
  {
    v12 = sub_140252164(v11, a1, (__int64)&v22 + 8);
    if ( v12 >= 0 )
      goto LABEL_3;
    sub_14051E038(0, 21, v12, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1999);
    return (unsigned int)-1073741811;
  }
  v17 = v11 - 2;
  if ( !v17 )
  {
    DWORD2(v22) = 1;
    goto LABEL_3;
  }
  if ( v17 != 3 )
    return (unsigned int)-1073741637;
  v18 = *(_DWORD *)(a1 + 8);
  v7 = 1;
  DWORD2(v22) = 4;
  ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(v18, &v23);
  if ( ProcessorIdByNtNumber < 0 )
  {
    sub_14051E038(
      0,
      21,
      ProcessorIdByNtNumber,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
      1983);
    return (unsigned int)-1073741811;
  }
LABEL_3:
  v13 = 16;
  LODWORD(v21) = 2;
  DWORD2(v21) = 1;
  DWORD1(v22) = 1;
  if ( !v7 )
    v13 = 18;
  LODWORD(v22) = -1;
  HIDWORD(v21) = v13;
  LODWORD(v24) = *(_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(v4 + 228) & 0x100) != 0 )
  {
    v20 = *(_DWORD **)(a1 + 16);
    if ( (*v20 & 0x3FFFFFFF) != 0x3FFFFFFE )
    {
      DWORD2(v22) = 7;
      LODWORD(v23) = *v20 & 0x3FFFFFFF;
    }
  }
  v14 = -1073741637;
  if ( *(_QWORD *)(v4 + 136) && (v14 = sub_14042A5E0(*(_QWORD *)(v4 + 16), &v21), v14 >= 0) )
  {
    v15 = -1073740768;
    if ( (((-(__int64)(byte_140D011A1 != 0) & 0xFF00000100000000uLL) - 0x100000000LL) & *a3) == 0 )
      return (*a4 & 0xFFFFFFFFFFFF0000uLL) != 0 ? 0xC0000420 : 0;
  }
  else
  {
    sub_14051E038(v4, 8, v14, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2061);
  }
  return v15;
}

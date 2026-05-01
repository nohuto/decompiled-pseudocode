/*
 * XREFs of sub_180012CD4 @ 0x180012CD4
 * Callers:
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 * Callees:
 *     sub_1800065B0 @ 0x1800065B0 (sub_1800065B0.c)
 *     sub_180012AD0 @ 0x180012AD0 (sub_180012AD0.c)
 *     sub_180013B4C @ 0x180013B4C (sub_180013B4C.c)
 *     sub_180013BEC @ 0x180013BEC (sub_180013BEC.c)
 *     sub_180014518 @ 0x180014518 (sub_180014518.c)
 *     sub_180016348 @ 0x180016348 (sub_180016348.c)
 *     sub_1800165E0 @ 0x1800165E0 (sub_1800165E0.c)
 *     sub_180016680 @ 0x180016680 (sub_180016680.c)
 *     memset @ 0x180016A5E (memset.c)
 *     sub_18001A83C @ 0x18001A83C (sub_18001A83C.c)
 */

__int64 __fastcall sub_180012CD4(__int64 a1, char a2, _QWORD *a3)
{
  unsigned int v6; // edi
  __int64 result; // rax
  size_t v8; // r14
  PVOID v9; // rax
  __int64 v10; // rdi
  _DWORD *v11; // r14
  _DWORD *v12; // r15
  unsigned __int64 v13; // rdx
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r8
  size_t Size; // [rsp+50h] [rbp+8h] BYREF

  v6 = -1;
  if ( (unsigned __int64)((__int64 (*)(void))sub_180016680)() <= 0xFFFFFFFF )
    v6 = sub_180016680(a1);
  if ( *((_DWORD *)a3 + 2) >= v6 )
  {
    sub_18001A83C(*((unsigned int *)a3 + 2), 64LL, &Size);
    v8 = Size;
  }
  else
  {
    sub_180014518(a3);
    *(_OWORD *)a3 = 0LL;
    result = sub_18001A83C(v6, 64LL, &Size);
    if ( (int)result < 0 )
      return result;
    v8 = Size;
    v9 = sub_1800065B0(Size);
    *a3 = v9;
    if ( !v9 )
      return 3221225495LL;
    *((_DWORD *)a3 + 2) = v6;
  }
  memset((void *)*a3, 0, v8);
  v10 = sub_180012AD0(a1);
  if ( v10 )
  {
    v11 = (_DWORD *)a3 + 3;
    v12 = (_DWORD *)a3 + 3;
    while ( 1 )
    {
      RtlAcquireSRWLockShared(v10 + 64);
      if ( (a2 & 1) != 0 && (unsigned int)sub_180013B4C(v10) || (a2 & 2) != 0 && (unsigned int)sub_180013BEC(v10) )
      {
        v13 = *a3 + ((unsigned __int64)(unsigned int)*v12 << 6);
        *(_DWORD *)v13 = *(_DWORD *)(v10 + 80);
        *(_DWORD *)(v13 + 56) ^= (*(_DWORD *)(v13 + 56) ^ *(_DWORD *)(v10 + 104)) & 0x20;
        v14 = *(_DWORD *)(v13 + 56) ^ (*(_DWORD *)(v10 + 104) ^ *(_DWORD *)(v13 + 56)) & 0x40;
        *(_DWORD *)(v13 + 56) = v14;
        v15 = v14 ^ ((unsigned __int8)v14 ^ *(_QWORD *)(v10 + 112) & 0xF8) & 0x18;
        *(_DWORD *)(v13 + 56) = v15;
        *(_DWORD *)(v13 + 56) = v15 ^ (*(_DWORD *)(v10 + 112) ^ v15) & 7;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 24)) <= 1 )
          __fastfail(0xEu);
        ++*v12;
        v11 = (_DWORD *)a3 + 3;
        *(_QWORD *)(v13 + 32) = v10;
      }
      RtlReleaseSRWLockShared(v10 + 64);
      if ( *v11 >= *((_DWORD *)a3 + 2) )
        break;
      v10 = sub_1800165E0(v10);
      if ( !v10 )
        goto LABEL_22;
    }
    sub_180016348(v10);
  }
LABEL_22:
  v16 = a2 & 1 | 0x40u;
  if ( (a2 & 2) == 0 )
    v16 = a2 & 1;
  result = MemUtilQueryProcessMetrics(*a3, *((unsigned int *)a3 + 3), v16);
  if ( (_DWORD)result )
  {
    if ( (int)result > 0 )
      return (unsigned __int16)result | 0xC0070000;
  }
  else
  {
    qsort((void *)*a3, *((unsigned int *)a3 + 3), 0x40uLL, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
    return 0LL;
  }
  return result;
}

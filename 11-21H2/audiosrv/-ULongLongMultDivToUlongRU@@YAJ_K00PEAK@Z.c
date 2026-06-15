/*
 * XREFs of ?ULongLongMultDivToUlongRU@@YAJ_K00PEAK@Z @ 0x1801640E4
 * Callers:
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x18016409C (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800C9030 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall ULongLongMultDivToUlongRU(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int *a4)
{
  int v4; // ebx
  _DWORD *v5; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r11
  __int64 v8; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  *a4 = -1;
  v4 = ULongLongMult(a1, a2, &v13);
  if ( v4 < 0 )
  {
    v8 = 45LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\packetsizeconstraintsutil.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( v13 )
  {
    v10 = (v13 - 1) / v6;
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v4 = -2147024362;
      v8 = 53LL;
      goto LABEL_3;
    }
    if ( v11 > v7 )
    {
      v4 = -2147024362;
      *v5 = v7;
      v8 = 55LL;
      goto LABEL_3;
    }
  }
  else
  {
    LODWORD(v11) = 0;
  }
  *v5 = v11;
  return 0LL;
}

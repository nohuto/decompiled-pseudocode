/*
 * XREFs of sub_1409AE810 @ 0x1409AE810
 * Callers:
 *     sub_140683890 @ 0x140683890 (sub_140683890.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_1409AEB50 @ 0x1409AEB50 (sub_1409AEB50.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1403DAC1C @ 0x1403DAC1C (sub_1403DAC1C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1409AE810(__int64 a1, char a2, unsigned __int16 *a3, __int64 *a4, int *a5)
{
  int v9; // ebp
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // si
  __int64 v14; // rbx
  int v15; // eax
  _QWORD v17[34]; // [rsp+20h] [rbp-158h] BYREF

  memset(v17, 0, 0x108uLL);
  v9 = 0;
  v10 = 1;
  if ( a4 )
  {
    LODWORD(v17[0]) = 2097153;
    memset((char *)v17 + 4, 0, 0x104uLL);
    v11 = *((unsigned __int16 *)a4 + 4);
    v12 = *a4;
    if ( (_WORD)v11 )
    {
      if ( WORD1(v17[0]) <= (unsigned __int16)v11 )
      {
LABEL_6:
        a3 = (unsigned __int16 *)v17;
        v13 = 1;
        goto LABEL_9;
      }
      LOWORD(v17[0]) = v11 + 1;
    }
    v17[v11 + 1] |= v12;
    goto LABEL_6;
  }
  v13 = 0;
  if ( (a2 & 2) != 0 )
    v13 = 2;
LABEL_9:
  if ( (a2 & 1) != 0 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
  {
    v14 = 0LL;
    goto LABEL_17;
  }
  v14 = *(_QWORD *)(a1 + 1296);
  if ( !v14
    || (ExAcquireResourceSharedLite((PERESOURCE)(v14 + 56), 1u), v15 = *(_DWORD *)(v14 + 1040), (v15 & 0x10) == 0)
    || (v15 & 0x4000) != 0 && (unsigned int)KeIsSubsetAffinityEx((__int64)a3, v14 + 712) )
  {
LABEL_17:
    v9 = sub_1403DAC1C(a1, v13, a3);
    if ( !v14 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v10 = 0;
LABEL_18:
  ExReleaseResourceLite((PERESOURCE)(v14 + 56));
LABEL_19:
  if ( v9 >= 0 )
    *a5 = v10;
  return (unsigned int)v9;
}

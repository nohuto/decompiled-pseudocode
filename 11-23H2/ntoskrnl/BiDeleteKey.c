/*
 * XREFs of BiDeleteKey @ 0x1408038D8
 * Callers:
 *     BcdDeleteObject @ 0x140802D00 (BcdDeleteObject.c)
 *     BiDeleteElement @ 0x14080367C (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1408038D8 (BiDeleteKey.c)
 *     BcdSetElementDataWithFlags @ 0x140804118 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1403699CC (BiSanitizeHandle.c)
 *     BiZwDeleteKey @ 0x140373CB0 (BiZwDeleteKey.c)
 *     CmSiCloseSection @ 0x140373DFC (CmSiCloseSection.c)
 *     BiDeleteKey @ 0x1408038D8 (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x140803B0C (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x1408050D0 (BiOpenKey.c)
 *     BiCloseKey @ 0x14080525C (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiDeleteKey(__int64 a1)
{
  unsigned __int64 v1; // rax
  void *v2; // rsi
  NTSTATUS v3; // ebx
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  v9 = 0LL;
  v1 = BiSanitizeHandle(a1);
  P = 0LL;
  v2 = (void *)v1;
  if ( (int)BiEnumerateSubKeys(v1, &P, &v7) >= 0 && v7 )
  {
    v5 = P;
    v6 = v7;
    do
    {
      if ( (int)BiOpenKey(v2, *v5, 983103LL, &v9) >= 0 && (int)BiDeleteKey(v9) < 0 )
        BiCloseKey(v9);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  v3 = BiZwDeleteKey(v2);
  if ( v3 >= 0 )
    CmSiCloseSection(v2);
  return (unsigned int)v3;
}
